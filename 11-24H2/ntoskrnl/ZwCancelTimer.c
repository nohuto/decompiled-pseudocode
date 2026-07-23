/*
 * XREFs of ZwCancelTimer @ 0x1406A7FD0
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x14063B250 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
