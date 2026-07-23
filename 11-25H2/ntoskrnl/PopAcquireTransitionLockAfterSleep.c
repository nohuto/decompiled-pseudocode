/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140B57CC4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x140A8DB1C (PopAcquireTransitionLock.c)
 */

__int64 PopAcquireTransitionLockAfterSleep()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 1;
  if ( qword_140F0B038 )
    PopWaitingForTransitionLock = (int)PopPushPowerStateTransitionRecordWithCallback(
                                         (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process,
                                         qword_140F0B038,
                                         0LL,
                                         0,
                                         0LL) >= 0;
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  PopAcquireTransitionLock(1);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 0;
  return PopReleaseRwLock(&PopUnlockAfterSleepLock);
}
