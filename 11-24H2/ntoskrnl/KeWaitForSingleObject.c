/*
 * XREFs of KeWaitForSingleObject @ 0x14033E960
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     MiZeroPageWrite @ 0x140268964 (MiZeroPageWrite.c)
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     ExpWaitForResource @ 0x140277840 (ExpWaitForResource.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14027C840 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiSchedulerApc @ 0x140295D20 (KiSchedulerApc.c)
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     CcWriteBehindAsync @ 0x1402A91A8 (CcWriteBehindAsync.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1402C6ABC (ExfWaitForRundownProtectionRelease.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402C6D50 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402C793C (ExpUnblockPushLock.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     WmipFindRegEntryByProviderId @ 0x140338ED0 (WmipFindRegEntryByProviderId.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     FsRtlAcquireHeaderMutex @ 0x14033E2F0 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PoGetIdleTimes @ 0x140351EF0 (PoGetIdleTimes.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     MiStoreEvictThread @ 0x140365C20 (MiStoreEvictThread.c)
 *     MiStoreAttemptContractPageFile @ 0x140365ED4 (MiStoreAttemptContractPageFile.c)
 *     FsRtlReleaseFileForModWrite @ 0x140372004 (FsRtlReleaseFileForModWrite.c)
 *     CcSetValidData @ 0x140372324 (CcSetValidData.c)
 *     MiIssueSynchronousFlush @ 0x1403731E8 (MiIssueSynchronousFlush.c)
 *     IopAllocateReserveIrp @ 0x140374518 (IopAllocateReserveIrp.c)
 *     IoSynchronousCallDriver @ 0x140374C50 (IoSynchronousCallDriver.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14037AE38 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E000 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14038A1E8 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     MiPfCompleteCoalescedIo @ 0x140397438 (MiPfCompleteCoalescedIo.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14039BF74 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14039C46C (SmKmStoreHelperCheckWaitCommand.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14039C648 (SmKmStoreHelperWaitForCommand.c)
 *     PopFxActivateComponent @ 0x1403B61EC (PopFxActivateComponent.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmTryAcquireLock @ 0x1403B6E5C (PpmTryAcquireLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403BFD28 (KiInvokeInterruptServiceRoutine.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x1403C48D0 (IopWaitForSynchronousIo.c)
 *     FsRtlReleaseEofLock @ 0x1403D8730 (FsRtlReleaseEofLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     ExpWaitForFastResource @ 0x1403DD7C0 (ExpWaitForFastResource.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1403E932C (MiCheckHoldFaultForHotPatch.c)
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     MiAttemptPageFileReduction @ 0x1403F9154 (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     FsRtlAcquireEofLock @ 0x14040D140 (FsRtlAcquireEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x14040D308 (FsRtlpWaitForIoAtEof.c)
 *     MiAsyncSlabReplenish @ 0x1404141C0 (MiAsyncSlabReplenish.c)
 *     PopWakeDeviceList @ 0x140427ABC (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140427CE4 (PopSleepDeviceList.c)
 *     FsFilterAllocateCompletionStack @ 0x14042F498 (FsFilterAllocateCompletionStack.c)
 *     EtwpEnableMetaProviderGuid @ 0x140430E80 (EtwpEnableMetaProviderGuid.c)
 *     IopWaitForSynchronousIoEvent @ 0x140438000 (IopWaitForSynchronousIoEvent.c)
 *     AlpcpWaitForSingleObject @ 0x140438750 (AlpcpWaitForSingleObject.c)
 *     ExpAcquireFastMutexContended @ 0x1404489B8 (ExpAcquireFastMutexContended.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1404492D0 (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x14044A168 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x14044A41C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14044E0DC (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14044E92C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14044EF40 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14044F4B4 (LdrpSetAlternateResourceModuleHandle.c)
 *     PpmCheckPeriodicStart @ 0x1404576F0 (PpmCheckPeriodicStart.c)
 *     PopSetWatchdog @ 0x140458BDC (PopSetWatchdog.c)
 *     CcWaitForUninitializeCacheMap @ 0x14045A120 (CcWaitForUninitializeCacheMap.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14045AE50 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     SmKmStoreHelperWorker @ 0x14045D450 (SmKmStoreHelperWorker.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     WmipFindRegEntryByDevice @ 0x140463970 (WmipFindRegEntryByDevice.c)
 *     MiIssuePageExtendRequest @ 0x14046B438 (MiIssuePageExtendRequest.c)
 *     IopWaitForLockAlertable @ 0x14046EB64 (IopWaitForLockAlertable.c)
 *     WmipDeregisterRegEntry @ 0x14046FAA4 (WmipDeregisterRegEntry.c)
 *     WheapProcessWorkQueueItem @ 0x140477F90 (WheapProcessWorkQueueItem.c)
 *     CmpDoFileRead @ 0x140479BDC (CmpDoFileRead.c)
 *     WmipReceiveNotifications @ 0x14047A844 (WmipReceiveNotifications.c)
 *     PpmCapturePerformanceDistribution @ 0x14047F450 (PpmCapturePerformanceDistribution.c)
 *     MiRetryNonPagedAllocation @ 0x140481470 (MiRetryNonPagedAllocation.c)
 *     WmipBuildTraceDeviceList @ 0x14048A824 (WmipBuildTraceDeviceList.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14048B624 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14049250C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     CmSiWaitForSingleEvent @ 0x140493968 (CmSiWaitForSingleEvent.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PopRunMaximumIrpWorkers @ 0x140496CF8 (PopRunMaximumIrpWorkers.c)
 *     WmiQueryTraceProviderCount @ 0x140497844 (WmiQueryTraceProviderCount.c)
 *     PnpLockDeviceActionQueue @ 0x140498EF8 (PnpLockDeviceActionQueue.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140499090 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmStoreHelperCleanup @ 0x14049F3AC (SmKmStoreHelperCleanup.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404A7950 (IoReleaseRemoveLockAndWaitEx.c)
 *     EtwpStartLoggerThread @ 0x1404A8A40 (EtwpStartLoggerThread.c)
 *     WmipAllocRegEntry @ 0x1404AC7D8 (WmipAllocRegEntry.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404ACE38 (MiQueueSyncModifiedWriterApc.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404ACF40 (MmStoreFlushOutstandingEvictions.c)
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404B3E84 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1404B6320 (KiAcquireSecondaryPassiveConnectLock.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B6EAC (PopFxIssueComponentPerfStateChanges.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404BB96C (EtwpCovSampCaptureContextStop.c)
 *     PnpLockMountableDevice @ 0x1404C3E64 (PnpLockMountableDevice.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404C8588 (KiSynchronizePassiveInterruptExecution.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404CD2B0 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopHaltDeviceIdle @ 0x1404D60CC (PopHaltDeviceIdle.c)
 *     PopIgnoreBatteryStatusChange @ 0x1404D8DFC (PopIgnoreBatteryStatusChange.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     IopLoadDriverImage @ 0x1404E691C (IopLoadDriverImage.c)
 *     PopFxProcessWorkPool @ 0x1404EB530 (PopFxProcessWorkPool.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 *     MiQueueWorkingSetRequest @ 0x1404F62CC (MiQueueWorkingSetRequest.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1405557E8 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x14057A5C0 (CcQueueLazyWriteScanThread.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x14057AEF8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x14057C948 (CcDeleteSectionsForPartition.c)
 *     FsRtlpPostStackOverflow @ 0x1405821AC (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405925BC (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopAllocateBackpocketIrp @ 0x140595CD8 (IopAllocateBackpocketIrp.c)
 *     IopIoRingWaitForCompletionEvent @ 0x1405978CC (IopIoRingWaitForCompletionEvent.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405A2F44 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnpSerializeBoot @ 0x1405A3F1C (PnpSerializeBoot.c)
 *     PnprQuiesce @ 0x1405A7C88 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1405A97C8 (PnpProcessRebalance.c)
 *     KiSignalWaitDisconnectLock @ 0x1405C209C (KiSignalWaitDisconnectLock.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 *     KeSwapProcessOrStack @ 0x1405C4890 (KeSwapProcessOrStack.c)
 *     KiStallBugcheckThread @ 0x1405C66D8 (KiStallBugcheckThread.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405C74D4 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     PopIrpWorkerControl @ 0x1405D7BF0 (PopIrpWorkerControl.c)
 *     PspIumFreePartitionState @ 0x1405E6704 (PspIumFreePartitionState.c)
 *     SmTerminateStoreProcess @ 0x14060CB08 (SmTerminateStoreProcess.c)
 *     SmpFpWaitForResource @ 0x14060E294 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060EACC (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x14060F468 (SmWaitForSyncIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x1406316C0 (DifKeWaitForSingleObjectWrapper.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140650A6C (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x140655BF0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x140655DF0 (ExpWaitForBootDevices.c)
 *     WheapAddErrorSource @ 0x14065BC38 (WheapAddErrorSource.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 *     CmpLazyWriteWorker @ 0x140668210 (CmpLazyWriteWorker.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066AB1C (MmReleaseCommitForMemResetPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140684FE0 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x14068A0B4 (MiDrainCrossPartitionUsage.c)
 *     MiStoreDeletePartition @ 0x14068BE24 (MiStoreDeletePartition.c)
 *     sub_140694D80 @ 0x140694D80 (sub_140694D80.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406F54C4 (PopPowerAggregatorDozeTimerDisarm.c)
 *     IoCancelFileOpen @ 0x1406F9E00 (IoCancelFileOpen.c)
 *     sub_1406FA584 @ 0x1406FA584 (sub_1406FA584.c)
 *     sub_1406FA93C @ 0x1406FA93C (sub_1406FA93C.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1406FADC0 (PnpWaitForEmptyDeviceEventQueue.c)
 *     HalpSetAcpiRealTimeClock @ 0x1406FC25C (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1406FEC90 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140700658 (HalGetAdapterV2.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140701EB4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpPutAcpiHacksInRegistry @ 0x140702484 (HalpPutAcpiHacksInRegistry.c)
 *     HalpQueryPccInterface @ 0x14070409C (HalpQueryPccInterface.c)
 *     ArbBuildAssignmentOrdering @ 0x140704D3C (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140708144 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlWaitForSmssEvent @ 0x14070A1A0 (FsRtlWaitForSmssEvent.c)
 *     FsRtlBalanceReads @ 0x14070AA10 (FsRtlBalanceReads.c)
 *     FsRtlDeregisterUncProvider @ 0x14070AAC0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x14070ADD0 (FsRtlpRegisterUncProvider.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070CF48 (FsRtlIssueFileNotificationFsctl.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14070DD30 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopHardErrorThread @ 0x140712370 (IopHardErrorThread.c)
 *     IopLoadFileSystemDriver @ 0x1407127FC (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x1407132C0 (IopSetRemoteLink.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407144C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoSetInformation @ 0x140714820 (IoSetInformation.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1407194A8 (IopIssueSystemEnvironmentRequest.c)
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14071EB50 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407209F8 (PnpRequestHwProfileChangeNotification.c)
 *     PiPagePathSetState @ 0x140722960 (PiPagePathSetState.c)
 *     IopAllocateBootResources @ 0x140725220 (IopAllocateBootResources.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14072D27C (PnpWaitForEmptyDeviceActionQueue.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14072D5B8 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x140733E34 (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x140736264 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x14073639C (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     PopDisablePowerLimitExtension @ 0x14074B2F8 (PopDisablePowerLimitExtension.c)
 *     PopFreePowerLimitRequest @ 0x14074B644 (PopFreePowerLimitRequest.c)
 *     PopDisableCoolingExtension @ 0x14074C2E8 (PopDisableCoolingExtension.c)
 *     PopDirectedDripsWorkerRoutine @ 0x14074CB80 (PopDirectedDripsWorkerRoutine.c)
 *     PopFxNotifySxTransitionState @ 0x14074E180 (PopFxNotifySxTransitionState.c)
 *     PopClearHiberFileSignature @ 0x140751C50 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x140754A10 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140759E80 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14075A774 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x14075B010 (PopBatteryRemove.c)
 *     PopPowerAdapterRemove @ 0x14075BD60 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x14075CEF0 (PopFanRemove.c)
 *     PopEtDeferredInitDxgContext @ 0x14075D8C0 (PopEtDeferredInitDxgContext.c)
 *     SshSessionManagerFlushBuffers @ 0x1407668B8 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x140772EE8 (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     PsSetVmProcessorHostProcess @ 0x14077669C (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x140778DC8 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1407790CC (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14077B050 (PspTeardownPartition.c)
 *     PsTerminateVsmEnclave @ 0x14077B634 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14077CAF4 (RawPerformDevIoCtrl.c)
 *     RawQueryFileSystemInformation @ 0x14077CCF0 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140787260 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     PdcWaitForEvent @ 0x14078E1B4 (PdcWaitForEvent.c)
 *     SmProcessResizeRequest @ 0x140798580 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140798698 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x140798B5C (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x140799CF0 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14079A5B8 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14079A678 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14079A748 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14079AEB4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14079AF50 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B5E8 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1407A37A0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1407A45E0 (WmipGetSysIds.c)
 *     WmipEnumerateGuids @ 0x1407A4D90 (WmipEnumerateGuids.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407A5684 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwUnregister @ 0x1407A576C (WmipProcessLegacyEtwUnregister.c)
 *     WmipAddMofResource @ 0x1407A58A8 (WmipAddMofResource.c)
 *     WmipWaitForCollectionEnabled @ 0x1407A60E0 (WmipWaitForCollectionEnabled.c)
 *     EtwpGetPmcProfileSource @ 0x1407A9CE0 (EtwpGetPmcProfileSource.c)
 *     EtwpSetPmcProfileSource @ 0x1407AA0E8 (EtwpSetPmcProfileSource.c)
 *     EtwDereferenceSpinLockCounters @ 0x1407ACDE8 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1407ACE44 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x1407AF910 (EtwpKsrCallback.c)
 *     ExpQueryPrmInterface @ 0x1407BF618 (ExpQueryPrmInterface.c)
 *     ExpWorkQueueDestroy @ 0x1407C00D8 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x1407C4440 (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C4740 (NtStopProfile.c)
 *     WheaAttemptClearPoison @ 0x1407C7210 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C72F0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8690 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8A60 (WheaRegChangeNotifyCallback.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 *     CmpDummyThreadRoutine @ 0x1407D8210 (CmpDummyThreadRoutine.c)
 *     MiInsertPageFileInList @ 0x1407EF2F0 (MiInsertPageFileInList.c)
 *     MiZeroPageFileFirstPage @ 0x1407EF9E8 (MiZeroPageFileFirstPage.c)
 *     MiInjectThreadForHotPatch @ 0x1407F3144 (MiInjectThreadForHotPatch.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140824584 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdVerifyBootDisk @ 0x140829D1C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x14082A068 (VhdiMountVhdFile.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408301F0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpStartTrace @ 0x1408330A4 (EtwpStartTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x14083381C (EtwpSynchronizeWithLogger.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     ObWaitForSingleObject @ 0x14084ADE0 (ObWaitForSingleObject.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     AlpcpReceiveMessagePort @ 0x140895660 (AlpcpReceiveMessagePort.c)
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408B220C (PnpSynchronizeDeviceEventQueue.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B2EAC (PnpQueueQueryAndRemoveEvent.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     PiControlGetSetDeviceStatus @ 0x1408D1350 (PiControlGetSetDeviceStatus.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408EB088 (EtwpUpdateGlobalGroupMasks.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 *     PspUserThreadStartup @ 0x1408FEA00 (PspUserThreadStartup.c)
 *     PiDrvDbLoadNode @ 0x140925F40 (PiDrvDbLoadNode.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140926E6C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpGetVolumeClusterSize @ 0x140930B1C (CmpGetVolumeClusterSize.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     DbgkpQueueMessage @ 0x140939080 (DbgkpQueueMessage.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     FsRtlGetFileSize @ 0x140942760 (FsRtlGetFileSize.c)
 *     MiReadImageHeaders @ 0x1409456C8 (MiReadImageHeaders.c)
 *     FsRtlSetFileSize @ 0x14094588C (FsRtlSetFileSize.c)
 *     IopCancelIrpsInThreadList @ 0x14094A824 (IopCancelIrpsInThreadList.c)
 *     EtwpCoverageSamplerQuery @ 0x14095DA30 (EtwpCoverageSamplerQuery.c)
 *     FsRtlGetSectorSizeInformation @ 0x140965DD0 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x1409663E0 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140967330 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1409674D0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140967FB0 (IoVolumeDeviceToDosName.c)
 *     IopQueryNameInternal @ 0x140968330 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14096E140 (IopGetFileInformation.c)
 *     IopSynchronousApiServiceTail @ 0x14096F574 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     SPCallServerHandleQueryPolicy @ 0x140976EFC (SPCallServerHandleQueryPolicy.c)
 *     sub_140978038 @ 0x140978038 (sub_140978038.c)
 *     CmpLockRegistryFreezeAware @ 0x14097DFD8 (CmpLockRegistryFreezeAware.c)
 *     CmpFileFlushAndPurge @ 0x140981014 (CmpFileFlushAndPurge.c)
 *     PnpAllocateResources @ 0x14098DAA8 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x14098E480 (IopFilterResourceRequirementsCall.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A4954 (IopInvalidateVolumesForDevice.c)
 *     AlpcpWaitForPortReferences @ 0x1409AB608 (AlpcpWaitForPortReferences.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1409C52C8 (IopInsertLegacyBusDeviceNode.c)
 *     WmipDereferenceEvent @ 0x1409C9CE0 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409CB50C (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x1409CB800 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409CB9CC (WmipEnableCollectionForNewGuid.c)
 *     WmipIsQuerySetGuid @ 0x1409CBC70 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x1409CCAD0 (WmipEnableCollectOrEvent.c)
 *     WmipOpenBlock @ 0x1409CD2D0 (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1409CD8B0 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1409CE1D4 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1409CE2C0 (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409CEEB8 (WmipPrepareForWnodeAD.c)
 *     WmipUpdateDeviceStackSize @ 0x1409CF85C (WmipUpdateDeviceStackSize.c)
 *     WmipDSCleanup @ 0x1409CF8B0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409CFA88 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeleteMethod @ 0x1409CFC00 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x1409CFCF0 (WmipDisableCollectOrEvent.c)
 *     WmipAddDataSource @ 0x1409CFD60 (WmipAddDataSource.c)
 *     WmipRegisterDevice @ 0x1409D0548 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x1409D0968 (WmipQueueRegWork.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1409D0A48 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x1409D0B10 (WmipFindISinGEbyName.c)
 *     IoWMIRegistrationControl @ 0x1409D0C80 (IoWMIRegistrationControl.c)
 *     WmipLegacyEtwWorker @ 0x1409D0ED0 (WmipLegacyEtwWorker.c)
 *     WmipRegistrationWorker @ 0x1409D10C0 (WmipRegistrationWorker.c)
 *     WmipSendEnableDisableRequest @ 0x1409D12AC (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1409D1534 (WmipUpdateDataSource.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409E6800 (FsRtlCancellableWaitForMultipleObjects.c)
 *     RtlDecompressBufferLZNT1 @ 0x1409EC6A0 (RtlDecompressBufferLZNT1.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EDF3C (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409EF760 (Pdcv2ActivationClientDeactivate.c)
 *     PnpDeviceEventWorker @ 0x1409EFB60 (PnpDeviceEventWorker.c)
 *     PnpWatchdogTimerPause @ 0x1409F001C (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x1409F0120 (WdtpCancelTimer.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409F5D48 (EtwpUpdateDisallowedGuids.c)
 *     FsRtlQueryKernelEaFile @ 0x1409FD030 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409FD260 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409FD420 (FsRtlKernelFsControlFile.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A0B5C0 (FsRtlCancellableWaitForSingleObject.c)
 *     IopLegacyResourceAllocation @ 0x140A0FC24 (IopLegacyResourceAllocation.c)
 *     IopUncacheInterfaceInformation @ 0x140A104B4 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 *     IoDisconnectInterrupt @ 0x140A121C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140A12918 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A12A68 (IopInitializeActiveConnectBlock.c)
 *     EtwpEnableDisableUMGL @ 0x140A15A4C (EtwpEnableDisableUMGL.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A16598 (WmipSendWmiIrpToTraceDeviceList.c)
 *     EtwpDisableTraceProviders @ 0x140A166D4 (EtwpDisableTraceProviders.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A1B0B0 (RtlDecompressFragmentLZNT1.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A20A90 (IopAcquireReleaseDispatcherLock.c)
 *     NtGetMUIRegistryInfo @ 0x140A215C0 (NtGetMUIRegistryInfo.c)
 *     PopInitSystemSleeperThread @ 0x140A219E8 (PopInitSystemSleeperThread.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x140A2D300 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140A2D43C (IopGetVolumeId.c)
 *     FsRtlQueryInformationFile @ 0x140A2EF10 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140A371D0 (FsRtlQueryCachedVdl.c)
 *     NtWaitForDebugEvent @ 0x140A39180 (NtWaitForDebugEvent.c)
 *     PopDirectedDripsAcquireTransitionLock @ 0x140A40198 (PopDirectedDripsAcquireTransitionLock.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     SmStoreCompressionStop @ 0x140A4CBCC (SmStoreCompressionStop.c)
 *     MiInSwapStore @ 0x140A4CDC4 (MiInSwapStore.c)
 *     WmipQueryGuidInfo @ 0x140A4DE74 (WmipQueryGuidInfo.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140A4F154 (PdcAcquireRwLockExclusive2.c)
 *     IoReportTargetDeviceChange @ 0x140A50860 (IoReportTargetDeviceChange.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 *     NtReleaseKeyedEvent @ 0x140A598F0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A5AFC0 (NtWaitForKeyedEvent.c)
 *     NtNotifyChangeSession @ 0x140A67010 (NtNotifyChangeSession.c)
 *     WmipDeregisterDevice @ 0x140A684C4 (WmipDeregisterDevice.c)
 *     EtwpSampledProfileRunDown @ 0x140A6857C (EtwpSampledProfileRunDown.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A690F0 (EtwpCrimsonProvEnableCallback.c)
 *     PopBsdFlush @ 0x140A6B984 (PopBsdFlush.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140A70400 (WmipGetGuidObjectInstanceInfo.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A74A30 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140A74BB4 (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140A74D78 (PopPepUnregisterDevice.c)
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A76B70 (PoUnregisterPowerSettingCallback.c)
 *     PopResizeHiberFile @ 0x140A78054 (PopResizeHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140A78484 (PopSanityCheckHiberFile.c)
 *     WmipEnumerateMofResources @ 0x140A7B800 (WmipEnumerateMofResources.c)
 *     IopCancelAlertedRequest @ 0x140A7BD74 (IopCancelAlertedRequest.c)
 *     WmipLegacyEtwCallback @ 0x140A7C2F0 (WmipLegacyEtwCallback.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A80154 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A813F4 (HalpQueryAcpiRealTimeClock.c)
 *     HalpGetDynamicDevicePointer @ 0x140A81570 (HalpGetDynamicDevicePointer.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A882DC (CmpWaitOnHiveWriteQueue.c)
 *     RawQueryFsSizeInfo @ 0x140A89C08 (RawQueryFsSizeInfo.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A8D7D0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopAcquireTransitionLock @ 0x140A928AC (PopAcquireTransitionLock.c)
 *     HalpCallWakeAlarmDriver @ 0x140A97700 (HalpCallWakeAlarmDriver.c)
 *     WmipFindMRByNames @ 0x140A982D8 (WmipFindMRByNames.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140AA2428 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopGetWakeSource @ 0x140AA5798 (PopGetWakeSource.c)
 *     WmipSetTraceNotify @ 0x140AA6BEC (WmipSetTraceNotify.c)
 *     IopSendMessageToTrackService @ 0x140AA825C (IopSendMessageToTrackService.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AAD350 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IoWMISetNotificationCallback @ 0x140AB0120 (IoWMISetNotificationCallback.c)
 *     PopReadPagesFromHiberFile @ 0x140AB1180 (PopReadPagesFromHiberFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AB1B90 (FsRtlGetDirectImageOriginalBase.c)
 *     ArbArbiterHandler @ 0x140AB47A0 (ArbArbiterHandler.c)
 *     EmPowerPagingEnabled @ 0x140AB6218 (EmPowerPagingEnabled.c)
 *     WmipProcessSynchronousEtw @ 0x140AB676C (WmipProcessSynchronousEtw.c)
 *     IoVerifyVolume @ 0x140AB7170 (IoVerifyVolume.c)
 *     PiQueueDeviceRequest @ 0x140AB84B0 (PiQueueDeviceRequest.c)
 *     PopDeactiveThermalRequest @ 0x140AB88D4 (PopDeactiveThermalRequest.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB9BA4 (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     IopFreeBandwidthContract @ 0x140AC2D5C (IopFreeBandwidthContract.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     PsCallEnclave @ 0x140AD1D10 (PsCallEnclave.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B539D0 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140B550A0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140B5B170 (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     NtSetSystemPowerState @ 0x140B5F390 (NtSetSystemPowerState.c)
 *     MiZeroAllPageFiles @ 0x140B6236C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140B64660 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B65430 (PopTransitionToSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PopFlushVolumes @ 0x140B67D40 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140B697C8 (PopBuildDeviceNotifyList.c)
 *     IovpUnloadDriver @ 0x140B82AF8 (IovpUnloadDriver.c)
 *     VfDriverLock @ 0x140B8A4B4 (VfDriverLock.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8DF00 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140B91D28 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140B920E0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140B9A510 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140B9D0B0 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140BB358C (AnFwFadeCompletion.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 *     IopStoreBootDriveLetter @ 0x140C1D39C (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     EtwpFixBootLoggers @ 0x140C3E598 (EtwpFixBootLoggers.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C51764 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     SbpAddTransportToInstance @ 0x140C5EA34 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C5EC20 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140C5EFF8 (SbpWaitForVmbus.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
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
  $170BED6759C51D14495B6D160899A925 *v15; // r9
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
  unsigned int v43; // esi
  ULONG_PTR v44; // rdx
  unsigned __int8 v45; // al
  __int64 v46; // rcx
  bool v47; // zf
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int8 v50; // si
  unsigned __int8 v51; // al
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // r9
  __int64 v55; // rax
  unsigned int v56; // ebp
  ULONG_PTR WobPriority; // rcx
  unsigned __int8 v58; // al
  ULONG_PTR v59; // rcx
  unsigned __int8 v60; // al
  ULONG_PTR v61; // rax
  unsigned __int8 v62; // al
  unsigned int v63; // eax
  unsigned int v64; // eax
  __int64 v65; // r9
  unsigned __int8 v66; // al
  unsigned int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // r9
  bool v70; // r8
  struct _KPRCB *v71; // rcx
  signed __int32 *v72; // r8
  signed __int32 v73; // eax
  signed __int32 v74; // ett
  bool v75; // al
  _LIST_ENTRY *v76; // r9
  _LIST_ENTRY *AwaitingCompletion; // r14
  bool v78; // r8
  struct _KPRCB *v79; // rcx
  signed __int32 *v80; // r8
  signed __int32 v81; // eax
  signed __int32 v82; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v84; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v86; // rax
  struct _KPRCB *v87; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v89; // eax
  signed __int32 v90; // ett
  bool v91; // r8
  _LIST_ENTRY *v92; // rax
  struct _LIST_ENTRY *v93; // rcx
  struct _KPRCB *v94; // rcx
  signed __int32 *v95; // r8
  signed __int32 v96; // eax
  signed __int32 v97; // ett
  signed __int32 v98[8]; // [rsp+0h] [rbp-D8h] BYREF
  bool v99; // [rsp+30h] [rbp-A8h]
  int v100; // [rsp+34h] [rbp-A4h]
  int v101; // [rsp+38h] [rbp-A0h]
  LONGLONG QuadPart; // [rsp+40h] [rbp-98h]
  ULONG_PTR v103; // [rsp+48h] [rbp-90h]
  _QWORD *v104; // [rsp+50h] [rbp-88h] BYREF
  _QWORD *v105; // [rsp+58h] [rbp-80h] BYREF
  _QWORD *v106[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v107; // [rsp+70h] [rbp-68h] BYREF
  __int128 v108; // [rsp+78h] [rbp-60h]
  __int64 v109; // [rsp+88h] [rbp-50h]
  unsigned __int8 v111; // [rsp+E8h] [rbp+10h]

  v111 = WaitReason;
  v5 = WaitMode;
  v107 = 0LL;
  CurrentThread = KeGetCurrentThread();
  QuadPart = 0LL;
  v99 = 0;
  v103 = 0LL;
  v101 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
    v101 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
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
      v75 = KeDisableInterrupts();
      AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
      v78 = v75;
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
            CurrentPrcb->RcuData.AwaitingCompletion = v76;
          }
          else
          {
            CurrentPrcb->RcuData.AwaitingCompletion = Flink;
            v84 = AwaitingCompletion->Flink;
            Blink = AwaitingCompletion->Blink;
            if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
              goto LABEL_65;
            Blink->Flink = v84;
            v84->Blink = Blink;
          }
          v86 = AwaitingCompletion[3].Flink;
          AwaitingCompletion->Flink = v76;
          AwaitingCompletion[1].Flink = v86[3].Blink;
        }
        if ( v78 )
        {
          v87 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v87->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v89 = *SchedulerAssist;
            do
            {
              v90 = v89;
              v89 = _InterlockedCompareExchange(SchedulerAssist, v89 & 0xFFDFFFFF, v89);
            }
            while ( v90 != v89 );
            if ( (v89 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v87);
          }
          _enable();
        }
        if ( AwaitingCompletion[1].Flink != AwaitingCompletion[1].Blink )
        {
          if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) != 0 )
          {
            v91 = KeDisableInterrupts();
            if ( !AwaitingCompletion->Flink )
            {
              v92 = CurrentPrcb->RcuData.AwaitingCompletion;
              if ( v92 )
              {
                v93 = v92->Blink;
                if ( v93->Flink != v92 )
                  goto LABEL_65;
                AwaitingCompletion->Flink = v92;
                AwaitingCompletion->Blink = v93;
                v93->Flink = AwaitingCompletion;
                v92->Blink = AwaitingCompletion;
              }
              else
              {
                AwaitingCompletion->Blink = AwaitingCompletion;
                AwaitingCompletion->Flink = AwaitingCompletion;
                CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
              }
            }
            if ( v91 )
            {
              v94 = KeGetCurrentPrcb();
              v95 = (signed __int32 *)v94->SchedulerAssist;
              if ( v95 )
              {
                _m_prefetchw(v95);
                v96 = *v95;
                do
                {
                  v97 = v96;
                  v96 = _InterlockedCompareExchange(v95, v96 & 0xFFDFFFFF, v96);
                }
                while ( v97 != v96 );
                if ( (v96 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)v94);
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
      else if ( v75 )
      {
        v79 = KeGetCurrentPrcb();
        v80 = (signed __int32 *)v79->SchedulerAssist;
        if ( v80 )
        {
          _m_prefetchw(v80);
          v81 = *v80;
          do
          {
            v82 = v81;
            v81 = _InterlockedCompareExchange(v80, v81 & 0xFFDFFFFF, v81);
          }
          while ( v82 != v81 );
          if ( (v81 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v79);
        }
        _enable();
      }
    }
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      v70 = KeDisableInterrupts();
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v98, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F20C48;
      }
      if ( v70 )
      {
        v71 = KeGetCurrentPrcb();
        v72 = (signed __int32 *)v71->SchedulerAssist;
        if ( v72 )
        {
          _m_prefetchw(v72);
          v73 = *v72;
          do
          {
            v74 = v73;
            v73 = _InterlockedCompareExchange(v72, v73 & 0xFFDFFFFF, v73);
          }
          while ( v74 != v73 );
          if ( (v73 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v71);
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
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      p_WaitIrql = &CurrentThread->WaitIrql;
      v100 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
      v5 = WaitMode;
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v100 = 1;
    }
  }
  else
  {
    v100 = 0;
  }
  while ( 1 )
  {
    v11 = *p_WaitIrql;
    v106[0] = 0LL;
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
      v46 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v46, 2LL);
      *p_WaitIrql = 0;
    }
    v13 = v101;
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
    CurrentThread->WaitReason = v111;
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
      v99 = (*((_BYTE *)Object + 48) & 2) != 0;
      if ( (int)ThreadTimerDelay <= 0
        && (CurrentThread != *((struct _KTHREAD **)Object + 5) || *((_BYTE *)Object + 2) != v17->DpcRoutineActive) )
      {
        goto LABEL_38;
      }
      v28 = *((_DWORD *)Object + 1);
      if ( v28 == 0x80000000 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        KiFastExitThreadWait(v17, (ULONG_PTR)CurrentThread, v13);
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
      v109 = 0LL;
      v32 = *(_DWORD *)Object;
      v108 = 0LL;
      LODWORD(v108) = v32;
      BYTE2(v108) = DpcRoutineActive;
      *(_DWORD *)Object = v108;
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
          v55 = KeAbPreAcquire(v38, 0LL, 1LL);
          if ( v55 )
            *(_BYTE *)(v55 + 10) = 1;
        }
        v104 = 0LL;
        if ( v13 >= 2 )
        {
          v56 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v56 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v56);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( CurrentThread->ThreadLock );
          }
          WobPriority = CurrentThread->WobPriority;
          v58 = CurrentThread->PriorityFloorCounts[WobPriority];
          if ( !v58 )
            KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, WobPriority, 2uLL, 0LL);
          v62 = v58 - 1;
          CurrentThread->PriorityFloorCounts[WobPriority] = v62;
          if ( !v62 )
          {
            v63 = CurrentThread->PriorityFloorSummary ^ (1 << WobPriority);
            CurrentThread->PriorityFloorSummary = v63;
            if ( v63 < 1 << WobPriority && CurrentThread->Priority <= 31 )
            {
              v64 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
              if ( (int)v64 < CurrentThread->Priority )
                KiSetPriorityThread(CurrentThread, (__int64)&v104, v64, v65);
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
            KiExitThreadWaitReschedule(v17, (__int64)CurrentThread, (__int64)&v104);
            return WaitStatus;
          }
          else
          {
            KiProcessDeferredReadyList(v17, &v104, 1u);
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
            KiProcessDeferredReadyList(v17, &v104, WaitIrql);
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
    if ( v100 == 2 )
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
      if ( !v100 )
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
      _InterlockedOr(v98, 0);
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
      v105 = 0LL;
      if ( v13 >= 2 )
      {
        v43 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v43 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v43);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v44 = CurrentThread->WobPriority;
        v45 = CurrentThread->PriorityFloorCounts[v44];
        if ( !v45 )
          KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v44, 2uLL, 0LL);
        v51 = v45 - 1;
        CurrentThread->PriorityFloorCounts[v44] = v51;
        if ( !v51 )
        {
          v52 = CurrentThread->PriorityFloorSummary ^ (1 << v44);
          CurrentThread->PriorityFloorSummary = v52;
          if ( v52 < 1 << v44 && CurrentThread->Priority <= 31 )
          {
            v53 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
            if ( (int)v53 < CurrentThread->Priority )
              KiSetPriorityThread(CurrentThread, (__int64)&v105, v53, v54);
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
          KiExitThreadWaitReschedule(v17, (__int64)CurrentThread, (__int64)&v105);
        }
        else
        {
          KiProcessDeferredReadyList(v17, &v105, 1u);
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
          KiProcessDeferredReadyList(v17, &v105, v24);
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
    v47 = !v99;
    CurrentThread->WaitBlockCount = 1;
    if ( v47 )
    {
      v49 = v103;
    }
    else
    {
      v48 = KeAbPreAcquire(Object, 0LL, 0LL);
      v19 = QuadPart;
      v49 = v48;
      v103 = v48;
    }
    if ( v49 )
    {
      *(_BYTE *)v49 |= 2u;
      if ( *(__int64 *)v49 < 0 )
        KiAbEntryRemoveFromTree((__int64 *)v49, ThreadTimerDelay, v19);
      *(_BYTE *)(v49 + 9) = 1;
      *(_BYTE *)v49 &= ~2u;
    }
    v14 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v13, (__int64)&v107);
    v101 = 0;
    if ( v49 )
    {
      v61 = KeAbPreAcquire(Object, v49, 0LL);
      if ( (v14 & 0xFFFFFF7F) != 0 )
      {
        KeAbPostReleaseEx((ULONG_PTR)Object, v61);
        v103 = 0LL;
      }
      else
      {
        v103 = v61;
        *(_BYTE *)(v61 + 10) = 1;
      }
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( v14 != 256 )
      return v14;
    v50 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v50, 2LL);
    v5 = WaitMode;
    *p_WaitIrql = v50;
  }
  if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !v5 )
    goto LABEL_35;
  v14 = 192;
LABEL_27:
  if ( v13 >= 2 )
  {
    v59 = CurrentThread->WobPriority;
    v60 = CurrentThread->PriorityFloorCounts[v59];
    if ( !v60 )
      KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v59, 2uLL, 0LL);
    v66 = v60 - 1;
    CurrentThread->PriorityFloorCounts[v59] = v66;
    if ( !v66 )
    {
      v67 = CurrentThread->PriorityFloorSummary ^ (1 << v59);
      CurrentThread->PriorityFloorSummary = v67;
      if ( v67 < 1 << v59 && CurrentThread->Priority <= 31 )
      {
        v68 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
        if ( (int)v68 < CurrentThread->Priority )
          KiSetPriorityThread(CurrentThread, (__int64)v106, v68, v69);
      }
    }
    CurrentThread->WobPriority = 32;
  }
  CurrentThread->ThreadLock = 0LL;
  if ( (v13 & 1) != 0 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v106, v11);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
    __writecr8(v11);
  }
  return v14;
}
