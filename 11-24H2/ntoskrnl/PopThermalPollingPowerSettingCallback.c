/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x140427FB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTimerPolicy @ 0x14042847C (PopThermalUpdateTimerPolicy.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive(&PopThermalLock);
  LOBYTE(v0) = 0;
  if ( dword_140F0BA4C != 1 || !PopPdcIdleResiliency )
    LOBYTE(v0) = 1;
  PopThermalUpdateTimerPolicy(v0);
  PopReleaseRwLock((signed __int64 *)&PopThermalLock);
  return 0LL;
}
