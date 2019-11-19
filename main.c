// zaycation.dev
//      Win Percentage(%) Calculator

#include <stdio.h>
#include <string.h>

int main() {

    char teamName[12];
    int gamesWon;
    int gamesLost;
    int totalGamesPlayed;
    float totalWinPercent;
    totalGamesPlayed = gamesLost + gamesWon;
    totalWinPercent = gamesWon / totalGamesPlayed;


    printf("\n\n\t\t\t\t\t\t\tWin Percentage Calculator\n");
    printf("\t\t\t\t\t\t~~~~~zaycation.dev~~~~~\n\n");
    printf(".\n");
    printf("..\n");
    printf("...\n\n\n");

    printf("What is the name of your team?\n\n");
    scanf(" %s", teamName);

    printf("What are the %s's total wins?\n", teamName);
    scanf(" %d", &gamesWon);

    printf("What are the %s's total losses?\n\n\n", teamName);
    scanf(" %d", &gamesLost);

    printf(".\n");
    printf("..\n");
    printf("...\n");
    printf("....\n");
    printf(".....\n");

    printf("The %s', have a win percentage of %f this season!", teamName, totalWinPercent);



    return 0;
}