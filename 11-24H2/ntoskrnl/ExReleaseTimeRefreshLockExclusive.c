/*
 * XREFs of ExReleaseTimeRefreshLockExclusive @ 0x1409A9374
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404A17F8 (ExCleanTimerResolutionRequest.c)
 *     ExpReadLeapSecondData @ 0x1407B68FC (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6E80 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     NtSetTimerResolution @ 0x1409A8C70 (NtSetTimerResolution.c)
 *     ExUpdateTimerResolutionPolicy @ 0x1409A929C (ExUpdateTimerResolutionPolicy.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     ExpTimeRefreshWork @ 0x140B63390 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140B7A650 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 ExReleaseTimeRefreshLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpTimeRefreshLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpTimeRefreshLock);
  KeAbPostRelease((ULONG_PTR)&ExpTimeRefreshLock);
  return KeLeaveCriticalRegionThread();
}
