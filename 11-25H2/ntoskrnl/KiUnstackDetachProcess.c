/*
 * XREFs of KiUnstackDetachProcess @ 0x140289470
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020AC98 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D437C (MiGetWorkingSetInfoEx.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140348B70 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     SmQuerySystemInformation @ 0x140393568 (SmQuerySystemInformation.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396200 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403AE380 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C50A0 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     PspDetachSession @ 0x1403D6470 (PspDetachSession.c)
 *     SepAdtLogAuditRecord @ 0x1403D67CC (SepAdtLogAuditRecord.c)
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 *     IoRaiseHardError @ 0x1404339B0 (IoRaiseHardError.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140434E44 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044EB38 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     MiDeleteFinalPageTables @ 0x14045CD60 (MiDeleteFinalPageTables.c)
 *     PsQueryProcessCommandLine @ 0x140461E70 (PsQueryProcessCommandLine.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14047AC00 (PspIsProcessReadyForRemoteThread.c)
 *     MmEnforceWorkingSetLimit @ 0x14047D754 (MmEnforceWorkingSetLimit.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404973E0 (MmUpdateOldWorkingSetPages.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 *     MiFlushAllPages @ 0x1404C7844 (MiFlushAllPages.c)
 *     MiLockDownWorkingSet @ 0x1404CA1BC (MiLockDownWorkingSet.c)
 *     KeSecureProcess @ 0x1405B454C (KeSecureProcess.c)
 *     KeCopyXfdMaskToTeb @ 0x1405B4850 (KeCopyXfdMaskToTeb.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BC648 (KeSetExpectedConcurrencyCountProcess.c)
 *     KiTpWriteMemory @ 0x1405C506C (KiTpWriteMemory.c)
 *     ExpSvmServicePageFault @ 0x14064DAD0 (ExpSvmServicePageFault.c)
 *     CmSiProcessTupleStartFromHandle @ 0x14065CEFC (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14065D024 (CmSiSetProcessWorkingSetMaximum.c)
 *     MmSetCommitReleaseEligibility @ 0x14065F194 (MmSetCommitReleaseEligibility.c)
 *     MiDeleteAwePageTables @ 0x140676440 (MiDeleteAwePageTables.c)
 *     MiEmptyAccessLogs @ 0x140677E70 (MiEmptyAccessLogs.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     DbgkQueueUserExceptionReport @ 0x1406FB524 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1406FB730 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x1407064F4 (IopIsNotNativeDriverImage.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x140730E60 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x1407320B4 (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x140735D04 (AlpcpForceUnlinkSecureView.c)
 *     PfSnAppLaunchScenarioControl @ 0x14073B5D4 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1407645B0 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140765328 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140765604 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140765A30 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x140767A00 (PspApplyWorkingSetLimits.c)
 *     PsTerminateMinimalProcess @ 0x140768FA8 (PsTerminateMinimalProcess.c)
 *     PsStartSiloMonitor @ 0x1407695C0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140769800 (PsUnregisterSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x14076B05C (PspAllocatePartition.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14078CA98 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14078D7BC (SmHwAcceleratorPartitionMgrCleanup.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14078D8F0 (SmHwAcceleratorPartitionMgrStart.c)
 *     VmpPrefetchWorker @ 0x140790190 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x14079B25C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x14079B350 (EtwpUpdateProcessTracingCallback.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407D6518 (CmpAddRemoveContainerToCLFSLog.c)
 *     MiHotPatchAllProcesses @ 0x1407E2DB4 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     MmCreateShadowMapping @ 0x1407E68BC (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1407E6B0C (MmDeleteShadowMapping.c)
 *     NtCreateEnclave @ 0x1407E7AD0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407E7EC0 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1407EB280 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubActiveLargePage @ 0x1407EDB98 (MiScrubActiveLargePage.c)
 *     MiDeleteInsertedCloneVads @ 0x1407F03A4 (MiDeleteInsertedCloneVads.c)
 *     MiCopyLargeVad @ 0x1407F06EC (MiCopyLargeVad.c)
 *     PoEnergyContextStart @ 0x14083B7A8 (PoEnergyContextStart.c)
 *     PspSetupUserProcessAddressSpace @ 0x14083C23C (PspSetupUserProcessAddressSpace.c)
 *     PspUpdatePebForAffinityChange @ 0x14083C4B8 (PspUpdatePebForAffinityChange.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     PspWriteTebImpersonationInfo @ 0x1408A5F40 (PspWriteTebImpersonationInfo.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1408AF1C8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x1408B4984 (AlpcpRestoreWriteAccess.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpProcessEnumCallback @ 0x1408BEE80 (EtwpProcessEnumCallback.c)
 *     PfSnPopulateReadList @ 0x1408C1D90 (PfSnPopulateReadList.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8888 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408D9124 (MmAssignProcessToJob.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x1408E5390 (ExpWnfWriteStateData.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1408E8F84 (SmProcessStoreMemoryPriorityRequest.c)
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     MmDeleteTeb @ 0x1408F6330 (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x1408F6740 (MmFreeVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1408F7510 (NtProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408F8258 (EtwTiLogProtectExecVm.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmCreateTeb @ 0x1408FA3C4 (MmCreateTeb.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1409053A8 (PsMapSystemDlls.c)
 *     EtwTraceAppStateChange @ 0x14091FF00 (EtwTraceAppStateChange.c)
 *     EtwpWriteProcessEvent @ 0x1409211D4 (EtwpWriteProcessEvent.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
 *     ExSweepHandleTable @ 0x140972794 (ExSweepHandleTable.c)
 *     MmIsFileMapped @ 0x140986274 (MmIsFileMapped.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140990F70 (EtwpRealtimeInjectEtwBuffer.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409B9A84 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409BA9F8 (DbgkpPostFakeProcessCreateMessages.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     SmpKeyedStoreCreate @ 0x1409C1434 (SmpKeyedStoreCreate.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     EtwTiLogReadWriteVm @ 0x1409C4FE0 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1409C69F8 (MmPrefetchVirtualMemory.c)
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
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
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
 *     MiInSwapStoreWorker @ 0x140A4A910 (MiInSwapStoreWorker.c)
 *     IopRaiseHardError @ 0x140A4B9B0 (IopRaiseHardError.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A5C6C0 (EtwpPsProvProcessEnumCallback.c)
 *     PspDeleteUserStack @ 0x140A5F668 (PspDeleteUserStack.c)
 *     PspCreateSecureThread @ 0x140A6FD5C (PspCreateSecureThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     VmpTracingEnabledCallback @ 0x140A80370 (VmpTracingEnabledCallback.c)
 *     MiCombineIdenticalPages @ 0x140A961D0 (MiCombineIdenticalPages.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A9C2B4 (MiUnmapImageForEnclaveUse.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA4AB4 (MmInitializeHandBuiltProcess2.c)
 *     MiQueryProcessActivePatches @ 0x140AA8E54 (MiQueryProcessActivePatches.c)
 *     DbgkpMarkProcessPeb @ 0x140AABA14 (DbgkpMarkProcessPeb.c)
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABB5E0 (PspFindFirstThreadByTebValue.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 *     CmpStartCLFSLog @ 0x140AD5500 (CmpStartCLFSLog.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B5339C (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 *     CmSaveKeyToBuffer @ 0x140BA9010 (CmSaveKeyToBuffer.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     EmpMapPhysicalAddress @ 0x140C06D94 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140C24038 (PspInitPhase3.c)
 *     EmpCacheBiosDate @ 0x140C4E024 (EmpCacheBiosDate.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x140204FF0 (KiReleaseThreadLockLowerIrql.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x14028A690 (KiSetAddressPolicy.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403C4700 (HvlSwitchVirtualAddressSpace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  int v6; // r12d
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // edi
  unsigned __int8 v9; // dl
  $727077A9B6E167EAE1398C74674DC5A5 *v10; // rdi
  struct _KTHREAD *Flink; // rdx
  struct _KTHREAD *v12; // rdx
  _LIST_ENTRY *v13; // rax
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
  int v35; // [rsp+20h] [rbp-48h] BYREF
  __int128 v36; // [rsp+24h] [rbp-44h]
  unsigned __int8 v37; // [rsp+70h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 32);
  v3 = a2;
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
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        v37 = CurrentIrql;
        v8 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v8 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
        || (v10 = &CurrentThread->152, ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink != v10)
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
      v12 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v13 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v12 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
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
        v12->Header.WaitListHead.Flink = v13;
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
        KiSetAddressPolicy(v15->AddressPolicy);
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
      if ( (v3 & 1) == 0 )
      {
        result = _InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8;
        if ( (_DWORD)result == 8 )
        {
          v28 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v28);
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
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink != v10 )
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
