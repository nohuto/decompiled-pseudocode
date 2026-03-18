/*
 * XREFs of PopFanSxEntry @ 0x1404B4AEC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopFanUpdateStatistics @ 0x140A902FC (PopFanUpdateStatistics.c)
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
