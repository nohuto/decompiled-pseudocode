/*
 * XREFs of PopFanSxEntry @ 0x1404B440C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopFanUpdateStatistics @ 0x140A94448 (PopFanUpdateStatistics.c)
 */

__int64 PopFanSxEntry()
{
  __int64 i; // rdi

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(i + 400));
    PopFanUpdateStatistics(i);
    *(_BYTE *)(i + 200) = 1;
    PopReleaseRwLock((signed __int64 *)(i + 400));
  }
  return PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
