/*
 * XREFs of NtCreatePartition @ 0x14076ADF0
 * Callers:
 *     <none>
 * Callees:
 *     PsCreatePartition @ 0x14076AEE0 (PsCreatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  return PsCreatePartition(
           (int)ParentPartitionHandle,
           (int)PartitionHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           KeGetCurrentThread()->PreviousMode,
           0);
}
