/*
 * XREFs of RtlInvertRangeList_0 @ 0x140056755
 * Callers:
 *     ArbInitializeRangeList @ 0x1400AB2E0 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInvertRangeList_0(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeList(InvertedRangeList, RangeList);
}
