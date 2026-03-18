/*
 * XREFs of ZwClose_0 @ 0x140056767
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x1400AAEC0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbRegReadMmConfigRanges @ 0x1400ABA94 (ArbRegReadMmConfigRanges.c)
 *     ArbBuildAssignmentOrdering @ 0x1400BE284 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwClose_0(HANDLE Handle)
{
  return ZwClose(Handle);
}
