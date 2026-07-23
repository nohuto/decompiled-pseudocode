/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x140319730
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14025D974 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14025DB5C (PnpSendIrp.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14026E450 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiConnectInterrupt @ 0x1402B339C (KiConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x1402B3740 (KeMaskInterrupt.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     HalpTimerStallExecutionProcessor @ 0x14031AB50 (HalpTimerStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 *     MiSetIdealProcessorThread @ 0x140370F20 (MiSetIdealProcessorThread.c)
 *     KiDisconnectInterruptCommon @ 0x140373CA8 (KiDisconnectInterruptCommon.c)
 *     KiInterruptDispatchCommon @ 0x1403AE3B8 (KiInterruptDispatchCommon.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140439480 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404395E0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140439830 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140439A00 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     IopPassiveInterruptWorker @ 0x14044C700 (IopPassiveInterruptWorker.c)
 *     KeRevertToUserAffinityThreadEx @ 0x14046A1C0 (KeRevertToUserAffinityThreadEx.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404B6390 (ExAllocateCacheAwarePushLock.c)
 *     PpmInstallFeedbackCounters @ 0x1404C362C (PpmInstallFeedbackCounters.c)
 *     PpmSetSimulatedIdle @ 0x1404C69F0 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x1404C82E8 (PpmClearSimulatedIdle.c)
 *     MakeGdtReadOnly @ 0x140537688 (MakeGdtReadOnly.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x14053C7F0 (HalpCreateMachineCheckErrorRecord.c)
 *     HalpAllocatePmcCounterSetEx @ 0x1405429D0 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x1405434A0 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405602E0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x140560430 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfilingEnhanced @ 0x140569068 (Amd64InitializeUncoreProfilingEnhanced.c)
 *     Amd64InitializeUncoreProfilingOriginal @ 0x140569178 (Amd64InitializeUncoreProfilingOriginal.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059B3A0 (IopLiveDumpUncorralProcessors.c)
 *     KiDeregisterNmiSxCallback @ 0x1405ADC6C (KiDeregisterNmiSxCallback.c)
 *     KiDynamicProcessorInitialization @ 0x1405B3EBC (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x1405B5220 (KeRevertToUserAffinityThread.c)
 *     KiInitMachineDependent @ 0x1405BDA44 (KiInitMachineDependent.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405C3E08 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CBEC0 (PpmIdleInstallNewVetoList.c)
 *     HalpLoadMicrocodeSerialized @ 0x1406FF910 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PpmIdleInitializeConcurrency @ 0x140748410 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1407D50BC (CmInitializeProcessor.c)
 *     PnpCallAddDevice @ 0x1409B9504 (PnpCallAddDevice.c)
 *     HalpCmcWorkerRoutine @ 0x140A44630 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B4D904 (HalpHandlePreviousMcaErrors.c)
 *     HalpMceInit @ 0x140B6D2D4 (HalpMceInit.c)
 *     HalpCmciInit @ 0x140B6E1D8 (HalpCmciInit.c)
 *     ViIsBTSSupported @ 0x140B95A54 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140B95B80 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4B660 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v1; // rdx
  char *UserAffinity; // r14
  PGROUP_AFFINITY v4; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int v10; // ebx
  unsigned int UserIdealProcessor; // r9d
  __int64 v12; // rbx
  char v13; // di
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  UserAffinity = 0LL;
  v4 = 0LL;
  KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 8) == 0 )
    return;
  v6 = PreviousAffinity->Reserved[2];
  LOWORD(v6) = PreviousAffinity->Reserved[0] | PreviousAffinity->Reserved[1] | v6;
  if ( (_WORD)v6 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, 2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !PreviousAffinity->Mask )
  {
    Next = CurrentThread->SystemAffinityTokenListHead.Next;
    if ( Next )
    {
      UserAffinity = (char *)Next[3].Next;
      BYTE2(Next[2].Next) = BYTE3(Next[2].Next) & 2;
    }
    goto LABEL_8;
  }
  if ( PreviousAffinity->Group < KeActiveProcessors.Count )
  {
    v15 = KeActiveProcessors.Bitmap[PreviousAffinity->Group];
    v16 = (v15 & PreviousAffinity->Mask) == 0;
    PreviousAffinity->Mask &= v15;
    if ( !v16 )
    {
      v4 = PreviousAffinity;
LABEL_8:
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( UserAffinity || v4 )
      {
        UserIdealProcessor = 2048;
      }
      else
      {
        UserAffinity = (char *)CurrentThread->UserAffinity;
        UserIdealProcessor = CurrentThread->UserIdealProcessor;
        CurrentThread->MiscFlags &= ~8u;
      }
      v17 = 0LL;
      KiSetSystemAffinityThread(
        CurrentPrcb,
        UserAffinity,
        (__int64 *)v4,
        UserIdealProcessor,
        (struct _SINGLE_LIST_ENTRY *)&v17);
      v12 = v17;
      v13 = 0;
      if ( v17 )
      {
        v17 = *(_QWORD *)v17;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, v12 - 216, (struct _SINGLE_LIST_ENTRY *)&v17, 0LL);
          v12 = v17;
          ++v13;
          if ( v17 )
            v17 = *(_QWORD *)v17;
          if ( (v13 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
        }
        while ( v12 );
      }
      KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      LOBYTE(v14) = CurrentIrql;
      KiCheckForThreadDispatch(CurrentPrcb, v14);
      return;
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v1) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
  }
  __writecr8(CurrentIrql);
}
