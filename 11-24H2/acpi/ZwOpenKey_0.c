/*
 * XREFs of ZwOpenKey_0 @ 0x1400567E5
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x1400AAEC0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbRegReadMmConfigRanges @ 0x1400ABA94 (ArbRegReadMmConfigRanges.c)
 *     ArbBuildAssignmentOrdering @ 0x1400BE284 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
