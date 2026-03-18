/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x140A95A84
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x140431C70 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
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
