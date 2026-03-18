/*
 * XREFs of ZwPrepareComplete @ 0x1406A8C10
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x1406437F0 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
