/*
 * XREFs of RtlCopyRangeList @ 0x140A4A0A0
 * Callers:
 *     ArbBootAllocation @ 0x140702750 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x1407038D0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140703E00 (ArbRetestAllocation.c)
 *     ArbTestAllocation @ 0x140704250 (ArbTestAllocation.c)
 *     RtlMergeRangeLists @ 0x14077D2E0 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpCopyRangeListEntry @ 0x140A4A140 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x140A4A270 (RtlFreeRangeList.c)
 */

__int64 __fastcall RtlCopyRangeList(__int64 a1, __int64 *a2)
{
  __int64 i; // rax
  __int64 v6; // rax
  __int64 *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  if ( *(_DWORD *)(a1 + 20) )
    return 3221225485LL;
  *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(a1 + 20) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(a1 + 24) = *((_DWORD *)a2 + 6);
  for ( i = *a2; ; i = *v7 )
  {
    v6 = i - 40;
    v7 = (__int64 *)(v6 + 40);
    if ( a2 == (__int64 *)(v6 + 40) )
      return 0LL;
    v8 = RtlpCopyRangeListEntry(v6);
    if ( !v8 )
      break;
    v9 = *(_QWORD **)(a1 + 8);
    v10 = (_QWORD *)(v8 + 40);
    if ( *v9 != a1 )
      __fastfail(3u);
    *v10 = a1;
    v10[1] = v9;
    *v9 = v10;
    *(_QWORD *)(a1 + 8) = v10;
  }
  RtlFreeRangeList(a1);
  return 3221225626LL;
}
