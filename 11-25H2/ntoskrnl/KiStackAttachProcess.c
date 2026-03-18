/*
 * XREFs of KiStackAttachProcess @ 0x140289A10
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020AC98 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     KeForceAttachProcess @ 0x1402C9F60 (KeForceAttachProcess.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403AE380 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     MiAttachWorkingSet @ 0x1403C313C (MiAttachWorkingSet.c)
 *     IoRaiseHardError @ 0x1404339B0 (IoRaiseHardError.c)
 *     MiDeleteFinalPageTables @ 0x14045CD60 (MiDeleteFinalPageTables.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14047AC00 (PspIsProcessReadyForRemoteThread.c)
 *     MmEnforceWorkingSetLimit @ 0x14047D754 (MmEnforceWorkingSetLimit.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404973E0 (MmUpdateOldWorkingSetPages.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1404CA1BC (MiLockDownWorkingSet.c)
 *     KeSecureProcess @ 0x1405B454C (KeSecureProcess.c)
 *     KeCopyXfdMaskToTeb @ 0x1405B4850 (KeCopyXfdMaskToTeb.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BC648 (KeSetExpectedConcurrencyCountProcess.c)
 *     KiTpWriteMemory @ 0x1405C506C (KiTpWriteMemory.c)
 *     PopStateTransitionTimeoutDispatch @ 0x1405CEF80 (PopStateTransitionTimeoutDispatch.c)
 *     PsAttachSession @ 0x1405DABA0 (PsAttachSession.c)
 *     ExpSvmServicePageFault @ 0x14064DAD0 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x14065CEFC (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14065D024 (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x14065F194 (MmSetCommitReleaseEligibility.c)
 *     MiDeleteAwePageTables @ 0x140676440 (MiDeleteAwePageTables.c)
 *     MiEmptyAccessLogs @ 0x140677E70 (MiEmptyAccessLogs.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x140730E60 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x1407320B4 (KiTpReadImageData.c)
 *     PfSnAppLaunchScenarioControl @ 0x14073B5D4 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x1407645B0 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140765328 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140765604 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140765A30 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x140767A00 (PspApplyWorkingSetLimits.c)
 *     PsStartSiloMonitor @ 0x1407695C0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140769800 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x14076B05C (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14078CA98 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14078D8F0 (SmHwAcceleratorPartitionMgrStart.c)
 *     EtwpUMGLEnabled @ 0x14079B25C (EtwpUMGLEnabled.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     MmCreateShadowMapping @ 0x1407E68BC (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1407E6B0C (MmDeleteShadowMapping.c)
 *     NtCreateEnclave @ 0x1407E7AD0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407E7EC0 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     MiScrubActiveLargePage @ 0x1407EDB98 (MiScrubActiveLargePage.c)
 *     MiDeleteInsertedCloneVads @ 0x1407F03A4 (MiDeleteInsertedCloneVads.c)
 *     MiCopyLargeVad @ 0x1407F06EC (MiCopyLargeVad.c)
 *     PoEnergyContextStart @ 0x14083B7A8 (PoEnergyContextStart.c)
 *     PspSetupUserProcessAddressSpace @ 0x14083C23C (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x14083C4B8 (PspUpdatePebForAffinityChange.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     PfSnPopulateReadList @ 0x1408C1D90 (PfSnPopulateReadList.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8888 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408D9124 (MmAssignProcessToJob.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x1408E5390 (ExpWnfWriteStateData.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1408E8F84 (SmProcessStoreMemoryPriorityRequest.c)
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     NtProtectVirtualMemory @ 0x1408F7510 (NtProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408F8258 (EtwTiLogProtectExecVm.c)
 *     MmCreateTeb @ 0x1408FA3C4 (MmCreateTeb.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1409053A8 (PsMapSystemDlls.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140990F70 (EtwpRealtimeInjectEtwBuffer.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409B9A84 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409BA9F8 (DbgkpPostFakeProcessCreateMessages.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     SmpKeyedStoreCreate @ 0x1409C1434 (SmpKeyedStoreCreate.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     EtwTiLogReadWriteVm @ 0x1409C4FE0 (EtwTiLogReadWriteVm.c)
 *     NtLoadEnclaveData @ 0x1409CAD50 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1409CBB80 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1409CC068 (MiMapImageForEnclaveUse.c)
 *     PspQueryQuotaLimits @ 0x1409CDB50 (PspQueryQuotaLimits.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     PspSetupUserStack @ 0x1409EB438 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F5420 (EtwpCovSampEnumerateProcess.c)
 *     MmProbeAndLockProcessPages @ 0x1409FCD70 (MmProbeAndLockProcessPages.c)
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
 *     PspIumResolveVirtualFault @ 0x1409FDD3C (PspIumResolveVirtualFault.c)
 *     ObSetHandleAttributes @ 0x1409FE7C0 (ObSetHandleAttributes.c)
 *     EtwpTiQueryVad @ 0x1409FEB00 (EtwpTiQueryVad.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409FED50 (EtwpTrackGuidEntryRegistrations.c)
 *     PspWow64SetupUserStack @ 0x140A14418 (PspWow64SetupUserStack.c)
 *     PspSetupUserShadowStack @ 0x140A14F44 (PspSetupUserShadowStack.c)
 *     NtResetWriteWatch @ 0x140A37110 (NtResetWriteWatch.c)
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x140A40F24 (MiInsertChildVads.c)
 *     PspSetupReservedUserMappings @ 0x140A4428C (PspSetupReservedUserMappings.c)
 *     MmProcessWorkingSetControl @ 0x140A4A36C (MmProcessWorkingSetControl.c)
 *     IopRaiseHardError @ 0x140A4B9B0 (IopRaiseHardError.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A5C6C0 (EtwpPsProvProcessEnumCallback.c)
 *     PspDeleteUserStack @ 0x140A5F668 (PspDeleteUserStack.c)
 *     PspCreateSecureThread @ 0x140A6FD5C (PspCreateSecureThread.c)
 *     VmpTracingEnabledCallback @ 0x140A80370 (VmpTracingEnabledCallback.c)
 *     MiCombineIdenticalPages @ 0x140A961D0 (MiCombineIdenticalPages.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A9C2B4 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA4AB4 (MmInitializeHandBuiltProcess2.c)
 *     MiQueryProcessActivePatches @ 0x140AA8E54 (MiQueryProcessActivePatches.c)
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABB5E0 (PspFindFirstThreadByTebValue.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x140AC8888 (PspAttachSession.c)
 *     CmpStartCLFSLog @ 0x140AD5500 (CmpStartCLFSLog.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B5339C (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140C06D94 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140C24038 (PspInitPhase3.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x14028A690 (KiSetAddressPolicy.c)
 *     KiInSwapSingleProcess @ 0x1402F28E4 (KiInSwapSingleProcess.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403C4700 (HvlSwitchVirtualAddressSpace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r14
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  int v9; // r15d
  unsigned int v10; // esi
  $727077A9B6E167EAE1398C74674DC5A5 *v11; // rdx
  _KPROCESS *Process; // rax
  $D65F9090E290774A76330EBDFB7A4444 *v13; // rsi
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  struct _KPRCB *v16; // rcx
  _KPROCESS *v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rbp
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  struct _KTHREAD *v22; // r8
  _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *v24; // rcx
  unsigned __int64 v25; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  struct _KTHREAD *v27; // r8
  struct _KTHREAD **v28; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v30; // r13
  unsigned __int64 GroupIndex; // r15
  __int64 v32; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // ebp
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // esi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  int v45; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  LOBYTE(ActiveProcessors) = (a2 & 2) == 0;
  if ( (((KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) & (unsigned __int8)ActiveProcessors) != 0
    || (*(_DWORD *)&BugCheckParameter1->0 & 0x800) != 0 )
  {
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  }
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    v9 = a2 & 2;
    v45 = v9;
    if ( (a2 & 2) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1) )
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
    }
    v11 = &CurrentThread->152;
    Process = CurrentThread->ApcState.Process;
    if ( CurrentThread->ApcStateIndex )
    {
      *(_QWORD *)(a3 + 32) = Process;
      *(_BYTE *)(a3 + 40) = CurrentThread->ApcState.InProgressFlags;
      *(_BYTE *)(a3 + 41) = CurrentThread->ApcState.KernelApcPending;
      *(_BYTE *)(a3 + 42) = CurrentThread->ApcState.UserApcPendingAll;
      Flink = v11->ApcState.ApcListHead[0].Flink;
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v11->ApcState.ApcListHead[0].Flink == v11 )
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
      v27 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v28 = (struct _KTHREAD **)(a3 + 16);
      if ( v27 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        *(_QWORD *)(a3 + 24) = a3 + 16;
        *v28 = (struct _KTHREAD *)v28;
        *(_BYTE *)(a3 + 42) = 0;
      }
      else
      {
        v38 = CurrentThread->ApcState.ApcListHead[1].Blink;
        *v28 = v27;
        *(_QWORD *)(a3 + 24) = v38;
        v27->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v28;
        v38->Flink = (struct _LIST_ENTRY *)v28;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      if ( ($D65F9090E290774A76330EBDFB7A4444 *)a3 == &CurrentThread->600 )
        CurrentThread->ApcStateIndex = 1;
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess((ULONG_PTR)CurrentThread);
        v40 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v40);
        v41 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v41 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v40) )
            {
              HvlNotifyLongSpinWait(v41);
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
      if ( !v9 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v30 = *(_QWORD *)(a3 + 32);
      GroupIndex = CurrentPrcb->GroupIndex;
      v32 = 8LL * CurrentPrcb->Group;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->ActiveProcessors->8 + v32),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v34 = DirectoryTableBase | 0x8000000000000000uLL;
        if ( (DirectoryTableBase & 2) == 0 )
          v34 = BugCheckParameter1->DirectoryTableBase;
        __writegsqword(0xB000u, v34);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v39 = __readcr4();
        if ( (v39 & 0x20080) != 0 )
        {
          __writecr4(v39 ^ 0x80);
          __writecr4(v39);
        }
        else
        {
          v43 = __readcr3();
          __writecr3(v43);
        }
      }
      ActiveProcessors = *(volatile _KAFFINITY_EX **)(v30 + 128);
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&ActiveProcessors->8 + v32), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v45 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        LOBYTE(ActiveProcessors) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
    else
    {
      v13 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      v14 = v11->ApcState.ApcListHead[0].Flink;
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v11->ApcState.ApcListHead[0].Flink == v11 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v13;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        v15 = CurrentThread->ApcState.ApcListHead[0].Blink;
        v13->SavedApcState.ApcListHead[0].Flink = v14;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = v15;
        v14->Blink = (struct _LIST_ENTRY *)v13;
        v15->Flink = (struct _LIST_ENTRY *)v13;
      }
      v22 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v23 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v22 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v23->Flink = v23;
        CurrentThread->SavedApcState.UserApcPendingAll = 0;
      }
      else
      {
        v24 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v23->Flink = (struct _LIST_ENTRY *)v22;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v24;
        v22->Header.WaitListHead.Flink = v23;
        v24->Flink = v23;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      CurrentThread->ApcStateIndex = 1;
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess((ULONG_PTR)CurrentThread);
        v35 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v35);
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v36 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v35) )
            {
              HvlNotifyLongSpinWait(v36);
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
      if ( !v9 )
        CurrentThread->ThreadLock = 0LL;
      v16 = KeGetCurrentPrcb();
      v17 = CurrentThread->SavedApcState.Process;
      v18 = v16->GroupIndex;
      v19 = 8LL * v16->Group;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->ActiveProcessors->8 + v19),
        v18);
      v20 = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v21 = v20 | 0x8000000000000000uLL;
        if ( (v20 & 2) == 0 )
          v21 = BugCheckParameter1->DirectoryTableBase;
        __writegsqword(0xB000u, v21);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(v20);
      else
        __writecr3(v20);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v25 = __readcr4();
        if ( (v25 & 0x20080) != 0 )
        {
          __writecr4(v25 ^ 0x80);
          __writecr4(v25);
        }
        else
        {
          v42 = __readcr3();
          __writecr3(v42);
        }
      }
      ActiveProcessors = v17->ActiveProcessors;
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&ActiveProcessors->8 + v19), v18);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v45 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        LOBYTE(ActiveProcessors) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      *(_QWORD *)(a3 + 32) = 0LL;
    }
  }
  return (char)ActiveProcessors;
}
