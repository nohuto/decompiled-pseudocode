/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x14033A250
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     HalpTimerStallExecutionProcessor @ 0x14033B670 (HalpTimerStallExecutionProcessor.c)
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14037529C (PnpSendIrp.c)
 *     MiSetIdealProcessorThread @ 0x1403B4508 (MiSetIdealProcessorThread.c)
 *     KiConnectInterrupt @ 0x1403B70E8 (KiConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x1403B748C (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1403B8B5C (KiDisconnectInterruptCommon.c)
 *     KiInterruptDispatchCommon @ 0x1403BF7F8 (KiInterruptDispatchCommon.c)
 *     PpmInstallFeedbackCounters @ 0x140433E50 (PpmInstallFeedbackCounters.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404439E0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140443B40 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140443D90 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140443F60 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     IopPassiveInterruptWorker @ 0x140456EC0 (IopPassiveInterruptWorker.c)
 *     KeRevertToUserAffinityThreadEx @ 0x14046FC60 (KeRevertToUserAffinityThreadEx.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047BB30 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404BB520 (ExAllocateCacheAwarePushLock.c)
 *     PpmSetSimulatedIdle @ 0x1404CD620 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x1404CF11C (PpmClearSimulatedIdle.c)
 *     MakeGdtReadOnly @ 0x140539E48 (MakeGdtReadOnly.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x14053EEF0 (HalpCreateMachineCheckErrorRecord.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140545110 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140545BE0 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405626B0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x140562800 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfilingEnhanced @ 0x14056BBD8 (Amd64InitializeUncoreProfilingEnhanced.c)
 *     Amd64InitializeUncoreProfilingOriginal @ 0x14056BCE8 (Amd64InitializeUncoreProfilingOriginal.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059E420 (IopLiveDumpUncorralProcessors.c)
 *     KiDeregisterNmiSxCallback @ 0x1405B0CFC (KiDeregisterNmiSxCallback.c)
 *     KiDynamicProcessorInitialization @ 0x1405B6BFC (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x1405B7C40 (KeRevertToUserAffinityThread.c)
 *     KiInitMachineDependent @ 0x1405C0470 (KiInitMachineDependent.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405C66D8 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CE7A0 (PpmIdleInstallNewVetoList.c)
 *     HalpLoadMicrocodeSerialized @ 0x140701CD0 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PpmIdleInitializeConcurrency @ 0x14074A0E0 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1407D4BCC (CmInitializeProcessor.c)
 *     PnpCallAddDevice @ 0x1409C71F8 (PnpCallAddDevice.c)
 *     HalpCmcWorkerRoutine @ 0x140A4DAA0 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B4B8C4 (HalpHandlePreviousMcaErrors.c)
 *     HalpMceInit @ 0x140B68694 (HalpMceInit.c)
 *     HalpCmciInit @ 0x140B6C938 (HalpCmciInit.c)
 *     ViIsBTSSupported @ 0x140B93A54 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140B93B80 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4953C (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
    LOBYTE(v1) = 2;
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, v1);
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
