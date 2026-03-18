/*
 * XREFs of UsbhHighResTimerCompletion @ 0x140037C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall UsbhHighResTimerCompletion(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
