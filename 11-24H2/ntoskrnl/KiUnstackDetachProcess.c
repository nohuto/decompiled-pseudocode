/*
 * XREFs of KiUnstackDetachProcess @ 0x140321EC0
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x140210350 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     PsQueryProcessCommandLine @ 0x140246E50 (PsQueryProcessCommandLine.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140247290 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiGetWorkingSetInfoEx @ 0x140267310 (MiGetWorkingSetInfoEx.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     PspDetachSession @ 0x140348AEC (PspDetachSession.c)
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E000 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14039A348 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403CCFA8 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403CD0AC (CmSiReleaseProcessLockedPagesCharge.c)
 *     IoRaiseHardError @ 0x1403D5B40 (IoRaiseHardError.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     SmQuerySystemInformation @ 0x14044AA18 (SmQuerySystemInformation.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044FA74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     MiDeleteFinalPageTables @ 0x14045BA24 (MiDeleteFinalPageTables.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14047B598 (PspIsProcessReadyForRemoteThread.c)
 *     MmEnforceWorkingSetLimit @ 0x14047DC7C (MmEnforceWorkingSetLimit.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14048B408 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     MmUpdateOldWorkingSetPages @ 0x140496800 (MmUpdateOldWorkingSetPages.c)
 *     KeCopyXfdMaskToTeb @ 0x14049BDE8 (KeCopyXfdMaskToTeb.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A8CB0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiFlushAllPages @ 0x1404C8494 (MiFlushAllPages.c)
 *     MiLockDownWorkingSet @ 0x1404CA2DC (MiLockDownWorkingSet.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     KeSecureProcess @ 0x1405B843C (KeSecureProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405C06B0 (KeSetExpectedConcurrencyCountProcess.c)
 *     KiTpWriteMemory @ 0x1405C9698 (KiTpWriteMemory.c)
 *     ExpSvmServicePageFault @ 0x140659970 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406689CC (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140668AF4 (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x14066ACD4 (MmSetCommitReleaseEligibility.c)
 *     MiDeleteAwePageTables @ 0x140681C60 (MiDeleteAwePageTables.c)
 *     MiEmptyAccessLogs @ 0x140683670 (MiEmptyAccessLogs.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     DbgkQueueUserExceptionReport @ 0x140707404 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x1407125F4 (IopIsNotNativeDriverImage.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x14073CE80 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x14073E0D4 (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x140741D24 (AlpcpForceUnlinkSecureView.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407475F4 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x140773F80 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140774CF8 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140774FD4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140775400 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x140777480 (PspApplyWorkingSetLimits.c)
 *     PsTerminateMinimalProcess @ 0x140778C58 (PsTerminateMinimalProcess.c)
 *     PsStartSiloMonitor @ 0x140779270 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407794B0 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     PspWow64ReadOrWriteThreadCpuAreaOld @ 0x14077A5B0 (PspWow64ReadOrWriteThreadCpuAreaOld.c)
 *     PspAllocatePartition @ 0x14077ABFC (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BE58 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14079CB7C (SmHwAcceleratorPartitionMgrCleanup.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14079CCB0 (SmHwAcceleratorPartitionMgrStart.c)
 *     VmpPrefetchWorker @ 0x14079F550 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1407AA62C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1407AA720 (EtwpUpdateProcessTracingCallback.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E639C (CmpAddRemoveContainerToCLFSLog.c)
 *     MiHotPatchAllProcesses @ 0x1407F2C54 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MmCreateShadowMapping @ 0x1407F674C (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1407F699C (MmDeleteShadowMapping.c)
 *     NtCreateEnclave @ 0x1407F7960 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F7D50 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1407FB110 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubActiveLargePage @ 0x1407FDA28 (MiScrubActiveLargePage.c)
 *     MiDeleteInsertedCloneVads @ 0x140800264 (MiDeleteInsertedCloneVads.c)
 *     MiCopyLargeVad @ 0x1408005A4 (MiCopyLargeVad.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpPrepareViewForDelivery @ 0x140894200 (AlpcpPrepareViewForDelivery.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x1408AD580 (ExpWnfWriteStateData.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     PspDeleteUserStack @ 0x1408DB270 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x1408DB490 (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x1408DB8A0 (MmFreeVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1408DC680 (NtProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408DD430 (EtwTiLogProtectExecVm.c)
 *     PspSetupUserShadowStack @ 0x1408DDFB8 (PspSetupUserShadowStack.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     AlpcpRestoreWriteAccess @ 0x1408E48E8 (AlpcpRestoreWriteAccess.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408E7AC0 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408E8398 (MmAssignProcessToJob.c)
 *     MmIsFileMapped @ 0x1408EF744 (MmIsFileMapped.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1408F560C (MiUnmapImageInSystemSpace.c)
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1408F8E70 (PsMapSystemDlls.c)
 *     PoEnergyContextStart @ 0x140907444 (PoEnergyContextStart.c)
 *     PspSetupUserProcessAddressSpace @ 0x140907EE0 (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x14090815C (PspUpdatePebForAffinityChange.c)
 *     PspWriteTebImpersonationInfo @ 0x140911080 (PspWriteTebImpersonationInfo.c)
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x140939F18 (DbgkSendSystemDllMessages.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A830 (EtwpPsProvProcessEnumCallback.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     EtwpProcessEnumCallback @ 0x14094ACC0 (EtwpProcessEnumCallback.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x14094C00C (EtwTraceAppStateChange.c)
 *     EtwpWriteProcessEvent @ 0x14094CE4C (EtwpWriteProcessEvent.c)
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 *     MmPrefetchVirtualMemory @ 0x140953128 (MmPrefetchVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     EtwTiLogReadWriteVm @ 0x1409A99F8 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     PspQueryQuotaLimits @ 0x1409B7AE0 (PspQueryQuotaLimits.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MmCreateTeb @ 0x1409C3084 (MmCreateTeb.c)
 *     MiInsertChildVads @ 0x1409C407C (MiInsertChildVads.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D9E20 (EtwpRealtimeInjectEtwBuffer.c)
 *     ExSweepHandleTable @ 0x1409E502C (ExSweepHandleTable.c)
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
 *     MiInSwapStoreWorker @ 0x140A4CEB0 (MiInSwapStoreWorker.c)
 *     IopRaiseHardError @ 0x140A4E020 (IopRaiseHardError.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A5FA44 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspCreateSecureThread @ 0x140A72708 (PspCreateSecureThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     VmpTracingEnabledCallback @ 0x140A840D0 (VmpTracingEnabledCallback.c)
 *     MiCombineIdenticalPages @ 0x140A9C0E0 (MiCombineIdenticalPages.c)
 *     MiUnmapImageForEnclaveUse @ 0x140AA1BA4 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA8538 (MmInitializeHandBuiltProcess2.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     DbgkpMarkProcessPeb @ 0x140AB0F14 (DbgkpMarkProcessPeb.c)
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABF77C (PspFindFirstThreadByTebValue.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     CmpStartCLFSLog @ 0x140AE5E28 (CmpStartCLFSLog.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B634EC (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 *     CmSaveKeyToBuffer @ 0x140BB9010 (CmSaveKeyToBuffer.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     EmpMapPhysicalAddress @ 0x140C17E34 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140C35304 (PspInitPhase3.c)
 *     EmpCacheBiosDate @ 0x140C6288C (EmpCacheBiosDate.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140321A30 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404D48A0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, char a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  int v6; // r12d
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // edi
  unsigned __int8 v9; // dl
  $81B80DCEA5A02D890AB7B2872B48AC01 *v10; // rdi
  struct _KTHREAD *Flink; // rdx
  __int64 v12; // rdx
  struct _LIST_ENTRY *v13; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *v15; // r8
  unsigned __int64 GroupIndex; // r15
  __int64 v17; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  bool v21; // al
  __int64 v22; // r8
  int v23; // edx
  bool v24; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // si
  unsigned __int32 Value; // eax
  unsigned __int32 v30; // ett
  signed __int64 *p_SwapListEntry; // rdx
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-48h] BYREF
  __int128 v36; // [rsp+24h] [rbp-44h]
  unsigned __int8 v37; // [rsp+70h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 32);
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess(a1, a2);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v6 = a2 & 2;
      if ( (a2 & 2) != 0 )
      {
        v9 = 15;
        v37 = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        v37 = CurrentIrql;
        v8 = 0;
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
        v9 = v37;
      }
      if ( CurrentThread->ApcState.KernelApcPending )
      {
        while ( !CurrentThread->SpecialApcDisable )
        {
          if ( v9 )
            break;
          KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 0);
          KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, &v37);
          if ( !CurrentThread->ApcState.KernelApcPending )
            break;
          v9 = v37;
        }
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($81B80DCEA5A02D890AB7B2872B48AC01 *)v10->ApcState.ApcListHead[0].Flink != v10)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
      CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
      CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
      CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
      Flink = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[0].Flink;
      if ( Flink == (struct _KTHREAD *)&CurrentThread->600 )
      {
        CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
        v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v10;
        Blink->Flink = (struct _LIST_ENTRY *)v10;
      }
      v12 = (__int64)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v13 = &CurrentThread->ApcState.ApcListHead[1];
      if ( (unsigned __int8 *)v12 == &CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v13->Flink = v13;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v26 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v13->Flink = (struct _LIST_ENTRY *)v12;
        CurrentThread->ApcState.ApcListHead[1].Blink = v26;
        *(_QWORD *)(v12 + 8) = v13;
        v26->Flink = v13;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v6 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentThread->ApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v17 = 8LL * CurrentPrcb->Group;
      _interlockedbittestandset64((volatile signed __int32 *)((char *)&v15->ActiveProcessors->8 + v17), GroupIndex);
      DirectoryTableBase = v15->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v19 = DirectoryTableBase | 0x8000000000000000uLL;
        if ( (DirectoryTableBase & 2) == 0 )
          v19 = v15->DirectoryTableBase;
        __writegsqword(0xB000u, v19);
        KiSetAddressPolicy(v15->AddressPolicy, v12);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v27 = __readcr4();
        if ( (v27 & 0x20080) != 0 )
        {
          __writecr4(v27 ^ 0x80);
          __writecr4(v27);
        }
        else
        {
          v34 = __readcr3();
          __writecr3(v34);
        }
      }
      result = (__int64)Process->ActiveProcessors;
      _interlockedbittestandreset64((volatile signed __int32 *)(result + v17 + 8), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v6 )
      {
        v20 = v37;
        if ( KiIrqlFlags )
          result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v37);
        __writecr8(v20);
      }
      if ( (a2 & 1) == 0 )
      {
        result = _InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8;
        if ( (_DWORD)result == 8 )
        {
          v28 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v28, 2LL);
          KiAcquireKobjectLockSafe(&Process->Header.Lock);
          Value = Process->StackCount.Value;
          if ( (Value & 7) == 0 && Process->ThreadListHead.Flink != &Process->ThreadListHead )
          {
            while ( Value < 8 )
            {
              v30 = Value;
              Value = _InterlockedCompareExchange(&Process->StackCount.Value, Value & 0xFFFFFFF8 | 3, Value);
              if ( v30 == Value )
              {
                _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
                p_SwapListEntry = (signed __int64 *)&Process->SwapListEntry;
                _m_prefetchw(&KiProcessOutSwapListHead);
                v32 = KiProcessOutSwapListHead;
                do
                {
                  *p_SwapListEntry = v32;
                  v33 = v32;
                  v32 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)p_SwapListEntry, v32);
                }
                while ( v32 != v33 );
                if ( !v32 )
                  KeSetEvent(&KiSwapEvent, 10, 0);
                goto LABEL_64;
              }
            }
          }
          _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
LABEL_64:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
          result = v28;
          __writecr8(v28);
        }
      }
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v36 = 0LL;
        if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
        {
          v21 = HalpDisableInterrupts();
          v23 = *(_DWORD *)(v22 + 168);
          v24 = v21;
          *(_DWORD *)(v22 + 168) = v23 | 2;
          if ( !v23 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v24 )
            _enable();
        }
        v35 = 5;
        return HalpInterruptSendIpi(&v35, 0x1Fu);
      }
    }
  }
  return result;
}
