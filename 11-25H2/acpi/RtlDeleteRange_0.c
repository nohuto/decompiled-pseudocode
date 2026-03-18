/*
 * XREFs of RtlDeleteRange_0 @ 0x14005679D
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1400A2820 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1400A9C20 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1400AB1C0 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
