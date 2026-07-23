/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x1406AA390
 * Callers:
 *     DifZwRemoveIoCompletionExWrapper @ 0x140645540 (DifZwRemoveIoCompletionExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
