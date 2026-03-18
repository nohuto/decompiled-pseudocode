/*
 * XREFs of PopFanReportBootStartDevices @ 0x140C323E4
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopSqmFanEnumeration @ 0x1407657DC (PopSqmFanEnumeration.c)
 */

__int64 PopFanReportBootStartDevices()
{
  __int64 *i; // rbx

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  return PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
