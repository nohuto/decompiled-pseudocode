/*
 * XREFs of PopThermalUpdateTimerPolicy @ 0x14042847C
 * Callers:
 *     PopThermalPollingPowerSettingCallback @ 0x140427FB0 (PopThermalPollingPowerSettingCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopThermalUpdateTimerPolicy(char a1)
{
  PVOID *i; // rbx
  __int64 result; // rax

  if ( PopThermalPollingMode && PopThermalPollingWakesAllowed != a1 )
  {
    PopThermalPollingWakesAllowed = a1;
    PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
    for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)i + 54);
      if ( i[29] || (*((_BYTE *)i + 65) & 1) != 0 && *((_DWORD *)i + 26) )
        IoCancelIrp((PIRP)i[7]);
      PopReleaseRwLock((signed __int64 *)i + 54);
    }
    return PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
  }
  return result;
}
