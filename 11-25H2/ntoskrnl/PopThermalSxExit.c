/*
 * XREFs of PopThermalSxExit @ 0x1405CF378
 * Callers:
 *     PopPolicyWorkerAction @ 0x140A82EF0 (PopPolicyWorkerAction.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopCoolingSxTransition @ 0x1404312F0 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 *     PopPowerLimitSxTransition @ 0x1405CB134 (PopPowerLimitSxTransition.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

__int64 PopThermalSxExit()
{
  __int64 result; // rax
  KIRQL v1; // al
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rax

  result = (unsigned int)_InterlockedExchange(&PopThermalStateTransitionInProgress, 0);
  if ( (_DWORD)result )
  {
    if ( PoResumeFromHibernate )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext);
      if ( byte_140F0A4D2 )
      {
        byte_140F0A4D2 = 0;
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
      }
      PopReleaseRwLock(&PopThermalStateTransitionContext);
      v1 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
      dword_140F0A5EC = -1;
      byte_140F0A5E8 = 1;
      KeReleaseSpinLock(&PopThermalEventTransitionContext, v1);
    }
    PopAcquireRwLockShared(&PopPolicyDeviceLock);
    v2 = (unsigned __int64 *)PopThermal;
    if ( PopThermal != &PopThermal )
    {
      do
      {
        PopAcquireRwLockExclusive(v2 + 54);
        v3 = MEMORY[0xFFFFF78000000008];
        v2[64] = MEMORY[0xFFFFF78000000008];
        v2[65] = v3;
        *((_BYTE *)v2 + 504) = 0;
        PopReleaseRwLock((signed __int64 *)v2 + 54);
        v2 = (unsigned __int64 *)*v2;
      }
      while ( v2 != (unsigned __int64 *)&PopThermal );
    }
    PopReleaseRwLock(&PopPolicyDeviceLock);
    PopCoolingSxTransition(0);
    PopPowerLimitSxTransition(0);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext);
    byte_140F0A4D0 = 1;
    if ( byte_140F0A4D1 || byte_140F0A4D3 )
      PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    return PopReleaseRwLock(&PopThermalStateTransitionContext);
  }
  return result;
}
