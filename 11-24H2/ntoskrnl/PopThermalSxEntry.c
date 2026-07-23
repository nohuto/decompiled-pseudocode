/*
 * XREFs of PopThermalSxEntry @ 0x1404D31A8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopCoolingSxTransition @ 0x14041B9F0 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x1404C11AC (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404CD1F8 (PopTraceThermalZonePassiveHistogram.c)
 *     PopPowerLimitSxTransition @ 0x1405CCF04 (PopPowerLimitSxTransition.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D3CF0 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8C138 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9DA34 (PopThermalUpdateActiveTimeTracking.c)
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(4LL, v1, v2);
    PopReleaseRwLock(&PopSystemThermalInfo);
    PopAcquireRwLockShared(&PopPolicyDeviceLock);
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
    PopReleaseRwLock(&PopPolicyDeviceLock);
    PopCoolingSxTransition(1);
    LOBYTE(v5) = 1;
    PopPowerLimitSxTransition(v5);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext);
    byte_140F0AF70 = 0;
    return PopReleaseRwLock(&PopThermalStateTransitionContext);
  }
  return result;
}
