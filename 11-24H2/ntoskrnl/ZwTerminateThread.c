/*
 * XREFs of ZwTerminateThread @ 0x1406A7E10
 * Callers:
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
