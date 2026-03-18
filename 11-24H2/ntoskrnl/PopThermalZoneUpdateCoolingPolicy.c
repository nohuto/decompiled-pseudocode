/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x140A9B694
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x1404281E0 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopThermalZoneUpdateCoolingPolicy()
{
  PVOID *i; // rdi

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)i + 54);
    IoCancelIrp((PIRP)i[7]);
    PopReleaseRwLock((signed __int64 *)i + 54);
  }
  return PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
