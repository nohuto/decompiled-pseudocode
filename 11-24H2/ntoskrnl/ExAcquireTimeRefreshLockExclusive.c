/*
 * XREFs of ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0
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
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 ExAcquireTimeRefreshLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpTimeRefreshLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&ExpTimeRefreshLock, result, (__int64)&ExpTimeRefreshLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
