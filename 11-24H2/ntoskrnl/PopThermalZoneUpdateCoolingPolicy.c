/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x140A96C04
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x14041C370 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 PopThermalZoneUpdateCoolingPolicy()
{
  PVOID *i; // rdi

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)i + 54);
    IoCancelIrp((PIRP)i[7]);
    PopReleaseRwLock((signed __int64 *)i + 54);
  }
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
