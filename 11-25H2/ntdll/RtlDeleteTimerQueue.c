/*
 * XREFs of RtlDeleteTimerQueue @ 0x18015DF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDeleteTimerQueue(HANDLE TimerQueueHandle)
{
  return RtlDeleteTimerQueueEx(TimerQueueHandle, 0LL);
}
