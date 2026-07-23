/*
 * XREFs of ZwGetContextThread @ 0x1406A9310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
