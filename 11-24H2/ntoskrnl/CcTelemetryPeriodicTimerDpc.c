/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x1404BD5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void CcTelemetryPeriodicTimerDpc()
{
  _InterlockedExchange(&dword_140F8E804, 0);
  if ( !_InterlockedCompareExchange(&dword_140F8E808, 1, 0) )
    ExQueueWorkItem(&stru_140F8E890, NormalWorkQueue);
}
