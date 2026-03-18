/*
 * XREFs of PpmConvertTimeTo @ 0x14032D92C
 * Callers:
 *     PopCalculateCsSummary @ 0x14032BF4C (PopCalculateCsSummary.c)
 *     PpmTranslateIdleAccounting @ 0x14032C6E0 (PpmTranslateIdleAccounting.c)
 *     PopDiagTraceCsResiliencyExit @ 0x14032D25C (PopDiagTraceCsResiliencyExit.c)
 *     PopCalculateIdleInformation @ 0x14032D51C (PopCalculateIdleInformation.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x14032D708 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x14032D84C (PpmSnapDripsAccountingSnapshot.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140351020 (PpmPerfSnapDeliveredPerformance.c)
 *     PopGetIdleTimesCallback @ 0x140352240 (PopGetIdleTimesCallback.c)
 *     PpmTraceExitLatency @ 0x1405CF3E4 (PpmTraceExitLatency.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140760150 (PopDripsWatchdogUpdateMetrics.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A6797C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A8D7D0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140AAA8C8 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
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
