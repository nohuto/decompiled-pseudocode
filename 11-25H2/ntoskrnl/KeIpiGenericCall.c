/*
 * XREFs of KeIpiGenericCall @ 0x1404690A0
 * Callers:
 *     KeAdjustInterruptTime @ 0x1404BFC58 (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x1404D7A60 (KeStartProfile.c)
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 *     HalpCmciHandler @ 0x140540C78 (HalpCmciHandler.c)
 *     HalpTscFallbackToPlatformSource @ 0x140546CF4 (HalpTscFallbackToPlatformSource.c)
 *     HalpTscSynchronization @ 0x140546FA0 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405B970C (KeOptimizeSpecCtrlSettings.c)
 *     KeStopProfile @ 0x1405BB340 (KeStopProfile.c)
 *     MiStackTheftFreezeProcessors @ 0x140669914 (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiWritePteHighLevel @ 0x140678880 (MiWritePteHighLevel.c)
 *     HalpLoadMicrocode @ 0x1406F5C90 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x1406F8498 (HalpLbrConfigurationWorker.c)
 *     KiUpdateSavedSupervisorState @ 0x140B47390 (KiUpdateSavedSupervisorState.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B47620 (KiInitializeDynamicProcessorDpc.c)
 *     KeRestoreMtrrBroadcast @ 0x140B47880 (KeRestoreMtrrBroadcast.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KiIpiStallOnPacketTargets @ 0x14046925C (KiIpiStallOnPacketTargets.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rcx
  int v6; // edi
  ULONG v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  ULONG_PTR v11; // rdi
  __int64 v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  ULONG *p_ActiveProcessorCount; // [rsp+40h] [rbp-28h]
  __int64 (__fastcall *v16)(__int64, __int64, __int64, volatile signed __int32 *); // [rsp+48h] [rbp-20h]
  ULONG ActiveProcessorCount; // [rsp+70h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v5);
  }
  v6 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v7 )
  {
    p_ActiveProcessorCount = &ActiveProcessorCount;
    *(_QWORD *)&v14 = BroadcastFunction;
    v16 = KiIpiGenericCallTarget;
    *((_QWORD *)&v14 + 1) = Context;
    KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 1, 0LL, &v14, 5LL);
  }
  while ( ActiveProcessorCount != 1 )
  {
    if ( (++v6 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait();
    }
    else
    {
      _mm_pause();
    }
  }
  v8 = KeGetCurrentIrql();
  v9 = 14LL;
  __writecr8(0xEuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v8);
  ActiveProcessorCount = 0;
  KeGetCurrentPrcb()->IpiFrame = 0LL;
  v11 = guard_dispatch_icall_no_overrides(Context, v9);
  if ( v7 )
  {
    if ( CurrentIrql <= 0xCu )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 12;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      }
      __writecr8(0xCuLL);
    }
    KiIpiStallOnPacketTargets();
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiReverseStallIpiLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  __writecr8(CurrentIrql);
  return v11;
}
