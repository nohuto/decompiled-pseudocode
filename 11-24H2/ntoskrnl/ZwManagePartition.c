/*
 * XREFs of ZwManagePartition @ 0x1406A9710
 * Callers:
 *     ExpAddNonMirroredRanges @ 0x140C4251C (ExpAddNonMirroredRanges.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetHandle);
}
