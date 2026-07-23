/*
 * XREFs of RtlFreeRangeList @ 0x140A4A270
 * Callers:
 *     ArbBootAllocation @ 0x140702750 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x140702E30 (ArbCommitAllocation.c)
 *     ArbInitializeRangeList @ 0x140703530 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1407038D0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140703E00 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140703FC0 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x140704200 (ArbStartArbiter.c)
 *     ArbTestAllocation @ 0x140704250 (ArbTestAllocation.c)
 *     RtlMergeRangeLists @ 0x14077D2E0 (RtlMergeRangeLists.c)
 *     RtlCopyRangeList @ 0x140A4A0A0 (RtlCopyRangeList.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x140A4A2D8 (RtlpDeleteRangeListEntry.c)
 */

_QWORD *__fastcall RtlFreeRangeList(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rdx

  *(_DWORD *)(a1 + 16) = 0;
  result = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 20) = 0;
  v3 = result - 5;
  while ( 1 )
  {
    v4 = *result - 40LL;
    if ( (_QWORD *)a1 == result )
      break;
    v5 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v6 = (_QWORD *)result[1], (_QWORD *)*v6 != result) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    RtlpDeleteRangeListEntry(v3);
    v3 = (_QWORD *)v4;
    result = (_QWORD *)(v4 + 40);
  }
  return result;
}
