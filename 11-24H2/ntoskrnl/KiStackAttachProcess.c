/*
 * XREFs of KiStackAttachProcess @ 0x1402C9570
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402F7648 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     IoRaiseHardError @ 0x1403C1290 (IoRaiseHardError.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     KeForceAttachProcess @ 0x140424E30 (KeForceAttachProcess.c)
 *     MiAttachWorkingSet @ 0x1404329F4 (MiAttachWorkingSet.c)
 *     MiDeleteFinalPageTables @ 0x140450DBC (MiDeleteFinalPageTables.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140477210 (PspIsProcessReadyForRemoteThread.c)
 *     MmEnforceWorkingSetLimit @ 0x140478F0C (MmEnforceWorkingSetLimit.c)
 *     MmUpdateOldWorkingSetPages @ 0x140491190 (MmUpdateOldWorkingSetPages.c)
 *     KeCopyXfdMaskToTeb @ 0x140496918 (KeCopyXfdMaskToTeb.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1404C3800 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     KeSecureProcess @ 0x1405B5A1C (KeSecureProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BDC84 (KeSetExpectedConcurrencyCountProcess.c)
 *     KiTpWriteMemory @ 0x1405C6DC8 (KiTpWriteMemory.c)
 *     PopStateTransitionTimeoutDispatch @ 0x1405D1100 (PopStateTransitionTimeoutDispatch.c)
 *     PsAttachSession @ 0x1405E4320 (PsAttachSession.c)
 *     ExpSvmServicePageFault @ 0x140658010 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x140669BA4 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140669CCC (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x14066BEA4 (MmSetCommitReleaseEligibility.c)
 *     MiDeleteAwePageTables @ 0x140682E50 (MiDeleteAwePageTables.c)
 *     MiEmptyAccessLogs @ 0x140684820 (MiEmptyAccessLogs.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x14073ADB0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x14073C004 (KiTpReadImageData.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407458E4 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x1407741A0 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140774F18 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1407751F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140775620 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x1407776A0 (PspApplyWorkingSetLimits.c)
 *     PsStartSiloMonitor @ 0x140779370 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407795B0 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BF68 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14079CDC0 (SmHwAcceleratorPartitionMgrStart.c)
 *     EtwpUMGLEnabled @ 0x1407AA76C (EtwpUMGLEnabled.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     MiHotPatchAllProcesses @ 0x1407F3224 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     MmCreateShadowMapping @ 0x1407F6EC0 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 *     NtCreateEnclave @ 0x1407F80D0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F84C0 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     MiScrubActiveLargePage @ 0x1407FE198 (MiScrubActiveLargePage.c)
 *     MiDeleteInsertedCloneVads @ 0x1408009A4 (MiDeleteInsertedCloneVads.c)
 *     MiCopyLargeVad @ 0x140800CE4 (MiCopyLargeVad.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8304 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408D8B78 (MmAssignProcessToJob.c)
 *     NtProtectVirtualMemory @ 0x1408DA8B0 (NtProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408DB660 (EtwTiLogProtectExecVm.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     MmCreateTeb @ 0x1408DE4D4 (MmCreateTeb.c)
 *     PoEnergyContextStart @ 0x1408DEB60 (PoEnergyContextStart.c)
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x1408DF878 (PspUpdatePebForAffinityChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x1409037E0 (ExpWnfWriteStateData.c)
 *     PspSetupUserShadowStack @ 0x140914B74 (PspSetupUserShadowStack.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiInsertChildVads @ 0x14091A854 (MiInsertChildVads.c)
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x14091B210 (PsMapSystemDlls.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409358F0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x140953450 (PfSnPopulateReadList.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     EtwTiLogReadWriteVm @ 0x140992E08 (EtwTiLogReadWriteVm.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     PspQueryQuotaLimits @ 0x1409AF220 (PspQueryQuotaLimits.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D4930 (EtwpRealtimeInjectEtwBuffer.c)
 *     PspSetupUserStack @ 0x1409E0398 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409E089C (PspWow64InitThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409E3E60 (DbgkpPostFakeProcessCreateMessages.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x1409EA850 (MmProbeAndLockProcessPages.c)
 *     PspIumResolveVirtualFault @ 0x1409F03F8 (PspIumResolveVirtualFault.c)
 *     ObSetHandleAttributes @ 0x1409F4780 (ObSetHandleAttributes.c)
 *     EtwpTiQueryVad @ 0x1409F4AC0 (EtwpTiQueryVad.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A0C3A0 (EtwpCovSampEnumerateProcess.c)
 *     PspWow64SetupUserStack @ 0x140A13008 (PspWow64SetupUserStack.c)
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x140A2AB18 (MiMapImageForEnclaveUse.c)
 *     NtResetWriteWatch @ 0x140A31D20 (NtResetWriteWatch.c)
 *     SmpKeyedStoreCreate @ 0x140A383F4 (SmpKeyedStoreCreate.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A3B628 (EtwpTrackGuidEntryRegistrations.c)
 *     PspSetupReservedUserMappings @ 0x140A3D458 (PspSetupReservedUserMappings.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     MmProcessWorkingSetControl @ 0x140A434A4 (MmProcessWorkingSetControl.c)
 *     IopRaiseHardError @ 0x140A44CA0 (IopRaiseHardError.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A57F94 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x140A59AF8 (PspDeleteUserStack.c)
 *     PspCreateSecureThread @ 0x140A6BAE8 (PspCreateSecureThread.c)
 *     VmpTracingEnabledCallback @ 0x140A7EBF0 (VmpTracingEnabledCallback.c)
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A9CF34 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA3638 (MmInitializeHandBuiltProcess2.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABA85C (PspFindFirstThreadByTebValue.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspAttachSession @ 0x140AD0928 (PspAttachSession.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 *     CmpStartCLFSLog @ 0x140AE7708 (CmpStartCLFSLog.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B655BC (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140B7BF70 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140C19E34 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140C37444 (PspInitPhase3.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 *     KiInSwapSingleProcess @ 0x1402D5EF4 (KiInSwapSingleProcess.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rax
  unsigned __int8 CurrentIrql; // r14
  unsigned int v8; // r15d
  unsigned int v9; // edi
  $727077A9B6E167EAE1398C74674DC5A5 *v10; // rdx
  _KPROCESS *Process; // rax
  $D65F9090E290774A76330EBDFB7A4444 *v12; // rdi
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
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink == v10 )
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
      if ( ($D65F9090E290774A76330EBDFB7A4444 *)a3 == &CurrentThread->600 )
        CurrentThread->ApcStateIndex = 1;
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
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
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink == v10 )
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
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
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
