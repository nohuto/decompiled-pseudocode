/*
 * XREFs of PopPowerLimitTelemetryWorker @ 0x1404276D8
 * Callers:
 *     PopThermalTelemetryWorker @ 0x1405D3F40 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CF8EC (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x1405D620C (PopTracePowerLimitHistogram.c)
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
  return PopReleaseRwLock((signed __int64 *)&PopPowerLimitExtensionLock);
}
