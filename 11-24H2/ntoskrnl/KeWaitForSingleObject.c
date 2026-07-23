/*
 * XREFs of KeWaitForSingleObject @ 0x14031DE40
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     ExpWaitForResource @ 0x14022CDD0 (ExpWaitForResource.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140231DD0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     FsRtlReleaseFileForModWrite @ 0x14025A8C4 (FsRtlReleaseFileForModWrite.c)
 *     CcSetValidData @ 0x14025ABE4 (CcSetValidData.c)
 *     MiIssueSynchronousFlush @ 0x14025BAA8 (MiIssueSynchronousFlush.c)
 *     IopAllocateReserveIrp @ 0x14025CDD8 (IopAllocateReserveIrp.c)
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x14025FE14 (MiZeroPageWrite.c)
 *     MiAsyncSlabReplenish @ 0x14026F604 (MiAsyncSlabReplenish.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402B5468 (KiAcquireSecondaryPassiveConnectLock.c)
 *     FsRtlpWaitOnIrp @ 0x1402B72F8 (FsRtlpWaitOnIrp.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1402BB63C (ExfWaitForRundownProtectionRelease.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402BB8D0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402BC2BC (ExpUnblockPushLock.c)
 *     PopSetWatchdog @ 0x1402BC81C (PopSetWatchdog.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     LdrpGetFromMUIMemCache @ 0x1402DCFC0 (LdrpGetFromMUIMemCache.c)
 *     WmipFindRegEntryByProviderId @ 0x1402DDC64 (WmipFindRegEntryByProviderId.c)
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 *     FsRtlReleaseEofLock @ 0x1402E0940 (FsRtlReleaseEofLock.c)
 *     FsRtlAcquireEofLock @ 0x1402E13D0 (FsRtlAcquireEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402E1598 (FsRtlpWaitForIoAtEof.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402E7EB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1402F9274 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402F976C (SmKmStoreHelperCheckWaitCommand.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402F9948 (SmKmStoreHelperWaitForCommand.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     FsRtlAcquireHeaderMutex @ 0x14031D7D0 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiPfCompleteCoalescedIo @ 0x140351964 (MiPfCompleteCoalescedIo.c)
 *     PoGetIdleTimes @ 0x14036F560 (PoGetIdleTimes.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x140376298 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403766A4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140377A08 (SmKmStoreHelperCleanup.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377D20 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x140383B28 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403AE8E8 (KiInvokeInterruptServiceRoutine.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x1403B3490 (IopWaitForSynchronousIo.c)
 *     ExpWaitForFastResource @ 0x1403BD4B0 (ExpWaitForFastResource.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1403D6FD8 (MiCheckHoldFaultForHotPatch.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     MiAttemptPageFileReduction @ 0x1403EF264 (MiAttemptPageFileReduction.c)
 *     PopWakeDeviceList @ 0x14041BC4C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14041BE74 (PopSleepDeviceList.c)
 *     FsFilterAllocateCompletionStack @ 0x140421668 (FsFilterAllocateCompletionStack.c)
 *     EtwpEnableMetaProviderGuid @ 0x1404233C0 (EtwpEnableMetaProviderGuid.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     IopWaitForSynchronousIoEvent @ 0x14042ABC0 (IopWaitForSynchronousIoEvent.c)
 *     AlpcpWaitForSingleObject @ 0x14042B310 (AlpcpWaitForSingleObject.c)
 *     ExpAcquireFastMutexContended @ 0x140441108 (ExpAcquireFastMutexContended.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140441A20 (SmKmStoreDeleteWhenEmpty.c)
 *     PpmTryAcquireLock @ 0x14044BFCC (PpmTryAcquireLock.c)
 *     PpmCheckPeriodicStart @ 0x14044C1A0 (PpmCheckPeriodicStart.c)
 *     CcWaitForUninitializeCacheMap @ 0x14044F570 (CcWaitForUninitializeCacheMap.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1404501F0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     SmKmStoreHelperWorker @ 0x140452510 (SmKmStoreHelperWorker.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     WmipFindRegEntryByDevice @ 0x14045A0A4 (WmipFindRegEntryByDevice.c)
 *     MiIssuePageExtendRequest @ 0x140464038 (MiIssuePageExtendRequest.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140468FF4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     IopWaitForLockAlertable @ 0x140469278 (IopWaitForLockAlertable.c)
 *     WmipDeregisterRegEntry @ 0x14046A000 (WmipDeregisterRegEntry.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 *     WheapProcessWorkQueueItem @ 0x140474590 (WheapProcessWorkQueueItem.c)
 *     CmpDoFileRead @ 0x14047546C (CmpDoFileRead.c)
 *     WmipReceiveNotifications @ 0x140475EC4 (WmipReceiveNotifications.c)
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 *     MiStoreAttemptContractPageFile @ 0x1404770D4 (MiStoreAttemptContractPageFile.c)
 *     PpmCapturePerformanceDistribution @ 0x14047A270 (PpmCapturePerformanceDistribution.c)
 *     MiRetryNonPagedAllocation @ 0x14047C730 (MiRetryNonPagedAllocation.c)
 *     WmipBuildTraceDeviceList @ 0x14048564C (WmipBuildTraceDeviceList.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1404863F8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14048C12C (LdrUnloadAlternateResourceModuleEx.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14048D37C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     CmSiWaitForSingleEvent @ 0x14048E298 (CmSiWaitForSingleEvent.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 *     PopRunMaximumIrpWorkers @ 0x140491688 (PopRunMaximumIrpWorkers.c)
 *     WmiQueryTraceProviderCount @ 0x140492354 (WmiQueryTraceProviderCount.c)
 *     PnpLockDeviceActionQueue @ 0x1404937D8 (PnpLockDeviceActionQueue.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140493A20 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404A2380 (IoReleaseRemoveLockAndWaitEx.c)
 *     EtwpStartLoggerThread @ 0x1404A2E5C (EtwpStartLoggerThread.c)
 *     WmipAllocRegEntry @ 0x1404A6FCC (WmipAllocRegEntry.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404A73D8 (MiQueueSyncModifiedWriterApc.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404A7624 (MmStoreFlushOutstandingEvictions.c)
 *     ExUnregisterCallback @ 0x1404A8640 (ExUnregisterCallback.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404AE694 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B168C (PopFxIssueComponentPerfStateChanges.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404B687C (EtwpCovSampCaptureContextStop.c)
 *     PnpLockMountableDevice @ 0x1404BF394 (PnpLockMountableDevice.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404C1BD4 (KiSynchronizePassiveInterruptExecution.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404C6680 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopHaltDeviceIdle @ 0x1404CF51C (PopHaltDeviceIdle.c)
 *     PopIgnoreBatteryStatusChange @ 0x1404D224C (PopIgnoreBatteryStatusChange.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     IopLoadDriverImage @ 0x1404DD018 (IopLoadDriverImage.c)
 *     PopFxProcessWorkPool @ 0x1404E24A0 (PopFxProcessWorkPool.c)
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 *     MiQueueWorkingSetRequest @ 0x1404F3BCC (MiQueueWorkingSetRequest.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140553128 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x140577A50 (CcQueueLazyWriteScanThread.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140578388 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140579DD8 (CcDeleteSectionsForPartition.c)
 *     FsRtlpPostStackOverflow @ 0x14057F52C (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058F5E0 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopAllocateBackpocketIrp @ 0x140592D08 (IopAllocateBackpocketIrp.c)
 *     IopIoRingWaitForCompletionEvent @ 0x14059484C (IopIoRingWaitForCompletionEvent.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14059FE84 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnpSerializeBoot @ 0x1405A0E5C (PnpSerializeBoot.c)
 *     PnprQuiesce @ 0x1405A4C78 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1405A6738 (PnpProcessRebalance.c)
 *     KiSignalWaitDisconnectLock @ 0x1405BF66C (KiSignalWaitDisconnectLock.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 *     KeSwapProcessOrStack @ 0x1405C1EB0 (KeSwapProcessOrStack.c)
 *     KiStallBugcheckThread @ 0x1405C3E08 (KiStallBugcheckThread.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405C4C04 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     PopIrpWorkerControl @ 0x1405D5110 (PopIrpWorkerControl.c)
 *     PspIumFreePartitionState @ 0x1405E3D04 (PspIumFreePartitionState.c)
 *     SmTerminateStoreProcess @ 0x14060B0C8 (SmTerminateStoreProcess.c)
 *     SmpFpWaitForResource @ 0x14060C854 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060D08C (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x14060DA28 (SmWaitForSyncIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x14062FC80 (DifKeWaitForSingleObjectWrapper.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14064F0A4 (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x1406542F0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1406544F0 (ExpWaitForBootDevices.c)
 *     WheapAddErrorSource @ 0x14065A358 (WheapAddErrorSource.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     CmpLazyWriteWorker @ 0x140666B00 (CmpLazyWriteWorker.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066BCEC (MmReleaseCommitForMemResetPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140686110 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 *     MiStoreDeletePartition @ 0x14068CF54 (MiStoreDeletePartition.c)
 *     sub_140695E50 @ 0x140695E50 (sub_140695E50.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406F34C4 (PopPowerAggregatorDozeTimerDisarm.c)
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     sub_1406F81C4 @ 0x1406F81C4 (sub_1406F81C4.c)
 *     sub_1406F857C @ 0x1406F857C (sub_1406F857C.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1406F8A00 (PnpWaitForEmptyDeviceEventQueue.c)
 *     HalpSetAcpiRealTimeClock @ 0x1406F9E9C (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406FC8D0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406FE298 (HalGetAdapterV2.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1406FFAF4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpPutAcpiHacksInRegistry @ 0x1407000C4 (HalpPutAcpiHacksInRegistry.c)
 *     HalpQueryPccInterface @ 0x140701C5C (HalpQueryPccInterface.c)
 *     ArbBuildAssignmentOrdering @ 0x1407028FC (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140705D04 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlWaitForSmssEvent @ 0x140707D60 (FsRtlWaitForSmssEvent.c)
 *     FsRtlBalanceReads @ 0x1407085D0 (FsRtlBalanceReads.c)
 *     FsRtlDeregisterUncProvider @ 0x140708680 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x140708990 (FsRtlpRegisterUncProvider.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070AAE8 (FsRtlIssueFileNotificationFsctl.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14070B8D0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopHardErrorThread @ 0x14070FF00 (IopHardErrorThread.c)
 *     IopLoadFileSystemDriver @ 0x14071038C (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x140710E50 (IopSetRemoteLink.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140712050 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140717038 (IopIssueSystemEnvironmentRequest.c)
 *     PnpShutdownDevices @ 0x140718630 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14071C6E0 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14071E588 (PnpRequestHwProfileChangeNotification.c)
 *     PiPagePathSetState @ 0x1407204F0 (PiPagePathSetState.c)
 *     IopAllocateBootResources @ 0x140722DB0 (IopAllocateBootResources.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14072B290 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14072B5C8 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x140731D68 (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x140732604 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x140734194 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1407342CC (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 *     PopDisablePowerLimitExtension @ 0x140749628 (PopDisablePowerLimitExtension.c)
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 *     PopDisableCoolingExtension @ 0x14074A618 (PopDisableCoolingExtension.c)
 *     PopDirectedDripsWorkerRoutine @ 0x14074AEB0 (PopDirectedDripsWorkerRoutine.c)
 *     PopFxNotifySxTransitionState @ 0x14074C4B0 (PopFxNotifySxTransitionState.c)
 *     PopClearHiberFileSignature @ 0x14074FF70 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1407520E0 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x140752D30 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407582D0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140758E64 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x140759700 (PopBatteryRemove.c)
 *     PopBatteryUpdateTestExempt @ 0x140759914 (PopBatteryUpdateTestExempt.c)
 *     PopPowerAdapterRemove @ 0x14075AD90 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x14075BE90 (PopFanRemove.c)
 *     PopEtDeferredInitDxgContext @ 0x14075C860 (PopEtDeferredInitDxgContext.c)
 *     SshSessionManagerFlushBuffers @ 0x140766288 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x140773108 (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     PsSetVmProcessorHostProcess @ 0x1407768BC (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x140778EC8 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1407791CC (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14077AF00 (PspTeardownPartition.c)
 *     PsTerminateVsmEnclave @ 0x14077B4E4 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14077C9A4 (RawPerformDevIoCtrl.c)
 *     RawQueryFileSystemInformation @ 0x14077CBF4 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140787190 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     PdcWaitForEvent @ 0x14078E0E4 (PdcWaitForEvent.c)
 *     SmProcessResizeRequest @ 0x140798690 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x140798C6C (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x140799E00 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14079A6C8 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14079A788 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14079A858 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14079AFC4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14079B060 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1407A38B0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1407A46F0 (WmipGetSysIds.c)
 *     WmipEnumerateGuids @ 0x1407A4EA0 (WmipEnumerateGuids.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407A57C4 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwUnregister @ 0x1407A58AC (WmipProcessLegacyEtwUnregister.c)
 *     WmipAddMofResource @ 0x1407A59E8 (WmipAddMofResource.c)
 *     WmipWaitForCollectionEnabled @ 0x1407A6220 (WmipWaitForCollectionEnabled.c)
 *     EtwpGetPmcProfileSource @ 0x1407A9E20 (EtwpGetPmcProfileSource.c)
 *     EtwpSetPmcProfileSource @ 0x1407AA228 (EtwpSetPmcProfileSource.c)
 *     EtwDereferenceSpinLockCounters @ 0x1407AD2B8 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1407AD314 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x1407AFD60 (EtwpKsrCallback.c)
 *     ExpQueryPrmInterface @ 0x1407BFA68 (ExpQueryPrmInterface.c)
 *     ExpWorkQueueDestroy @ 0x1407C0528 (ExpWorkQueueDestroy.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C2560 (NtStopProfile.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     WheaAttemptClearPoison @ 0x1407C76B0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C7790 (WheaAttemptPhysicalPageOffline.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8B80 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8F50 (WheaRegChangeNotifyCallback.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     CmpDummyThreadRoutine @ 0x1407D8760 (CmpDummyThreadRoutine.c)
 *     MiInsertPageFileInList @ 0x1407EF8C0 (MiInsertPageFileInList.c)
 *     MiZeroPageFileFirstPage @ 0x1407EFFB8 (MiZeroPageFileFirstPage.c)
 *     MiInjectThreadForHotPatch @ 0x1407F3738 (MiInjectThreadForHotPatch.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140824CE4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdVerifyBootDisk @ 0x14082A54C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     EtwpUpdateDisallowedGuids @ 0x140831C00 (EtwpUpdateDisallowedGuids.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     ObWaitForSingleObject @ 0x1408470A0 (ObWaitForSingleObject.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14085C8B8 (EtwpUpdateGlobalGroupMasks.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     AlpcpReceiveMessagePort @ 0x14089DB00 (AlpcpReceiveMessagePort.c)
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopInvalidateVolumesForDevice @ 0x1408AEAB4 (IopInvalidateVolumesForDevice.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408AFB00 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B079C (PnpQueueQueryAndRemoveEvent.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 *     IopCancelIrpsInThreadList @ 0x1408EED94 (IopCancelIrpsInThreadList.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     NtGetMUIRegistryInfo @ 0x1408F7D70 (NtGetMUIRegistryInfo.c)
 *     PopInitSystemSleeperThread @ 0x1408F8198 (PopInitSystemSleeperThread.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     PspUserThreadStartup @ 0x1409212E0 (PspUserThreadStartup.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140928FAC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpGetVolumeClusterSize @ 0x140932C5C (CmpGetVolumeClusterSize.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 *     FsRtlGetSectorSizeInformation @ 0x14094E860 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x14094EE70 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14094FDC0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14094FF60 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140950A40 (IoVolumeDeviceToDosName.c)
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     IopSynchronousApiServiceTail @ 0x140957634 (IopSynchronousApiServiceTail.c)
 *     IopGetFileInformation @ 0x140957CC0 (IopGetFileInformation.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     SPCallServerHandleQueryPolicy @ 0x14095F70C (SPCallServerHandleQueryPolicy.c)
 *     sub_140960848 @ 0x140960848 (sub_140960848.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 *     PnpAllocateResources @ 0x140978AE0 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x1409794B8 (IopFilterResourceRequirementsCall.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140981EE8 (IopInsertLegacyBusDeviceNode.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
 *     FsRtlSetFileSize @ 0x14098A000 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
 *     MiReadImageHeaders @ 0x14098F538 (MiReadImageHeaders.c)
 *     AlpcpWaitForPortReferences @ 0x140995308 (AlpcpWaitForPortReferences.c)
 *     WmipUpdateDataSource @ 0x1409AF500 (WmipUpdateDataSource.c)
 *     WmipSendEnableDisableRequest @ 0x1409AF934 (WmipSendEnableDisableRequest.c)
 *     WmipFindISinGEbyName @ 0x1409AFB60 (WmipFindISinGEbyName.c)
 *     WmipRegistrationWorker @ 0x1409AFCD0 (WmipRegistrationWorker.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1409AFE8C (WmipDetermineInstanceBaseIndex.c)
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 *     WmipQueryGuidInfo @ 0x1409B0BE4 (WmipQueryGuidInfo.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B0E04 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipIncludeStaticNames @ 0x1409B1C2C (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x1409B1F20 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B20EC (WmipEnableCollectionForNewGuid.c)
 *     WmipIsQuerySetGuid @ 0x1409B2390 (WmipIsQuerySetGuid.c)
 *     WmipOpenBlock @ 0x1409B25B0 (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1409B2884 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409B3E88 (WmipPrepareForWnodeAD.c)
 *     WmipEnableCollectOrEvent @ 0x1409B465C (WmipEnableCollectOrEvent.c)
 *     IopLegacyResourceAllocation @ 0x1409BE034 (IopLegacyResourceAllocation.c)
 *     IopUncacheInterfaceInformation @ 0x1409BE8C4 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 *     IoDisconnectInterrupt @ 0x1409C05D0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1409C0D28 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x1409C0E78 (IopInitializeActiveConnectBlock.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409CF5D4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpStartTrace @ 0x1409D0104 (EtwpStartTrace.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409E17C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     RtlDecompressBufferLZNT1 @ 0x1409E59D0 (RtlDecompressBufferLZNT1.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 *     PnpDeviceEventWorker @ 0x1409ED430 (PnpDeviceEventWorker.c)
 *     PnpWatchdogTimerPause @ 0x1409ED8EC (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x1409ED9F0 (WdtpCancelTimer.c)
 *     FsRtlQueryKernelEaFile @ 0x1409F5D70 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409F5FA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A0A800 (FsRtlCancellableWaitForSingleObject.c)
 *     EtwpEnableDisableUMGL @ 0x140A0EC2C (EtwpEnableDisableUMGL.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A0F778 (WmipSendWmiIrpToTraceDeviceList.c)
 *     EtwpDisableTraceProviders @ 0x140A0F8B4 (EtwpDisableTraceProviders.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A138F0 (RtlDecompressFragmentLZNT1.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A15D10 (IopAcquireReleaseDispatcherLock.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x140A21D40 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A21E7C (IopGetVolumeId.c)
 *     FsRtlQueryInformationFile @ 0x140A23950 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140A2C020 (FsRtlQueryCachedVdl.c)
 *     WmipDeleteMethod @ 0x140A2CBD0 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x140A2CCC0 (WmipDisableCollectOrEvent.c)
 *     NtWaitForDebugEvent @ 0x140A2E240 (NtWaitForDebugEvent.c)
 *     PopDirectedDripsAcquireTransitionLock @ 0x140A35A78 (PopDirectedDripsAcquireTransitionLock.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     SmStoreCompressionStop @ 0x140A4375C (SmStoreCompressionStop.c)
 *     MiInSwapStore @ 0x140A43954 (MiInSwapStore.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140A45F04 (PdcAcquireRwLockExclusive2.c)
 *     IoReportTargetDeviceChange @ 0x140A47610 (IoReportTargetDeviceChange.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 *     WmipDSCleanup @ 0x140A49A00 (WmipDSCleanup.c)
 *     IoWMIRegistrationControl @ 0x140A49C40 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140A49D98 (WmipRegisterDevice.c)
 *     WmipUpdateDeviceStackSize @ 0x140A49F18 (WmipUpdateDeviceStackSize.c)
 *     WmipQueueRegWork @ 0x140A49FB4 (WmipQueueRegWork.c)
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 *     NtReleaseKeyedEvent @ 0x140A511B0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A528D0 (NtWaitForKeyedEvent.c)
 *     NtNotifyChangeSession @ 0x140A5FDF0 (NtNotifyChangeSession.c)
 *     WmipDeregisterDevice @ 0x140A61874 (WmipDeregisterDevice.c)
 *     EtwpSampledProfileRunDown @ 0x140A6192C (EtwpSampledProfileRunDown.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A624A0 (EtwpCrimsonProvEnableCallback.c)
 *     PopBsdFlush @ 0x140A64EE4 (PopBsdFlush.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140A69890 (WmipGetGuidObjectInstanceInfo.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A6ED50 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140A6EED4 (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140A6F098 (PopPepUnregisterDevice.c)
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A70C90 (PoUnregisterPowerSettingCallback.c)
 *     PopResizeHiberFile @ 0x140A72354 (PopResizeHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140A72784 (PopSanityCheckHiberFile.c)
 *     WmipEnumerateMofResources @ 0x140A75B00 (WmipEnumerateMofResources.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
 *     WmipLegacyEtwCallback @ 0x140A765F0 (WmipLegacyEtwCallback.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A7ABB4 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7BE54 (HalpQueryAcpiRealTimeClock.c)
 *     HalpGetDynamicDevicePointer @ 0x140A7BFD0 (HalpGetDynamicDevicePointer.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A847CC (CmpWaitOnHiveWriteQueue.c)
 *     RawQueryFsSizeInfo @ 0x140A86008 (RawQueryFsSizeInfo.c)
 *     WmipLegacyEtwWorker @ 0x140A876B0 (WmipLegacyEtwWorker.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A89DA0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopAcquireTransitionLock @ 0x140A8F05C (PopAcquireTransitionLock.c)
 *     HalpCallWakeAlarmDriver @ 0x140A93F30 (HalpCallWakeAlarmDriver.c)
 *     WmipFindMRByNames @ 0x140A94A94 (WmipFindMRByNames.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140A9D7B8 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopGetWakeSource @ 0x140AA0808 (PopGetWakeSource.c)
 *     WmipSetTraceNotify @ 0x140AA1CE8 (WmipSetTraceNotify.c)
 *     IopSendMessageToTrackService @ 0x140AA335C (IopSendMessageToTrackService.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AA83D0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IoWMISetNotificationCallback @ 0x140AAB090 (IoWMISetNotificationCallback.c)
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AACB00 (FsRtlGetDirectImageOriginalBase.c)
 *     ArbArbiterHandler @ 0x140AAF710 (ArbArbiterHandler.c)
 *     EmPowerPagingEnabled @ 0x140AB04E0 (EmPowerPagingEnabled.c)
 *     WmipProcessSynchronousEtw @ 0x140AB07F0 (WmipProcessSynchronousEtw.c)
 *     WmipDereferenceEvent @ 0x140AB08D8 (WmipDereferenceEvent.c)
 *     IoVerifyVolume @ 0x140AB1440 (IoVerifyVolume.c)
 *     PiQueueDeviceRequest @ 0x140AB2974 (PiQueueDeviceRequest.c)
 *     PopDeactiveThermalRequest @ 0x140AB2D98 (PopDeactiveThermalRequest.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB4C64 (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     IopFreeBandwidthContract @ 0x140ABE044 (IopFreeBandwidthContract.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B55A20 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140B55C44 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140B570F0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140B5D1E0 (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 *     NtSetSystemPowerState @ 0x140B61410 (NtSetSystemPowerState.c)
 *     MiZeroAllPageFiles @ 0x140B6443C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140B66770 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     PopFlushVolumes @ 0x140B69E80 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140B6AED8 (PopBuildDeviceNotifyList.c)
 *     IovpUnloadDriver @ 0x140B84AF8 (IovpUnloadDriver.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8FF00 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140B93D28 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140B940E0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140B9C510 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140B9F0B0 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140BB558C (AnFwFadeCompletion.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     IopCreateArcNamesCd @ 0x140C1DE70 (IopCreateArcNamesCd.c)
 *     IopStoreBootDriveLetter @ 0x140C1F3DC (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C1F8BC (IopGetBootDiskInformation.c)
 *     EtwpFixBootLoggers @ 0x140C406E8 (EtwpFixBootLoggers.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C538F4 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     SbpAddTransportToInstance @ 0x140C60B84 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C60D70 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140C61148 (SbpWaitForVmbus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
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
  unsigned __int8 *p_WaitIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  signed __int64 GraceSequenceQuiescent; // rdx
  unsigned __int64 v11; // r14
  unsigned int v12; // esi
  unsigned int v13; // ebx
  NTSTATUS v14; // ebp
  $0C9BAADE586F3878B709A13404AA1ECE *v15; // r9
  unsigned int v16; // esi
  struct _KPRCB *v17; // r14
  __int64 ThreadTimerDelay; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned int v21; // esi
  _KWAIT_STATUS_REGISTER v22; // al
  int v23; // ebx
  unsigned __int64 v24; // rdi
  unsigned __int64 v26; // rcx
  PVOID *v27; // rcx
  int v28; // eax
  int v29; // eax
  unsigned int v30; // esi
  volatile unsigned __int8 DpcRoutineActive; // cl
  int v32; // eax
  char v33; // al
  void *volatile *p_AbWaitObject; // r8
  struct _LIST_ENTRY *v35; // rdx
  struct _LIST_ENTRY *v36; // rcx
  volatile __int64 WaitStatus; // rsi
  void *volatile v38; // rcx
  _KWAIT_STATUS_REGISTER v39; // al
  int v40; // ebx
  unsigned __int64 WaitIrql; // rdi
  unsigned __int64 *v42; // rcx
  __int64 v43; // rdx
  unsigned int v44; // esi
  ULONG_PTR v45; // rdx
  unsigned __int8 v46; // al
  __int64 v47; // rcx
  bool v48; // zf
  __int64 v49; // rax
  char *v50; // rsi
  unsigned __int8 v51; // si
  unsigned __int8 v52; // al
  unsigned int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // r9
  __int64 v56; // rax
  unsigned int v57; // ebp
  ULONG_PTR WobPriority; // rcx
  unsigned __int8 v59; // al
  ULONG_PTR v60; // rcx
  unsigned __int8 v61; // al
  ULONG_PTR v62; // rax
  unsigned __int8 v63; // al
  unsigned int v64; // eax
  unsigned int v65; // eax
  __int64 v66; // r9
  unsigned __int8 v67; // al
  unsigned int v68; // eax
  unsigned int v69; // eax
  __int64 v70; // r9
  bool v71; // r8
  struct _KPRCB *v72; // rcx
  signed __int32 *v73; // r8
  signed __int32 v74; // eax
  signed __int32 v75; // ett
  bool v76; // al
  _LIST_ENTRY *v77; // r9
  _LIST_ENTRY *AwaitingCompletion; // r14
  bool v79; // r8
  struct _KPRCB *v80; // rcx
  signed __int32 *v81; // r8
  signed __int32 v82; // eax
  signed __int32 v83; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v85; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v87; // rax
  struct _KPRCB *v88; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v90; // eax
  signed __int32 v91; // ett
  bool v92; // r8
  _LIST_ENTRY *v93; // rax
  struct _LIST_ENTRY *v94; // rcx
  struct _KPRCB *v95; // rcx
  signed __int32 *v96; // r8
  signed __int32 v97; // eax
  signed __int32 v98; // ett
  signed __int32 v99[8]; // [rsp+0h] [rbp-D8h] BYREF
  bool v100; // [rsp+30h] [rbp-A8h]
  int v101; // [rsp+34h] [rbp-A4h]
  int v102; // [rsp+38h] [rbp-A0h]
  LONGLONG QuadPart; // [rsp+40h] [rbp-98h]
  char *v104; // [rsp+48h] [rbp-90h]
  struct _SINGLE_LIST_ENTRY v105; // [rsp+50h] [rbp-88h] BYREF
  struct _SINGLE_LIST_ENTRY v106; // [rsp+58h] [rbp-80h] BYREF
  _QWORD *v107[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v108; // [rsp+70h] [rbp-68h] BYREF
  __int128 v109; // [rsp+78h] [rbp-60h]
  __int64 v110; // [rsp+88h] [rbp-50h]
  unsigned __int8 v112; // [rsp+E8h] [rbp+10h]

  v112 = WaitReason;
  v5 = WaitMode;
  v108 = 0LL;
  CurrentThread = KeGetCurrentThread();
  QuadPart = 0LL;
  v100 = 0;
  v104 = 0LL;
  v102 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
    v102 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( CurrentPrcb->RcuData.AwaitingCompletion )
    {
      v76 = KeDisableInterrupts();
      AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
      v79 = v76;
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
            CurrentPrcb->RcuData.AwaitingCompletion = v77;
          }
          else
          {
            CurrentPrcb->RcuData.AwaitingCompletion = Flink;
            v85 = AwaitingCompletion->Flink;
            Blink = AwaitingCompletion->Blink;
            if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
              goto LABEL_65;
            Blink->Flink = v85;
            v85->Blink = Blink;
          }
          v87 = AwaitingCompletion[3].Flink;
          AwaitingCompletion->Flink = v77;
          AwaitingCompletion[1].Flink = v87[3].Blink;
        }
        if ( v79 )
        {
          v88 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v88->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v90 = *SchedulerAssist;
            do
            {
              v91 = v90;
              v90 = _InterlockedCompareExchange(SchedulerAssist, v90 & 0xFFDFFFFF, v90);
            }
            while ( v91 != v90 );
            if ( (v90 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v88);
          }
          _enable();
        }
        if ( AwaitingCompletion[1].Flink != AwaitingCompletion[1].Blink )
        {
          if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) != 0 )
          {
            v92 = KeDisableInterrupts();
            if ( !AwaitingCompletion->Flink )
            {
              v93 = CurrentPrcb->RcuData.AwaitingCompletion;
              if ( v93 )
              {
                v94 = v93->Blink;
                if ( v94->Flink != v93 )
                  goto LABEL_65;
                AwaitingCompletion->Flink = v93;
                AwaitingCompletion->Blink = v94;
                v94->Flink = AwaitingCompletion;
                v93->Blink = AwaitingCompletion;
              }
              else
              {
                AwaitingCompletion->Blink = AwaitingCompletion;
                AwaitingCompletion->Flink = AwaitingCompletion;
                CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
              }
            }
            if ( v92 )
            {
              v95 = KeGetCurrentPrcb();
              v96 = (signed __int32 *)v95->SchedulerAssist;
              if ( v96 )
              {
                _m_prefetchw(v96);
                v97 = *v96;
                do
                {
                  v98 = v97;
                  v97 = _InterlockedCompareExchange(v96, v97 & 0xFFDFFFFF, v97);
                }
                while ( v98 != v97 );
                if ( (v97 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)v95);
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
      else if ( v76 )
      {
        v80 = KeGetCurrentPrcb();
        v81 = (signed __int32 *)v80->SchedulerAssist;
        if ( v81 )
        {
          _m_prefetchw(v81);
          v82 = *v81;
          do
          {
            v83 = v82;
            v82 = _InterlockedCompareExchange(v81, v82 & 0xFFDFFFFF, v82);
          }
          while ( v83 != v82 );
          if ( (v82 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v80);
        }
        _enable();
      }
    }
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      v71 = KeDisableInterrupts();
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v99, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F205C8;
      }
      if ( v71 )
      {
        v72 = KeGetCurrentPrcb();
        v73 = (signed __int32 *)v72->SchedulerAssist;
        if ( v73 )
        {
          _m_prefetchw(v73);
          v74 = *v73;
          do
          {
            v75 = v74;
            v74 = _InterlockedCompareExchange(v73, v74 & 0xFFDFFFFF, v74);
          }
          while ( v75 != v74 );
          if ( (v74 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v72);
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
          KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting, v43);
      }
    }
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      p_WaitIrql = &CurrentThread->WaitIrql;
      v101 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
      v5 = WaitMode;
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v101 = 1;
    }
  }
  else
  {
    v101 = 0;
  }
  while ( 1 )
  {
    v11 = *p_WaitIrql;
    v107[0] = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v5;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v11 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v47 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v47, 2LL);
      *p_WaitIrql = 0;
    }
    v13 = v102;
    if ( !Alertable )
      break;
    if ( CurrentThread->Alerted[v5] )
    {
      CurrentThread->Alerted[v5] = 0;
      v14 = 257;
    }
    else if ( !v5 || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
    {
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v14 = 257;
      }
      else
      {
        v14 = 0;
      }
    }
    else
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
      v14 = 192;
    }
    if ( v14 )
      goto LABEL_27;
LABEL_35:
    v15 = &CurrentThread->320;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v112;
    v14 = 0;
    v16 = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v17 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v16 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v16);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
      v15 = &CurrentThread->320;
    }
    ThreadTimerDelay = *((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) == 2 )
    {
      v100 = (*((_BYTE *)Object + 48) & 2) != 0;
      if ( (int)ThreadTimerDelay <= 0
        && (CurrentThread != *((struct _KTHREAD **)Object + 5) || *((_BYTE *)Object + 2) != v17->DpcRoutineActive) )
      {
        goto LABEL_38;
      }
      v28 = *((_DWORD *)Object + 1);
      if ( v28 == 0x80000000 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        KiFastExitThreadWait(v17, (ULONG_PTR)CurrentThread, v13, (__int64)v15);
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
            && KiCheckVpBackingLongSpinWaitHypercall() )
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
      if ( v17->CurrentThread == CurrentThread )
        DpcRoutineActive = v17->DpcRoutineActive;
      else
        DpcRoutineActive = 0;
      v110 = 0LL;
      v32 = *(_DWORD *)Object;
      v109 = 0LL;
      LODWORD(v109) = v32;
      BYTE2(v109) = DpcRoutineActive;
      *(_DWORD *)Object = v109;
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
      p_AbWaitObject = &CurrentThread->AbWaitObject;
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
          v56 = KeAbPreAcquire(v38, 0LL, 1LL);
          if ( v56 )
            *(_BYTE *)(v56 + 10) = 1;
        }
        v105.Next = 0LL;
        if ( v13 >= 2 )
        {
          v57 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v57 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v57);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( CurrentThread->ThreadLock );
          }
          WobPriority = CurrentThread->WobPriority;
          v59 = CurrentThread->PriorityFloorCounts[WobPriority];
          if ( !v59 )
            KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, WobPriority, 2uLL, 0LL);
          v63 = v59 - 1;
          CurrentThread->PriorityFloorCounts[WobPriority] = v63;
          if ( !v63 )
          {
            v64 = CurrentThread->PriorityFloorSummary ^ (1 << WobPriority);
            CurrentThread->PriorityFloorSummary = v64;
            if ( v64 < 1 << WobPriority && CurrentThread->Priority <= 31 )
            {
              v65 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
              if ( (int)v65 < CurrentThread->Priority )
                KiSetPriorityThread(CurrentThread, (__int64)&v105, v65, v66);
            }
          }
          CurrentThread->WobPriority = 32;
          CurrentThread->ThreadLock = 0LL;
        }
        v39.Flags = (unsigned __int8)CurrentThread->WaitRegister;
        v40 = v13 & 1;
        if ( (v39.Flags & 0x38) != 0 )
        {
          if ( (v39.Flags & 0x18) != 0 )
          {
            KiExitThreadWaitReschedule(v17, (__int64)CurrentThread, &v105);
            return WaitStatus;
          }
          else
          {
            KiProcessDeferredReadyList(v17, &v105, 1u);
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
            KiProcessDeferredReadyList(v17, &v105, WaitIrql);
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
    if ( (int)ThreadTimerDelay > 0 )
    {
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = ThreadTimerDelay - 1;
      }
      goto LABEL_42;
    }
LABEL_38:
    v19 = QuadPart;
    v20 = QuadPart;
    if ( v101 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v26 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
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
      if ( !v101 )
        goto LABEL_64;
      if ( !QuadPart )
        goto LABEL_41;
      v26 = MEMORY[0xFFFFF78000000014];
    }
    if ( v26 > v20 )
    {
LABEL_41:
      v14 = 258;
LABEL_42:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v99, 0);
      if ( CurrentThread->ThreadLock )
      {
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
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
      v106.Next = 0LL;
      if ( v13 >= 2 )
      {
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v44 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v44);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v45 = CurrentThread->WobPriority;
        v46 = CurrentThread->PriorityFloorCounts[v45];
        if ( !v46 )
          KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v45, 2uLL, 0LL);
        v52 = v46 - 1;
        CurrentThread->PriorityFloorCounts[v45] = v52;
        if ( !v52 )
        {
          v53 = CurrentThread->PriorityFloorSummary ^ (1 << v45);
          CurrentThread->PriorityFloorSummary = v53;
          if ( v53 < 1 << v45 && CurrentThread->Priority <= 31 )
          {
            v54 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
            if ( (int)v54 < CurrentThread->Priority )
              KiSetPriorityThread(CurrentThread, (__int64)&v106, v54, v55);
          }
        }
        CurrentThread->WobPriority = 32;
        CurrentThread->ThreadLock = 0LL;
      }
      v22.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      v23 = v13 & 1;
      if ( (v22.Flags & 0x38) != 0 )
      {
        if ( (v22.Flags & 0x18) != 0 )
        {
          KiExitThreadWaitReschedule(v17, (__int64)CurrentThread, &v106);
        }
        else
        {
          KiProcessDeferredReadyList(v17, &v106, 1u);
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
          KiProcessDeferredReadyList(v17, &v106, v24);
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v24);
          __writecr8(v24);
        }
      }
      return v14;
    }
LABEL_64:
    v27 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v27 != (char *)Object + 8 )
      goto LABEL_65;
    v15->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    v15->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v27;
    *v27 = v15;
    *((_QWORD *)Object + 2) = v15;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    v48 = !v100;
    CurrentThread->WaitBlockCount = 1;
    if ( v48 )
    {
      v50 = v104;
    }
    else
    {
      v49 = KeAbPreAcquire(Object, 0LL, 0LL);
      v19 = QuadPart;
      v50 = (char *)v49;
      v104 = (char *)v49;
    }
    if ( v50 )
    {
      *v50 |= 2u;
      if ( *(__int64 *)v50 < 0 )
        KiAbEntryRemoveFromTree(v50, ThreadTimerDelay, v19, (__int64)v15);
      v50[9] = 1;
      *v50 &= ~2u;
    }
    v14 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v13, (__int64)&v108);
    v102 = 0;
    if ( v50 )
    {
      v62 = KeAbPreAcquire(Object, v50, 0LL);
      if ( (v14 & 0xFFFFFF7F) != 0 )
      {
        KeAbPostReleaseEx((ULONG_PTR)Object, v62);
        v104 = 0LL;
      }
      else
      {
        v104 = (char *)v62;
        *(_BYTE *)(v62 + 10) = 1;
      }
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( v14 != 256 )
      return v14;
    v51 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v51, 2LL);
    v5 = WaitMode;
    *p_WaitIrql = v51;
  }
  if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !v5 )
    goto LABEL_35;
  v14 = 192;
LABEL_27:
  if ( v13 >= 2 )
  {
    v60 = CurrentThread->WobPriority;
    v61 = CurrentThread->PriorityFloorCounts[v60];
    if ( !v61 )
      KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v60, 2uLL, 0LL);
    v67 = v61 - 1;
    CurrentThread->PriorityFloorCounts[v60] = v67;
    if ( !v67 )
    {
      v68 = CurrentThread->PriorityFloorSummary ^ (1 << v60);
      CurrentThread->PriorityFloorSummary = v68;
      if ( v68 < 1 << v60 && CurrentThread->Priority <= 31 )
      {
        v69 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
        if ( (int)v69 < CurrentThread->Priority )
          KiSetPriorityThread(CurrentThread, (__int64)v107, v69, v70);
      }
    }
    CurrentThread->WobPriority = 32;
  }
  CurrentThread->ThreadLock = 0LL;
  if ( (v13 & 1) != 0 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v107, v11);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
    __writecr8(v11);
  }
  return v14;
}
