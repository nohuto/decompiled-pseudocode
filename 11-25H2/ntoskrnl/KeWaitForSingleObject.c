/*
 * XREFs of KeWaitForSingleObject @ 0x14029C6A0
 * Callers:
 *     PpmTryAcquireLock @ 0x140202E54 (PpmTryAcquireLock.c)
 *     PpmCheckPeriodicStart @ 0x1402035D0 (PpmCheckPeriodicStart.c)
 *     PopFxActivateComponent @ 0x140203D5C (PopFxActivateComponent.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140206C50 (KiInvokeInterruptServiceRoutine.c)
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14020C8C4 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14020CDBC (SmKmStoreHelperCheckWaitCommand.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14020CF98 (SmKmStoreHelperWaitForCommand.c)
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ExpWaitForFastResource @ 0x140293C60 (ExpWaitForFastResource.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x14029E350 (FsRtlAcquireHeaderMutex.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x1402A1910 (IopWaitForSynchronousIo.c)
 *     CcUnmapVacbArray @ 0x1402C3F10 (CcUnmapVacbArray.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1402D2880 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     WmipFindRegEntryByProviderId @ 0x1402F197C (WmipFindRegEntryByProviderId.c)
 *     LdrpGetFromMUIMemCache @ 0x1402F2670 (LdrpGetFromMUIMemCache.c)
 *     KiSchedulerApc @ 0x1402F2C80 (KiSchedulerApc.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F40C0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403481A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PopFxProcessWorkPool @ 0x14034D940 (PopFxProcessWorkPool.c)
 *     PopIrpWorker @ 0x140356760 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x140357F10 (PopPepUpdateConstraints.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     CcSetValidData @ 0x14035B530 (CcSetValidData.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     IopAllocateReserveIrp @ 0x14035D8C8 (IopAllocateReserveIrp.c)
 *     IoSynchronousCallDriver @ 0x14035DF20 (IoSynchronousCallDriver.c)
 *     MiStoreAttemptContractPageFile @ 0x14036CF24 (MiStoreAttemptContractPageFile.c)
 *     ExfWaitForRundownProtectionRelease @ 0x14036DCCC (ExfWaitForRundownProtectionRelease.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14036E8D0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x14036EB2C (ExpUnblockPushLock.c)
 *     MiStoreEvictThread @ 0x14036EC70 (MiStoreEvictThread.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     FsRtlAcquireEofLock @ 0x1403760A0 (FsRtlAcquireEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x140376284 (FsRtlpWaitForIoAtEof.c)
 *     MiPfCompleteCoalescedIo @ 0x140378964 (MiPfCompleteCoalescedIo.c)
 *     MiAsyncSlabReplenish @ 0x140390EF4 (MiAsyncSlabReplenish.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x140393894 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140393F74 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x1403960C8 (SmKmStoreHelperCleanup.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396200 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x1403A2DC4 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403AA230 (CcWaitForUninitializeCacheMap.c)
 *     CcWriteBehindAsync @ 0x1403AB04C (CcWriteBehindAsync.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     PoGetIdleTimes @ 0x1403B2600 (PoGetIdleTimes.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     MiZeroPageWrite @ 0x1403BEEAC (MiZeroPageWrite.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1403D4BC4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x1403F96E0 (FsRtlReleaseEofLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14041A5E8 (KiSynchronizePassiveInterruptExecution.c)
 *     ExpWaitForResource @ 0x14041F0A0 (ExpWaitForResource.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     PopWakeDeviceList @ 0x14043154C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140431774 (PopSleepDeviceList.c)
 *     FsFilterAllocateCompletionStack @ 0x1404333E8 (FsFilterAllocateCompletionStack.c)
 *     EtwpEnableMetaProviderGuid @ 0x140434684 (EtwpEnableMetaProviderGuid.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140435060 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     IopWaitForSynchronousIoEvent @ 0x14043A8D0 (IopWaitForSynchronousIoEvent.c)
 *     AlpcpWaitForSingleObject @ 0x14043B370 (AlpcpWaitForSingleObject.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140443A40 (KiAcquireSecondaryPassiveConnectLock.c)
 *     ExpAcquireFastMutexContended @ 0x14044AE54 (ExpAcquireFastMutexContended.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14044B4F0 (SmKmStoreDeleteWhenEmpty.c)
 *     PopSetWatchdog @ 0x140457F50 (PopSetWatchdog.c)
 *     MiAttemptPageFileReduction @ 0x140459F14 (MiAttemptPageFileReduction.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14045B9C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     SmKmStoreHelperWorker @ 0x14045E110 (SmKmStoreHelperWorker.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     WmipFindRegEntryByDevice @ 0x140464348 (WmipFindRegEntryByDevice.c)
 *     MiIssuePageExtendRequest @ 0x14046DC64 (MiIssuePageExtendRequest.c)
 *     IopWaitForLockAlertable @ 0x140470104 (IopWaitForLockAlertable.c)
 *     WmipDeregisterRegEntry @ 0x1404718C4 (WmipDeregisterRegEntry.c)
 *     WheapProcessWorkQueueItem @ 0x1404781D0 (WheapProcessWorkQueueItem.c)
 *     CmpDoFileRead @ 0x140478FE0 (CmpDoFileRead.c)
 *     WmipReceiveNotifications @ 0x1404797A0 (WmipReceiveNotifications.c)
 *     PopFxActivateDevice @ 0x14047D560 (PopFxActivateDevice.c)
 *     PpmCapturePerformanceDistribution @ 0x14047E99C (PpmCapturePerformanceDistribution.c)
 *     MiRetryNonPagedAllocation @ 0x1404807B0 (MiRetryNonPagedAllocation.c)
 *     WmipBuildTraceDeviceList @ 0x140488394 (WmipBuildTraceDeviceList.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404900C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140492228 (LdrUnloadAlternateResourceModuleEx.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1404932BC (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     CmSiWaitForSingleEvent @ 0x140494A1C (CmSiWaitForSingleEvent.c)
 *     PopRunMaximumIrpWorkers @ 0x1404971B8 (PopRunMaximumIrpWorkers.c)
 *     WmiQueryTraceProviderCount @ 0x140497D78 (WmiQueryTraceProviderCount.c)
 *     PnpLockDeviceActionQueue @ 0x140499094 (PnpLockDeviceActionQueue.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404A6E60 (IoReleaseRemoveLockAndWaitEx.c)
 *     EtwpStartLoggerThread @ 0x1404A7B5C (EtwpStartLoggerThread.c)
 *     WmipAllocRegEntry @ 0x1404AB318 (WmipAllocRegEntry.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404AB978 (MiQueueSyncModifiedWriterApc.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404ABBC4 (MmStoreFlushOutstandingEvictions.c)
 *     ExUnregisterCallback @ 0x1404AC6F0 (ExUnregisterCallback.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404B45E4 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B75D8 (PopFxIssueComponentPerfStateChanges.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404BC80C (EtwpCovSampCaptureContextStop.c)
 *     PnpLockMountableDevice @ 0x1404C5784 (PnpLockMountableDevice.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404CC278 (MiCheckHoldFaultForHotPatch.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404CD69C (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopHaltDeviceIdle @ 0x1404D69DC (PopHaltDeviceIdle.c)
 *     PopIgnoreBatteryStatusChange @ 0x1404D9E4C (PopIgnoreBatteryStatusChange.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     IopLoadDriverImage @ 0x1404E6A70 (IopLoadDriverImage.c)
 *     MiQueueWorkingSetRequest @ 0x1404F3A78 (MiQueueWorkingSetRequest.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140552EE8 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x1405772C0 (CcQueueLazyWriteScanThread.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140577BE8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058ED8C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopAllocateBackpocketIrp @ 0x140592628 (IopAllocateBackpocketIrp.c)
 *     IopIoRingWaitForCompletionEvent @ 0x1405941BC (IopIoRingWaitForCompletionEvent.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14059F7D4 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnpSerializeBoot @ 0x1405A07AC (PnpSerializeBoot.c)
 *     PnprQuiesce @ 0x1405A4478 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1405A5E38 (PnpProcessRebalance.c)
 *     KiSignalWaitDisconnectLock @ 0x1405BE05C (KiSignalWaitDisconnectLock.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 *     KeSwapProcessOrStack @ 0x1405C0540 (KeSwapProcessOrStack.c)
 *     KiStallBugcheckThread @ 0x1405C2338 (KiStallBugcheckThread.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405C3134 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     PopIrpWorkerControl @ 0x1405D3080 (PopIrpWorkerControl.c)
 *     PspIumFreePartitionState @ 0x1405DA584 (PspIumFreePartitionState.c)
 *     SmTerminateStoreProcess @ 0x140600ADC (SmTerminateStoreProcess.c)
 *     SmpFpWaitForResource @ 0x1406022D8 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140602B0C (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1406034A8 (SmWaitForSyncIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x140625700 (DifKeWaitForSingleObjectWrapper.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140644A5C (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x140649CF0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x140649EF0 (ExpWaitForBootDevices.c)
 *     WheapAddErrorSource @ 0x14064FCA8 (WheapAddErrorSource.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     CmpLazyWriteWorker @ 0x14065C790 (CmpLazyWriteWorker.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MmReleaseCommitForMemResetPages @ 0x14065EFDC (MmReleaseCommitForMemResetPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140679750 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x14067E824 (MiDrainCrossPartitionUsage.c)
 *     MiStoreDeletePartition @ 0x140680594 (MiStoreDeletePartition.c)
 *     sub_140689930 @ 0x140689930 (sub_140689930.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406E9AD0 (PopPowerAggregatorDozeTimerDisarm.c)
 *     IoCancelFileOpen @ 0x1406EE040 (IoCancelFileOpen.c)
 *     sub_1406EE700 @ 0x1406EE700 (sub_1406EE700.c)
 *     sub_1406EEAB8 @ 0x1406EEAB8 (sub_1406EEAB8.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1406EEF4C (PnpWaitForEmptyDeviceEventQueue.c)
 *     HalpSetAcpiRealTimeClock @ 0x1406F0518 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406F2EA0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406F4868 (HalGetAdapterV2.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1406F60C4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpPutAcpiHacksInRegistry @ 0x1406F6694 (HalpPutAcpiHacksInRegistry.c)
 *     HalpQueryPccInterface @ 0x1406F81BC (HalpQueryPccInterface.c)
 *     ArbBuildAssignmentOrdering @ 0x1406F8E5C (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1406FC264 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlWaitForSmssEvent @ 0x1406FE2C0 (FsRtlWaitForSmssEvent.c)
 *     FsRtlBalanceReads @ 0x1406FEB30 (FsRtlBalanceReads.c)
 *     FsRtlDeregisterUncProvider @ 0x1406FEBE0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x1406FEEF0 (FsRtlpRegisterUncProvider.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140701068 (FsRtlIssueFileNotificationFsctl.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140701E50 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopHardErrorThread @ 0x140706270 (IopHardErrorThread.c)
 *     IopLoadFileSystemDriver @ 0x1407066FC (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x1407071C0 (IopSetRemoteLink.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407083C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14070D3A8 (IopIssueSystemEnvironmentRequest.c)
 *     PnpShutdownDevices @ 0x14070E9A0 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140712A50 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407148F8 (PnpRequestHwProfileChangeNotification.c)
 *     PiPagePathSetState @ 0x140716860 (PiPagePathSetState.c)
 *     IopAllocateBootResources @ 0x1407192A0 (IopAllocateBootResources.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407212FC (PnpWaitForEmptyDeviceActionQueue.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140721638 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x140727B9C (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x140729FD4 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x14072A10C (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14073A548 (PfTCleanup.c)
 *     PopDisablePowerLimitExtension @ 0x14073F228 (PopDisablePowerLimitExtension.c)
 *     PopFreePowerLimitRequest @ 0x14073F574 (PopFreePowerLimitRequest.c)
 *     PopDisableCoolingExtension @ 0x140740218 (PopDisableCoolingExtension.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140740AB0 (PopDirectedDripsWorkerRoutine.c)
 *     PopFxNotifySxTransitionState @ 0x1407420B0 (PopFxNotifySxTransitionState.c)
 *     PopClearHiberFileSignature @ 0x140745B84 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     PopSetSystemAwayMode @ 0x140747CD0 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x140748940 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x14074DA30 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14074E1A4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x14074E7B0 (PopBatteryRemove.c)
 *     PopPowerAdapterRemove @ 0x14074F4E0 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x1407505C0 (PopFanRemove.c)
 *     PopEtDeferredInitDxgContext @ 0x140750E90 (PopEtDeferredInitDxgContext.c)
 *     SshSessionManagerFlushBuffers @ 0x1407568A8 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x140763518 (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
 *     PsSetVmProcessorHostProcess @ 0x140766CCC (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x140769118 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14076941C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14076B4B0 (PspTeardownPartition.c)
 *     PsTerminateVsmEnclave @ 0x14076BA94 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14076D7C4 (RawPerformDevIoCtrl.c)
 *     RawQueryFileSystemInformation @ 0x14076D9C0 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140778010 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     PdcWaitForEvent @ 0x14077EEF4 (PdcWaitForEvent.c)
 *     SmProcessResizeRequest @ 0x1407891B0 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x14078978C (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x14078A928 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14078B1F0 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14078B2B0 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14078B380 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14078BAEC (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14078BB88 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14078C220 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1407943D0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140795210 (WmipGetSysIds.c)
 *     WmipEnumerateGuids @ 0x1407959C0 (WmipEnumerateGuids.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407962B4 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwUnregister @ 0x14079639C (WmipProcessLegacyEtwUnregister.c)
 *     WmipAddMofResource @ 0x1407964D8 (WmipAddMofResource.c)
 *     WmipWaitForCollectionEnabled @ 0x140796D10 (WmipWaitForCollectionEnabled.c)
 *     EtwpGetPmcProfileSource @ 0x14079A910 (EtwpGetPmcProfileSource.c)
 *     EtwpSetPmcProfileSource @ 0x14079AD18 (EtwpSetPmcProfileSource.c)
 *     EtwDereferenceSpinLockCounters @ 0x14079DA18 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14079DA74 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x1407A0540 (EtwpKsrCallback.c)
 *     ExpQueryPrmInterface @ 0x1407AFE48 (ExpQueryPrmInterface.c)
 *     ExpWorkQueueDestroy @ 0x1407B0908 (ExpWorkQueueDestroy.c)
 *     NtStartProfile @ 0x1407B2640 (NtStartProfile.c)
 *     NtStopProfile @ 0x1407B2940 (NtStopProfile.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     WheaAttemptClearPoison @ 0x1407B7A40 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407B7B20 (WheaAttemptPhysicalPageOffline.c)
 *     WheapProcessWaitingETWEvents @ 0x1407B8EC0 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407B9290 (WheaRegChangeNotifyCallback.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 *     CmpDummyThreadRoutine @ 0x1407C8A70 (CmpDummyThreadRoutine.c)
 *     MiInsertPageFileInList @ 0x1407DF450 (MiInsertPageFileInList.c)
 *     MiZeroPageFileFirstPage @ 0x1407DFB48 (MiZeroPageFileFirstPage.c)
 *     MiInjectThreadForHotPatch @ 0x1407E32BC (MiInjectThreadForHotPatch.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140814764 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdVerifyBootDisk @ 0x140819F1C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     FsRtlGetSectorSizeInformation @ 0x140821500 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x140821B10 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140822890 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140822A30 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpCoverageSamplerQuery @ 0x1408232B0 (EtwpCoverageSamplerQuery.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 *     IopLegacyResourceAllocation @ 0x140830B88 (IopLegacyResourceAllocation.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x14083168C (IopFilterResourceRequirementsCall.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     ObWaitForSingleObject @ 0x14084F030 (ObWaitForSingleObject.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x1408942B8 (EtwpSynchronizeWithLogger.c)
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     IopCancelIrpsInThreadList @ 0x1408BDA64 (IopCancelIrpsInThreadList.c)
 *     IoVolumeDeviceToDosName @ 0x1408BF350 (IoVolumeDeviceToDosName.c)
 *     IopQueryNameInternal @ 0x1408BF6D0 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408DBCB4 (EtwpUpdateGlobalGroupMasks.c)
 *     IopGetFileInformation @ 0x1408ECAD0 (IopGetFileInformation.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     PspUserThreadStartup @ 0x14090AF50 (PspUserThreadStartup.c)
 *     CmpGetVolumeClusterSize @ 0x1409105D0 (CmpGetVolumeClusterSize.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     DbgkpQueueMessage @ 0x14091F880 (DbgkpQueueMessage.c)
 *     PiDrvDbLoadNode @ 0x140931A50 (PiDrvDbLoadNode.c)
 *     EtwpAcquireLoggerContext @ 0x14093263C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409327CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     IopSynchronousApiServiceTail @ 0x140937538 (IopSynchronousApiServiceTail.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     FsRtlSetFileSize @ 0x14093A4A0 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14093DE60 (FsRtlGetFileSize.c)
 *     MiReadImageHeaders @ 0x1409413C0 (MiReadImageHeaders.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14094B784 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B044 (PnpQueueQueryAndRemoveEvent.c)
 *     Pdcv2ActivationClientActivate @ 0x14096C430 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x14096DDD8 (Pdcv2ActivationClientDeactivate.c)
 *     PnpDeviceEventWorker @ 0x14096E070 (PnpDeviceEventWorker.c)
 *     PnpWatchdogTimerPause @ 0x14096E52C (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x14096E630 (WdtpCancelTimer.c)
 *     SPCallServerHandleQueryPolicy @ 0x14097D124 (SPCallServerHandleQueryPolicy.c)
 *     sub_14097E278 @ 0x14097E278 (sub_14097E278.c)
 *     IopCancelAlertedRequest @ 0x1409868F0 (IopCancelAlertedRequest.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     IopUncacheInterfaceInformation @ 0x1409A1274 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 *     IoDisconnectInterrupt @ 0x1409A2700 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409A29B0 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1409A2E58 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x1409A2FA8 (IopInitializeActiveConnectBlock.c)
 *     WmipDereferenceEvent @ 0x1409B196C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409B318C (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x1409B3480 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B364C (WmipEnableCollectionForNewGuid.c)
 *     WmipIsQuerySetGuid @ 0x1409B38F0 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x1409B4770 (WmipEnableCollectOrEvent.c)
 *     WmipOpenBlock @ 0x1409B4F70 (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1409B5550 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1409B5E78 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1409B5F64 (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x1409B6860 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409B6B68 (WmipPrepareForWnodeAD.c)
 *     WmipUpdateDeviceStackSize @ 0x1409B750C (WmipUpdateDeviceStackSize.c)
 *     WmipDSCleanup @ 0x1409B7560 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B7738 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeleteMethod @ 0x1409B78B0 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x1409B79A0 (WmipDisableCollectOrEvent.c)
 *     WmipAddDataSource @ 0x1409B7A10 (WmipAddDataSource.c)
 *     WmipRegisterDevice @ 0x1409B81FC (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x1409B85D0 (WmipQueueRegWork.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1409B86FC (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x1409B87C4 (WmipFindISinGEbyName.c)
 *     IoWMIRegistrationControl @ 0x1409B8940 (IoWMIRegistrationControl.c)
 *     WmipLegacyEtwWorker @ 0x1409B8B90 (WmipLegacyEtwWorker.c)
 *     WmipRegistrationWorker @ 0x1409B8D80 (WmipRegistrationWorker.c)
 *     WmipSendEnableDisableRequest @ 0x1409B8F6C (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1409B91F4 (WmipUpdateDataSource.c)
 *     AlpcpWaitForPortReferences @ 0x1409C2468 (AlpcpWaitForPortReferences.c)
 *     EtwpDisableTraceProviders @ 0x1409E45FC (EtwpDisableTraceProviders.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409EC8F0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EE97C (EtwpUpdateDisallowedGuids.c)
 *     RtlDecompressBufferLZNT1 @ 0x1409F0620 (RtlDecompressBufferLZNT1.c)
 *     CmpFileFlushAndPurge @ 0x1409F83E8 (CmpFileFlushAndPurge.c)
 *     FsRtlQueryKernelEaFile @ 0x140A00250 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x140A00480 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A072B0 (FsRtlCancellableWaitForSingleObject.c)
 *     EtwpEnableDisableUMGL @ 0x140A11670 (EtwpEnableDisableUMGL.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A121BC (WmipSendWmiIrpToTraceDeviceList.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A14B30 (RtlDecompressFragmentLZNT1.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A15DBC (IopAcquireReleaseDispatcherLock.c)
 *     NtGetMUIRegistryInfo @ 0x140A168A0 (NtGetMUIRegistryInfo.c)
 *     PopInitSystemSleeperThread @ 0x140A16CC8 (PopInitSystemSleeperThread.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x140A23CC0 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A23DFC (IopGetVolumeId.c)
 *     FsRtlQueryInformationFile @ 0x140A2B210 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140A31320 (FsRtlQueryCachedVdl.c)
 *     NtWaitForDebugEvent @ 0x140A33F40 (NtWaitForDebugEvent.c)
 *     EtwpUpdatePerProcessTracing @ 0x140A37348 (EtwpUpdatePerProcessTracing.c)
 *     EtwpStartTrace @ 0x140A37464 (EtwpStartTrace.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     PopDirectedDripsAcquireTransitionLock @ 0x140A3B978 (PopDirectedDripsAcquireTransitionLock.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     SmStoreCompressionStop @ 0x140A4A624 (SmStoreCompressionStop.c)
 *     MiInSwapStore @ 0x140A4A81C (MiInSwapStore.c)
 *     WmipQueryGuidInfo @ 0x140A4B6CC (WmipQueryGuidInfo.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140A4C8E0 (PdcAcquireRwLockExclusive2.c)
 *     IoReportTargetDeviceChange @ 0x140A4D370 (IoReportTargetDeviceChange.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 *     NtReleaseKeyedEvent @ 0x140A55CF0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A58420 (NtWaitForKeyedEvent.c)
 *     NtNotifyChangeSession @ 0x140A64890 (NtNotifyChangeSession.c)
 *     WmipDeregisterDevice @ 0x140A65774 (WmipDeregisterDevice.c)
 *     EtwpSampledProfileRunDown @ 0x140A6582C (EtwpSampledProfileRunDown.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A664B0 (EtwpCrimsonProvEnableCallback.c)
 *     PopBsdFlush @ 0x140A68FE4 (PopBsdFlush.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140A6E1F0 (WmipGetGuidObjectInstanceInfo.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A726D0 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140A72854 (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140A72A18 (PopPepUnregisterDevice.c)
 *     IopCreateArcName @ 0x140A73568 (IopCreateArcName.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A74AA0 (PoUnregisterPowerSettingCallback.c)
 *     PopResizeHiberFile @ 0x140A76280 (PopResizeHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140A766B0 (PopSanityCheckHiberFile.c)
 *     WmipEnumerateMofResources @ 0x140A79990 (WmipEnumerateMofResources.c)
 *     WmipLegacyEtwCallback @ 0x140A7A580 (WmipLegacyEtwCallback.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7DD74 (HalpQueryAcpiRealTimeClock.c)
 *     HalpGetDynamicDevicePointer @ 0x140A7DEF0 (HalpGetDynamicDevicePointer.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A837E0 (CmpWaitOnHiveWriteQueue.c)
 *     RawQueryFsSizeInfo @ 0x140A84E18 (RawQueryFsSizeInfo.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140A88290 (PnpSynchronizeDeviceEventQueue.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A88870 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopAcquireTransitionLock @ 0x140A8DB1C (PopAcquireTransitionLock.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A8F960 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     HalpCallWakeAlarmDriver @ 0x140A933D0 (HalpCallWakeAlarmDriver.c)
 *     WmipFindMRByNames @ 0x140A94144 (WmipFindMRByNames.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140A9CAC8 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopGetWakeSource @ 0x140AA084C (PopGetWakeSource.c)
 *     WmipSetTraceNotify @ 0x140AA1848 (WmipSetTraceNotify.c)
 *     IopSendMessageToTrackService @ 0x140AA324C (IopSendMessageToTrackService.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     IoWMISetNotificationCallback @ 0x140AAB190 (IoWMISetNotificationCallback.c)
 *     PopReadPagesFromHiberFile @ 0x140AABC80 (PopReadPagesFromHiberFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AAC920 (FsRtlGetDirectImageOriginalBase.c)
 *     ArbArbiterHandler @ 0x140AAF7B0 (ArbArbiterHandler.c)
 *     EmPowerPagingEnabled @ 0x140AB1450 (EmPowerPagingEnabled.c)
 *     WmipProcessSynchronousEtw @ 0x140AB1760 (WmipProcessSynchronousEtw.c)
 *     IoVerifyVolume @ 0x140AB22D0 (IoVerifyVolume.c)
 *     PiQueueDeviceRequest @ 0x140AB40E8 (PiQueueDeviceRequest.c)
 *     PopDeactiveThermalRequest @ 0x140AB450C (PopDeactiveThermalRequest.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB57B8 (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140AB7C0C (IopInsertLegacyBusDeviceNode.c)
 *     IopFreeBandwidthContract @ 0x140ABF604 (IopFreeBandwidthContract.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     PsCallEnclave @ 0x140AC7FE0 (PsCallEnclave.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B439D0 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140B43BF4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140B450A0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140B4B200 (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     NtSetSystemPowerState @ 0x140B4F250 (NtSetSystemPowerState.c)
 *     MiZeroAllPageFiles @ 0x140B5223C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140B54550 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140B59988 (PopBuildDeviceNotifyList.c)
 *     IovpUnloadDriver @ 0x140B72AF8 (IovpUnloadDriver.c)
 *     VfDriverLock @ 0x140B7A4D4 (VfDriverLock.c)
 *     VfIrpSendSynchronousIrp @ 0x140B7DF20 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140B81D48 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140B82100 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140B8A530 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140B8D0D0 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140BA358C (AnFwFadeCompletion.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     IopStoreBootDriveLetter @ 0x140C0C1CC (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     EtwpFixBootLoggers @ 0x140C2D2BC (EtwpFixBootLoggers.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C40534 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     SbpAddTransportToInstance @ 0x140C4D6B4 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C4D8A0 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140C4DC78 (SbpWaitForVmbus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE v5; // bp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 *p_WaitIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  signed __int64 GraceSequenceQuiescent; // rdx
  PLARGE_INTEGER v11; // rcx
  unsigned __int64 v12; // r14
  unsigned int v13; // esi
  unsigned int v14; // ebx
  NTSTATUS v15; // ebp
  $748129697366ACACF652522F4AB73961 *v16; // r8
  unsigned int v17; // esi
  struct _KPRCB *v18; // r14
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // esi
  _KWAIT_STATUS_REGISTER v22; // al
  int v23; // ebx
  unsigned __int64 v24; // rdi
  __int64 ThreadTimerDelay; // rdx
  PVOID *v27; // rcx
  int v28; // eax
  int v29; // eax
  unsigned int v30; // esi
  volatile unsigned __int8 DpcRoutineActive; // cl
  int v32; // eax
  char v33; // al
  __int64 *p_AbWaitObject; // r8
  struct _LIST_ENTRY *v35; // rdx
  struct _LIST_ENTRY *v36; // rcx
  volatile __int64 WaitStatus; // rsi
  __int64 v38; // rcx
  _KWAIT_STATUS_REGISTER v39; // al
  int v40; // ebx
  unsigned __int64 WaitIrql; // rdi
  unsigned __int64 *v42; // rcx
  bool v43; // zf
  __int64 *v44; // r14
  unsigned __int8 v45; // si
  unsigned int v46; // esi
  ULONG_PTR v47; // rdx
  unsigned __int8 v48; // al
  unsigned __int8 v49; // al
  unsigned int v50; // eax
  unsigned int v51; // eax
  __int64 *v52; // rax
  ULONG_PTR v53; // rcx
  unsigned __int8 v54; // al
  __int64 *v55; // rax
  unsigned __int8 v56; // al
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // ebp
  ULONG_PTR WobPriority; // rcx
  unsigned __int8 v61; // al
  unsigned __int8 v62; // al
  unsigned int v63; // eax
  unsigned int v64; // eax
  bool v65; // r8
  struct _KPRCB *v66; // rcx
  signed __int32 *v67; // r8
  signed __int32 v68; // eax
  signed __int32 v69; // ett
  bool v70; // al
  _LIST_ENTRY *v71; // r9
  _LIST_ENTRY *AwaitingCompletion; // r14
  bool v73; // r8
  struct _KPRCB *v74; // rcx
  signed __int32 *v75; // r8
  signed __int32 v76; // eax
  signed __int32 v77; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v79; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v81; // rax
  struct _KPRCB *v82; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v84; // eax
  signed __int32 v85; // ett
  bool v86; // r8
  _LIST_ENTRY *v87; // rax
  struct _LIST_ENTRY *v88; // rcx
  struct _KPRCB *v89; // rcx
  signed __int32 *v90; // r8
  signed __int32 v91; // eax
  signed __int32 v92; // ett
  signed __int32 v93[8]; // [rsp+0h] [rbp-D8h] BYREF
  bool v94; // [rsp+30h] [rbp-A8h]
  int v95; // [rsp+34h] [rbp-A4h]
  int v96; // [rsp+38h] [rbp-A0h]
  __int64 *v97; // [rsp+40h] [rbp-98h]
  _QWORD *v98; // [rsp+48h] [rbp-90h] BYREF
  _QWORD *v99; // [rsp+50h] [rbp-88h] BYREF
  LONGLONG QuadPart; // [rsp+58h] [rbp-80h]
  _QWORD *v101[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v102; // [rsp+70h] [rbp-68h] BYREF
  __int128 v103; // [rsp+78h] [rbp-60h]
  __int64 v104; // [rsp+88h] [rbp-50h]
  unsigned __int8 v106; // [rsp+E8h] [rbp+10h]

  v106 = WaitReason;
  v5 = WaitMode;
  v102 = 0LL;
  CurrentThread = KeGetCurrentThread();
  QuadPart = 0LL;
  v94 = 0;
  v97 = 0LL;
  v96 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
    v96 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( CurrentPrcb->RcuData.AwaitingCompletion )
    {
      v70 = KeDisableInterrupts();
      AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
      v73 = v70;
      if ( AwaitingCompletion )
      {
        Flink = AwaitingCompletion->Flink;
        if ( AwaitingCompletion[-1].Blink )
        {
          if ( AwaitingCompletion != Flink )
            CurrentPrcb->RcuData.AwaitingCompletion = Flink;
        }
        else
        {
          if ( Flink == AwaitingCompletion )
          {
            CurrentPrcb->RcuData.AwaitingCompletion = v71;
          }
          else
          {
            CurrentPrcb->RcuData.AwaitingCompletion = Flink;
            v79 = AwaitingCompletion->Flink;
            Blink = AwaitingCompletion->Blink;
            if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
              goto LABEL_65;
            Blink->Flink = v79;
            v79->Blink = Blink;
          }
          v81 = AwaitingCompletion[3].Flink;
          AwaitingCompletion->Flink = v71;
          AwaitingCompletion[1].Flink = v81[3].Blink;
        }
        if ( v73 )
        {
          v82 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v82->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v84 = *SchedulerAssist;
            do
            {
              v85 = v84;
              v84 = _InterlockedCompareExchange(SchedulerAssist, v84 & 0xFFDFFFFF, v84);
            }
            while ( v85 != v84 );
            if ( (v84 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v82);
          }
          _enable();
        }
        if ( AwaitingCompletion[1].Flink != AwaitingCompletion[1].Blink )
        {
          if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) != 0 )
          {
            v86 = KeDisableInterrupts();
            if ( !AwaitingCompletion->Flink )
            {
              v87 = CurrentPrcb->RcuData.AwaitingCompletion;
              if ( v87 )
              {
                v88 = v87->Blink;
                if ( v88->Flink != v87 )
                  goto LABEL_65;
                AwaitingCompletion->Flink = v87;
                AwaitingCompletion->Blink = v88;
                v88->Flink = AwaitingCompletion;
                v87->Blink = AwaitingCompletion;
              }
              else
              {
                AwaitingCompletion->Blink = AwaitingCompletion;
                AwaitingCompletion->Flink = AwaitingCompletion;
                CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
              }
            }
            if ( v86 )
            {
              v89 = KeGetCurrentPrcb();
              v90 = (signed __int32 *)v89->SchedulerAssist;
              if ( v90 )
              {
                _m_prefetchw(v90);
                v91 = *v90;
                do
                {
                  v92 = v91;
                  v91 = _InterlockedCompareExchange(v90, v91 & 0xFFDFFFFF, v91);
                }
                while ( v92 != v91 );
                if ( (v91 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)v89);
              }
              _enable();
            }
          }
          else if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
          {
            KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
          }
        }
        v5 = WaitMode;
      }
      else if ( v70 )
      {
        v74 = KeGetCurrentPrcb();
        v75 = (signed __int32 *)v74->SchedulerAssist;
        if ( v75 )
        {
          _m_prefetchw(v75);
          v76 = *v75;
          do
          {
            v77 = v76;
            v76 = _InterlockedCompareExchange(v75, v76 & 0xFFDFFFFF, v76);
          }
          while ( v77 != v76 );
          if ( (v76 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v74);
        }
        _enable();
      }
    }
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      v65 = KeDisableInterrupts();
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v93, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F204A8;
      }
      if ( v65 )
      {
        v66 = KeGetCurrentPrcb();
        v67 = (signed __int32 *)v66->SchedulerAssist;
        if ( v67 )
        {
          _m_prefetchw(v67);
          v68 = *v67;
          do
          {
            v69 = v68;
            v68 = _InterlockedCompareExchange(v67, v68 & 0xFFDFFFFF, v68);
          }
          while ( v69 != v68 );
          if ( (v68 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v66);
        }
        _enable();
      }
    }
    GraceSequenceQuiescent = CurrentPrcb->RcuData.GraceSequenceQuiescent;
    if ( GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
    {
      v42 = (unsigned __int64 *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
      if ( (*v42 & *(_QWORD *)(v42[1] + 56)) == 0 )
      {
        if ( (unsigned int)KiRcuReportQuiescentState(v42, GraceSequenceQuiescent) )
          KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
      }
    }
  }
  v11 = Timeout;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      p_WaitIrql = &CurrentThread->WaitIrql;
      v95 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
      v5 = WaitMode;
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v95 = 1;
    }
  }
  else
  {
    v95 = 0;
  }
  while ( 1 )
  {
    v12 = *p_WaitIrql;
    v101[0] = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v5;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v12 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v11 = (PLARGE_INTEGER)KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v11);
      *p_WaitIrql = 0;
    }
    v14 = v96;
    if ( !Alertable )
      break;
    if ( CurrentThread->Alerted[v5] )
    {
      CurrentThread->Alerted[v5] = 0;
      v15 = 257;
    }
    else if ( !v5 || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
    {
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v15 = 257;
      }
      else
      {
        v15 = 0;
      }
    }
    else
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
      v15 = 192;
    }
    if ( v15 )
      goto LABEL_27;
LABEL_35:
    v16 = &CurrentThread->320;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v106;
    v15 = 0;
    v17 = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v18 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
      v16 = &CurrentThread->320;
    }
    v19 = *((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) == 2 )
    {
      v94 = (*((_BYTE *)Object + 48) & 2) != 0;
      if ( (int)v19 <= 0
        && (CurrentThread != *((struct _KTHREAD **)Object + 5) || *((_BYTE *)Object + 2) != v18->DpcRoutineActive) )
      {
        goto LABEL_38;
      }
      v28 = *((_DWORD *)Object + 1);
      if ( v28 == 0x80000000 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        KiFastExitThreadWait(v18, (ULONG_PTR)CurrentThread);
        RtlRaiseStatus(-1073741423);
      }
      v29 = v28 - 1;
      *((_DWORD *)Object + 1) = v29;
      if ( v29 )
        goto LABEL_42;
      CurrentThread->WaitStatus = 0LL;
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v30 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
          {
            HvlNotifyLongSpinWait(v30);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( *((_BYTE *)Object + 49) )
        --CurrentThread->KernelApcDisable;
      if ( v18->CurrentThread == CurrentThread )
        DpcRoutineActive = v18->DpcRoutineActive;
      else
        DpcRoutineActive = 0;
      v104 = 0LL;
      v32 = *(_DWORD *)Object;
      v103 = 0LL;
      LODWORD(v103) = v32;
      BYTE2(v103) = DpcRoutineActive;
      *(_DWORD *)Object = v103;
      v33 = *((_BYTE *)Object + 48);
      *((_QWORD *)Object + 5) = CurrentThread;
      if ( (v33 & 1) != 0 )
      {
        *((_BYTE *)Object + 48) = v33 & 0xFE;
        CurrentThread->WaitStatus |= 0x80uLL;
      }
      if ( (*((_BYTE *)Object + 48) & 2) != 0 )
        CurrentThread->AbWaitObject = Object;
      else
        CurrentThread->AbWaitObject = 0LL;
      p_AbWaitObject = (__int64 *)&CurrentThread->AbWaitObject;
      v35 = CurrentThread->MutantListHead.Blink;
      v36 = (struct _LIST_ENTRY *)((char *)Object + 24);
      if ( v35->Flink == &CurrentThread->MutantListHead )
      {
        v36->Flink = &CurrentThread->MutantListHead;
        *((_QWORD *)Object + 4) = v35;
        v35->Flink = v36;
        CurrentThread->MutantListHead.Blink = v36;
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        CurrentThread->WaitBlockFill6[68] = 2;
        CurrentThread->ThreadLock = 0LL;
        WaitStatus = CurrentThread->WaitStatus;
        v38 = *p_AbWaitObject;
        if ( *p_AbWaitObject )
        {
          CurrentThread->AbWaitObject = 0LL;
          v52 = KeAbPreAcquire(v38, 0LL);
          if ( v52 )
            *((_BYTE *)v52 + 10) = 1;
        }
        v98 = 0LL;
        if ( v14 >= 2 )
        {
          v59 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v59 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38) )
              {
                HvlNotifyLongSpinWait(v59);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( CurrentThread->ThreadLock );
          }
          WobPriority = CurrentThread->WobPriority;
          v61 = CurrentThread->PriorityFloorCounts[WobPriority];
          if ( !v61 )
            KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, WobPriority, 2uLL, 0LL);
          v62 = v61 - 1;
          CurrentThread->PriorityFloorCounts[WobPriority] = v62;
          if ( !v62 )
          {
            v63 = CurrentThread->PriorityFloorSummary ^ (1 << WobPriority);
            CurrentThread->PriorityFloorSummary = v63;
            if ( v63 < 1 << WobPriority && CurrentThread->Priority <= 31 )
            {
              v64 = KiComputeThreadPriority(CurrentThread, 0LL);
              if ( (int)v64 < CurrentThread->Priority )
                KiSetPriorityThread(CurrentThread, &v98, v64);
            }
          }
          CurrentThread->WobPriority = 32;
          CurrentThread->ThreadLock = 0LL;
        }
        v39.Flags = (unsigned __int8)CurrentThread->WaitRegister;
        v40 = v14 & 1;
        if ( (v39.Flags & 0x38) != 0 )
        {
          if ( (v39.Flags & 0x18) != 0 )
          {
            KiExitThreadWaitReschedule(v18);
            return WaitStatus;
          }
          else
          {
            KiProcessDeferredReadyList(v18, &v98, 1u);
            KiDeliverApc(0, 0LL, 0LL);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
            __writecr8(0LL);
            return WaitStatus;
          }
        }
        else
        {
          WaitIrql = CurrentThread->WaitIrql;
          if ( v40 )
          {
            KiProcessDeferredReadyList(v18, &v98, WaitIrql);
            return WaitStatus;
          }
          else
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)WaitIrql);
            __writecr8(WaitIrql);
            return WaitStatus;
          }
        }
      }
LABEL_65:
      __fastfail(3u);
    }
    if ( (int)v19 > 0 )
    {
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = v19 - 1;
      }
      goto LABEL_42;
    }
LABEL_38:
    v20 = QuadPart;
    if ( v95 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v19 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v20 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !*p_WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v20 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v95 )
        goto LABEL_64;
      if ( !QuadPart )
        goto LABEL_41;
      v19 = MEMORY[0xFFFFF78000000014];
    }
    if ( v19 > v20 )
    {
LABEL_41:
      v15 = 258;
LABEL_42:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v93, 0);
      if ( CurrentThread->ThreadLock )
      {
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        CurrentThread->ThreadLock = 0LL;
      }
      v99 = 0LL;
      if ( v14 >= 2 )
      {
        v46 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v46 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
            {
              HvlNotifyLongSpinWait(v46);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v47 = CurrentThread->WobPriority;
        v48 = CurrentThread->PriorityFloorCounts[v47];
        if ( !v48 )
          KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v47, 2uLL, 0LL);
        v49 = v48 - 1;
        CurrentThread->PriorityFloorCounts[v47] = v49;
        if ( !v49 )
        {
          v50 = CurrentThread->PriorityFloorSummary ^ (1 << v47);
          CurrentThread->PriorityFloorSummary = v50;
          if ( v50 < 1 << v47 && CurrentThread->Priority <= 31 )
          {
            v51 = KiComputeThreadPriority(CurrentThread, 0LL);
            if ( (int)v51 < CurrentThread->Priority )
              KiSetPriorityThread(CurrentThread, &v99, v51);
          }
        }
        CurrentThread->WobPriority = 32;
        CurrentThread->ThreadLock = 0LL;
      }
      v22.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      v23 = v14 & 1;
      if ( (v22.Flags & 0x38) != 0 )
      {
        if ( (v22.Flags & 0x18) != 0 )
        {
          KiExitThreadWaitReschedule(v18);
        }
        else
        {
          KiProcessDeferredReadyList(v18, &v99, 1u);
          KiDeliverApc(0, 0LL, 0LL);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
          __writecr8(0LL);
        }
      }
      else
      {
        v24 = CurrentThread->WaitIrql;
        if ( v23 )
        {
          KiProcessDeferredReadyList(v18, &v99, v24);
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v24);
          __writecr8(v24);
        }
      }
      return v15;
    }
LABEL_64:
    v27 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v27 != (char *)Object + 8 )
      goto LABEL_65;
    v16->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    v16->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v27;
    *v27 = v16;
    *((_QWORD *)Object + 2) = v16;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    v43 = !v94;
    CurrentThread->WaitBlockCount = 1;
    if ( v43 )
    {
      v44 = v97;
    }
    else
    {
      v44 = KeAbPreAcquire((__int64)Object, 0LL);
      v97 = v44;
    }
    if ( v44 )
    {
      *(_BYTE *)v44 |= 2u;
      if ( *v44 < 0 )
        KiAbEntryRemoveFromTree(v44);
      *((_BYTE *)v44 + 9) = 1;
      *(_BYTE *)v44 &= ~2u;
    }
    v15 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v14, (__int64)&v102);
    v96 = 0;
    if ( v44 )
    {
      v55 = KeAbPreAcquire((__int64)Object, (__int64)v44);
      if ( (v15 & 0xFFFFFF7F) != 0 )
      {
        KeAbPostReleaseEx((ULONG_PTR)Object, (ULONG_PTR)v55);
        v97 = 0LL;
      }
      else
      {
        v97 = v55;
        *((_BYTE *)v55 + 10) = 1;
      }
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( v15 != 256 )
      return v15;
    v45 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v45);
    v5 = WaitMode;
    *p_WaitIrql = v45;
  }
  if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !v5 )
    goto LABEL_35;
  v15 = 192;
LABEL_27:
  if ( v14 >= 2 )
  {
    v53 = CurrentThread->WobPriority;
    v54 = CurrentThread->PriorityFloorCounts[v53];
    if ( !v54 )
      KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v53, 2uLL, 0LL);
    v56 = v54 - 1;
    CurrentThread->PriorityFloorCounts[v53] = v56;
    if ( !v56 )
    {
      v57 = CurrentThread->PriorityFloorSummary ^ (1 << v53);
      CurrentThread->PriorityFloorSummary = v57;
      if ( v57 < 1 << v53 && CurrentThread->Priority <= 31 )
      {
        v58 = KiComputeThreadPriority(CurrentThread, 0LL);
        if ( (int)v58 < CurrentThread->Priority )
          KiSetPriorityThread(CurrentThread, v101, v58);
      }
    }
    CurrentThread->WobPriority = 32;
  }
  CurrentThread->ThreadLock = 0LL;
  if ( (v14 & 1) != 0 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v101, v12);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v12);
    __writecr8(v12);
  }
  return v15;
}
