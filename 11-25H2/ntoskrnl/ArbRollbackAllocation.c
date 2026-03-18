/*
 * XREFs of ArbRollbackAllocation @ 0x1406FA520
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x140A4EBF0 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  return 0LL;
}
