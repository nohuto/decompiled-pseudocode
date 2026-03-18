/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x1404C3600
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void CcTelemetryPeriodicTimerDpc()
{
  _InterlockedExchange(&dword_140F8DE64, 0);
  if ( !_InterlockedCompareExchange(&dword_140F8DE68, 1, 0) )
    ExQueueWorkItem(&stru_140F8DEF0, NormalWorkQueue);
}
