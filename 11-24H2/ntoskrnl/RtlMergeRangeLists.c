/*
 * XREFs of RtlMergeRangeLists @ 0x14077D2E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddRange @ 0x1406F9D60 (RtlpAddRange.c)
 *     RtlCopyRangeList @ 0x140A4A0A0 (RtlCopyRangeList.c)
 *     RtlpCopyRangeListEntry @ 0x140A4A140 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x140A4A270 (RtlFreeRangeList.c)
 */

__int64 __fastcall RtlMergeRangeLists(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  int v7; // ebx
  __int64 i; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 *v12; // rax
  unsigned int v13; // r8d
  int v14; // eax
  __int64 *v15; // rax
  unsigned int v16; // r8d

  v7 = RtlCopyRangeList(a1, a2);
  if ( v7 < 0 )
  {
LABEL_17:
    RtlFreeRangeList(a1);
  }
  else
  {
    for ( i = *a3; ; i = *(_QWORD *)(v9 + 40) )
    {
      v9 = i - 40;
      if ( a3 == (__int64 *)(v9 + 40) )
        break;
      if ( (*(_BYTE *)(v9 + 34) & 1) != 0 )
      {
        v10 = *(_QWORD *)(v9 + 16);
        while ( 1 )
        {
          v11 = v10 - 40;
          if ( v9 == v11 + 24 )
            break;
          v12 = (__int64 *)RtlpCopyRangeListEntry(v11);
          if ( !v12 )
            goto LABEL_16;
          v13 = a4 | 1;
          if ( (*(_BYTE *)(v11 + 33) & 2) == 0 )
            v13 = a4;
          v14 = RtlpAddRange((unsigned __int64 *)a1, v12, v13);
          v10 = *(_QWORD *)(v11 + 40);
          v7 = v14;
        }
      }
      else
      {
        v15 = (__int64 *)RtlpCopyRangeListEntry(v9);
        if ( !v15 )
        {
LABEL_16:
          v7 = -1073741670;
          goto LABEL_17;
        }
        v16 = a4 | 1;
        if ( (*(_BYTE *)(v9 + 33) & 2) == 0 )
          v16 = a4;
        v7 = RtlpAddRange((unsigned __int64 *)a1, v15, v16);
        if ( v7 < 0 )
          goto LABEL_17;
      }
    }
    *(_DWORD *)(a1 + 20) += *((_DWORD *)a3 + 5);
    *(_DWORD *)(a1 + 24) += *((_DWORD *)a3 + 5);
  }
  return (unsigned int)v7;
}
