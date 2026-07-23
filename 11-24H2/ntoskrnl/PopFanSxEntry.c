/*
 * XREFs of PopFanSxEntry @ 0x1404AEC4C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopFanUpdateStatistics @ 0x140A90BF8 (PopFanUpdateStatistics.c)
 */

__int64 PopFanSxEntry()
{
  __int64 i; // rdi

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(i + 400));
    PopFanUpdateStatistics(i);
    *(_BYTE *)(i + 200) = 1;
    PopReleaseRwLock((signed __int64 *)(i + 400));
  }
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
