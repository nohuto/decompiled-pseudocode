/*
 * XREFs of PopThermalSxEntry @ 0x1404D972C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopCoolingSxTransition @ 0x140427860 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x1404C7D4C (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D3FE8 (PopTraceThermalZonePassiveHistogram.c)
 *     PopPowerLimitSxTransition @ 0x1405CF7E4 (PopPowerLimitSxTransition.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D66DC (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8FAF8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140AA26A4 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopThermalSxEntry()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int64 *i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = (unsigned int)_InterlockedExchange(&PopThermalStateTransitionInProgress, 1);
  if ( !(_DWORD)result )
  {
    PopAcquireRwLockExclusive(&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(4LL, v1, v2);
    PopReleaseRwLock((signed __int64 *)&PopSystemThermalInfo);
    PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
    for ( i = (unsigned __int64 *)PopThermal; i != (unsigned __int64 *)&PopThermal; i = (unsigned __int64 *)*i )
    {
      PopAcquireRwLockExclusive(i + 54);
      if ( *((_BYTE *)i + 145) )
      {
        LOBYTE(v4) = *((_BYTE *)i + 80);
        PopThermalUpdatePassiveTimeTracking(i + 63, v4);
        PopTraceThermalZonePassiveHistogram((__int64)i);
      }
      if ( *((_BYTE *)i + 505) )
      {
        LOBYTE(v4) = *((_BYTE *)i + 69);
        PopThermalUpdateActiveTimeTracking(i + 63, v4);
        PopTraceThermalZoneActiveActivity(i);
      }
      *((_BYTE *)i + 504) = 1;
      PopReleaseRwLock((signed __int64 *)i + 54);
    }
    PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
    PopCoolingSxTransition(1);
    LOBYTE(v5) = 1;
    PopPowerLimitSxTransition(v5);
    PopAcquireRwLockExclusive(&PopThermalStateTransitionContext);
    byte_140F0AB30 = 0;
    return PopReleaseRwLock((signed __int64 *)&PopThermalStateTransitionContext);
  }
  return result;
}
