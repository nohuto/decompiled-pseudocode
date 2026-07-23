/*
 * XREFs of PpmConvertTimeTo @ 0x140370A00
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402AFD50 (PpmPerfSnapDeliveredPerformance.c)
 *     PopCalculateCsSummary @ 0x1402B5524 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402B5CBC (PopDiagTraceCsResiliencyExit.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402B6090 (PpmSnapDripsAccountingSnapshot.c)
 *     PopGetIdleTimesCallback @ 0x14036F8B0 (PopGetIdleTimesCallback.c)
 *     PpmTranslateIdleAccounting @ 0x1404369F0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1404A7454 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmTraceExitLatency @ 0x1405CCB04 (PpmTraceExitLatency.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14075F150 (PopDripsWatchdogUpdateMetrics.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A60E74 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A89DA0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140AA5978 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
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
