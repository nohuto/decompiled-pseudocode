/*
 * XREFs of PopPowerLimitTelemetryWorker @ 0x14041B868
 * Callers:
 *     PopThermalTelemetryWorker @ 0x1405D1700 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CD00C (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x1405D3820 (PopTracePowerLimitHistogram.c)
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
