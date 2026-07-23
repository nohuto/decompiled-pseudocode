/*
 * XREFs of ZwSetContextThread @ 0x1406AA6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
