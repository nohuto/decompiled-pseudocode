/*
 * XREFs of CcTelemetryPeriodicTimerCallback @ 0x140A6F330
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     CcForEachPartition @ 0x14035EBE4 (CcForEachPartition.c)
 *     CcPostVolumeTelemetry @ 0x140421068 (CcPostVolumeTelemetry.c)
 *     CcHasGlobalTelemetryChanged @ 0x1404B3264 (CcHasGlobalTelemetryChanged.c)
 */

void CcTelemetryPeriodicTimerCallback()
{
  char HasGlobalTelemetryChanged; // di
  char v1; // r8

  if ( CcTelemetryGlobalData )
  {
    _InterlockedExchange(&dword_140F8DE68, 0);
    if ( _InterlockedIncrement(&dword_140F8DE60) == 1 && !_InterlockedCompareExchange(&dword_140F8DE64, 1, 0) )
    {
      ++qword_140F8DD50;
      qword_140F8DD58 += (unsigned int)CcNumberOfMappedVacbs;
      HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
      CcForEachPartition((__int64)CcPartitionTelemetryCallback, 0LL, v1, v1);
      CcPostVolumeTelemetry();
      if ( byte_140F8DD41 || !HasGlobalTelemetryChanged )
        _InterlockedExchange(&dword_140F8DE64, 0);
      else
        KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140F8DE70);
    }
    _InterlockedDecrement(&dword_140F8DE60);
  }
}
