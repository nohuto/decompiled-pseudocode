/*
 * XREFs of ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404A6260 (ExCleanTimerResolutionRequest.c)
 *     ExpReadLeapSecondData @ 0x1407A700C (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x1407A73C4 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1407A7590 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1409CC680 (NtSetTimerResolution.c)
 *     ExUpdateTimerResolutionPolicy @ 0x1409CCCAC (ExUpdateTimerResolutionPolicy.c)
 *     ExpTimeRefreshWork @ 0x140B51190 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140B68650 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 ExReleaseTimeRefreshLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpTimeRefreshLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpTimeRefreshLock);
  KeAbPostRelease((ULONG_PTR)&ExpTimeRefreshLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
