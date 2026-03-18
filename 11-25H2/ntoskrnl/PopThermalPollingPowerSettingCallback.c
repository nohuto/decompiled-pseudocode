/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x140431A40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTimerPolicy @ 0x140431F0C (PopThermalUpdateTimerPolicy.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive(&PopThermalLock);
  LOBYTE(v0) = 0;
  if ( dword_140F0B70C != 1 || !PopPdcIdleResiliency )
    LOBYTE(v0) = 1;
  PopThermalUpdateTimerPolicy(v0);
  PopReleaseRwLock(&PopThermalLock);
  return 0LL;
}
