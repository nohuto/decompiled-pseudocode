/*
 * XREFs of KiStackAttachProcess @ 0x1403209E0
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x140210350 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiAttachWorkingSet @ 0x1403792E0 (MiAttachWorkingSet.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14039A348 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     IoRaiseHardError @ 0x1403D5B40 (IoRaiseHardError.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     KeForceAttachProcess @ 0x14042D8D0 (KeForceAttachProcess.c)
 *     MiDeleteFinalPageTables @ 0x14045BA24 (MiDeleteFinalPageTables.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14047B598 (PspIsProcessReadyForRemoteThread.c)
 *     MmEnforceWorkingSetLimit @ 0x14047DC7C (MmEnforceWorkingSetLimit.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     MmUpdateOldWorkingSetPages @ 0x140496800 (MmUpdateOldWorkingSetPages.c)
 *     KeCopyXfdMaskToTeb @ 0x14049BDE8 (KeCopyXfdMaskToTeb.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A8CB0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1404CA2DC (MiLockDownWorkingSet.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     KeSecureProcess @ 0x1405B843C (KeSecureProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405C06B0 (KeSetExpectedConcurrencyCountProcess.c)
 *     KiTpWriteMemory @ 0x1405C9698 (KiTpWriteMemory.c)
 *     PopStateTransitionTimeoutDispatch @ 0x1405D39E0 (PopStateTransitionTimeoutDispatch.c)
 *     PsAttachSession @ 0x1405E6D20 (PsAttachSession.c)
 *     ExpSvmServicePageFault @ 0x140659970 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406689CC (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140668AF4 (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x14066ACD4 (MmSetCommitReleaseEligibility.c)
 *     MiDeleteAwePageTables @ 0x140681C60 (MiDeleteAwePageTables.c)
 *     MiEmptyAccessLogs @ 0x140683670 (MiEmptyAccessLogs.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x14073CE80 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x14073E0D4 (KiTpReadImageData.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407475F4 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x140773F80 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140774CF8 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140774FD4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140775400 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x140777480 (PspApplyWorkingSetLimits.c)
 *     PsStartSiloMonitor @ 0x140779270 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407794B0 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     PspWow64ReadOrWriteThreadCpuAreaOld @ 0x14077A5B0 (PspWow64ReadOrWriteThreadCpuAreaOld.c)
 *     PspAllocatePartition @ 0x14077ABFC (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BE58 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14079CCB0 (SmHwAcceleratorPartitionMgrStart.c)
 *     EtwpUMGLEnabled @ 0x1407AA62C (EtwpUMGLEnabled.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     MiHotPatchAllProcesses @ 0x1407F2C54 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MmCreateShadowMapping @ 0x1407F674C (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1407F699C (MmDeleteShadowMapping.c)
 *     NtCreateEnclave @ 0x1407F7960 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F7D50 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     MiScrubActiveLargePage @ 0x1407FDA28 (MiScrubActiveLargePage.c)
 *     MiDeleteInsertedCloneVads @ 0x140800264 (MiDeleteInsertedCloneVads.c)
 *     MiCopyLargeVad @ 0x1408005A4 (MiCopyLargeVad.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x1408AD580 (ExpWnfWriteStateData.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     PspDeleteUserStack @ 0x1408DB270 (PspDeleteUserStack.c)
 *     NtProtectVirtualMemory @ 0x1408DC680 (NtProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408DD430 (EtwTiLogProtectExecVm.c)
 *     PspSetupUserShadowStack @ 0x1408DDFB8 (PspSetupUserShadowStack.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408E7AC0 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408E8398 (MmAssignProcessToJob.c)
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1408F8E70 (PsMapSystemDlls.c)
 *     PoEnergyContextStart @ 0x140907444 (PoEnergyContextStart.c)
 *     PspSetupUserProcessAddressSpace @ 0x140907EE0 (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x14090815C (PspUpdatePebForAffinityChange.c)
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x140939F18 (DbgkSendSystemDllMessages.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A830 (EtwpPsProvProcessEnumCallback.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     EtwTiLogReadWriteVm @ 0x1409A99F8 (EtwTiLogReadWriteVm.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     PspQueryQuotaLimits @ 0x1409B7AE0 (PspQueryQuotaLimits.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MmCreateTeb @ 0x1409C3084 (MmCreateTeb.c)
 *     MiInsertChildVads @ 0x1409C407C (MiInsertChildVads.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D9E20 (EtwpRealtimeInjectEtwBuffer.c)
 *     PspSetupUserStack @ 0x1409E5B08 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409E600C (PspWow64InitThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409E8EA0 (DbgkpPostFakeProcessCreateMessages.c)
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x1409F6900 (MmProbeAndLockProcessPages.c)
 *     PspIumResolveVirtualFault @ 0x1409F7A88 (PspIumResolveVirtualFault.c)
 *     ObSetHandleAttributes @ 0x1409FBA40 (ObSetHandleAttributes.c)
 *     EtwpTiQueryVad @ 0x1409FBD80 (EtwpTiQueryVad.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A13C40 (EtwpCovSampEnumerateProcess.c)
 *     PspWow64SetupUserStack @ 0x140A1A7CC (PspWow64SetupUserStack.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     NtResetWriteWatch @ 0x140A3C540 (NtResetWriteWatch.c)
 *     SmpKeyedStoreCreate @ 0x140A42B64 (SmpKeyedStoreCreate.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A45B44 (EtwpTrackGuidEntryRegistrations.c)
 *     PspSetupReservedUserMappings @ 0x140A474E8 (PspSetupReservedUserMappings.c)
 *     MmProcessWorkingSetControl @ 0x140A4C914 (MmProcessWorkingSetControl.c)
 *     IopRaiseHardError @ 0x140A4E020 (IopRaiseHardError.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A5FA44 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspCreateSecureThread @ 0x140A72708 (PspCreateSecureThread.c)
 *     VmpTracingEnabledCallback @ 0x140A840D0 (VmpTracingEnabledCallback.c)
 *     MiCombineIdenticalPages @ 0x140A9C0E0 (MiCombineIdenticalPages.c)
 *     MiUnmapImageForEnclaveUse @ 0x140AA1BA4 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA8538 (MmInitializeHandBuiltProcess2.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABF77C (PspFindFirstThreadByTebValue.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspAttachSession @ 0x140AD25B8 (PspAttachSession.c)
 *     CmpStartCLFSLog @ 0x140AE5E28 (CmpStartCLFSLog.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B634EC (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140C17E34 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140C35304 (PspInitPhase3.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInSwapSingleProcess @ 0x1402A67C4 (KiInSwapSingleProcess.c)
 *     KiSetAddressPolicy @ 0x140321A30 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404D48A0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rax
  unsigned __int8 CurrentIrql; // r14
  unsigned int v8; // r15d
  unsigned int v9; // edi
  $81B80DCEA5A02D890AB7B2872B48AC01 *v10; // rdx
  _KPROCESS *Process; // rax
  $5C03C5BEA33A63562AF6B003092C9991 *v12; // rdi
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  struct _KPRCB *v15; // rax
  _KPROCESS *v16; // r13
  unsigned __int64 v17; // r15
  __int64 v18; // r12
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  struct _KTHREAD *v21; // r8
  _LIST_ENTRY *v22; // rax
  struct _LIST_ENTRY *v23; // rcx
  unsigned __int64 v24; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  struct _KTHREAD *v26; // r9
  struct _KTHREAD **v27; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v29; // r13
  unsigned __int64 GroupIndex; // r15
  __int64 Group; // r12
  unsigned __int64 DirectoryTableBase; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // edi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v43; // [rsp+70h] [rbp+18h]

  v43 = a3;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v4) = KeGetPcr()->Prcb.DpcRequestSummary;
  CurrentIrql = 0;
  if ( (v4 & 0x10001) != 0 && (a2 & 2) == 0 || (*(_DWORD *)&BugCheckParameter1->0 & 0x800) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    v8 = 0;
    if ( (a2 & 2) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
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
      a3 = v43;
    }
    v10 = &CurrentThread->152;
    Process = CurrentThread->ApcState.Process;
    if ( CurrentThread->ApcStateIndex )
    {
      *(_QWORD *)(a3 + 32) = Process;
      *(_BYTE *)(a3 + 40) = CurrentThread->ApcState.InProgressFlags;
      *(_BYTE *)(a3 + 41) = CurrentThread->ApcState.KernelApcPending;
      *(_BYTE *)(a3 + 42) = CurrentThread->ApcState.UserApcPendingAll;
      Flink = v10->ApcState.ApcListHead[0].Flink;
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v10->ApcState.ApcListHead[0].Flink == v10 )
      {
        *(_QWORD *)(a3 + 8) = a3;
        *(_QWORD *)a3 = a3;
        *(_BYTE *)(a3 + 41) = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        *(_QWORD *)a3 = Flink;
        *(_QWORD *)(a3 + 8) = Blink;
        Flink->Blink = (struct _LIST_ENTRY *)a3;
        Blink->Flink = (struct _LIST_ENTRY *)a3;
      }
      v26 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v27 = (struct _KTHREAD **)(a3 + 16);
      if ( v26 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        *(_QWORD *)(a3 + 24) = a3 + 16;
        *v27 = (struct _KTHREAD *)v27;
        *(_BYTE *)(a3 + 42) = 0;
      }
      else
      {
        v36 = CurrentThread->ApcState.ApcListHead[1].Blink;
        *v27 = v26;
        *(_QWORD *)(a3 + 24) = v36;
        v26->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v27;
        v36->Flink = (struct _LIST_ENTRY *)v27;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      if ( ($5C03C5BEA33A63562AF6B003092C9991 *)a3 == &CurrentThread->600 )
        CurrentThread->ApcStateIndex = 1;
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess((ULONG_PTR)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql);
        v38 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v38, 2LL);
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v39 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v39);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        a3 = v43;
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      if ( (a2 & 2) == 0 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = *(_QWORD *)(a3 + 32);
      GroupIndex = CurrentPrcb->GroupIndex;
      Group = CurrentPrcb->Group;
      _interlockedbittestandset64(
        (volatile signed __int32 *)&BugCheckParameter1->ActiveProcessors->Bitmap[Group],
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v33 = DirectoryTableBase | 0x8000000000000000uLL;
        if ( (DirectoryTableBase & 2) == 0 )
          v33 = BugCheckParameter1->DirectoryTableBase;
        __writegsqword(0xB000u, v33);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v37 = __readcr4();
        if ( (v37 & 0x20080) != 0 )
        {
          __writecr4(v37 ^ 0x80);
          __writecr4(v37);
        }
        else
        {
          v41 = __readcr3();
          __writecr3(v41);
        }
      }
      v4 = *(_QWORD *)(v29 + 128);
      _interlockedbittestandreset64((volatile signed __int32 *)(v4 + 8 * Group + 8), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( (a2 & 2) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        LODWORD(v4) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
    else
    {
      v12 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      v13 = v10->ApcState.ApcListHead[0].Flink;
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v10->ApcState.ApcListHead[0].Flink == v10 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v12->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        v14 = CurrentThread->ApcState.ApcListHead[0].Blink;
        v12->SavedApcState.ApcListHead[0].Flink = v13;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = v14;
        v13->Blink = (struct _LIST_ENTRY *)v12;
        v14->Flink = (struct _LIST_ENTRY *)v12;
      }
      v21 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v22 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v21 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v22->Flink = v22;
        CurrentThread->SavedApcState.UserApcPendingAll = 0;
      }
      else
      {
        v23 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v22->Flink = (struct _LIST_ENTRY *)v21;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v23;
        v21->Header.WaitListHead.Flink = v22;
        v23->Flink = v22;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      CurrentThread->ApcStateIndex = 1;
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess((ULONG_PTR)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql);
        v34 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v34, 2LL);
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
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      if ( (a2 & 2) == 0 )
        CurrentThread->ThreadLock = 0LL;
      v15 = KeGetCurrentPrcb();
      v16 = CurrentThread->SavedApcState.Process;
      v17 = v15->GroupIndex;
      v18 = v15->Group;
      _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter1->ActiveProcessors->Bitmap[v18], v17);
      v19 = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v20 = v19 | 0x8000000000000000uLL;
        if ( (v19 & 2) == 0 )
          v20 = BugCheckParameter1->DirectoryTableBase;
        __writegsqword(0xB000u, v20);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(v19);
      else
        __writecr3(v19);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v24 = __readcr4();
        if ( (v24 & 0x20080) != 0 )
        {
          __writecr4(v24 ^ 0x80);
          __writecr4(v24);
        }
        else
        {
          v40 = __readcr3();
          __writecr3(v40);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)&v16->ActiveProcessors->Bitmap[v18], v17);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( (a2 & 2) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      LODWORD(v4) = v43;
      *(_QWORD *)(v43 + 32) = 0LL;
    }
  }
  return v4;
}
