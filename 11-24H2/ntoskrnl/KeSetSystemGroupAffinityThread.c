/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x140318B30
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14025DAAC (PnpSetDeviceAffinityThread.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14026E450 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiConnectInterrupt @ 0x1402B339C (KiConnectInterrupt.c)
 *     KiAcquireInterruptConnectLock @ 0x1402B53D8 (KiAcquireInterruptConnectLock.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     KeSetSystemAffinityThreadEx @ 0x140318AD0 (KeSetSystemAffinityThreadEx.c)
 *     MiSetIdealProcessorThread @ 0x140370F20 (MiSetIdealProcessorThread.c)
 *     KiDisconnectInterruptCommon @ 0x140373CA8 (KiDisconnectInterruptCommon.c)
 *     KiInterruptDispatchCommon @ 0x1403AE3B8 (KiInterruptDispatchCommon.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140439480 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404395E0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140439830 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140439A00 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     IopPassiveInterruptWorker @ 0x14044C700 (IopPassiveInterruptWorker.c)
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
 *     IopLiveDumpCorralProcessors @ 0x1405975E0 (IopLiveDumpCorralProcessors.c)
 *     KiDynamicProcessorInitialization @ 0x1405B3EBC (KiDynamicProcessorInitialization.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405C06B8 (KiSetSystemAffinityThreadToProcessor.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405C3E08 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CBEC0 (PpmIdleInstallNewVetoList.c)
 *     HalpLoadMicrocodeSerialized @ 0x1406FF910 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PpmIdleInitializeConcurrency @ 0x140748410 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1407D50BC (CmInitializeProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x140A44630 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B4D904 (HalpHandlePreviousMcaErrors.c)
 *     HalpInitializeMce @ 0x140B4DC24 (HalpInitializeMce.c)
 *     PopEndMirroring @ 0x140B66770 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
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
 *     KeFirstGroupAffinityEx @ 0x14044FD10 (KeFirstGroupAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  unsigned __int64 Group; // r8
  char v4; // r15
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  char v7; // si
  unsigned int v8; // edi
  _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  __int64 *v11; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int16 i; // cx
  unsigned __int64 v14; // rdx
  _GROUP_AFFINITY v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0LL;
  Group = Affinity->Group;
  if ( (unsigned __int16)Group < KeActiveProcessors.Count
    && (KeActiveProcessors.Bitmap[Group] & Affinity->Mask) != 0
    && !(Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2])) )
  {
    v4 = 1;
    Affinity->Mask &= KeActiveProcessors.Bitmap[Affinity->Group];
  }
  else
  {
    v4 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  v8 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
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
        KeFirstGroupAffinityEx(&v15, CurrentThread->Affinity);
        break;
      case 2:
LABEL_45:
        if ( v4 )
        {
          BYTE2(Next[2].Next) = 1;
          v16 = 0LL;
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
      v14 = *(_QWORD *)(Group + 8LL * i + 8);
      if ( v14 )
      {
        v15.Group = i;
        v15.Mask = v14;
        break;
      }
    }
  }
LABEL_15:
  v16 = 0LL;
  v11 = 0LL;
  if ( v4 )
  {
LABEL_16:
    KiSetSystemAffinityThread(CurrentPrcb, (__int64)&v16);
    v11 = (__int64 *)v16;
    goto LABEL_17;
  }
  CurrentThread->ThreadLock = 0LL;
LABEL_17:
  if ( (WORD2(xmmword_140FC6B50) & 0x200) != 0 )
  {
    LOBYTE(Group) = 1;
    KiCpuPartitionCheckAffinitization(CurrentThread, CurrentThread->Affinity, Group, 0LL);
  }
  if ( v11 )
  {
    v16 = *v11;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v11 - 27), (struct _SINGLE_LIST_ENTRY *)&v16, 0LL);
      v11 = (__int64 *)v16;
      ++v7;
      if ( v16 )
        v16 = *(_QWORD *)v16;
      if ( (v7 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v11 );
  }
  KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  KiCheckForThreadDispatch(CurrentPrcb, CurrentIrql);
  if ( PreviousAffinity )
    *PreviousAffinity = v15;
  KeGetCurrentIrql();
}
