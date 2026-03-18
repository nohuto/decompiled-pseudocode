/*
 * XREFs of PopFanReportBootStartDevices @ 0x140C212E0
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopSqmFanEnumeration @ 0x140755D1C (PopSqmFanEnumeration.c)
 */

__int64 PopFanReportBootStartDevices()
{
  __int64 *i; // rbx

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
