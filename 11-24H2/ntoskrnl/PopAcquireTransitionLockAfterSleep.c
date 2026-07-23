/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140B69C34
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14041C424 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x140A8F05C (PopAcquireTransitionLock.c)
 */

__int64 PopAcquireTransitionLockAfterSleep()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 1;
  if ( qword_140F0BB58 )
    PopWaitingForTransitionLock = (int)PopPushPowerStateTransitionRecordWithCallback(
                                         (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process,
                                         qword_140F0BB58,
                                         0LL,
                                         0,
                                         0LL) >= 0;
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  PopAcquireTransitionLock(1);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 0;
  return PopReleaseRwLock(&PopUnlockAfterSleepLock);
}
