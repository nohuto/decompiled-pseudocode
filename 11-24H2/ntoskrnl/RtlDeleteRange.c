/*
 * XREFs of RtlDeleteRange @ 0x14077D1C0
 * Callers:
 *     ArbBacktrackAllocation @ 0x140702720 (ArbBacktrackAllocation.c)
 *     IopPortBacktrackAllocation @ 0x140723A90 (IopPortBacktrackAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x14077D738 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x140A4A338 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlDeleteRange(__int64 **a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v7; // r10d
  __int64 v8; // r11
  unsigned __int64 *v9; // rcx
  unsigned __int64 *v10; // r11
  _QWORD *v11; // r8
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rax

  v7 = -1073741172;
  v8 = **a1;
  v9 = (unsigned __int64 *)(*a1 - 5);
  while ( 1 )
  {
    v10 = (unsigned __int64 *)(v8 - 40);
    v11 = v9 + 5;
    if ( a1 == (__int64 **)(v9 + 5) )
      return v7;
    v12 = *v9;
    if ( a3 < *v9 )
      return v7;
    if ( (*((_BYTE *)v9 + 34) & 1) != 0 )
    {
      if ( a2 >= v12 && a3 <= v9[1] )
      {
        v13 = (__int64 *)v9[2];
        v14 = *v13;
        v15 = v13 - 5;
        while ( 1 )
        {
          v16 = (__int64 *)(v14 - 40);
          if ( v9 == (unsigned __int64 *)(v15 + 3) )
            break;
          if ( *v15 == a2 && v15[1] == a3 && v15[3] == a4 )
          {
            v7 = RtlpDeleteFromMergedRange(v15, v9);
            if ( (v7 & 0x80000000) == 0 )
              goto LABEL_22;
            return v7;
          }
          v15 = v16;
          v14 = v16[5];
        }
      }
    }
    else if ( v12 == a2 && v9[1] == a3 && v9[3] == a4 )
    {
      v18 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v19 = (_QWORD *)v9[6], (_QWORD *)*v19 != v11) )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      RtlpFreeRangeListEntry(v9);
      v7 = 0;
LABEL_22:
      --*((_DWORD *)a1 + 5);
      ++*((_DWORD *)a1 + 6);
      return v7;
    }
    v9 = v10;
    v8 = v10[5];
  }
}
