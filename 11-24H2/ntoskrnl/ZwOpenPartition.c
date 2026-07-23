/*
 * XREFs of ZwOpenPartition @ 0x1406A99D0
 * Callers:
 *     IopLiveDumpOpenVMMemoryPartition @ 0x1405993C8 (IopLiveDumpOpenVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PartitionHandle);
}
