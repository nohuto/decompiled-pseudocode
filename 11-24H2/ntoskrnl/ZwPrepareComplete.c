/*
 * XREFs of ZwPrepareComplete @ 0x1406A9BB0
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x140641DB0 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
