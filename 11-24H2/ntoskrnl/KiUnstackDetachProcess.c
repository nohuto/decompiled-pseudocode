/*
 * XREFs of KiUnstackDetachProcess @ 0x1402CAA50
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiGetWorkingSetInfoEx @ 0x14025E8F0 (MiGetWorkingSetInfoEx.c)
 *     MiFlushAllPages @ 0x1402653D4 (MiFlushAllPages.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     PsQueryProcessCommandLine @ 0x1402E1810 (PsQueryProcessCommandLine.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402E1B30 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1402F41E0 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402F7648 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     SmQuerySystemInformation @ 0x140375D70 (SmQuerySystemInformation.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377D20 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IoRaiseHardError @ 0x1403C1290 (IoRaiseHardError.c)
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     PspDetachSession @ 0x1403C252C (PspDetachSession.c)
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiDeleteFinalPageTables @ 0x140450DBC (MiDeleteFinalPageTables.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x14046C798 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14046C89C (CmSiReleaseProcessLockedPagesCharge.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140477210 (PspIsProcessReadyForRemoteThread.c)
 *     MmEnforceWorkingSetLimit @ 0x140478F0C (MmEnforceWorkingSetLimit.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1404861DC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
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
 *     ExpSvmServicePageFault @ 0x140658010 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x140669BA4 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140669CCC (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x14066BEA4 (MmSetCommitReleaseEligibility.c)
 *     MiDeleteAwePageTables @ 0x140682E50 (MiDeleteAwePageTables.c)
 *     MiEmptyAccessLogs @ 0x140684820 (MiEmptyAccessLogs.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     DbgkQueueUserExceptionReport @ 0x140704FC4 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1407051D0 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x140710184 (IopIsNotNativeDriverImage.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x14073ADB0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x14073C004 (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x14073FC54 (AlpcpForceUnlinkSecureView.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407458E4 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1407741A0 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140774F18 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1407751F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140775620 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x1407776A0 (PspApplyWorkingSetLimits.c)
 *     PsTerminateMinimalProcess @ 0x140778D58 (PsTerminateMinimalProcess.c)
 *     PsStartSiloMonitor @ 0x140779370 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407795B0 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BF68 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14079CC8C (SmHwAcceleratorPartitionMgrCleanup.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14079CDC0 (SmHwAcceleratorPartitionMgrStart.c)
 *     VmpPrefetchWorker @ 0x14079F660 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1407AA76C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1407AA860 (EtwpUpdateProcessTracingCallback.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E696C (CmpAddRemoveContainerToCLFSLog.c)
 *     MiHotPatchAllProcesses @ 0x1407F3224 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     MmCreateShadowMapping @ 0x1407F6EC0 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 *     NtCreateEnclave @ 0x1407F80D0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F84C0 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1407FB880 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubActiveLargePage @ 0x1407FE198 (MiScrubActiveLargePage.c)
 *     MiDeleteInsertedCloneVads @ 0x1408009A4 (MiDeleteInsertedCloneVads.c)
 *     MiCopyLargeVad @ 0x140800CE4 (MiCopyLargeVad.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     MmIsFileMapped @ 0x140860F44 (MmIsFileMapped.c)
 *     AlpcpRestoreWriteAccess @ 0x140896794 (AlpcpRestoreWriteAccess.c)
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8304 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408D8B78 (MmAssignProcessToJob.c)
 *     MmDeleteTeb @ 0x1408D96BC (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1408DA8B0 (NtProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408DB660 (EtwTiLogProtectExecVm.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408DBBC8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     MmCreateTeb @ 0x1408DE4D4 (MmCreateTeb.c)
 *     PoEnergyContextStart @ 0x1408DEB60 (PoEnergyContextStart.c)
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x1408DF878 (PspUpdatePebForAffinityChange.c)
 *     PspWriteTebImpersonationInfo @ 0x1408E87D0 (PspWriteTebImpersonationInfo.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwpWriteProcessEvent @ 0x1408F13BC (EtwpWriteProcessEvent.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x1409037E0 (ExpWnfWriteStateData.c)
 *     PspSetupUserShadowStack @ 0x140914B74 (PspSetupUserShadowStack.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiInsertChildVads @ 0x14091A854 (MiInsertChildVads.c)
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x14091B210 (PsMapSystemDlls.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409358F0 (PfSnAsyncPrefetchWorker.c)
 *     MmPrefetchVirtualMemory @ 0x140936AD8 (MmPrefetchVirtualMemory.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PfSnPopulateReadList @ 0x140953450 (PfSnPopulateReadList.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     EtwTiLogReadWriteVm @ 0x140992E08 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     PspQueryQuotaLimits @ 0x1409AF220 (PspQueryQuotaLimits.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D4930 (EtwpRealtimeInjectEtwBuffer.c)
 *     ExSweepHandleTable @ 0x1409DFA8C (ExSweepHandleTable.c)
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
 *     MiInSwapStoreWorker @ 0x140A43A40 (MiInSwapStoreWorker.c)
 *     IopRaiseHardError @ 0x140A44CA0 (IopRaiseHardError.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A57F94 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x140A59AF8 (PspDeleteUserStack.c)
 *     PspCreateSecureThread @ 0x140A6BAE8 (PspCreateSecureThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     VmpTracingEnabledCallback @ 0x140A7EBF0 (VmpTracingEnabledCallback.c)
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A9CF34 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA3638 (MmInitializeHandBuiltProcess2.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     DbgkpMarkProcessPeb @ 0x140AABE84 (DbgkpMarkProcessPeb.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABA85C (PspFindFirstThreadByTebValue.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 *     CmpStartCLFSLog @ 0x140AE7708 (CmpStartCLFSLog.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B655BC (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140B7BF70 (ExpDebuggerWorker.c)
 *     CmSaveKeyToBuffer @ 0x140BBB010 (CmSaveKeyToBuffer.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     EmpMapPhysicalAddress @ 0x140C19E34 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140C37444 (PspInitPhase3.c)
 *     EmpCacheBiosDate @ 0x140C64A08 (EmpCacheBiosDate.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  int v8; // r12d
  unsigned __int8 CurrentIrql; // di
  unsigned int v10; // edi
  char v11; // dl
  $727077A9B6E167EAE1398C74674DC5A5 *v12; // rdi
  struct _KTHREAD *Flink; // rdx
  __int64 v14; // rdx
  struct _LIST_ENTRY *v15; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v17; // r8
  unsigned __int64 GroupIndex; // r15
  __int64 v19; // r14
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  bool v23; // al
  __int64 v24; // r8
  int v25; // edx
  bool v26; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // si
  unsigned __int32 Value; // eax
  unsigned __int32 v32; // ett
  signed __int64 *p_SwapListEntry; // rdx
  signed __int64 v34; // rax
  signed __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned int v37; // [rsp+20h] [rbp-48h] BYREF
  __int128 v38; // [rsp+24h] [rbp-44h]
  unsigned __int8 v39; // [rsp+70h] [rbp+8h] BYREF

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
      v8 = a2 & 2;
      if ( (a2 & 2) != 0 )
      {
        v11 = 15;
        v39 = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        v39 = CurrentIrql;
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
        v11 = v39;
      }
      if ( CurrentThread->ApcState.KernelApcPending )
      {
        while ( !CurrentThread->SpecialApcDisable )
        {
          if ( v11 )
            break;
          KiReleaseThreadLockLowerIrql(CurrentThread);
          KiAcquireThreadLockRaiseToDpc(CurrentThread, &v39);
          if ( !CurrentThread->ApcState.KernelApcPending )
            break;
          v11 = v39;
        }
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v12 = &CurrentThread->152, ($727077A9B6E167EAE1398C74674DC5A5 *)v12->ApcState.ApcListHead[0].Flink != v12)
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
        v12->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v12->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
        Blink->Flink = (struct _LIST_ENTRY *)v12;
      }
      v14 = (__int64)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v15 = &CurrentThread->ApcState.ApcListHead[1];
      if ( (unsigned __int8 *)v14 == &CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v15->Flink = v15;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v28 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v15->Flink = (struct _LIST_ENTRY *)v14;
        CurrentThread->ApcState.ApcListHead[1].Blink = v28;
        *(_QWORD *)(v14 + 8) = v15;
        v28->Flink = v15;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v8 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = (__int64)CurrentThread->ApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v19 = 8LL * CurrentPrcb->Group;
      _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(v17 + 128) + v19 + 8), GroupIndex);
      v20 = *(_QWORD *)(v17 + 40);
      if ( KiKvaShadow )
      {
        v21 = v20 | 0x8000000000000000uLL;
        if ( (v20 & 2) == 0 )
          v21 = *(_QWORD *)(v17 + 40);
        __writegsqword(0xB000u, v21);
        KiSetAddressPolicy(*(unsigned __int8 *)(v17 + 352), v14, v17, a4);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(v20);
      else
        __writecr3(v20);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v29 = __readcr4();
        if ( (v29 & 0x20080) != 0 )
        {
          __writecr4(v29 ^ 0x80);
          __writecr4(v29);
        }
        else
        {
          v36 = __readcr3();
          __writecr3(v36);
        }
      }
      result = (__int64)Process->ActiveProcessors;
      _interlockedbittestandreset64((volatile signed __int32 *)(result + v19 + 8), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v8 )
      {
        v22 = v39;
        if ( KiIrqlFlags )
          result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
        __writecr8(v22);
      }
      if ( (a2 & 1) == 0 )
      {
        result = _InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8;
        if ( (_DWORD)result == 8 )
        {
          v30 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v30, 2LL);
          KiAcquireKobjectLockSafe(&Process->Header.Lock);
          Value = Process->StackCount.Value;
          if ( (Value & 7) == 0 && Process->ThreadListHead.Flink != &Process->ThreadListHead )
          {
            while ( Value < 8 )
            {
              v32 = Value;
              Value = _InterlockedCompareExchange(&Process->StackCount.Value, Value & 0xFFFFFFF8 | 3, Value);
              if ( v32 == Value )
              {
                _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
                p_SwapListEntry = (signed __int64 *)&Process->SwapListEntry;
                _m_prefetchw(&KiProcessOutSwapListHead);
                v34 = KiProcessOutSwapListHead;
                do
                {
                  *p_SwapListEntry = v34;
                  v35 = v34;
                  v34 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)p_SwapListEntry, v34);
                }
                while ( v34 != v35 );
                if ( !v34 )
                  KeSetEvent(&KiSwapEvent, 10, 0);
                goto LABEL_64;
              }
            }
          }
          _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
LABEL_64:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
          result = v30;
          __writecr8(v30);
        }
      }
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v12->ApcState.ApcListHead[0].Flink != v12 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v38 = 0LL;
        if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
        {
          v23 = HalpDisableInterrupts();
          v25 = *(_DWORD *)(v24 + 168);
          v26 = v23;
          *(_DWORD *)(v24 + 168) = v25 | 2;
          if ( !v25 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v26 )
            _enable();
        }
        v37 = 5;
        return HalpInterruptSendIpi(&v37, 0x1Fu);
      }
    }
  }
  return result;
}
