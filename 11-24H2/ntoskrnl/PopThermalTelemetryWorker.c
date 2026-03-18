/*
 * XREFs of PopThermalTelemetryWorker @ 0x1405D3F40
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopCoolingTelemetryWorker @ 0x1404275F4 (PopCoolingTelemetryWorker.c)
 *     PopPowerLimitTelemetryWorker @ 0x1404276D8 (PopPowerLimitTelemetryWorker.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D3FE8 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D66DC (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8FAF8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140AA26A4 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopThermalTelemetryWorker()
{
  unsigned __int64 *i; // rbx
  __int64 v1; // rdx
  __int64 result; // rax

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
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
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  result = PopPowerLimitTelemetryWorker();
  _InterlockedExchange(&dword_140F0ACE8, 0);
  return result;
}
