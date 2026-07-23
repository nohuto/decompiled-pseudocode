/*
 * XREFs of KeReleaseGuardedMutex @ 0x1402C7000
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcGetDirtyPagesHelper @ 0x140274DD0 (CcGetDirtyPagesHelper.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402769E0 (CcSetDirtyPinnedData.c)
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14028FE70 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlpCancelWaitingIrp @ 0x1402B6B5C (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1402B72F8 (FsRtlpWaitOnIrp.c)
 *     FsRtlReleaseEofLock @ 0x1402E0940 (FsRtlReleaseEofLock.c)
 *     FsRtlAcquireEofLock @ 0x1402E13D0 (FsRtlAcquireEofLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402E342C (FsRtlPrivateInitializeFileLock.c)
 *     CcDeleteMbcb @ 0x1402E5278 (CcDeleteMbcb.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     FsRtlRemovePerStreamContext @ 0x1403B3EC0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1403B3FF0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1403BF1F0 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlAddLargeMcbEntry @ 0x1403BF3A0 (FsRtlAddLargeMcbEntry.c)
 *     PoRunDownDeviceObject @ 0x1403E598C (PoRunDownDeviceObject.c)
 *     PopInitilizeAcDcSettings @ 0x1403E66D0 (PopInitilizeAcDcSettings.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403EEFB0 (CcReleaseBcbLockAndVacbLock.c)
 *     FsRtlTruncateLargeMcb @ 0x1403EFCE0 (FsRtlTruncateLargeMcb.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1403FD7D0 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x140401640 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140408EA0 (FsRtlpCancelOplockRHIrp.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     CcGetFlushedValidData @ 0x14040B790 (CcGetFlushedValidData.c)
 *     CcZeroEndOfLastPage @ 0x140443674 (CcZeroEndOfLastPage.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     HalMatchAcpiOemId @ 0x14045F7B0 (HalMatchAcpiOemId.c)
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     HalAcpiGetTableDispatch @ 0x14045F9A0 (HalAcpiGetTableDispatch.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140469950 (PnpUnregisterPlugPlayNotification.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404765A0 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x14047A040 (FsRtlNumberOfRunsInLargeMcb.c)
 *     RawCompletionRoutine @ 0x14047ECE0 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x14047F73C (RawInitiateDeleteVolume.c)
 *     PopGetPowerSettingValue @ 0x14048C3EC (PopGetPowerSettingValue.c)
 *     PopRunMaximumIrpWorkers @ 0x140491688 (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x14049175C (PopCreateDynamicIrpWorker.c)
 *     CcRepinBcb @ 0x140497FB0 (CcRepinBcb.c)
 *     PpDevNodeRemoveFromTree @ 0x14049E834 (PpDevNodeRemoveFromTree.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404AEBE4 (PnpReleasePowerRelationsQueueLock.c)
 *     RawCheckForDeleteVolume @ 0x1404B6EAC (RawCheckForDeleteVolume.c)
 *     IopInvalidateBusRelationsWorker @ 0x1404B94E0 (IopInvalidateBusRelationsWorker.c)
 *     FsRtlResetLargeMcb @ 0x1404BBBD0 (FsRtlResetLargeMcb.c)
 *     CcAcquireByteRangeForWrite @ 0x1404D5E90 (CcAcquireByteRangeForWrite.c)
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 *     PopRunNormalIrpWorkers @ 0x1404F7944 (PopRunNormalIrpWorkers.c)
 *     HalpAcpiGetAllTables @ 0x14053AB90 (HalpAcpiGetAllTables.c)
 *     HalpAcpiGetFacsMapping @ 0x14053ADD0 (HalpAcpiGetFacsMapping.c)
 *     CcGetLsnForFileObject @ 0x140579460 (CcGetLsnForFileObject.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14057CF30 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlSplitLargeMcb @ 0x14057D240 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14057DEC0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057DFDC (FsRtlpCancelReadOnlyOplockIrp.c)
 *     PnpDisableUserModeNotifications @ 0x1405A367C (PnpDisableUserModeNotifications.c)
 *     KeConfigureDynamicMemory @ 0x1405B4FBC (KeConfigureDynamicMemory.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405B98D8 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiOpPatchCode @ 0x1405C2A90 (KiOpPatchCode.c)
 *     PopIrpWorkerControl @ 0x1405D5110 (PopIrpWorkerControl.c)
 *     RawVerifyVolume @ 0x1405E4500 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405EDDEC (RtlpTraceDatabaseReleaseLock.c)
 *     DifExReleaseFastMutexWrapper @ 0x14061EB50 (DifExReleaseFastMutexWrapper.c)
 *     DifKeReleaseGuardedMutexWrapper @ 0x14062D800 (DifKeReleaseGuardedMutexWrapper.c)
 *     HalpIrtAllocateDeviceAperture @ 0x1406FED44 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x1406FF0F8 (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x1406FF200 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x1406FF2F0 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x1406FF3C0 (HalpIrtReleaseDeviceAperture.c)
 *     NtSetInformationDebugObject @ 0x140704C70 (NtSetInformationDebugObject.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14071E214 (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x140721454 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140721780 (PnpProcessCompletedEject.c)
 *     IopReleaseResources @ 0x140722054 (IopReleaseResources.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1407261C8 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072B41C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14072B5F8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14072B680 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14072B72C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14072B87C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14072B93C (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x14072BD6C (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140731F6C (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x14073216C (PipKsrNotifyDrivers.c)
 *     PnpBuildCmResourceLists @ 0x140732364 (PnpBuildCmResourceLists.c)
 *     PiUpdateDeviceResourceLists @ 0x14073439C (PiUpdateDeviceResourceLists.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073A200 (KeRegisterProcessorChangeCallback.c)
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 *     PfTInitialize @ 0x140744BA4 (PfTInitialize.c)
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140745F00 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x14074AFA0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x14074B060 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x14074F060 (PoQueueShutdownWorkItem.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407C8C7C (WheaCrashDumpInitializationComplete.c)
 *     WheapReportDeferredLiveDumps @ 0x1407C8CE0 (WheapReportDeferredLiveDumps.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140837CFC (EtwpReleaseProviderTraitsReference.c)
 *     CmpAddToDelayedClose @ 0x140840810 (CmpAddToDelayedClose.c)
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     PiUEventProcessEventWorker @ 0x140856F90 (PiUEventProcessEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140857350 (PiUEventHandleGetEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x14085796C (PiUEventDereferenceEventEntry.c)
 *     PiUEventHandleRegistration @ 0x140857A2C (PiUEventHandleRegistration.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1408581CC (PiUEventFreeClientRegistrationContext.c)
 *     DbgkpCloseObject @ 0x140860C60 (DbgkpCloseObject.c)
 *     CmpRemoveFromDelayedClose @ 0x140874C40 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     RawMountVolume @ 0x1408ACB4C (RawMountVolume.c)
 *     RawScanDeletedList @ 0x1408ACE04 (RawScanDeletedList.c)
 *     RawDispatch @ 0x1408AD4A0 (RawDispatch.c)
 *     RawCleanup @ 0x1408AD6B8 (RawCleanup.c)
 *     RawClose @ 0x1408AD84C (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x1408AD8D0 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1408AD9DC (RawCreate.c)
 *     RawUserFsCtrl @ 0x1408AE174 (RawUserFsCtrl.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1408AE450 (FsRtlTeardownPerStreamContexts.c)
 *     PnpDeferNotification @ 0x1408B0F50 (PnpDeferNotification.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiGetRelatedDevice @ 0x1408BC818 (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFD00 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D07C0 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpGetMappingHiveForString @ 0x1408E232C (CmpGetMappingHiveForString.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 *     DbgkCopyProcessDebugPort @ 0x1408FDA74 (DbgkCopyProcessDebugPort.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140933E90 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140934040 (FsRtlAddToTunnelCacheEx.c)
 *     ExpGetNextProcessThread @ 0x140940F10 (ExpGetNextProcessThread.c)
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14096749C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     PfTTraceListAdd @ 0x140972A00 (PfTTraceListAdd.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140978BD8 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x1409795E8 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x140979798 (PnpProcessAssignResources.c)
 *     MiCallCreateSectionFilters @ 0x14098C3A8 (MiCallCreateSectionFilters.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14098C4BC (FsRtlAcquireToCreateMappedSection.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PopLogDisabledSleepReason @ 0x14099FBA0 (PopLogDisabledSleepReason.c)
 *     PopFreeSessionState @ 0x1409A0D60 (PopFreeSessionState.c)
 *     PopGetSettingValue @ 0x1409A1370 (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x1409A14CC (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1409A41B0 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x1409A42EC (PopCallPowerSettingCallback.c)
 *     PopDispatchNotificationsToList @ 0x1409A4CC8 (PopDispatchNotificationsToList.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409BB950 (PnpCleanupDeviceRegistryValues.c)
 *     IopDestroyDeviceNode @ 0x1409BD84C (IopDestroyDeviceNode.c)
 *     IopLegacyResourceAllocation @ 0x1409BE034 (IopLegacyResourceAllocation.c)
 *     PnpFreeDeviceInstancePath @ 0x1409BEDA4 (PnpFreeDeviceInstancePath.c)
 *     CmpDelayCloseWorker @ 0x1409C6AD0 (CmpDelayCloseWorker.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409DC4D8 (IopCleanupFileObjectIosbRange.c)
 *     DbgkClearProcessDebugObject @ 0x1409E37F8 (DbgkClearProcessDebugObject.c)
 *     NtDebugContinue @ 0x1409E3960 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E3B48 (DbgkpSetProcessDebugObject.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EC16C (PnpNotifyDeviceClassChange.c)
 *     PnpProcessDeferredRegistrations @ 0x1409EC30C (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EC4E0 (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 *     PnpDeviceEventWorker @ 0x1409ED430 (PnpDeviceEventWorker.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1409F230C (PiDqObjectManagerUnregisterQuery.c)
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1409FFFE4 (KeSynchronizeWithDynamicProcessors.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140A0B608 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140A0D68C (PiUEventReferenceEventEntry.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140A28F80 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A2C6D8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PopRundownPowerSettings @ 0x140A2D5C0 (PopRundownPowerSettings.c)
 *     NtWaitForDebugEvent @ 0x140A2E240 (NtWaitForDebugEvent.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A393E0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     PfSnGetCompletedTrace @ 0x140A395F0 (PfSnGetCompletedTrace.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A40BF0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A470E0 (PiUEventNotifyDeviceInstanceChange.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 *     PopRequestShutdownWait @ 0x140A4ADD4 (PopRequestShutdownWait.c)
 *     PiUEventHandleUnregisterClient @ 0x140A54540 (PiUEventHandleUnregisterClient.c)
 *     PiUEventBroadcastEventWorker @ 0x140A56790 (PiUEventBroadcastEventWorker.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140A601C4 (PiUEventQueueBroadcastEventEntry.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 *     DbgkOpenProcessDebugPort @ 0x140A64974 (DbgkOpenProcessDebugPort.c)
 *     PnpBusTypeGuidGet @ 0x140A6A10C (PnpBusTypeGuidGet.c)
 *     PnpBusTypeGuidGetIndex @ 0x140A6D00C (PnpBusTypeGuidGetIndex.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A70C90 (PoUnregisterPowerSettingCallback.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A80A64 (PnpMapDeviceObjectToDeviceInstance.c)
 *     CmpAddStringToMapping @ 0x140A8649C (CmpAddStringToMapping.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x140A94010 (PnpOrphanNotification.c)
 *     CmpDelayFreeRMWorker @ 0x140A9A310 (CmpDelayFreeRMWorker.c)
 *     CmpDelayFreeCmRm @ 0x140AAA048 (CmpDelayFreeCmRm.c)
 *     DbgkpMarkProcessPeb @ 0x140AABE84 (DbgkpMarkProcessPeb.c)
 *     PoVolumeDevice @ 0x140AAC408 (PoVolumeDevice.c)
 *     PopQueryPowerSettingUlong @ 0x140AAF490 (PopQueryPowerSettingUlong.c)
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140B63FA8 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140B6403C (WheapSaveRecordForLiveDump.c)
 *     PopFlushVolumes @ 0x140B69E80 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x140B6D040 (PopFlushVolumeWorker.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x1402DFF50 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall KeReleaseGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  unsigned __int64 OldIrql_low; // rbp
  signed __int32 v3; // eax
  int v4; // ecx
  int v5; // edx
  signed __int32 v6; // ett
  char Priority; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  struct _FAST_MUTEX *Flink; // rsi
  struct _FAST_MUTEX *v11; // rdx
  struct _FAST_MUTEX *v12; // rax
  struct _FAST_MUTEX **Owner; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // eax
  char *v18; // r11
  __int64 v19; // rdx
  char Contention; // cl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _KPRCB *v22; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 v26; // [rsp+78h] [rbp+10h] BYREF

  OldIrql_low = LOBYTE(Mutex->OldIrql);
  Mutex->Owner = 0LL;
  v3 = _InterlockedCompareExchange(&Mutex->Count, 1, 0);
  if ( !v3 )
    goto LABEL_17;
  v26 = 0LL;
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Mutex->Event);
  Mutex->Event.Header.SignalState = 1;
  Flink = (struct _FAST_MUTEX *)Mutex->Event.Header.WaitListHead.Flink;
  while ( Flink != (struct _FAST_MUTEX *)&Mutex->Event.Header.WaitListHead )
  {
    v11 = *(struct _FAST_MUTEX **)&Flink->Count;
    v12 = Flink;
    Flink = v11;
    Owner = (struct _FAST_MUTEX **)v12->Owner;
    if ( v11->Owner != v12 || *Owner != v12 )
      __fastfail(3u);
    *Owner = v11;
    v11->Owner = Owner;
    Contention = v12->Contention;
    switch ( Contention )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, HIWORD(v12->Contention), &v26) )
          goto LABEL_14;
        break;
      case 2:
        BYTE1(v12->Contention) = 5;
        KiInsertQueueInternal(*(_QWORD *)&v12->Event.Header.Lock, v12);
LABEL_14:
        if ( Mutex->Event.Header.SignalState-- == 1 )
          goto LABEL_15;
        break;
      case 4:
        BYTE1(v12->Contention) = 5;
        Mutex->Event.Header.SignalState = 0;
        KeInsertQueueDpc(*(PRKDPC *)&v12->Event.Header.Lock, &Mutex->Event, v12);
        break;
      default:
        KiTryUnwaitThread(CurrentPrcb, v12, 256LL, 0LL);
        break;
    }
  }
LABEL_15:
  _InterlockedAnd(&Mutex->Event.Header.Lock, 0xFFFFFF7F);
  if ( Priority )
  {
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    if ( Next )
      KeAbPreWakeupThread(&Next[-27], Mutex);
  }
  KiExitDispatcher(CurrentPrcb, CurrentIrql);
LABEL_17:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)OldIrql_low);
  __writecr8(OldIrql_low);
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v18 = (char *)KernelAbEntries + 88 * i;
    v19 = *((_QWORD *)v18 + 2);
    if ( (v19 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)Mutex & 0x7FFFFFFFFFFFFFFCLL) && v18[26] && (v19 & 1) == 0 )
    {
      v18[26] = 0;
      KiAbEntryFreeAndEnableInterrupts((__int64)(v18 + 16), (ULONG_PTR)CurrentThread, (__int64)Mutex, 1LL, 0LL);
      return;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)Mutex, 0LL, 0LL);
  v22 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v22->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v24 = *SchedulerAssist;
    do
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
    }
    while ( v25 != v24 );
    if ( (v24 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v22);
  }
  _enable();
}
