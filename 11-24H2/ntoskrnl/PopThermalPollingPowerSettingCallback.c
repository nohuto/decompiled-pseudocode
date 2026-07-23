/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x14041C140
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTimerPolicy @ 0x14041C60C (PopThermalUpdateTimerPolicy.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive(&PopThermalLock);
  LOBYTE(v0) = 0;
  if ( dword_140F0B38C != 1 || !PopPdcIdleResiliency )
    LOBYTE(v0) = 1;
  PopThermalUpdateTimerPolicy(v0);
  PopReleaseRwLock(&PopThermalLock);
  return 0LL;
}
