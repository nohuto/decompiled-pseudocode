/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x1404C2000
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void CcTelemetryPeriodicTimerDpc()
{
  _InterlockedExchange(&dword_140F8E624, 0);
  if ( !_InterlockedCompareExchange(&dword_140F8E628, 1, 0) )
    ExQueueWorkItem(&stru_140F8E6B0, NormalWorkQueue);
}
