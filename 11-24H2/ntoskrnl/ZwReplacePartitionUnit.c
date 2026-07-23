/*
 * XREFs of ZwReplacePartitionUnit @ 0x1406AA430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplacePartitionUnit(
        PUNICODE_STRING TargetInstancePath,
        PUNICODE_STRING SpareInstancePath,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetInstancePath);
}
