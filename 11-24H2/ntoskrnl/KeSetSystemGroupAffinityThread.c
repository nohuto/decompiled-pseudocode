/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x140339650
 * Callers:
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     KeSetSystemAffinityThreadEx @ 0x1403395F0 (KeSetSystemAffinityThreadEx.c)
 *     PnpSetDeviceAffinityThread @ 0x1403751EC (PnpSetDeviceAffinityThread.c)
 *     MiSetIdealProcessorThread @ 0x1403B4508 (MiSetIdealProcessorThread.c)
 *     KiConnectInterrupt @ 0x1403B70E8 (KiConnectInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1403B8B5C (KiDisconnectInterruptCommon.c)
 *     KiInterruptDispatchCommon @ 0x1403BF7F8 (KiInterruptDispatchCommon.c)
 *     PpmInstallFeedbackCounters @ 0x140433E50 (PpmInstallFeedbackCounters.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404439E0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140443B40 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140443D90 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140443F60 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     IopPassiveInterruptWorker @ 0x140456EC0 (IopPassiveInterruptWorker.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047BB30 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiAcquireInterruptConnectLock @ 0x14047F840 (KiAcquireInterruptConnectLock.c)
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
 *     IopLiveDumpCorralProcessors @ 0x14059A660 (IopLiveDumpCorralProcessors.c)
 *     KiDynamicProcessorInitialization @ 0x1405B6BFC (KiDynamicProcessorInitialization.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405C30E8 (KiSetSystemAffinityThreadToProcessor.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x1405C66D8 (KiStallBugcheckThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CE7A0 (PpmIdleInstallNewVetoList.c)
 *     HalpLoadMicrocodeSerialized @ 0x140701CD0 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PpmIdleInitializeConcurrency @ 0x14074A0E0 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1407D4BCC (CmInitializeProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x140A4DAA0 (HalpCmcWorkerRoutine.c)
 *     HalpHandlePreviousMcaErrors @ 0x140B4B8C4 (HalpHandlePreviousMcaErrors.c)
 *     HalpInitializeMce @ 0x140B4BBE4 (HalpInitializeMce.c)
 *     PopEndMirroring @ 0x140B64660 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
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
 *     KeFirstGroupAffinityEx @ 0x14045A8C0 (KeFirstGroupAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405C0050 (KiCpuPartitionCheckAffinitization.c)
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
  struct _GROUP_AFFINITY v15; // [rsp+30h] [rbp-38h] BYREF
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
  if ( (WORD2(xmmword_140FC5B10) & 0x200) != 0 )
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
