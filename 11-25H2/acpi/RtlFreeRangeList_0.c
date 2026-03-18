/*
 * XREFs of RtlFreeRangeList_0 @ 0x14005671F
 * Callers:
 *     ArbBootAllocation @ 0x140097830 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x1400AB1F0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1400AB224 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1400AB2E0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1400AB6B0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1400ABC40 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x1400ABE10 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x1400AC080 (ArbStartArbiter.c)
 *     ArbTestAllocation @ 0x1400BD880 (ArbTestAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
