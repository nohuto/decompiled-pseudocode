/*
 * XREFs of ZwOpenTimer @ 0x1406A9AF0
 * Callers:
 *     DifZwOpenTimerWrapper @ 0x1406415C0 (DifZwOpenTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
