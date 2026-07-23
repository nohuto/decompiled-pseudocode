/*
 * XREFs of ZwCreatePartition @ 0x1406A8B50
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140C425E8 (ExpInitializeMemoryMirroring.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ParentPartitionHandle);
}
