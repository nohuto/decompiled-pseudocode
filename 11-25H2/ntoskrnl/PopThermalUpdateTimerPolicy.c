/*
 * XREFs of PopThermalUpdateTimerPolicy @ 0x140431F0C
 * Callers:
 *     PopThermalPollingPowerSettingCallback @ 0x140431A40 (PopThermalPollingPowerSettingCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
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
