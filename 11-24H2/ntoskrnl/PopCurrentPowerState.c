/*
 * XREFs of PopCurrentPowerState @ 0x140A2C1F8
 * Callers:
 *     PopCalculateCsSummary @ 0x14032BF4C (PopCalculateCsSummary.c)
 *     PopUpdateAcDcState @ 0x1404AEC74 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x1404ECC9C (PopEsUpdateState.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x1407596E0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140A2C144 (PopCurrentPowerStatePrecise.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B5FC14 (PopDiagTraceGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 */

__int64 __fastcall PopCurrentPowerState(_OWORD *a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0B050);
  *a1 = xmmword_140F0B060;
  a1[1] = xmmword_140F0B070;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0B050);
}
