/*
 * XREFs of KeReleaseGuardedMutex @ 0x140286F40
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140203918 (CcZeroEndOfLastPage.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140205238 (PnpUnregisterPlugPlayNotification.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402058E0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x1402A20A0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1402A21D0 (FsRtlInsertPerStreamContext.c)
 *     CcGetDirtyPagesHelper @ 0x1402C56E0 (CcGetDirtyPagesHelper.c)
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x1402D6A70 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     PoRunDownDeviceObject @ 0x1402FDBBC (PoRunDownDeviceObject.c)
 *     PopIrpWorker @ 0x140356760 (PopIrpWorker.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140374D3C (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAcquireEofLock @ 0x1403760A0 (FsRtlAcquireEofLock.c)
 *     CcDeleteMbcb @ 0x1403A3FF8 (CcDeleteMbcb.c)
 *     CcGetFlushedValidData @ 0x1403A68F0 (CcGetFlushedValidData.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     CcWriteBehindPreProcess @ 0x1403ACA84 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403B6E80 (CcReleaseBcbLockAndVacbLock.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1403D2160 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlAddLargeMcbEntry @ 0x1403D2220 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x1403F29B0 (FsRtlTruncateLargeMcb.c)
 *     FsRtlReleaseEofLock @ 0x1403F96E0 (FsRtlReleaseEofLock.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1403FAA70 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x140401E20 (FsRtlGetNextLargeMcbEntry.c)
 *     HalMatchAcpiOemId @ 0x140412F90 (HalMatchAcpiOemId.c)
 *     HalpAcpiGetTable @ 0x1404130F8 (HalpAcpiGetTable.c)
 *     HalAcpiGetTableDispatch @ 0x140413180 (HalAcpiGetTableDispatch.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14041B390 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140429024 (FsRtlpCancelWaitingIrp.c)
 *     PopInitilizeAcDcSettings @ 0x1404765A0 (PopInitilizeAcDcSettings.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x14047A420 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x14047E710 (FsRtlNumberOfRunsInLargeMcb.c)
 *     RawCompletionRoutine @ 0x140482BB0 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x14048397C (RawInitiateDeleteVolume.c)
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 *     PopGetPowerSettingValue @ 0x14049253C (PopGetPowerSettingValue.c)
 *     PopRunMaximumIrpWorkers @ 0x1404971B8 (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x14049728C (PopCreateDynamicIrpWorker.c)
 *     CcRepinBcb @ 0x14049E0D0 (CcRepinBcb.c)
 *     PpDevNodeRemoveFromTree @ 0x1404A3974 (PpDevNodeRemoveFromTree.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404B4A7C (PnpReleasePowerRelationsQueueLock.c)
 *     RawCheckForDeleteVolume @ 0x1404BD08C (RawCheckForDeleteVolume.c)
 *     IopInvalidateBusRelationsWorker @ 0x1404BF9E0 (IopInvalidateBusRelationsWorker.c)
 *     FsRtlResetLargeMcb @ 0x1404C1D90 (FsRtlResetLargeMcb.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DCD80 (CcAcquireByteRangeForWrite.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 *     PopRunNormalIrpWorkers @ 0x1404F78F4 (PopRunNormalIrpWorkers.c)
 *     HalpAcpiGetAllTables @ 0x14053AA60 (HalpAcpiGetAllTables.c)
 *     HalpAcpiGetFacsMapping @ 0x14053ACA0 (HalpAcpiGetFacsMapping.c)
 *     CcGetLsnForFileObject @ 0x140578CC0 (CcGetLsnForFileObject.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14057C7D0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlSplitLargeMcb @ 0x14057CAE0 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057D7A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     PnpDisableUserModeNotifications @ 0x1405A2F2C (PnpDisableUserModeNotifications.c)
 *     KeConfigureDynamicMemory @ 0x1405B3AF4 (KeConfigureDynamicMemory.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405B8408 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiOpPatchCode @ 0x1405C0FB8 (KiOpPatchCode.c)
 *     PopIrpWorkerControl @ 0x1405D3080 (PopIrpWorkerControl.c)
 *     RawVerifyVolume @ 0x1405DAE0C (RawVerifyVolume.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405E44FC (RtlpTraceDatabaseReleaseLock.c)
 *     DifExReleaseFastMutexWrapper @ 0x1406145D0 (DifExReleaseFastMutexWrapper.c)
 *     DifKeReleaseGuardedMutexWrapper @ 0x140623280 (DifKeReleaseGuardedMutexWrapper.c)
 *     HalpIrtAllocateDeviceAperture @ 0x1406F5314 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x1406F5464 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x1406F56C8 (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x1406F57D0 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x1406F58C0 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x1406F5990 (HalpIrtReleaseDeviceAperture.c)
 *     NtSetInformationDebugObject @ 0x1406FB1D0 (NtSetInformationDebugObject.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x140714584 (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x1407177C4 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140717AF0 (PnpProcessCompletedEject.c)
 *     IopReleaseResources @ 0x1407183C4 (IopReleaseResources.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14071C6B8 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072148C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140721668 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1407216F0 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14072179C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407218EC (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407219AC (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x140721DDC (PnpRemoveEventFromQueue.c)
 *     PnpActivatingDeviceNodeFromThread @ 0x140726DD0 (PnpActivatingDeviceNodeFromThread.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140727DA0 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x140727FAC (PipKsrNotifyDrivers.c)
 *     PnpBuildCmResourceLists @ 0x1407281A4 (PnpBuildCmResourceLists.c)
 *     PiUpdateDeviceResourceLists @ 0x14072A1DC (PiUpdateDeviceResourceLists.c)
 *     KeRegisterProcessorChangeCallback @ 0x140730040 (KeRegisterProcessorChangeCallback.c)
 *     PfTCleanup @ 0x14073A548 (PfTCleanup.c)
 *     PfTInitialize @ 0x14073A894 (PfTInitialize.c)
 *     PfTStart @ 0x14073AAEC (PfTStart.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14073BBF0 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x140740BA0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x140740C60 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x140744C70 (PoQueueShutdownWorkItem.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407B8FBC (WheaCrashDumpInitializationComplete.c)
 *     WheapReportDeferredLiveDumps @ 0x1407B9020 (WheapReportDeferredLiveDumps.c)
 *     PnpProcessAssignResources @ 0x14082F690 (PnpProcessAssignResources.c)
 *     IopLegacyResourceAllocation @ 0x140830B88 (IopLegacyResourceAllocation.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1408311EC (PnpGetResourceRequirementsForAssignTable.c)
 *     IopDestroyDeviceNode @ 0x140832628 (IopDestroyDeviceNode.c)
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 *     PnpPoFxActivateDevice @ 0x140834FC8 (PnpPoFxActivateDevice.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408380E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140839848 (PiDqObjectManagerUnregisterQuery.c)
 *     CmpGetMappingHiveForString @ 0x14083EE7C (CmpGetMappingHiveForString.c)
 *     CmpAddToDelayedClose @ 0x140848A10 (CmpAddToDelayedClose.c)
 *     CmpReferenceKeyControlBlock @ 0x140849E30 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     CmpRemoveFromDelayedClose @ 0x140874820 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 *     EtwpSetProviderTraitsCommon @ 0x140896C34 (EtwpSetProviderTraitsCommon.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFCE0 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1408D0318 (PiUEventNotifyClient.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1408D1CFC (PiDqObjectManagerHandleObjectEvent.c)
 *     DbgkpCloseObject @ 0x1408E0060 (DbgkpCloseObject.c)
 *     DbgkCopyProcessDebugPort @ 0x1408F4068 (DbgkCopyProcessDebugPort.c)
 *     DbgkpQueueMessage @ 0x14091F880 (DbgkpQueueMessage.c)
 *     PiGetRelatedDevice @ 0x1409349F8 (PiGetRelatedDevice.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140939670 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140939820 (FsRtlAddToTunnelCacheEx.c)
 *     PfGetCompletedTrace @ 0x14093A5D4 (PfGetCompletedTrace.c)
 *     MiCallCreateSectionFilters @ 0x14093D838 (MiCallCreateSectionFilters.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14093D94C (FsRtlAcquireToCreateMappedSection.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140965E50 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x140965F8C (PopCallPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 *     PiUEventHandleUnregisterClient @ 0x140966938 (PiUEventHandleUnregisterClient.c)
 *     PiUEventProcessEventWorker @ 0x1409669E0 (PiUEventProcessEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140966DA0 (PiUEventHandleGetEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x1409673BC (PiUEventDereferenceEventEntry.c)
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140967C20 (PiUEventFreeClientRegistrationContext.c)
 *     PnpDeferNotification @ 0x14096A28C (PnpDeferNotification.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14096CC3C (PnpNotifyDeviceClassChange.c)
 *     PnpProcessDeferredRegistrations @ 0x14096CDDC (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x14096CFB0 (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 *     PnpDeviceEventWorker @ 0x14096E070 (PnpDeviceEventWorker.c)
 *     ExpGetNextProcessThread @ 0x140978A00 (ExpGetNextProcessThread.c)
 *     PfSnEndTrace @ 0x140989508 (PfSnEndTrace.c)
 *     RawDispatch @ 0x14099D320 (RawDispatch.c)
 *     RawCleanup @ 0x14099D538 (RawCleanup.c)
 *     RawClose @ 0x14099D6CC (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x14099D750 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x14099D85C (RawCreate.c)
 *     RawUserFsCtrl @ 0x14099DFF4 (RawUserFsCtrl.c)
 *     RawMountVolume @ 0x14099E244 (RawMountVolume.c)
 *     RawScanDeletedList @ 0x14099F1A0 (RawScanDeletedList.c)
 *     FsRtlTeardownPerStreamContexts @ 0x14099F8D0 (FsRtlTeardownPerStreamContexts.c)
 *     DbgkClearProcessDebugObject @ 0x1409BAAC0 (DbgkClearProcessDebugObject.c)
 *     NtDebugContinue @ 0x1409BAC30 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409BAE18 (DbgkpSetProcessDebugObject.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     CmpDelayCloseWorker @ 0x1409D7200 (CmpDelayCloseWorker.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2E48 (IopCleanupFileObjectIosbRange.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1409F4C34 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A01F80 (EtwpReleaseProviderTraitsReference.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A04848 (KeSynchronizeWithDynamicProcessors.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140A090B4 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140A0AC4C (PiUEventReferenceEventEntry.c)
 *     PopLogDisabledSleepReason @ 0x140A10F50 (PopLogDisabledSleepReason.c)
 *     PopFreeSessionState @ 0x140A228FC (PopFreeSessionState.c)
 *     PopDispatchNotificationsToList @ 0x140A2A4B8 (PopDispatchNotificationsToList.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A32040 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PopRundownPowerSettings @ 0x140A32C20 (PopRundownPowerSettings.c)
 *     NtWaitForDebugEvent @ 0x140A33F40 (NtWaitForDebugEvent.c)
 *     PfSnGetCompletedTrace @ 0x140A3F494 (PfSnGetCompletedTrace.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A3F650 (FsRtlDeleteKeyFromTunnelCache.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A45D84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140A46AF4 (PnpCleanupDeviceRegistryValues.c)
 *     PfTTraceListAdd @ 0x140A49470 (PfTTraceListAdd.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A4CCA0 (PiUEventNotifyDeviceInstanceChange.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 *     PopRequestShutdownWait @ 0x140A4F5E4 (PopRequestShutdownWait.c)
 *     PiUEventBroadcastEventWorker @ 0x140A5C500 (PiUEventBroadcastEventWorker.c)
 *     PnpFreeDeviceInstancePath @ 0x140A6364C (PnpFreeDeviceInstancePath.c)
 *     PiQueryResourceRequirements @ 0x140A64274 (PiQueryResourceRequirements.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140A65454 (PiUEventQueueBroadcastEventEntry.c)
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
 *     DbgkOpenProcessDebugPort @ 0x140A689A0 (DbgkOpenProcessDebugPort.c)
 *     PopGetSettingValue @ 0x140A6C700 (PopGetSettingValue.c)
 *     PnpBusTypeGuidGet @ 0x140A6F92C (PnpBusTypeGuidGet.c)
 *     PnpBusTypeGuidGetIndex @ 0x140A7129C (PnpBusTypeGuidGetIndex.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A74AA0 (PoUnregisterPowerSettingCallback.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A8151C (PnpMapDeviceObjectToDeviceInstance.c)
 *     CmpAddStringToMapping @ 0x140A8571C (CmpAddStringToMapping.c)
 *     PiUEventHandleVetoEvent @ 0x140A8679C (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x140A934C8 (PnpOrphanNotification.c)
 *     PnpMapActivatingDeviceNodeToThread @ 0x140A93FB0 (PnpMapActivatingDeviceNodeToThread.c)
 *     CmpDelayFreeRMWorker @ 0x140A9A4E0 (CmpDelayFreeRMWorker.c)
 *     CmpDelayFreeCmRm @ 0x140AA9E08 (CmpDelayFreeCmRm.c)
 *     DbgkpMarkProcessPeb @ 0x140AABA14 (DbgkpMarkProcessPeb.c)
 *     PoVolumeDevice @ 0x140AABF98 (PoVolumeDevice.c)
 *     PopQueryPowerSettingUlong @ 0x140AAF530 (PopQueryPowerSettingUlong.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140B51DA8 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140B51E3C (WheapSaveRecordForLiveDump.c)
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x140B5CB30 (PopFlushVolumeWorker.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x14027FB04 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall KeReleaseGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  unsigned __int64 OldIrql_low; // r15
  signed __int32 v3; // eax
  int v4; // ecx
  int v5; // edx
  signed __int32 v6; // ett
  char Priority; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  struct _FAST_MUTEX *Flink; // rsi
  struct _FAST_MUTEX *v11; // rdx
  __int64 v12; // rax
  struct _FAST_MUTEX **v13; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r9
  unsigned int i; // edx
  _KLOCK_ENTRY *v18; // rcx
  char v19; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v21; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  OldIrql_low = LOBYTE(Mutex->OldIrql);
  Mutex->Owner = 0LL;
  v3 = _InterlockedCompareExchange(&Mutex->Count, 1, 0);
  if ( !v3 )
    goto LABEL_17;
  v25 = 0LL;
  do
  {
    v4 = -1;
    v5 = v3 & 2;
    if ( (v3 & 2) != 0 )
      v4 = 1;
    v6 = v3;
    v3 = _InterlockedCompareExchange(&Mutex->Count, v3 + v4, v3);
  }
  while ( v6 != v3 );
  if ( v5 )
    goto LABEL_17;
  Priority = KeGetCurrentThread()->Priority;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Mutex->Event);
  Mutex->Event.Header.SignalState = 1;
  Flink = (struct _FAST_MUTEX *)Mutex->Event.Header.WaitListHead.Flink;
  while ( Flink != (struct _FAST_MUTEX *)&Mutex->Event.Header.WaitListHead )
  {
    v11 = *(struct _FAST_MUTEX **)&Flink->Count;
    v12 = (__int64)Flink;
    Flink = v11;
    v13 = *(struct _FAST_MUTEX ***)(v12 + 8);
    if ( v11->Owner != (void *)v12 || *v13 != (struct _FAST_MUTEX *)v12 )
      __fastfail(3u);
    *v13 = v11;
    v11->Owner = v13;
    v19 = *(_BYTE *)(v12 + 16);
    switch ( v19 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), &v25) )
          goto LABEL_14;
        break;
      case 2:
        *(_BYTE *)(v12 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v12 + 24), (__int64 *)v12);
LABEL_14:
        if ( Mutex->Event.Header.SignalState-- == 1 )
          goto LABEL_15;
        break;
      case 4:
        *(_BYTE *)(v12 + 17) = 5;
        Mutex->Event.Header.SignalState = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v12 + 24), &Mutex->Event, (PVOID)v12);
        break;
      default:
        KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
        break;
    }
  }
LABEL_15:
  _InterlockedAnd(&Mutex->Event.Header.Lock, 0xFFFFFF7F);
  if ( Priority )
  {
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    if ( Next )
      KeAbPreWakeupThread((ULONG_PTR)&Next[-27], (__int64)Mutex);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
LABEL_17:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)OldIrql_low);
  __writecr8(OldIrql_low);
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v18 = &KernelAbEntries->Entries[i];
    if ( (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)Mutex & 0x7FFFFFFFFFFFFFFCLL)
      && v18->AcquiredByte
      && (*(_QWORD *)&v18->LockState.0 & 1) == 0 )
    {
      v18->AcquiredByte = 0;
      KiAbEntryFreeAndEnableInterrupts(v18, CurrentThread, Mutex, 1LL, 0LL);
      return;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)Mutex, 0LL, 0LL);
  v21 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v21->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v23 = *SchedulerAssist;
    do
    {
      v24 = v23;
      v23 = _InterlockedCompareExchange(SchedulerAssist, v23 & 0xFFDFFFFF, v23);
    }
    while ( v24 != v23 );
    if ( (v23 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v21);
  }
  _enable();
}
