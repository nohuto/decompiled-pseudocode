/*
 * XREFs of KeIpiGenericCall @ 0x1404677F0
 * Callers:
 *     KeAdjustInterruptTime @ 0x1404BE5A4 (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x1404D6890 (KeStartProfile.c)
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 *     HalpCmciHandler @ 0x1405434A8 (HalpCmciHandler.c)
 *     HalpTscFallbackToPlatformSource @ 0x1405495E4 (HalpTscFallbackToPlatformSource.c)
 *     HalpTscSynchronization @ 0x140549890 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405BD558 (KeOptimizeSpecCtrlSettings.c)
 *     KeStopProfile @ 0x1405BF174 (KeStopProfile.c)
 *     MiStackTheftFreezeProcessors @ 0x140675374 (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiWritePteHighLevel @ 0x14068410C (MiWritePteHighLevel.c)
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x140704378 (HalpLbrConfigurationWorker.c)
 *     KiUpdateSavedSupervisorState @ 0x140B57330 (KiUpdateSavedSupervisorState.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B575C0 (KiInitializeDynamicProcessorDpc.c)
 *     KeRestoreMtrrBroadcast @ 0x140B57820 (KeRestoreMtrrBroadcast.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIpiStallOnPacketTargets @ 0x1404679AC (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rcx
  unsigned int v6; // edi
  ULONG v7; // r14d
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  ULONG_PTR v13; // rdi
  __int64 v14; // rdx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  ULONG *p_ActiveProcessorCount; // [rsp+40h] [rbp-28h]
  __int64 (__fastcall *v18)(__int64, __int64, __int64, volatile signed __int32 *); // [rsp+48h] [rbp-20h]
  ULONG ActiveProcessorCount; // [rsp+70h] [rbp+8h] BYREF

  v2 = Context;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(Context) = 12;
      KiRaiseIrqlProcessIrqlFlags(v5, Context);
    }
  }
  v6 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v7 )
  {
    p_ActiveProcessorCount = &ActiveProcessorCount;
    *(_QWORD *)&v16 = BroadcastFunction;
    v18 = KiIpiGenericCallTarget;
    *((_QWORD *)&v16 + 1) = v2;
    KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 1, 0LL, &v16, 5LL);
  }
  while ( ActiveProcessorCount != 1 )
  {
    if ( (++v6 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v6);
    }
    else
    {
      _mm_pause();
    }
  }
  v10 = KeGetCurrentIrql();
  v11 = 14LL;
  __writecr8(0xEuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v10, 14LL);
  ActiveProcessorCount = 0;
  KeGetCurrentPrcb()->IpiFrame = 0LL;
  v13 = guard_dispatch_icall_no_overrides(v2, v11, v8, v9);
  if ( v7 )
  {
    if ( CurrentIrql <= 0xCu )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 12;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      }
      __writecr8(0xCuLL);
    }
    KiIpiStallOnPacketTargets();
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiReverseStallIpiLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  }
  __writecr8(CurrentIrql);
  return v13;
}
