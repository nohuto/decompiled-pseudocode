/*
 * XREFs of ExAcquireTimeRefreshLockExclusive @ 0x1409A9310
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
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *ExAcquireTimeRefreshLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpTimeRefreshLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&ExpTimeRefreshLock, result, (__int64)&ExpTimeRefreshLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
