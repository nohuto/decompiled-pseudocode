/*
 * XREFs of PpmConvertTimeTo @ 0x1403B1DAC
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1403B0220 (PpmPerfSnapDeliveredPerformance.c)
 *     PopGetIdleTimesCallback @ 0x1403B2950 (PopGetIdleTimesCallback.c)
 *     PpmTranslateIdleAccounting @ 0x1403E72C0 (PpmTranslateIdleAccounting.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1404860C4 (PpmSnapDripsAccountingSnapshot.c)
 *     PopCalculateCsSummary @ 0x140486560 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x140486CFC (PopDiagTraceCsResiliencyExit.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1404AB9F4 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmTraceExitLatency @ 0x1405CAD34 (PpmTraceExitLatency.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1407535B8 (PopDripsWatchdogUpdateMetrics.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A1CF1C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A88870 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140AA5110 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 * Callees:
 *     <none>
 */

ULONGLONG __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned __int128 v4; // rax

  v3 = a1;
  if ( a1 && PopQpcFrequency && PopQpcFrequency != a2 )
  {
    v4 = a1 * (unsigned __int128)a2;
    if ( is_mul_ok(a1, a2) )
      return v4 / PopQpcFrequency;
    else
      return a2 * (a1 / PopQpcFrequency) + a2 * (a1 % PopQpcFrequency) / PopQpcFrequency;
  }
  return v3;
}
