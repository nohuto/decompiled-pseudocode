/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1402783E0
 * Callers:
 *     KiConnectInterrupt @ 0x140202948 (KiConnectInterrupt.c)
 *     KiInterruptDispatchCommon @ 0x140206264 (KiInterruptDispatchCommon.c)
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     KeSetSystemAffinityThreadEx @ 0x140278380 (KeSetSystemAffinityThreadEx.c)
 *     PnpSetDeviceAffinityThread @ 0x14035E9C0 (PnpSetDeviceAffinityThread.c)
 *     MiSetIdealProcessorThread @ 0x140377430 (MiSetIdealProcessorThread.c)
 *     PpmInstallFeedbackCounters @ 0x1403E9C74 (PpmInstallFeedbackCounters.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140442460 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404425C0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140442810 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404429E0 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     KiDisconnectInterruptCommon @ 0x1404449DC (KiDisconnectInterruptCommon.c)
 *     IopPassiveInterruptWorker @ 0x140456A40 (IopPassiveInterruptWorker.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047B354 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiAcquireInterruptConnectLock @ 0x14047F0CC (KiAcquireInterruptConnectLock.c)
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
 *     IopLiveDumpCorralProcessors @ 0x140596F50 (IopLiveDumpCorralProcessors.c)
 *     KiDynamicProcessorInitialization @ 0x1405B2D2C (KiDynamicProcessorInitialization.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405BF008 (KiSetSystemAffinityThreadToProcessor.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405C2338 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CA0F0 (PpmIdleInstallNewVetoList.c)
 *     HalpLoadMicrocodeSerialized @ 0x1406F5EE0 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PpmIdleInitializeConcurrency @ 0x14073E060 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1407C5488 (CmInitializeProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x140A4B1B0 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B3B8C4 (HalpHandlePreviousMcaErrors.c)
 *     HalpInitializeMce @ 0x140B3BBE4 (HalpInitializeMce.c)
 *     PopEndMirroring @ 0x140B54550 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
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
 *     KeFirstGroupAffinityEx @ 0x14045ADB0 (KeFirstGroupAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BC120 (KiCpuPartitionCheckAffinitization.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  PGROUP_AFFINITY v3; // r14
  unsigned __int64 Group; // r8
  char v5; // r15
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  char v8; // si
  unsigned int v9; // edi
  _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  __int64 *v12; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int16 i; // cx
  unsigned __int64 v15; // rdx
  _GROUP_AFFINITY v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v3 = Affinity;
  v16 = 0LL;
  Group = Affinity->Group;
  if ( (unsigned __int16)Group < KeActiveProcessors.Count
    && (Affinity = (PGROUP_AFFINITY)KeActiveProcessors.Bitmap[Group], ((unsigned __int64)Affinity & v3->Mask) != 0)
    && (Affinity = (PGROUP_AFFINITY)v3->Reserved[2],
        LOWORD(Affinity) = v3->Reserved[0] | v3->Reserved[1] | (unsigned __int16)Affinity,
        !(_WORD)Affinity) )
  {
    v5 = 1;
    v3->Mask &= KeActiveProcessors.Bitmap[v3->Group];
  }
  else
  {
    v5 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v9 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Affinity) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
    goto LABEL_15;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( Next )
  {
    switch ( BYTE2(Next[2].Next) )
    {
      case 0:
        goto LABEL_45;
      case 1:
        KeFirstGroupAffinityEx(&v16, CurrentThread->Affinity);
        break;
      case 2:
LABEL_45:
        if ( v5 )
        {
          BYTE2(Next[2].Next) = 1;
          v17 = 0LL;
          goto LABEL_16;
        }
        break;
    }
  }
  else
  {
    Group = (unsigned __int64)CurrentThread->Affinity;
    for ( i = 0; i < *(_WORD *)Group; ++i )
    {
      v15 = *(_QWORD *)(Group + 8LL * i + 8);
      if ( v15 )
      {
        v16.Group = i;
        v16.Mask = v15;
        break;
      }
    }
  }
LABEL_15:
  v17 = 0LL;
  v12 = 0LL;
  if ( v5 )
  {
LABEL_16:
    KiSetSystemAffinityThread(CurrentPrcb, (__int64)&v17);
    v12 = (__int64 *)v17;
    goto LABEL_17;
  }
  CurrentThread->ThreadLock = 0LL;
LABEL_17:
  if ( (WORD2(xmmword_140FC5B10) & 0x200) != 0 )
  {
    LOBYTE(Group) = 1;
    KiCpuPartitionCheckAffinitization(CurrentThread, CurrentThread->Affinity, Group, 0LL);
  }
  if ( v12 )
  {
    v17 = *v12;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v12 - 27, &v17, 0LL);
      v12 = (__int64 *)v17;
      ++v8;
      if ( v17 )
        v17 = *(_QWORD *)v17;
      if ( (v8 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v12 );
  }
  KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  KiCheckForThreadDispatch(CurrentPrcb, CurrentIrql);
  if ( PreviousAffinity )
    *PreviousAffinity = v16;
  KeGetCurrentIrql();
}
