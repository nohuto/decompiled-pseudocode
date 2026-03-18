/*
 * XREFs of PopCoolingTelemetryWorker @ 0x140431084
 * Callers:
 *     PopThermalTelemetryWorker @ 0x1405CF530 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140425554 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140427548 (PopTraceThermalRequestActiveActivity.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8AAD8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9CEA4 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopCoolingTelemetryWorker()
{
  __int64 i; // rbx
  __int64 v2; // rdx
  __int64 j; // rdi

  PopAcquireRwLockExclusive(&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 18) )
        {
          if ( *(_QWORD *)(i + 136) )
          {
            LOBYTE(v2) = *(_BYTE *)(j + 16);
            PopThermalUpdatePassiveTimeTracking(j + 40, v2);
            PopTraceThermalRequestPassiveHistogram(j);
          }
          if ( *(_QWORD *)(i + 128) )
          {
            LOBYTE(v2) = *(_BYTE *)(j + 17) == 0;
            PopThermalUpdateActiveTimeTracking(j + 40, v2);
            PopTraceThermalRequestActiveActivity(j);
          }
        }
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  return PopReleaseRwLock(&PopCoolingExtensionLock);
}
