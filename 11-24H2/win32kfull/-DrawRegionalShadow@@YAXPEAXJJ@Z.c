/*
 * XREFs of ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1400978F0
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x14009583C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawRegionalShadow(char *a1, int a2, int a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rbx
  char *v6; // r9
  int *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax

  v3 = a2;
  if ( a3 > 0 )
  {
    v4 = (unsigned int)a3;
    v5 = 4LL * -a2;
    v6 = &a1[4 * a2 * (a3 - 1)];
    while ( v3 <= 0 )
    {
LABEL_12:
      v6 += v5;
      if ( !--v4 )
        return;
    }
    v7 = (int *)v6;
    v8 = v3;
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 == 16579836 )
      {
        *v7 = 50331648;
        v9 = 50331648;
      }
      else if ( v9 == 15856113 )
      {
        *v7 = 234881024;
        v9 = 234881024;
      }
      else if ( v9 == 13948116 )
      {
        *v7 = 721420288;
        v9 = 721420288;
LABEL_9:
        if ( v9 == 9342606 )
          *v7 = 1895825408;
        goto LABEL_11;
      }
      if ( v9 != 11250603 )
        goto LABEL_9;
      *v7 = 1409286144;
LABEL_11:
      ++v7;
      if ( !--v8 )
        goto LABEL_12;
    }
  }
}
