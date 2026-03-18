/*
 * XREFs of ExReleaseTimeRefreshLockExclusive @ 0x1409B2024
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404A6E8C (ExCleanTimerResolutionRequest.c)
 *     ExpReadLeapSecondData @ 0x1407B64AC (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x1407B6864 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6A30 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     NtSetTimerResolution @ 0x1409B1920 (NtSetTimerResolution.c)
 *     ExUpdateTimerResolutionPolicy @ 0x1409B1F4C (ExUpdateTimerResolutionPolicy.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     ExpTimeRefreshWork @ 0x140B612C0 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140B78650 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 ExReleaseTimeRefreshLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpTimeRefreshLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpTimeRefreshLock);
  KeAbPostRelease((ULONG_PTR)&ExpTimeRefreshLock);
  return KeLeaveCriticalRegionThread();
}
