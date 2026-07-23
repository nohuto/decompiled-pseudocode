/*
 * XREFs of PopFanReportBootStartDevices @ 0x140C34524
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopSqmFanEnumeration @ 0x1407651AC (PopSqmFanEnumeration.c)
 */

__int64 PopFanReportBootStartDevices()
{
  __int64 *i; // rbx

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
