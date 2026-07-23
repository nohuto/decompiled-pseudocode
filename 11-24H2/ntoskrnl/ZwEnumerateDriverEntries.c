/*
 * XREFs of ZwEnumerateDriverEntries @ 0x1406A90B0
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x14063DE30 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
