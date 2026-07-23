/*
 * XREFs of PopThermalTelemetryWorker @ 0x1405D1700
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopCoolingTelemetryWorker @ 0x14041B784 (PopCoolingTelemetryWorker.c)
 *     PopPowerLimitTelemetryWorker @ 0x14041B868 (PopPowerLimitTelemetryWorker.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404CD1F8 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D3CF0 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8C138 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9DA34 (PopThermalUpdateActiveTimeTracking.c)
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
  _InterlockedExchange(&dword_140F0B068, 0);
  return result;
}
