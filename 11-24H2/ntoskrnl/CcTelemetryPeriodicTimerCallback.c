/*
 * XREFs of CcTelemetryPeriodicTimerCallback @ 0x140A71200
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     CcForEachPartition @ 0x140470EE8 (CcForEachPartition.c)
 *     CcHasGlobalTelemetryChanged @ 0x1404B33A4 (CcHasGlobalTelemetryChanged.c)
 *     CcPostVolumeTelemetry @ 0x1404C405C (CcPostVolumeTelemetry.c)
 */

void CcTelemetryPeriodicTimerCallback()
{
  char HasGlobalTelemetryChanged; // di
  char v1; // r8

  if ( CcTelemetryGlobalData )
  {
    _InterlockedExchange(&dword_140F8E628, 0);
    if ( _InterlockedIncrement(&dword_140F8E620) == 1 && !_InterlockedCompareExchange(&dword_140F8E624, 1, 0) )
    {
      ++qword_140F8E510;
      qword_140F8E518 += (unsigned int)CcNumberOfMappedVacbs;
      HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
      CcForEachPartition((__int64)CcPartitionTelemetryCallback, 0LL, v1, v1);
      CcPostVolumeTelemetry();
      if ( byte_140F8E501 || !HasGlobalTelemetryChanged )
        _InterlockedExchange(&dword_140F8E624, 0);
      else
        KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140F8E630);
    }
    _InterlockedDecrement(&dword_140F8E620);
  }
}
