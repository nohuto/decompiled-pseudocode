/*
 * XREFs of PopThermalSxEntry @ 0x1404DA77C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopCoolingSxTransition @ 0x1404312F0 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x1404C7224 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D4110 (PopTraceThermalZonePassiveHistogram.c)
 *     PopPowerLimitSxTransition @ 0x1405CB134 (PopPowerLimitSxTransition.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D1D7C (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8AAD8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9CEA4 (PopThermalUpdateActiveTimeTracking.c)
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
    byte_140F0A4D0 = 0;
    return PopReleaseRwLock(&PopThermalStateTransitionContext);
  }
  return result;
}
