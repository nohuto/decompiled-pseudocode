/*
 * XREFs of ZwPulseEvent @ 0x1406A9CB0
 * Callers:
 *     DifZwPulseEventWrapper @ 0x140642240 (DifZwPulseEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
