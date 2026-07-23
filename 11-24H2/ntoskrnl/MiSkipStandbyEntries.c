/*
 * XREFs of MiSkipStandbyEntries @ 0x1403E76A0
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1403E73E0 (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 */

__int64 __fastcall MiSkipStandbyEntries(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 a5)
{
  ULONG_PTR v7; // r10
  int v8; // r11d
  __int64 v9; // r9
  int v10; // r15d
  ULONG_PTR v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  ULONG_PTR v14; // r9
  unsigned __int64 v15; // r10

  if ( a2 != 0x3FFFFFFFFFLL )
  {
    MiGetPfnPriority(48 * a2 - 0x220000000000LL);
    v9 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      v10 = v8;
      v11 = v7;
      v12 = 48 * v7 - 0x220000000000LL;
      v13 = v12;
      if ( a4 )
        goto LABEL_26;
      if ( v7 >= qword_140E35C40 )
      {
        v14 = qword_140E35C40 + 2048;
        if ( a3 == 2 || v7 >= v14 )
        {
          v9 = 0xFFFFFFFFFFLL;
        }
        else
        {
          v15 = *(_QWORD *)(v12 + 16);
          if ( qword_140E2DCC0 && (v15 & 0x10) == 0 )
            v15 &= ~qword_140E2DCC0;
          v7 = (v15 >> 12) & 0xFFFFFFFFFFLL;
          if ( v7 >= v14 || v7 < qword_140E35C40 )
            v13 = 0LL;
          v9 = 0xFFFFFFFFFFLL;
        }
      }
      if ( v11 < qword_140E35C40 || v11 >= qword_140E35C40 + 2048 )
        break;
      a3 = 1;
LABEL_16:
      if ( v13 )
      {
        if ( a4 )
        {
          if ( a4 == 1 )
            v7 = v9 & *(_QWORD *)(v13 + 24);
          else
            v7 = (*(_QWORD *)(v13 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v13 + 36) & 0x1FFFFF) << 19);
        }
        else
        {
          v7 = v9 & *(_QWORD *)v13;
        }
      }
      if ( (unsigned int)++v8 < a5 )
      {
        if ( v7 == 0x3FFFFFFFFFLL )
          return v7;
      }
      else
      {
        if ( a4 || v7 == 0x3FFFFFFFFFLL || v7 < qword_140E35C40 || v7 >= qword_140E35C40 + 2048 )
          return v7;
        v8 = v10;
      }
    }
    if ( (*(_DWORD *)(v12 + 32) & 0x8000000) != 0 && (unsigned int)MiGetPfnSlabType(v12) == 9 )
    {
      a3 = 2;
      goto LABEL_16;
    }
LABEL_26:
    a3 = 0;
    goto LABEL_16;
  }
  return 0x3FFFFFFFFFLL;
}
