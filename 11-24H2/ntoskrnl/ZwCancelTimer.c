/*
 * XREFs of ZwCancelTimer @ 0x1406A7030
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x14063CC90 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, CurrentState);
}
