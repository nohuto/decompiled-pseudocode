/*
 * XREFs of MiLogZeroPageDecision @ 0x140413620
 * Callers:
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 * Callees:
 *     MiZeroPageLogEntriesMergable @ 0x140413754 (MiZeroPageLogEntriesMergable.c)
 */

void __fastcall MiLogZeroPageDecision(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int16 a5,
        char a6)
{
  unsigned int *v6; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int *v11; // r11
  unsigned int v12; // eax
  unsigned int v13; // eax
  char v14; // cl
  char v15; // al
  __int64 v16; // r11

  v6 = *(unsigned int **)(a1 + 296);
  if ( v6 )
  {
    v9 = v6[2];
    ++v6[1];
    v10 = *v6;
    if ( v9 < *v6 || (v9 = 1, v6[2] = 1, v10 > 1) )
    {
      v11 = &v6[4 * v9];
      v12 = a3 | 1;
      if ( a3 < 0x100000000LL )
        v12 = a3 & 0xFFFFFFFE;
      *v11 = v12;
      v13 = a4 | 1;
      if ( a4 < 0x100000000LL )
        v13 = a4 & 0xFFFFFFFE;
      v11[1] = v13;
      *((_WORD *)v11 + 4) = a5;
      *((_WORD *)v11 + 5) = *(_WORD *)(a1 + 12);
      v14 = *((_BYTE *)v11 + 12) ^ (a6 ^ *((_BYTE *)v11 + 12)) & 0xF;
      *((_BYTE *)v11 + 12) = v14;
      v15 = v14 & 0xF ^ (16 * *(_BYTE *)a1);
      *((_BYTE *)v11 + 13) = 0;
      *((_WORD *)v11 + 7) = 1;
      *((_BYTE *)v11 + 12) = (a2 << 6) | v15 & 0x3F;
      if ( v6[2] == 1 || !(unsigned int)MiZeroPageLogEntriesMergable(v11, v11 - 4) || *(_WORD *)(v16 - 2) == 0xFFFF )
      {
        ++dword_140EF4E68;
        ++v6[2];
      }
      else
      {
        ++dword_140EF4E64;
        ++*(_WORD *)(v16 - 2);
      }
    }
  }
}
