/*
 * XREFs of ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20
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
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *ExAcquireTimeRefreshLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpTimeRefreshLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&ExpTimeRefreshLock, result, (__int64)&ExpTimeRefreshLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
