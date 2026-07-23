/*
 * XREFs of PopThermalUpdateTimerPolicy @ 0x14041C60C
 * Callers:
 *     PopThermalPollingPowerSettingCallback @ 0x14041C140 (PopThermalPollingPowerSettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopThermalUpdateTimerPolicy(char a1)
{
  PVOID *i; // rbx
  __int64 result; // rax

  if ( PopThermalPollingMode && PopThermalPollingWakesAllowed != a1 )
  {
    PopThermalPollingWakesAllowed = a1;
    PopAcquireRwLockShared(&PopPolicyDeviceLock);
    for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)i + 54);
      if ( i[29] || (*((_BYTE *)i + 65) & 1) != 0 && *((_DWORD *)i + 26) )
        IoCancelIrp((PIRP)i[7]);
      PopReleaseRwLock((signed __int64 *)i + 54);
    }
    return PopReleaseRwLock(&PopPolicyDeviceLock);
  }
  return result;
}
