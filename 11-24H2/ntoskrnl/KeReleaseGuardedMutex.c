/*
 * XREFs of KeReleaseGuardedMutex @ 0x14031E470
 * Callers:
 *     FsRtlPrivateInitializeFileLock @ 0x1402491EC (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14025F860 (FsRtlLookupPerStreamContextInternal.c)
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     CcWriteBehindPreProcess @ 0x1402A8434 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x1402A883C (CcWriteBehindPostProcess.c)
 *     CcGetDirtyPagesHelper @ 0x1402AA740 (CcGetDirtyPagesHelper.c)
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402AB6C0 (CcSetDirtyPinnedData.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     CcGetFlushedValidData @ 0x1402CC6C0 (CcGetFlushedValidData.c)
 *     CcDeleteMbcb @ 0x1402CD624 (CcDeleteMbcb.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     FsRtlRemovePerStreamContext @ 0x1403C5300 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1403C5430 (FsRtlInsertPerStreamContext.c)
 *     FsRtlReleaseEofLock @ 0x1403D8730 (FsRtlReleaseEofLock.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1403DF500 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlAddLargeMcbEntry @ 0x1403DF6B0 (FsRtlAddLargeMcbEntry.c)
 *     PoRunDownDeviceObject @ 0x1403F1C6C (PoRunDownDeviceObject.c)
 *     PopInitilizeAcDcSettings @ 0x1403F29B0 (PopInitilizeAcDcSettings.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403F8EA0 (CcReleaseBcbLockAndVacbLock.c)
 *     FsRtlTruncateLargeMcb @ 0x1403F9DD0 (FsRtlTruncateLargeMcb.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1404031D0 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x140409160 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlAcquireEofLock @ 0x14040D140 (FsRtlAcquireEofLock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404190F0 (FsRtlpCancelOplockRHIrp.c)
 *     CcZeroEndOfLastPage @ 0x14044C774 (CcZeroEndOfLastPage.c)
 *     CcSetDirtyInMask @ 0x1404614E0 (CcSetDirtyInMask.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     HalMatchAcpiOemId @ 0x140478320 (HalMatchAcpiOemId.c)
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 *     HalAcpiGetTableDispatch @ 0x140478510 (HalAcpiGetTableDispatch.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x14047AEF0 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x14047F220 (FsRtlNumberOfRunsInLargeMcb.c)
 *     RawCompletionRoutine @ 0x140483810 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x14048419C (RawInitiateDeleteVolume.c)
 *     PopGetPowerSettingValue @ 0x14049172C (PopGetPowerSettingValue.c)
 *     PopRunMaximumIrpWorkers @ 0x140496CF8 (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x140496DCC (PopCreateDynamicIrpWorker.c)
 *     CcRepinBcb @ 0x14049D260 (CcRepinBcb.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14049FDC0 (FsRtlpCancelWaitingIrp.c)
 *     PpDevNodeRemoveFromTree @ 0x1404A38D4 (PpDevNodeRemoveFromTree.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404B4398 (PnpReleasePowerRelationsQueueLock.c)
 *     RawCheckForDeleteVolume @ 0x1404BC1EC (RawCheckForDeleteVolume.c)
 *     IopInvalidateBusRelationsWorker @ 0x1404BE320 (IopInvalidateBusRelationsWorker.c)
 *     FsRtlResetLargeMcb @ 0x1404C05B0 (FsRtlResetLargeMcb.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 *     PopRunNormalIrpWorkers @ 0x1404FA064 (PopRunNormalIrpWorkers.c)
 *     HalpAcpiGetAllTables @ 0x14053D290 (HalpAcpiGetAllTables.c)
 *     HalpAcpiGetFacsMapping @ 0x14053D4D0 (HalpAcpiGetFacsMapping.c)
 *     CcGetLsnForFileObject @ 0x14057BFD0 (CcGetLsnForFileObject.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14057FAF0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlSplitLargeMcb @ 0x14057FE00 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140580BC0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     PnpDisableUserModeNotifications @ 0x1405A6748 (PnpDisableUserModeNotifications.c)
 *     KeConfigureDynamicMemory @ 0x1405B79E4 (KeConfigureDynamicMemory.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405BC2A8 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiOpPatchCode @ 0x1405C535C (KiOpPatchCode.c)
 *     PopIrpWorkerControl @ 0x1405D7BF0 (PopIrpWorkerControl.c)
 *     RawVerifyVolume @ 0x1405E6F0C (RawVerifyVolume.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405F080C (RtlpTraceDatabaseReleaseLock.c)
 *     DifExReleaseFastMutexWrapper @ 0x140620590 (DifExReleaseFastMutexWrapper.c)
 *     DifKeReleaseGuardedMutexWrapper @ 0x14062F240 (DifKeReleaseGuardedMutexWrapper.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140701104 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x140701254 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x1407014B8 (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x1407015C0 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x1407016B0 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140701780 (HalpIrtReleaseDeviceAperture.c)
 *     NtSetInformationDebugObject @ 0x1407070B0 (NtSetInformationDebugObject.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x140720684 (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x1407238C4 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 *     IopReleaseResources @ 0x1407244C4 (IopReleaseResources.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140728638 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072D40C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14072D5E8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14072D670 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14072D71C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14072D86C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14072D92C (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x14072DD5C (PnpRemoveEventFromQueue.c)
 *     PnpActivatingDeviceNodeFromThreadV1 @ 0x140732FE0 (PnpActivatingDeviceNodeFromThreadV1.c)
 *     PnpMapActivatingDeviceNodeToThreadV1 @ 0x140733060 (PnpMapActivatingDeviceNodeToThreadV1.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140734038 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x14073423C (PipKsrNotifyDrivers.c)
 *     PnpBuildCmResourceLists @ 0x140734434 (PnpBuildCmResourceLists.c)
 *     PiUpdateDeviceResourceLists @ 0x14073646C (PiUpdateDeviceResourceLists.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073C2D0 (KeRegisterProcessorChangeCallback.c)
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     PfTInitialize @ 0x1407468B4 (PfTInitialize.c)
 *     PfTStart @ 0x140746B0C (PfTStart.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140747C10 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x14074CC70 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x14074CD30 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x140750D40 (PoQueueShutdownWorkItem.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407C878C (WheaCrashDumpInitializationComplete.c)
 *     WheapReportDeferredLiveDumps @ 0x1407C87F0 (WheapReportDeferredLiveDumps.c)
 *     EtwpSetProviderTraitsCommon @ 0x1408361EC (EtwpSetProviderTraitsCommon.c)
 *     CmpAddToDelayedClose @ 0x140844550 (CmpAddToDelayedClose.c)
 *     CmpReferenceKeyControlBlock @ 0x140845AD0 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     ExpUpdateDebugInfo @ 0x14084D2F4 (ExpUpdateDebugInfo.c)
 *     PiUEventProcessEventWorker @ 0x14085B220 (PiUEventProcessEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x14085B5E0 (PiUEventHandleGetEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x14085BBFC (PiUEventDereferenceEventEntry.c)
 *     PiUEventHandleRegistration @ 0x14085BCBC (PiUEventHandleRegistration.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14085C45C (PiUEventFreeClientRegistrationContext.c)
 *     CmpRemoveFromDelayedClose @ 0x140870910 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20 (CmpDereferenceKeyControlBlockWithLock.c)
 *     DbgkCopyProcessDebugPort @ 0x1408A781C (DbgkCopyProcessDebugPort.c)
 *     PnpDeferNotification @ 0x1408B3660 (PnpDeferNotification.c)
 *     PnpInsertEventInQueue @ 0x1408B3950 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BDDF0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiGetRelatedDevice @ 0x1408BEE58 (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1408D1350 (PiControlGetSetDeviceStatus.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408D2310 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1408D2838 (PiUEventNotifyClient.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     DbgkpCloseObject @ 0x1408EF460 (DbgkpCloseObject.c)
 *     CmpGetMappingHiveForString @ 0x14090AC0C (CmpGetMappingHiveForString.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140931D50 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140931F00 (FsRtlAddToTunnelCacheEx.c)
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 *     DbgkpQueueMessage @ 0x140939080 (DbgkpQueueMessage.c)
 *     MiCallCreateSectionFilters @ 0x140942138 (MiCallCreateSectionFilters.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14094224C (FsRtlAcquireToCreateMappedSection.c)
 *     PfTTraceListAdd @ 0x1409506E0 (PfTTraceListAdd.c)
 *     ExpGetNextProcessThread @ 0x140959450 (ExpGetNextProcessThread.c)
 *     PfSnEndTrace @ 0x140971A58 (PfSnEndTrace.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14097EC8C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14098DBA0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x14098E5B0 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x14098E760 (PnpProcessAssignResources.c)
 *     RawDispatch @ 0x1409A2210 (RawDispatch.c)
 *     RawCleanup @ 0x1409A2428 (RawCleanup.c)
 *     RawClose @ 0x1409A25BC (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x1409A2640 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1409A274C (RawCreate.c)
 *     RawUserFsCtrl @ 0x1409A2EE4 (RawUserFsCtrl.c)
 *     RawMountVolume @ 0x1409A3134 (RawMountVolume.c)
 *     RawScanDeletedList @ 0x1409A4080 (RawScanDeletedList.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1409A4760 (FsRtlTeardownPerStreamContexts.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PopLogDisabledSleepReason @ 0x1409B9550 (PopLogDisabledSleepReason.c)
 *     PopFreeSessionState @ 0x1409BA710 (PopFreeSessionState.c)
 *     PopGetSettingValue @ 0x1409BAD20 (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x1409BAE7C (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1409BDB60 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x1409BDC9C (PopCallPowerSettingCallback.c)
 *     PopDispatchNotificationsToList @ 0x1409BE678 (PopDispatchNotificationsToList.c)
 *     CmpDelayCloseWorker @ 0x1409D6A50 (CmpDelayCloseWorker.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2728 (IopCleanupFileObjectIosbRange.c)
 *     DbgkClearProcessDebugObject @ 0x1409E8838 (DbgkClearProcessDebugObject.c)
 *     NtDebugContinue @ 0x1409E89A0 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E8B88 (DbgkpSetProcessDebugObject.c)
 *     PiUEventReferenceEventEntry @ 0x1409ED5C8 (PiUEventReferenceEventEntry.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 *     PnpProcessDeferredRegistrations @ 0x1409EE8CC (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x1409EEFC4 (PiUEventNotifyUserMode.c)
 *     PnpDeviceEventWorker @ 0x1409EFB60 (PnpDeviceEventWorker.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1409F999C (PiDqObjectManagerUnregisterQuery.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A00320 (EtwpReleaseProviderTraitsReference.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A03AB4 (KeSynchronizeWithDynamicProcessors.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140A0D54C (PnpCleanupDeviceRegistryValues.c)
 *     IopDestroyDeviceNode @ 0x140A0F43C (IopDestroyDeviceNode.c)
 *     IopLegacyResourceAllocation @ 0x140A0FC24 (IopLegacyResourceAllocation.c)
 *     PnpFreeDeviceInstancePath @ 0x140A10994 (PnpFreeDeviceInstancePath.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140A12EA8 (PiUEventNotifyClientPendingEvent.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140A34F70 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A37B98 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PopRundownPowerSettings @ 0x140A38500 (PopRundownPowerSettings.c)
 *     NtWaitForDebugEvent @ 0x140A39180 (NtWaitForDebugEvent.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A43B50 (FsRtlDeleteKeyFromTunnelCache.c)
 *     PfSnGetCompletedTrace @ 0x140A43D60 (PfSnGetCompletedTrace.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A49ED0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A50330 (PiUEventNotifyDeviceInstanceChange.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     PopRequestShutdownWait @ 0x140A52D84 (PopRequestShutdownWait.c)
 *     PiUEventHandleUnregisterClient @ 0x140A5CD20 (PiUEventHandleUnregisterClient.c)
 *     PiUEventBroadcastEventWorker @ 0x140A5E370 (PiUEventBroadcastEventWorker.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140A673E4 (PiUEventQueueBroadcastEventEntry.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 *     DbgkOpenProcessDebugPort @ 0x140A6B414 (DbgkOpenProcessDebugPort.c)
 *     PnpBusTypeGuidGet @ 0x140A70C7C (PnpBusTypeGuidGet.c)
 *     PnpBusTypeGuidGetIndex @ 0x140A739EC (PnpBusTypeGuidGetIndex.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A76B70 (PoUnregisterPowerSettingCallback.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A85F24 (PnpMapDeviceObjectToDeviceInstance.c)
 *     CmpAddStringToMapping @ 0x140A8A09C (CmpAddStringToMapping.c)
 *     PiUEventHandleVetoEvent @ 0x140A8B24C (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x140A977E0 (PnpOrphanNotification.c)
 *     CmpDelayFreeRMWorker @ 0x140A9EF40 (CmpDelayFreeRMWorker.c)
 *     CmpDelayFreeCmRm @ 0x140AAF168 (CmpDelayFreeCmRm.c)
 *     DbgkpMarkProcessPeb @ 0x140AB0F14 (DbgkpMarkProcessPeb.c)
 *     PoVolumeDevice @ 0x140AB1498 (PoVolumeDevice.c)
 *     PopQueryPowerSettingUlong @ 0x140AB4520 (PopQueryPowerSettingUlong.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140B61ED8 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140B61F6C (WheapSaveRecordForLiveDump.c)
 *     PopFlushVolumes @ 0x140B67D40 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x140B6BC10 (PopFlushVolumeWorker.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x1403D8DF0 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
      KiAbEntryFreeAndEnableInterrupts((__int64)(v18 + 16), (ULONG_PTR)CurrentThread, (__int64)Mutex, 1, 0LL);
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
