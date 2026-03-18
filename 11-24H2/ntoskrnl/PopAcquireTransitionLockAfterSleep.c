/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140B67AF4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140428294 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x140A928AC (PopAcquireTransitionLock.c)
 */

__int64 PopAcquireTransitionLockAfterSleep()
{
  PopAcquireRwLockExclusive(&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 1;
  if ( qword_140F0B2D8 )
    PopWaitingForTransitionLock = (int)PopPushPowerStateTransitionRecordWithCallback(
                                         (__int64)KeGetCurrentThread()->ApcState.Process,
                                         qword_140F0B2D8,
                                         0LL,
                                         0,
                                         0LL) >= 0;
  PopReleaseRwLock((signed __int64 *)&PopUnlockAfterSleepLock);
  PopAcquireTransitionLock(1);
  PopAcquireRwLockExclusive(&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 0;
  return PopReleaseRwLock((signed __int64 *)&PopUnlockAfterSleepLock);
}
