/*
 * XREFs of PopThermalSxExit @ 0x1405D3D88
 * Callers:
 *     PopPolicyWorkerAction @ 0x140A87A20 (PopPolicyWorkerAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopCoolingSxTransition @ 0x140427860 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 *     PopPowerLimitSxTransition @ 0x1405CF7E4 (PopPowerLimitSxTransition.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
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
      PopAcquireRwLockExclusive(&PopThermalStateTransitionContext);
      if ( byte_140F0AB32 )
      {
        byte_140F0AB32 = 0;
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0LL);
      }
      PopReleaseRwLock((signed __int64 *)&PopThermalStateTransitionContext);
      v1 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
      dword_140F0AB8C = -1;
      byte_140F0AB88 = 1;
      KeReleaseSpinLock(&PopThermalEventTransitionContext, v1);
    }
    PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
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
    PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
    PopCoolingSxTransition(0);
    PopPowerLimitSxTransition(0);
    PopAcquireRwLockExclusive(&PopThermalStateTransitionContext);
    byte_140F0AB30 = 1;
    if ( byte_140F0AB31 || byte_140F0AB33 )
      PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    return PopReleaseRwLock((signed __int64 *)&PopThermalStateTransitionContext);
  }
  return result;
}
