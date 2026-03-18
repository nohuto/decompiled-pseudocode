/*
 * XREFs of PopPowerLimitTelemetryWorker @ 0x140431168
 * Callers:
 *     PopThermalTelemetryWorker @ 0x1405CF530 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CB23C (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x1405D18AC (PopTracePowerLimitHistogram.c)
 */

__int64 PopPowerLimitTelemetryWorker()
{
  __int64 i; // rdi
  __int64 *j; // rbx
  unsigned int k; // esi

  PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
  for ( i = PopPowerLimitExtensionList; (__int64 *)i != &PopPowerLimitExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 48) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 16) && *((_BYTE *)j + 48) )
        {
          for ( k = 0; k < *((_DWORD *)j + 8); ++k )
            PopUpdatePowerLimitTimeTracking(j, k);
          PopTracePowerLimitHistogram(j);
        }
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  return PopReleaseRwLock(&PopPowerLimitExtensionLock);
}
