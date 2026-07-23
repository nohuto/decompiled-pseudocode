/*
 * XREFs of CcTelemetryPeriodicTimerCallback @ 0x140A6A690
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPartition @ 0x14021AA70 (CcForEachPartition.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     CcPostVolumeTelemetry @ 0x14040C990 (CcPostVolumeTelemetry.c)
 *     CcHasGlobalTelemetryChanged @ 0x1404ADC14 (CcHasGlobalTelemetryChanged.c)
 */

void CcTelemetryPeriodicTimerCallback()
{
  char HasGlobalTelemetryChanged; // di
  char v1; // r8

  if ( CcTelemetryGlobalData )
  {
    _InterlockedExchange(&dword_140F8E808, 0);
    if ( _InterlockedIncrement(&dword_140F8E800) == 1 && !_InterlockedCompareExchange(&dword_140F8E804, 1, 0) )
    {
      ++qword_140F8E6F0;
      qword_140F8E6F8 += (unsigned int)CcNumberOfMappedVacbs;
      HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
      CcForEachPartition((__int64)CcPartitionTelemetryCallback, 0LL, v1, v1);
      CcPostVolumeTelemetry();
      if ( byte_140F8E6E1 || !HasGlobalTelemetryChanged )
        _InterlockedExchange(&dword_140F8E804, 0);
      else
        KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140F8E810);
    }
    _InterlockedDecrement(&dword_140F8E800);
  }
}
