/*
 * XREFs of MiInitializeGetPageChannels @ 0x140432090
 * Callers:
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeGetPageChannels(char *a1, __int64 a2, __int16 a3, __int16 a4)
{
  unsigned __int8 *v4; // r10
  char v5; // al
  bool v6; // cc
  char v7; // r8
  _BYTE *v8; // r9
  unsigned __int8 v9; // al
  char v10; // dl

  v4 = (unsigned __int8 *)(a1 + 3);
  if ( a2 )
  {
    v6 = *v4 <= 1u;
    a1[2] = 0;
    if ( !v6 )
    {
      a1[5] = (*(_BYTE *)(a2 + 15184) & 1) == 0;
      *(_WORD *)a1 = *(_WORD *)(a2 + 15233);
      if ( (a4 & 0x2000) != 0 )
      {
        v7 = a1[4];
        v8 = a1 + 4;
        v9 = 0;
        do
        {
          v10 = *a1;
          *a1 = v7;
          if ( v10 == *v8 )
            break;
          ++a1;
          ++v9;
          v7 = v10;
        }
        while ( v9 < *v4 );
      }
    }
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *((_WORD *)a1 + 2) = 0;
    v5 = MmNumberOfChannels;
    *v4 = MmNumberOfChannels;
    if ( (unsigned __int8)v5 <= 1u )
      *v4 = 1;
    a1[4] = HIBYTE(a3) & 1;
  }
}
