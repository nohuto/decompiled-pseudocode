/*
 * XREFs of PopCurrentPowerState @ 0x140A20120
 * Callers:
 *     PopCalculateCsSummary @ 0x1402B5524 (PopCalculateCsSummary.c)
 *     PopUpdateAcDcState @ 0x1404A9584 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x1404E43DC (PopEsUpdateState.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140757B40 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140A2006C (PopCurrentPowerStatePrecise.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B61C94 (PopDiagTraceGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopCurrentPowerState(_OWORD *a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
  *a1 = xmmword_140F0BEA0;
  a1[1] = xmmword_140F0BEB0;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
}
