/*
 * XREFs of PopThermalSxExit @ 0x1405D1508
 * Callers:
 *     PopPolicyWorkerAction @ 0x140A83F10 (PopPolicyWorkerAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     PopCoolingSxTransition @ 0x14041B9F0 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PopPowerLimitSxTransition @ 0x1405CCF04 (PopPowerLimitSxTransition.c)
 *     Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline @ 0x1405D1304 (Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

__int64 PopThermalSxExit()
{
  __int64 result; // rax
  char v1; // di
  KIRQL v2; // al
  PVOID *v3; // rbx
  void *v4; // rax

  result = (unsigned int)_InterlockedExchange(&PopThermalStateTransitionInProgress, 0);
  v1 = 0;
  if ( (_DWORD)result )
  {
    if ( PoResumeFromHibernate )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext);
      if ( byte_140F0AF72 )
      {
        byte_140F0AF72 = 0;
        if ( (unsigned int)Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline() )
        {
          v1 = 1;
          byte_140F0AF71 = 0;
          byte_140F0AF73 = 0;
        }
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
      }
      PopReleaseRwLock(&PopThermalStateTransitionContext);
      v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
      dword_140F0AE8C = -1;
      byte_140F0AE88 = 1;
      KeReleaseSpinLock(&PopThermalEventTransitionContext, v2);
    }
    PopAcquireRwLockShared(&PopPolicyDeviceLock);
    v3 = (PVOID *)PopThermal;
    if ( PopThermal != &PopThermal )
    {
      do
      {
        PopAcquireRwLockExclusive((unsigned __int64 *)v3 + 54);
        v4 = (void *)MEMORY[0xFFFFF78000000008];
        v3[64] = (PVOID)MEMORY[0xFFFFF78000000008];
        v3[65] = v4;
        *((_BYTE *)v3 + 504) = 0;
        if ( (unsigned int)Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline() && v1 )
          IoCancelIrp((PIRP)v3[7]);
        PopReleaseRwLock((signed __int64 *)v3 + 54);
        v3 = (PVOID *)*v3;
      }
      while ( v3 != &PopThermal );
    }
    PopReleaseRwLock(&PopPolicyDeviceLock);
    PopCoolingSxTransition(0);
    PopPowerLimitSxTransition(0);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext);
    byte_140F0AF70 = 1;
    if ( byte_140F0AF71 || byte_140F0AF73 )
      PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    return PopReleaseRwLock(&PopThermalStateTransitionContext);
  }
  return result;
}
