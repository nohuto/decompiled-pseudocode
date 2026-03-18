/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x140278FE0
 * Callers:
 *     KeMaskInterrupt @ 0x14020254C (KeMaskInterrupt.c)
 *     KiConnectInterrupt @ 0x140202948 (KiConnectInterrupt.c)
 *     KiInterruptDispatchCommon @ 0x140206264 (KiInterruptDispatchCommon.c)
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     PnpGetRelatedTargetDevice @ 0x14035E4A8 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14035EA70 (PnpSendIrp.c)
 *     MiSetIdealProcessorThread @ 0x140377430 (MiSetIdealProcessorThread.c)
 *     PpmInstallFeedbackCounters @ 0x1403E9C74 (PpmInstallFeedbackCounters.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140442460 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404425C0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140442810 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404429E0 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     KiDisconnectInterruptCommon @ 0x1404449DC (KiDisconnectInterruptCommon.c)
 *     IopPassiveInterruptWorker @ 0x140456A40 (IopPassiveInterruptWorker.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1404717F0 (KeRevertToUserAffinityThreadEx.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047B354 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404BC320 (ExAllocateCacheAwarePushLock.c)
 *     PpmSetSimulatedIdle @ 0x1404CDA0C (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x1404CF2B8 (PpmClearSimulatedIdle.c)
 *     MakeGdtReadOnly @ 0x140537698 (MakeGdtReadOnly.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x14053C6C0 (HalpCreateMachineCheckErrorRecord.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140542820 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x1405432F0 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x14055FDB0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x14055FF00 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfilingEnhanced @ 0x1405688D8 (Amd64InitializeUncoreProfilingEnhanced.c)
 *     Amd64InitializeUncoreProfilingOriginal @ 0x1405689E8 (Amd64InitializeUncoreProfilingOriginal.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059AD10 (IopLiveDumpUncorralProcessors.c)
 *     KiDeregisterNmiSxCallback @ 0x1405AD36C (KiDeregisterNmiSxCallback.c)
 *     KiDynamicProcessorInitialization @ 0x1405B2D2C (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x1405B3D50 (KeRevertToUserAffinityThread.c)
 *     KiInitMachineDependent @ 0x1405BC408 (KiInitMachineDependent.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405C2338 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CA0F0 (PpmIdleInstallNewVetoList.c)
 *     HalpLoadMicrocodeSerialized @ 0x1406F5EE0 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PpmIdleInitializeConcurrency @ 0x14073E060 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1407C5488 (CmInitializeProcessor.c)
 *     PnpCallAddDevice @ 0x140832FB8 (PnpCallAddDevice.c)
 *     HalpCmcWorkerRoutine @ 0x140A4B1B0 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B3B8C4 (HalpHandlePreviousMcaErrors.c)
 *     HalpMceInit @ 0x140B58864 (HalpMceInit.c)
 *     HalpCmciInit @ 0x140B5D858 (HalpCmciInit.c)
 *     ViIsBTSSupported @ 0x140B83A74 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140B83BA0 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140C1681C (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C38240 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
  $B38C3B1372D6E954799962D5DD404846 *Next; // rcx
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
    KiRaiseIrqlProcessIrqlFlags(v6);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !PreviousAffinity->Mask )
  {
    Next = ($B38C3B1372D6E954799962D5DD404846 *)CurrentThread->SystemAffinityTokenListHead.Next;
    if ( Next )
    {
      UserAffinity = (char *)Next->StaticBitmap[3];
      BYTE2(Next->StaticBitmap[2]) = BYTE3(Next->StaticBitmap[2]) & 2;
    }
    goto LABEL_8;
  }
  if ( PreviousAffinity->Group < KeActiveProcessors.Count )
  {
    Next = &KeActiveProcessors.8;
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
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Next) )
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
      KiSetSystemAffinityThread(CurrentPrcb, UserAffinity, (__int64 *)v4, UserIdealProcessor, (__int64)&v17);
      v12 = v17;
      v13 = 0;
      if ( v17 )
      {
        v17 = *(_QWORD *)v17;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, v12 - 216, &v17, 0LL);
          v12 = v17;
          ++v13;
          if ( v17 )
            v17 = *(_QWORD *)v17;
          if ( (v13 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
        }
        while ( v12 );
      }
      KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
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
