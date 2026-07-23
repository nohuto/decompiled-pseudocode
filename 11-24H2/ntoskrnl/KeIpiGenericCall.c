/*
 * XREFs of KeIpiGenericCall @ 0x14045F290
 * Callers:
 *     KeAdjustInterruptTime @ 0x1404B9764 (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x1404CFCE0 (KeStartProfile.c)
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 *     HalpCmciHandler @ 0x140540DF8 (HalpCmciHandler.c)
 *     HalpTscFallbackToPlatformSource @ 0x140546EA4 (HalpTscFallbackToPlatformSource.c)
 *     HalpTscSynchronization @ 0x140547150 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405BAB88 (KeOptimizeSpecCtrlSettings.c)
 *     KeStopProfile @ 0x1405BC7A4 (KeStopProfile.c)
 *     MiStackTheftFreezeProcessors @ 0x140676544 (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067D2F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiWritePteHighLevel @ 0x140685238 (MiWritePteHighLevel.c)
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x140701F38 (HalpLbrConfigurationWorker.c)
 *     KiUpdateSavedSupervisorState @ 0x140B593B0 (KiUpdateSavedSupervisorState.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 *     KeRestoreMtrrBroadcast @ 0x140B598A0 (KeRestoreMtrrBroadcast.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KiIpiStallOnPacketTargets @ 0x14045F44C (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rcx
  unsigned int v6; // edi
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
    *(_QWORD *)&v14 = BroadcastFunction;
    v16 = KiIpiGenericCallTarget;
    *((_QWORD *)&v14 + 1) = v2;
    KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 1, 0LL, &v14, 5LL);
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
  v8 = KeGetCurrentIrql();
  v9 = 14LL;
  __writecr8(0xEuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v8, 14LL);
  ActiveProcessorCount = 0;
  KeGetCurrentPrcb()->IpiFrame = 0LL;
  v11 = guard_dispatch_icall_no_overrides(v2, v9);
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
