/*
 * XREFs of PopThermalTelemetryWorker @ 0x1405CF530
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopCoolingTelemetryWorker @ 0x140431084 (PopCoolingTelemetryWorker.c)
 *     PopPowerLimitTelemetryWorker @ 0x140431168 (PopPowerLimitTelemetryWorker.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D4110 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D1D7C (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8AAD8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9CEA4 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopThermalTelemetryWorker()
{
  unsigned __int64 *i; // rbx
  __int64 v1; // rdx
  __int64 result; // rax

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = (unsigned __int64 *)PopThermal; i != (unsigned __int64 *)&PopThermal; i = (unsigned __int64 *)*i )
  {
    PopAcquireRwLockExclusive(i + 54);
    if ( *((_BYTE *)i + 145) )
    {
      LOBYTE(v1) = *((_BYTE *)i + 80);
      PopThermalUpdatePassiveTimeTracking(i + 63, v1);
      PopTraceThermalZonePassiveHistogram((__int64)i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v1) = *((_BYTE *)i + 69);
      PopThermalUpdateActiveTimeTracking(i + 63, v1);
      PopTraceThermalZoneActiveActivity(i);
    }
    PopReleaseRwLock((signed __int64 *)i + 54);
  }
  PopReleaseRwLock(&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  result = PopPowerLimitTelemetryWorker();
  _InterlockedExchange(&dword_140F0A5C8, 0);
  return result;
}
