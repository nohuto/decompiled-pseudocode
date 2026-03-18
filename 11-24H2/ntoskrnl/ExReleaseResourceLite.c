/*
 * XREFs of ExReleaseResourceLite @ 0x14025A450
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     KeCapturePersistentThreadState @ 0x140262B20 (KeCapturePersistentThreadState.c)
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     MiReleaseLoadLock @ 0x1402C7310 (MiReleaseLoadLock.c)
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1403440B0 (SepCanTokenMatchAllPackageSid.c)
 *     SepQueueWorkItem @ 0x140349B84 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 *     SepDesktopAppxSubProcessToken @ 0x140355ABC (SepDesktopAppxSubProcessToken.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403571CC (SepInternalSetSecurityAttributesToken.c)
 *     SepTrustLevelCheck @ 0x140357F50 (SepTrustLevelCheck.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     FsRtlReleaseFileForModWrite @ 0x140372004 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140372ABC (FsRtlAcquireFileForModWriteEx.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1404519E0 (SeTokenGetNoChildProcessRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x1404556B4 (SepReleaseOrderedReadLocks.c)
 *     SepExamineGlobalSaclEx @ 0x140462D6C (SepExamineGlobalSaclEx.c)
 *     IopCreateSecurityCheck @ 0x14046DA5C (IopCreateSecurityCheck.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140477780 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x14047B300 (IoCheckRedirectionTrustLevel.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14048CFA0 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x14049759C (SeTokenSetRedirectionTrustPolicy.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404B93F4 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404BD344 (PiDmaGuardQueueRemoveEntry.c)
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x1405818E0 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x140581DF0 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IoFillTriageDumpBuffer @ 0x1405912CC (IoFillTriageDumpBuffer.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140592538 (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x140597B68 (IoSetDeferredLiveDumpFileHandle.c)
 *     PiSwIrpCancelStartCreate @ 0x1405A8D00 (PiSwIrpCancelStartCreate.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A9910 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     RtlpAllocateHeap @ 0x1405EA9AC (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1405ECA10 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405ED758 (RtlpSetupExtendedBlock.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140609118 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1406092E0 (SeSetSecurityAttributesTokenEx.c)
 *     DifExReleaseResourceLiteWrapper @ 0x140620F70 (DifExReleaseResourceLiteWrapper.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x140656E00 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     FsRtlMdlReadDev @ 0x14070A280 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14070A4B0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x14070CAB0 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14070CCE0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14070D6DC (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14070D880 (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x140710A68 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x140711A34 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140712428 (IopInitializeBootLogging.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140714080 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x1407142F0 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407144C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x140714D40 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140714E00 (IoUnregisterFsRegistrationChange.c)
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14071EC28 (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyHwProfileChange @ 0x140720684 (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407208D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PpReleaseBootDDB @ 0x140724EC4 (PpReleaseBootDDB.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407264C8 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PiSwIrpCleanup @ 0x1407308E0 (PiSwIrpCleanup.c)
 *     PiSwIrpGetAttributes @ 0x140730AD4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x140730B74 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x140730C14 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x140730D50 (PiSwIrpSetLifetime.c)
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x14073423C (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14073A3A0 (PiDmaGuardQueueInsertEntry.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140759514 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14075FC80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075FF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     TtmNotifyDeviceArrival @ 0x140768290 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140768590 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140768650 (TtmNotifyDeviceInput.c)
 *     TtmpStartCallout @ 0x140769844 (TtmpStartCallout.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140769BB0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiSessionsRundown @ 0x140769F5C (TtmiSessionsRundown.c)
 *     TtmpInitiateModernStandbyTransition @ 0x14076A7B8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpInsertPowerRequestToSession @ 0x14076A838 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionPowerControl @ 0x14076AC6C (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x14076AD00 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x14076AFF0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14076B174 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B2E4 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x14076B410 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14076B4B8 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14076B5F8 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14076B6E8 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchOpenTerminal @ 0x14076B858 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x14076B8F4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x14076B9B0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14076BA5C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14076BB10 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x14076BBCC (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiResetInactivityTimer @ 0x14076FA90 (TtmiResetInactivityTimer.c)
 *     TtmpCloseTerminalHandle @ 0x140770130 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140770300 (TtmpScheduledEvaluationWorker.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140770730 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpDeleteQueue @ 0x140770D60 (TtmpDeleteQueue.c)
 *     TtmpReleaseQueueLock @ 0x140770E60 (TtmpReleaseQueueLock.c)
 *     PsSwapProcessWorkingSet @ 0x140774624 (PsSwapProcessWorkingSet.c)
 *     PspSetIoPriorityLimitJobTree @ 0x140777DA4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140777E54 (PspSetJobMemoryPartition.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407784F0 (PspSetPagePriorityLimitJobTree.c)
 *     RtlZeroHeap @ 0x140783280 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14078F838 (SeSetPrivateNameSpaceToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14078F8F0 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14078FC08 (SepSetServerSiloToken.c)
 *     SepIdAssignableAsGroup @ 0x1407924F0 (SepIdAssignableAsGroup.c)
 *     SeExchangePrimaryToken @ 0x140792C9C (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x140793570 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140793668 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140793804 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140793A58 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407947B0 (SepRmGlobalSaclSetWrkr.c)
 *     WmipFindSMBiosStructure @ 0x1407A4174 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosEventlog @ 0x1407A4388 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1407A45E0 (WmipGetSysIds.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5650 (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x1407C2F70 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x1408171F0 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408226F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140851B40 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x14085D130 (PspLockRootJobExclusive.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14085D348 (ExpGetSystemFirmwareTableInformation.c)
 *     PspSetJobIoRateControl @ 0x14085E618 (PspSetJobIoRateControl.c)
 *     PspFreezeJobTree @ 0x14085EA8C (PspFreezeJobTree.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     NtQuerySecurityAttributesToken @ 0x140888DC0 (NtQuerySecurityAttributesToken.c)
 *     SeExamineGlobalSacl @ 0x140889DD8 (SeExamineGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140889F14 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088A310 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     PspChargeJobWakeCounter @ 0x14088E1A0 (PspChargeJobWakeCounter.c)
 *     AlpcpExposeTokenAttribute @ 0x140898930 (AlpcpExposeTokenAttribute.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PiSwIrpInterfaceSetState @ 0x1408B1C78 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408B1E40 (PiSwIrpPropertySet.c)
 *     IopDoDeferredSetInterfaceState @ 0x1408B24D0 (IopDoDeferredSetInterfaceState.c)
 *     PiSwIrpInterfaceRegister @ 0x1408B2584 (PiSwIrpInterfaceRegister.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     IoSetDeviceInterfaceState @ 0x1408B40B0 (IoSetDeviceInterfaceState.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B523C (PiDmObjectManagerReleaseLock.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B7090 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B84A0 (PiPnpRtlSetObjectProperty.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B9044 (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x1408B9260 (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1408BBA94 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceDepth @ 0x1408BC2DC (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1408BD4B0 (PiControlGetPropertyData.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     PiGetRelatedDevice @ 0x1408BEE58 (PiGetRelatedDevice.c)
 *     IopGetDeviceInterfaces @ 0x1408C8470 (IopGetDeviceInterfaces.c)
 *     PiDmGetObject @ 0x1408CBB70 (PiDmGetObject.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1408CC0A0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408CC270 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408CC2D0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CFC60 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408D0350 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408D1170 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408D19E0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408D1BF0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408D21F0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408D25A0 (PiUEventApplyAdditionalFilters.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408E7358 (PspUnlockJobsAndProcessExclusive.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408E7594 (PspGetMemoryPartitionFromJobList.c)
 *     PspUnlockJobChain @ 0x1408E7884 (PspUnlockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408E7AC0 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408EA030 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408EA780 (PspSendProcessNotificationToJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408EB654 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x1408EB990 (PspLockRootJobShared.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x1408EBF00 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x1408EBFF8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     TtmNotifyLowPowerStateExited @ 0x140902F78 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140902FF4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140903084 (TtmNotifySessionTerminalInput.c)
 *     TtmInitCurrentSession @ 0x140903118 (TtmInitCurrentSession.c)
 *     TtmSessionMonitorControl @ 0x140903874 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140903A00 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140903D68 (TtmNotifySessionDisplayRequiredChange.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1409095F0 (_CmGetDeviceSoftwareKeyPath.c)
 *     SeQueryUserSidToken @ 0x14090A570 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     NtDuplicateToken @ 0x14090F090 (NtDuplicateToken.c)
 *     SeTokenCanImpersonate @ 0x140910A30 (SeTokenCanImpersonate.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x140913B0C (PspSetProcessPriorityClass.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1409227D0 (EtwpGetSidExtendedHeaderItem.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1409251C8 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140925270 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbNodeActionCallback @ 0x140925E10 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140925F40 (PiDrvDbLoadNode.c)
 *     NtAdjustPrivilegesToken @ 0x1409377D0 (NtAdjustPrivilegesToken.c)
 *     AlpcpQuerySidToken @ 0x14093D974 (AlpcpQuerySidToken.c)
 *     FsRtlReleaseFile @ 0x140943180 (FsRtlReleaseFile.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     PfSnCheckActionsNeeded @ 0x140961228 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140962F24 (PfSnPrefetchCacheEntryUpdate.c)
 *     PiQueryAndAllocateBootResources @ 0x14098DD70 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14098E5B0 (PiQueryResourceRequirements.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1409902C0 (PiUpdateDevicePanel.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14099B5CC (PiPnpRtlSetDeviceRegProperty.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A4954 (IopInvalidateVolumesForDevice.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     IoGetLegacyVetoList @ 0x1409B9120 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 *     SeQueryServerSiloToken @ 0x1409BA940 (SeQueryServerSiloToken.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409BAC8C (TtmNotifyConsoleUserPresent.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409C43A8 (IopQueryInterfaceRecurseUp.c)
 *     PnpDelayedRemoveWorker @ 0x1409C6B60 (PnpDelayedRemoveWorker.c)
 *     PpCheckInDriverDatabase @ 0x1409C7E2C (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     IoOpenDeviceRegistryKey @ 0x1409CAEC0 (IoOpenDeviceRegistryKey.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
 *     PiCreateDeviceInstanceKey @ 0x1409D4128 (PiCreateDeviceInstanceKey.c)
 *     SeGetTokenControlInformation @ 0x1409D7510 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x1409DF650 (SeQuerySessionIdTokenEx.c)
 *     SeQuerySecurityAttributesToken @ 0x1409ECEB0 (SeQuerySecurityAttributesToken.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 *     NtCreateTimer @ 0x1409F7110 (NtCreateTimer.c)
 *     PiSwFreePdoAssociationsList @ 0x1409F8118 (PiSwFreePdoAssociationsList.c)
 *     PiSwCompleteCreate @ 0x1409F8538 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwPdoPnPDispatch @ 0x1409FAA40 (PiSwPdoPnPDispatch.c)
 *     SeQuerySessionIdToken @ 0x1409FBF70 (SeQuerySessionIdToken.c)
 *     CmpStopRMLog @ 0x140A0452C (CmpStopRMLog.c)
 *     CmpAccountForLogReservation @ 0x140A05174 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x140A0592C (CmpTransWriteLog.c)
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     PpDeviceRegistration @ 0x140A0CB38 (PpDeviceRegistration.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140A0E9B4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140A0EDE0 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
 *     PiSwStopDestroy @ 0x140A102F4 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140A105F8 (PiSwProcessParentRemoveIrp.c)
 *     IopReleaseDeviceResources @ 0x140A10CF8 (IopReleaseDeviceResources.c)
 *     PnpDisableDeviceInterfaces @ 0x140A10ED8 (PnpDisableDeviceInterfaces.c)
 *     PiSwProcessParentStartIrp @ 0x140A11698 (PiSwProcessParentStartIrp.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A167F4 (AlpcpCheckConnectionSecurity.c)
 *     NtGetMUIRegistryInfo @ 0x140A215C0 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x140A22BDC (SepCreateLogonSessionTrack.c)
 *     FsRtlCopyRead @ 0x140A265F0 (FsRtlCopyRead.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A27D48 (PopDripsWatchdogStopWatchdog.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A27DB4 (PopDripsWatchdogStartWatchdog.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     SepValidOwnerSubjectContext @ 0x140A2D638 (SepValidOwnerSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x140A31678 (SeIsTokenAssignableToProcess.c)
 *     SepReferenceLogonSessionSilo @ 0x140A31B44 (SepReferenceLogonSessionSilo.c)
 *     NtAdjustGroupsToken @ 0x140A36530 (NtAdjustGroupsToken.c)
 *     PspUnlockJobConditionally @ 0x140A36C28 (PspUnlockJobConditionally.c)
 *     PspAssignProcessQuotaBlock @ 0x140A36D98 (PspAssignProcessQuotaBlock.c)
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 *     PiQueryDeviceRelations @ 0x140A3E9EC (PiQueryDeviceRelations.c)
 *     WmipGetSMBiosTableData @ 0x140A42038 (WmipGetSMBiosTableData.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A43660 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140A438E0 (PipForDeviceNodeSubtree.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A466DC (SepGetLogonSessionAccountInfo.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4A5C4 (SeSetMandatoryPolicyToken.c)
 *     PspSetProcessAffinitySafe @ 0x140A4B2A4 (PspSetProcessAffinitySafe.c)
 *     SepUpdateLogonSessionTrack @ 0x140A4BA84 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140A50448 (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     PspSetBackgroundJobTree @ 0x140A58988 (PspSetBackgroundJobTree.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A5AC1C (IopSetDeviceSecurityDescriptor.c)
 *     IopGetRootDevices @ 0x140A624B8 (IopGetRootDevices.c)
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 *     PspValidateJobAffinityState @ 0x140A6DEAC (PspValidateJobAffinityState.c)
 *     PipGenerateContainerID @ 0x140A7063C (PipGenerateContainerID.c)
 *     AdtpBuildAccessesString @ 0x140A729FC (AdtpBuildAccessesString.c)
 *     IopBootLog @ 0x140A785F8 (IopBootLog.c)
 *     WmipReleaseSmbiosLockShared @ 0x140A7BAE8 (WmipReleaseSmbiosLockShared.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7F278 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PnpChainDereferenceComplete @ 0x140A878A4 (PnpChainDereferenceComplete.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A88D94 (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140A8A728 (SeSetVirtualizationToken.c)
 *     PiQueryPowerRelations @ 0x140A8C2C8 (PiQueryPowerRelations.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A8D634 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A965B0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140AA223C (IoLockUnlockPnpDeviceTree.c)
 *     PiDmaGuardQueueFlush @ 0x140AA2610 (PiDmaGuardQueueFlush.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140AA7260 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA7668 (PnpDeleteDeviceInterfaces.c)
 *     TtmCleanupCurrentSession @ 0x140AAD48C (TtmCleanupCurrentSession.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AADBF0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     SepBlockAccessForLogonSession @ 0x140ABBB60 (SepBlockAccessForLogonSession.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140ABC880 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiCMUnregisterDeviceInterface @ 0x140AC00A8 (PiCMUnregisterDeviceInterface.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 *     CmpStartRMLog @ 0x140AE5884 (CmpStartRMLog.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 *     IopInitCrashDumpRegCallback @ 0x140C1CA50 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140C22040 (PipResetMatchingFilteredDevices.c)
 *     ExpPrmInitialization @ 0x140C40D54 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140C6397C (VslRegisterBootDrivers.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     RtlRemoveHeadCircularList @ 0x140428AD0 (RtlRemoveHeadCircularList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ExReleaseResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r9
  USHORT Flag; // cx
  ULONG_PTR v4; // r14
  unsigned __int8 v5; // r12
  struct _KTHREAD *v6; // r8
  __int64 v7; // rdx
  ULONG v8; // r13d
  ULONG v9; // r13d
  ULONG TableSize; // eax
  ERESOURCE_THREAD v11; // rdi
  char v12; // r14
  KIRQL v13; // r12
  _QWORD *v14; // r13
  signed __int64 v15; // rax
  bool v16; // cc
  signed __int64 v17; // rax
  ERESOURCE_THREAD v18; // r14
  ULONG v19; // ecx
  unsigned __int64 *v20; // rax
  __int64 v21; // rdx
  ULONG v22; // eax
  unsigned __int64 v23; // rdi
  int v24; // r14d
  __int64 v25; // rax
  KSPIN_LOCK *v26; // rcx
  char v27; // di
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rcx
  struct _KPRCB *v31; // rcx
  signed __int32 *v32; // r8
  unsigned int v33; // eax
  unsigned __int64 OwnerThread; // rdx
  OWNER_ENTRY *p_OwnerEntry; // rdi
  unsigned __int64 v36; // rcx
  POWNER_ENTRY OwnerTable; // rdi
  ULONG v38; // eax
  unsigned __int64 v39; // rdi
  struct _KPRCB *v40; // r15
  struct _KTHREAD *v41; // r12
  unsigned int v42; // ecx
  signed __int64 v43; // r14
  int v44; // r8d
  signed __int64 v45; // rax
  signed __int64 v46; // rdi
  signed __int64 v47; // rax
  unsigned int m; // edx
  int v49; // r9d
  ULONG v50; // r13d
  __int64 v51; // rax
  KSPIN_LOCK *v52; // rcx
  char v53; // di
  __int64 v54; // r8
  __int64 v55; // r10
  __int64 v56; // rcx
  struct _KPRCB *v57; // rcx
  signed __int32 *v58; // r8
  PVOID ExclusiveWaiters; // rcx
  _QWORD *v60; // rdx
  PVOID *v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 *v63; // rax
  unsigned __int64 k; // rcx
  _DWORD *v65; // r9
  _QWORD *v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rdx
  _QWORD *v69; // rcx
  _QWORD *v70; // rax
  unsigned int v71; // eax
  ULONG_PTR v72; // r14
  char v73; // r12
  KIRQL v74; // r13
  _QWORD *v75; // rax
  signed __int64 v76; // rax
  signed __int64 v77; // rax
  ERESOURCE_THREAD v78; // rdi
  ULONG NumberOfSharedWaiters; // ecx
  ULONG v80; // eax
  ULONG v81; // eax
  unsigned __int64 v82; // r14
  int v83; // r14d
  __int64 v84; // rax
  KSPIN_LOCK *v85; // rdx
  ULONG v86; // r13d
  unsigned __int64 v87; // rdi
  struct _KPRCB *v88; // r13
  struct _KTHREAD *v89; // rcx
  unsigned int v90; // r12d
  signed __int64 Object; // r14
  int v92; // r8d
  signed __int64 Pool2; // rax
  unsigned __int64 v94; // rcx
  signed __int64 v95; // rax
  unsigned int j; // edx
  int v97; // ecx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // r9
  ULONG v100; // ecx
  ULONG v101; // r10d
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // r9
  ULONG v104; // ecx
  ULONG v105; // r10d
  char v106; // al
  char v107; // r14
  __int64 v108; // rax
  KSPIN_LOCK *v109; // rcx
  char v110; // di
  __int64 v111; // r8
  __int64 v112; // r10
  __int64 v113; // rcx
  struct _KPRCB *v114; // rcx
  signed __int32 *SchedulerAssist; // r8
  char v116; // al
  char v117; // al
  bool v118; // zf
  struct _KPRCB *v119; // r12
  unsigned __int64 *v120; // rax
  unsigned __int64 v121; // rax
  unsigned __int64 *v122; // r13
  unsigned __int64 *i; // rax
  _DWORD *v124; // r9
  _QWORD *v125; // r13
  _QWORD *v126; // rax
  _QWORD *v127; // rdx
  _QWORD *v128; // rax
  _QWORD *v129; // rcx
  char v130; // cl
  char v131; // al
  struct _KPRCB *v132; // r13
  signed __int32 v133; // eax
  signed __int32 v134; // ett
  signed __int32 v135; // eax
  signed __int32 v136; // ett
  unsigned __int64 **v137; // rdx
  unsigned __int64 *v138; // rax
  signed __int32 v139; // eax
  signed __int32 v140; // ett
  __int128 *v141; // rax
  unsigned __int64 *SharedWaiters; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // r13
  ULONG *p_ActiveEntries; // rdi
  struct _KTHREAD *v147; // r14
  unsigned __int8 v148; // si
  char v149; // cl
  volatile signed __int64 *v150; // rcx
  volatile signed __int64 *v151; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v154; // rcx
  __int64 **v155; // r14
  __int64 *v156; // rcx
  __int64 **v157; // r14
  __int64 *v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 **v161; // r12
  __int64 *v162; // rcx
  __int64 **v163; // r12
  __int64 *v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rax
  signed __int32 v167[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v168; // [rsp+38h] [rbp-D0h]
  _DWORD *v169; // [rsp+40h] [rbp-C8h]
  _DWORD *v170; // [rsp+48h] [rbp-C0h]
  __int16 Group; // [rsp+50h] [rbp-B8h]
  ULONG ContentionCount; // [rsp+54h] [rbp-B4h]
  __int64 v173; // [rsp+58h] [rbp-B0h] BYREF
  KSPIN_LOCK *p_SpinLock; // [rsp+60h] [rbp-A8h]
  __int64 v175; // [rsp+68h] [rbp-A0h]
  _QWORD *v176; // [rsp+70h] [rbp-98h]
  unsigned __int64 v177; // [rsp+78h] [rbp-90h]
  struct _KPRCB *CurrentPrcb; // [rsp+80h] [rbp-88h]
  unsigned __int64 v179; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v180; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v181; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v182; // [rsp+A0h] [rbp-68h]
  __int128 v183; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v184; // [rsp+B8h] [rbp-50h]
  __int128 v185; // [rsp+C8h] [rbp-40h]
  __int128 v186; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v187; // [rsp+E8h] [rbp-20h]
  __int128 v188; // [rsp+F8h] [rbp-10h]
  _QWORD v189[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 retaddr; // [rsp+150h] [rbp+48h]

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    v147 = KeGetCurrentThread();
    v148 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v148, 2LL);
    if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 && Resource->Reserved2 == v147 )
    {
      p_ActiveEntries = &Resource->ActiveEntries;
LABEL_317:
      if ( p_ActiveEntries )
      {
        v106 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v106 & 2) != 0 )
        {
          v107 = 0;
        }
        else
        {
          v107 = 1;
          *((_BYTE *)p_ActiveEntries + 37) = v106 & 0xFE;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v148);
        __writecr8(v148);
        ExReleaseFastResource((ULONG_PTR)Resource, (ULONG_PTR)p_ActiveEntries);
        if ( v107 )
          ExFreePoolWithTag(p_ActiveEntries, 0);
        return;
      }
    }
    else
    {
      for ( p_ActiveEntries = (ULONG *)v147[1].WaitBlock[3].SparePtr;
            p_ActiveEntries != (ULONG *)&v147[1].LastXStateSaveDebugInfo;
            p_ActiveEntries = *(ULONG **)p_ActiveEntries )
      {
        v149 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v149 & 2) == 0 && *((PERESOURCE *)p_ActiveEntries + 3) == Resource && (v149 & 1) != 0 )
          goto LABEL_317;
      }
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)v147, 0LL, 0LL);
  }
  v4 = (ULONG_PTR)KeGetCurrentThread();
  v175 = 0LL;
  p_SpinLock = &Resource->SpinLock;
  v173 = 0LL;
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
  LOBYTE(v175) = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&v173) )
      KxWaitForLockOwnerShip(&v173);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v173, &Resource->SpinLock);
  }
  v6 = KeGetCurrentThread();
  v7 = Resource->Flag;
  if ( ((v7 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v4 & 3) != 3 && (struct _KTHREAD *)v4 != v6 )
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v6, v4, 0LL);
  if ( (v7 & 0x80u) == 0LL )
  {
    v182 = 0LL;
    LOBYTE(v168) = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    if ( (v4 & 3) != 0 )
      v33 = 0;
    else
      v33 = *(unsigned __int8 *)(v4 + 1120);
    OwnerThread = Resource->OwnerEntry.OwnerThread;
    p_OwnerEntry = &Resource->OwnerEntry;
    if ( OwnerThread == v4 )
      goto LABEL_132;
    v36 = Resource->OwnerEntry.OwnerThread != 0;
    if ( v33 )
    {
      OwnerThread = (unsigned __int64)Resource->OwnerTable;
      if ( OwnerThread )
      {
        if ( v33 < *(_DWORD *)(OwnerThread + 8) )
        {
          p_OwnerEntry = (OWNER_ENTRY *)(OwnerThread + 16LL * v33);
          if ( p_OwnerEntry->OwnerThread == v4 )
            goto LABEL_132;
        }
      }
    }
    OwnerTable = Resource->OwnerTable;
    OwnerThread = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
    if ( OwnerTable )
    {
      v6 = (struct _KTHREAD *)&OwnerTable[OwnerTable->TableSize];
      p_OwnerEntry = OwnerTable + 1;
      if ( v36 < OwnerThread )
      {
        while ( p_OwnerEntry->OwnerThread != v4 )
        {
          if ( !p_OwnerEntry->OwnerThread || (++v36, v36 != OwnerThread) )
          {
            if ( ++p_OwnerEntry != (OWNER_ENTRY *)v6 )
              continue;
          }
          goto LABEL_114;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                    - LODWORD(Resource->OwnerTable)) >> 4;
LABEL_132:
        v71 = p_OwnerEntry->TableSize & 7 | (8 * (p_OwnerEntry->TableSize >> 3) - 8);
        p_OwnerEntry->TableSize = v71;
        LODWORD(v170) = v71 >> 3;
        if ( !(v71 >> 3) )
        {
          v72 = p_OwnerEntry->OwnerThread;
          if ( (v71 & 2) != 0 )
          {
            v72 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v72 & 3) != 0 )
          {
            goto LABEL_148;
          }
          if ( !v72 )
            goto LABEL_148;
          if ( (v71 & 1) == 0 )
          {
LABEL_141:
            if ( (v71 & 4) != 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v72 + 1508));
              v71 = p_OwnerEntry->TableSize & 0xFFFFFFFB;
              p_OwnerEntry->TableSize = v71;
            }
            if ( (v71 & 2) != 0 )
            {
              if ( ObpTraceFlags )
                ObpPushStackInfo(v72 - 48);
              v76 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v72 - 48), 0xFFFFFFFFFFFFFFFFuLL);
              v16 = v76 <= 1;
              v77 = v76 - 1;
              if ( v16 )
              {
                if ( *(_QWORD *)(v72 - 40) )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v72 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v72 - 48) >> 8)],
                    v72,
                    3uLL,
                    *(_QWORD *)(v72 - 40));
                if ( v77 < 0 )
                  KeBugCheckEx(0x18u, 0LL, v72, 4uLL, v77);
                ObpDeferObjectDeletion(v72 - 48);
              }
              p_OwnerEntry->TableSize &= ~2u;
            }
LABEL_148:
            p_OwnerEntry->OwnerThread = 0LL;
            v78 = 0LL;
            v16 = Resource->ActiveEntries <= 1;
            ContentionCount = Resource->ContentionCount;
            if ( v16 )
            {
              if ( Resource->NumberOfExclusiveWaiters )
              {
                v138 = (unsigned __int64 *)RtlRemoveHeadCircularList(&Resource->ExclusiveWaiters, OwnerThread, v6);
                if ( v138 )
                {
                  v78 = v138[2];
                  v138[1] = (unsigned __int64)v138;
                  *v138 = (unsigned __int64)v138;
                  v182 = v138;
                }
                --Resource->NumberOfExclusiveWaiters;
                Resource->Flag |= 0x80u;
                NumberOfSharedWaiters = 1;
              }
              else
              {
                NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
                if ( !NumberOfSharedWaiters )
                  goto LABEL_151;
                SharedWaiters = (unsigned __int64 *)Resource->SharedWaiters;
                Resource->SharedWaiters = 0LL;
                v182 = SharedWaiters;
                Resource->NumberOfSharedWaiters = 0;
              }
LABEL_152:
              v80 = Resource->ActiveEntries - 1;
              Resource->ActiveEntries = v80 + NumberOfSharedWaiters;
              if ( !(v80 + NumberOfSharedWaiters) )
                Resource->ActiveCount = 0;
              if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
                Resource->Flag &= 0xF9u;
              LODWORD(v176) = Resource->WaiterPriority;
              if ( v78 )
              {
                v81 = Resource->OwnerEntry.TableSize & 7;
                Resource->OwnerEntry.OwnerThread = v78;
                Resource->OwnerEntry.TableSize = v81 | 8;
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
              {
                KiReleaseQueuedSpinLockInstrumented(&v173, retaddr, v6, v1);
LABEL_162:
                v82 = (unsigned __int8)v175;
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v175);
                __writecr8(v82);
                if ( v182 )
                {
                  v121 = KeGetCurrentIrql();
                  v177 = v121;
                  __writecr8(2uLL);
                  if ( KiIrqlFlags )
                    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v121, 2LL);
                  v122 = v182;
                  CurrentPrcb = KeGetCurrentPrcb();
                  for ( i = (unsigned __int64 *)*v182; ; i = (unsigned __int64 *)*v181 )
                  {
                    v181 = i;
                    v179 = (unsigned __int64)v122;
                    v169 = v122 + 3;
                    KiAcquireKobjectLockSafe(v122 + 3);
                    v124 = v122 + 3;
                    *((_DWORD *)v122 + 7) = 1;
                    v125 = (_QWORD *)v122[4];
                    v126 = v124 + 2;
                    v170 = v124 + 2;
                    while ( v125 != v126 )
                    {
                      v127 = (_QWORD *)*v125;
                      v128 = v125;
                      v125 = v127;
                      v129 = (_QWORD *)v128[1];
                      if ( (_QWORD *)v127[1] != v128 || (_QWORD *)*v129 != v128 )
                        goto LABEL_127;
                      *v129 = v127;
                      v127[1] = v129;
                      v130 = *((_BYTE *)v128 + 16);
                      if ( v130 == 1 )
                      {
                        v131 = KiTryUnwaitThread(CurrentPrcb, v128, *((unsigned __int16 *)v128 + 9), 0LL);
                        v124 = v169;
                        v118 = v131 == 0;
                        v126 = v170;
                        if ( !v118 )
                        {
                          v118 = v169[1]-- == 1;
                          if ( v118 )
                            break;
                        }
                      }
                      else if ( v130 == 2 )
                      {
                        *((_BYTE *)v128 + 17) = 5;
                        KiInsertQueueInternal(v128[3], v128);
                        v124 = v169;
                        v118 = v169[1]-- == 1;
                        if ( v118 )
                          break;
                        v126 = v170;
                      }
                      else
                      {
                        if ( v130 == 4 )
                        {
                          *((_BYTE *)v128 + 17) = 5;
                          v124[1] = 0;
                          KeInsertQueueDpc((PRKDPC)v128[3], v124, v128);
                        }
                        else
                        {
                          KiTryUnwaitThread(CurrentPrcb, v128, 256LL, 0LL);
                        }
                        v126 = v170;
                        v124 = v169;
                      }
                    }
                    _InterlockedAnd((volatile signed __int32 *)(v179 + 24), 0xFFFFFF7F);
                    if ( v181 == v182 )
                      break;
                    v122 = v181;
                  }
                  v132 = CurrentPrcb;
                  KiRemoveBoostThread(CurrentPrcb);
                  KiExitDispatcher(v132, v177);
                }
                v83 = 65602;
                LODWORD(v170) = 0;
                LODWORD(v169) = 65602;
LABEL_177:
                __incgsdword(0x9070u);
                if ( !(_BYTE)v168 )
                  return;
                v186 = 0LL;
                v187 = 0LL;
                v188 = 0LL;
                v88 = KeGetCurrentPrcb();
                v179 = __rdtsc();
                ++v88->SynchCounters.ExEtwSynchTrackingNotificationsCount;
                Group = v88->Group;
                LOBYTE(v168) = v88->GroupIndex;
                if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
                  return;
                v89 = KeGetCurrentThread();
                v90 = v83 & 0xFFFF0000;
                v177 = (unsigned __int64)v89;
                if ( (*(_DWORD *)(&v89[1].SwapListEntry + 1) & 1) != 0 )
                  return;
                Object = (signed __int64)v89[1].WaitBlock[0].Object;
                v92 = EtwpEthreadSyncTrackingSequence;
                LODWORD(v176) = EtwpEthreadSyncTrackingSequence;
                if ( !Object )
                {
                  Pool2 = ExAllocatePool2(0x48uLL);
                  v46 = Pool2;
                  if ( !Pool2 )
                    return;
                  v94 = v177;
                  *(_QWORD *)(Pool2 + 16) = Resource;
                  *(_DWORD *)(Pool2 + 28) = v90;
                  *(_DWORD *)(Pool2 + 32) = 0;
                  *(_DWORD *)(Pool2 + 40) = (_DWORD)v176;
                  Object = _InterlockedCompareExchange64((volatile signed __int64 *)(v94 + 1568), Pool2, 0LL);
                  if ( !Object )
                  {
LABEL_196:
                    if ( !*(_DWORD *)(v46 + 32) )
                      goto LABEL_211;
                    ++v88->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
                    if ( *(_DWORD *)(v46 + 36) < (unsigned int)((_DWORD)v170 + 1) )
                      *(_DWORD *)(v46 + 36) = (_DWORD)v170 + 1;
                    if ( (_DWORD)v169 == 65602 )
                    {
                      v98 = *(_QWORD *)(v46 + 8);
                      if ( v98 > 2 && *(_WORD *)(v46 + 24) == Group && *(_BYTE *)(v46 + 26) == (_BYTE)v168 )
                        v99 = v179 - v98;
                      else
                        v99 = 0LL;
                      if ( *(_QWORD *)v46 <= 1uLL
                        || (v88->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                          + v88->SynchCounters.ExecutiveResourceReleaseSharedCount)
                         % EtwpExecutiveResourceContentionSampleRate )
                      {
                        v100 = *(_DWORD *)(v46 + 44);
                        v101 = ContentionCount;
                        if ( (ContentionCount <= v100
                           || (ContentionCount - v100) % EtwpExecutiveResourceContentionSampleRate)
                          && (v88->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                            + v88->SynchCounters.ExecutiveResourceReleaseSharedCount)
                           % EtwpExecutiveResourceReleaseSampleRate )
                        {
                          goto LABEL_211;
                        }
                      }
                      else
                      {
                        v101 = ContentionCount;
                      }
                      DWORD2(v188) = 65602;
                      *(_QWORD *)&v188 = Resource;
                      *(_QWORD *)&v186 = *(_QWORD *)(v46 + 8);
                      DWORD2(v187) = *(_DWORD *)(v46 + 36);
                      *((_QWORD *)&v186 + 1) = v99;
                      *(_QWORD *)&v187 = *(_QWORD *)v46;
                      HIDWORD(v188) = v101 - *(_DWORD *)(v46 + 44);
                      v141 = &v186;
                      HIDWORD(v187) = KeGetCurrentThread()[1].CurrentRunTime;
LABEL_281:
                      v189[0] = v141;
                      v189[1] = 48LL;
                      EtwTraceKernelEvent((int)v189, 1, 0x20020000u, 1323, 23074818);
                      goto LABEL_211;
                    }
                    if ( (_DWORD)v169 == 65618 )
                      *(_DWORD *)(v46 + 32) = 2;
                    return;
                  }
                  ExFreePoolWithTag((PVOID)Pool2, 0);
                  v92 = (int)v176;
                }
                v95 = 0LL;
                for ( j = 0; j < 8; ++j )
                {
                  v97 = *(_DWORD *)(Object + 28);
                  if ( v97 == v90 && *(PERESOURCE *)(Object + 16) == Resource && *(_DWORD *)(Object + 40) == v92 )
                    goto LABEL_195;
                  if ( !v95 )
                  {
                    if ( v97 )
                    {
                      if ( *(_DWORD *)(Object + 40) < v92 )
                      {
                        v95 = Object;
                        break;
                      }
                    }
                    else
                    {
                      v95 = Object;
                    }
                  }
                  Object += 64LL;
                }
                Object = v95;
                if ( v95 )
                {
                  *(_QWORD *)(v95 + 16) = Resource;
                  *(_DWORD *)(v95 + 28) = v90;
                  *(_QWORD *)(v95 + 32) = 0LL;
                  *(_QWORD *)v95 = 0LL;
                  *(_QWORD *)(v95 + 8) = 0LL;
                  *(_DWORD *)(v95 + 24) = 0;
                  *(_DWORD *)(v95 + 40) = v92;
                  *(_DWORD *)(v95 + 44) = 0;
                }
LABEL_195:
                v46 = Object;
                if ( !Object )
                  return;
                goto LABEL_196;
              }
              _m_prefetchw(&v173);
              v84 = v173;
              if ( !v173 )
              {
                if ( (__int64 *)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)p_SpinLock,
                                  0LL,
                                  (signed __int64)&v173) == &v173 )
                  goto LABEL_162;
                v84 = KxWaitForLockChainValid(&v173, OwnerThread, v6, v1);
              }
              v173 = 0LL;
              v85 = p_SpinLock;
              if ( (((unsigned __int8)v85 ^ (unsigned __int8)_InterlockedExchange64(
                                                               (volatile __int64 *)(v84 + 8),
                                                               (__int64)p_SpinLock)) & 4) != 0 )
                KeWakeAddressAll(v84 + 8, v85, v6, v1);
              goto LABEL_162;
            }
LABEL_151:
            NumberOfSharedWaiters = 0;
            goto LABEL_152;
          }
          v73 = 0;
          v74 = 0;
          v75 = 0LL;
          if ( PspAlwaysTrackIoBoosting )
          {
            v73 = 1;
            v144 = ExAllocatePool2(0x40uLL);
            v177 = v144;
            v145 = v144;
            if ( v144 )
            {
              RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v144 + 16), 0LL);
              *(_QWORD *)(v145 + 96) = KeGetCurrentThread();
              *(_QWORD *)(v145 + 104) = 0LL;
            }
            v74 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v72 + 1552));
            v75 = (_QWORD *)v177;
          }
          if ( *(_DWORD *)(v72 + 1504) )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v72 + 1504));
            if ( !v73 )
            {
LABEL_140:
              v71 = p_OwnerEntry->TableSize & 0xFFFFFFFE;
              p_OwnerEntry->TableSize = v71;
              goto LABEL_141;
            }
            if ( *(_DWORD *)(v72 + 1504) )
            {
              if ( v75 )
              {
                OwnerThread = *(_QWORD *)(v72 + 1544);
                if ( *(_QWORD *)OwnerThread != v72 + 1536 )
                  goto LABEL_127;
                *v75 = v72 + 1536;
                v75[1] = OwnerThread;
                *(_QWORD *)OwnerThread = v75;
                *(_QWORD *)(v72 + 1544) = v75;
              }
            }
            else
            {
              if ( v75 )
                ExFreePoolWithTag(v75, 0x736F6F42u);
              v161 = (__int64 **)(v72 + 1520);
              while ( 1 )
              {
                v162 = *v161;
                if ( *v161 == (__int64 *)v161 )
                  break;
                v166 = *v162;
                if ( (__int64 **)v162[1] != v161 || *(__int64 **)(v166 + 8) != v162 )
                  goto LABEL_127;
                *v161 = (__int64 *)v166;
                *(_QWORD *)(v166 + 8) = v161;
                ExFreePoolWithTag(v162, 0x736F6F42u);
              }
              v163 = (__int64 **)(v72 + 1536);
              while ( 1 )
              {
                v164 = *v163;
                if ( *v163 == (__int64 *)v163 )
                  break;
                v165 = *v164;
                if ( (__int64 **)v164[1] != v163 || *(__int64 **)(v165 + 8) != v164 )
                  goto LABEL_127;
                *v163 = (__int64 *)v165;
                *(_QWORD *)(v165 + 8) = v163;
                ExFreePoolWithTag(v164, 0x736F6F42u);
              }
            }
          }
          else if ( !v73 )
          {
            goto LABEL_140;
          }
          v151 = (volatile signed __int64 *)(v72 + 1552);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64(v151, 0LL);
          else
            KiReleaseSpinLockInstrumented(v151, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v74);
          __writecr8(v74);
          goto LABEL_140;
        }
        v83 = 65618;
        v86 = Resource->ContentionCount;
        LODWORD(v169) = 65618;
        ContentionCount = v86;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v173, retaddr, v6, v1);
LABEL_174:
          v87 = (unsigned __int8)v175;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v175);
          __writecr8(v87);
          goto LABEL_177;
        }
        _m_prefetchw(&v173);
        v108 = v173;
        if ( !v173 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)p_SpinLock,
                            0LL,
                            (signed __int64)&v173) == &v173 )
            goto LABEL_174;
          v108 = KxWaitForLockChainValid(&v173, OwnerThread, v6, v1);
        }
        v173 = 0LL;
        v109 = p_SpinLock;
        if ( (((unsigned __int8)v109 ^ (unsigned __int8)_InterlockedExchange64(
                                                          (volatile __int64 *)(v108 + 8),
                                                          (__int64)p_SpinLock)) & 4) != 0 )
        {
          _InterlockedOr(v167, 0);
          v110 = KeDisableInterrupts(v109, OwnerThread, ((unsigned __int64)(v108 + 8) >> 5) & 0x7F);
          KiHaltOnAddressWakeEntireList(
            v113,
            _InterlockedExchange64((volatile __int64 *)(v112 + 8 * v111 + 15863072), 0LL));
          if ( v110 )
          {
            v114 = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)v114->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v139 = *SchedulerAssist;
              do
              {
                v140 = v139;
                v139 = _InterlockedCompareExchange(SchedulerAssist, v139 & 0xFFDFFFFF, v139);
              }
              while ( v140 != v139 );
              if ( (v139 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v114);
            }
            _enable();
          }
        }
        goto LABEL_174;
      }
LABEL_114:
      OwnerTable = Resource->OwnerTable;
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)OwnerTable, 2uLL);
  }
  v180 = 0LL;
  LOBYTE(v168) = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((v7 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && Resource->OwnerEntry.OwnerThread != v4 )
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)Resource->OwnerTable, 1uLL);
  v8 = Resource->OwnerEntry.TableSize & 7 | (8 * (Resource->OwnerEntry.TableSize >> 3) - 8);
  Resource->OwnerEntry.TableSize = v8;
  v9 = v8 >> 3;
  if ( v9 )
  {
    v24 = 65586;
    v38 = Resource->ContentionCount;
    LODWORD(v176) = 65586;
    ContentionCount = v38;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v173, retaddr, v6, v1);
LABEL_66:
      v39 = (unsigned __int8)v175;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v175);
      __writecr8(v39);
      goto LABEL_69;
    }
    _m_prefetchw(&v173);
    v51 = v173;
    if ( !v173 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v173) == &v173 )
        goto LABEL_66;
      v51 = KxWaitForLockChainValid(&v173, v7, v6, v1);
    }
    v173 = 0LL;
    v52 = p_SpinLock;
    if ( (((unsigned __int8)v52 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v51 + 8),
                                                     (__int64)p_SpinLock)) & 4) != 0 )
    {
      _InterlockedOr(v167, 0);
      v53 = KeDisableInterrupts(v52, v7, ((unsigned __int64)(v51 + 8) >> 5) & 0x7F);
      KiHaltOnAddressWakeEntireList(v56, _InterlockedExchange64((volatile __int64 *)(v55 + 8 * v54 + 15863072), 0LL));
      if ( v53 )
      {
        v57 = KeGetCurrentPrcb();
        v58 = (signed __int32 *)v57->SchedulerAssist;
        if ( v58 )
        {
          _m_prefetchw(v58);
          v133 = *v58;
          do
          {
            v134 = v133;
            v133 = _InterlockedCompareExchange(v58, v133 & 0xFFDFFFFF, v133);
          }
          while ( v134 != v133 );
          if ( (v133 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
        _enable();
      }
    }
    goto LABEL_66;
  }
  TableSize = Resource->OwnerEntry.TableSize;
  v11 = Resource->OwnerEntry.OwnerThread;
  if ( (TableSize & 2) != 0 )
  {
    v11 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v11 & 3) != 0 )
  {
    goto LABEL_31;
  }
  if ( !v11 )
    goto LABEL_31;
  if ( (TableSize & 1) != 0 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v12 = 1;
      v143 = ExAllocatePool2(0x40uLL);
      v14 = (_QWORD *)v143;
      if ( v143 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v143 + 16), 0LL);
        v14[12] = KeGetCurrentThread();
        v14[13] = 0LL;
      }
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 1552));
    }
    if ( *(_DWORD *)(v11 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 1504));
      if ( !v12 )
      {
LABEL_23:
        TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFE;
        Resource->OwnerEntry.TableSize = TableSize;
        goto LABEL_24;
      }
      if ( *(_DWORD *)(v11 + 1504) )
      {
        if ( v14 )
        {
          v154 = *(_QWORD **)(v11 + 1544);
          if ( *v154 != v11 + 1536 )
            goto LABEL_127;
          *v14 = v11 + 1536;
          v14[1] = v154;
          *v154 = v14;
          *(_QWORD *)(v11 + 1544) = v14;
        }
      }
      else
      {
        if ( v14 )
          ExFreePoolWithTag(v14, 0x736F6F42u);
        v155 = (__int64 **)(v11 + 1520);
        while ( 1 )
        {
          v156 = *v155;
          if ( *v155 == (__int64 *)v155 )
            break;
          v160 = *v156;
          if ( (__int64 **)v156[1] != v155 || *(__int64 **)(v160 + 8) != v156 )
            goto LABEL_127;
          *v155 = (__int64 *)v160;
          *(_QWORD *)(v160 + 8) = v155;
          ExFreePoolWithTag(v156, 0x736F6F42u);
        }
        v157 = (__int64 **)(v11 + 1536);
        while ( 1 )
        {
          v158 = *v157;
          if ( *v157 == (__int64 *)v157 )
            break;
          v159 = *v158;
          if ( (__int64 **)v158[1] != v157 || *(__int64 **)(v159 + 8) != v158 )
            goto LABEL_127;
          *v157 = (__int64 *)v159;
          *(_QWORD *)(v159 + 8) = v157;
          ExFreePoolWithTag(v158, 0x736F6F42u);
        }
      }
    }
    else if ( !v12 )
    {
      goto LABEL_23;
    }
    v150 = (volatile signed __int64 *)(v11 + 1552);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v150, 0LL);
    else
      KiReleaseSpinLockInstrumented(v150, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    __writecr8(v13);
    goto LABEL_23;
  }
LABEL_24:
  if ( (TableSize & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 1508));
    TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFB;
    Resource->OwnerEntry.TableSize = TableSize;
  }
  if ( (TableSize & 2) != 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v11 - 48);
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v16 = v15 <= 1;
    v17 = v15 - 1;
    if ( v16 )
    {
      if ( *(_QWORD *)(v11 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v11 - 48) >> 8)],
          v11,
          3uLL,
          *(_QWORD *)(v11 - 40));
      if ( v17 < 0 )
        KeBugCheckEx(0x18u, 0LL, v11, 4uLL, v17);
      ObpDeferObjectDeletion(v11 - 48);
    }
    Resource->OwnerEntry.TableSize &= ~2u;
  }
LABEL_31:
  Resource->OwnerEntry.OwnerThread = 0LL;
  v18 = 0LL;
  v19 = Resource->NumberOfSharedWaiters;
  ContentionCount = Resource->ContentionCount;
  if ( !v19 )
  {
    if ( !Resource->NumberOfExclusiveWaiters )
    {
      Resource->ActiveCount = 0;
      Resource->Flag &= ~0x80u;
      v21 = 0LL;
      goto LABEL_34;
    }
    ExclusiveWaiters = Resource->ExclusiveWaiters;
    if ( ExclusiveWaiters )
    {
      if ( *(PVOID *)ExclusiveWaiters == ExclusiveWaiters )
      {
        Resource->ExclusiveWaiters = 0LL;
      }
      else
      {
        Resource->ExclusiveWaiters = *(PVOID *)ExclusiveWaiters;
        v60 = *(_QWORD **)ExclusiveWaiters;
        v61 = (PVOID *)*((_QWORD *)ExclusiveWaiters + 1);
        if ( *(PVOID *)(*(_QWORD *)ExclusiveWaiters + 8LL) != ExclusiveWaiters || *v61 != ExclusiveWaiters )
          goto LABEL_127;
        *v61 = v60;
        v60[1] = v61;
      }
      v120 = v180;
      v18 = *((_QWORD *)ExclusiveWaiters + 2);
      if ( v180 )
      {
        v137 = (unsigned __int64 **)v180[1];
        if ( *v137 == v180 )
        {
          *(_QWORD *)ExclusiveWaiters = v180;
          *((_QWORD *)ExclusiveWaiters + 1) = v137;
          *v137 = (unsigned __int64 *)ExclusiveWaiters;
          v120[1] = (unsigned __int64)ExclusiveWaiters;
          --Resource->NumberOfExclusiveWaiters;
          v180 = (unsigned __int64 *)ExclusiveWaiters;
          v19 = 1;
          goto LABEL_33;
        }
LABEL_127:
        __fastfail(3u);
      }
      *((_QWORD *)ExclusiveWaiters + 1) = ExclusiveWaiters;
      *(_QWORD *)ExclusiveWaiters = ExclusiveWaiters;
      v180 = (unsigned __int64 *)ExclusiveWaiters;
    }
    --Resource->NumberOfExclusiveWaiters;
    v19 = 1;
    goto LABEL_33;
  }
  v20 = (unsigned __int64 *)Resource->SharedWaiters;
  Resource->SharedWaiters = 0LL;
  Resource->Flag &= ~0x80u;
  v180 = v20;
  Resource->NumberOfSharedWaiters = 0;
LABEL_33:
  v21 = v19 + Resource->ActiveEntries - 1;
LABEL_34:
  Resource->ActiveEntries = v21;
  if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
    Resource->Flag &= 0xF9u;
  if ( v18 )
  {
    v22 = Resource->OwnerEntry.TableSize & 7;
    Resource->OwnerEntry.OwnerThread = v18;
    Resource->OwnerEntry.TableSize = v22 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v173);
    v25 = v173;
    if ( !v173 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v173) == &v173 )
        goto LABEL_42;
      v25 = KxWaitForLockChainValid(&v173, v21, v6, v1);
    }
    v173 = 0LL;
    v26 = p_SpinLock;
    if ( (((unsigned __int8)v26 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v25 + 8),
                                                     (__int64)p_SpinLock)) & 4) != 0 )
    {
      _InterlockedOr(v167, 0);
      v27 = KeDisableInterrupts(v26, v21, ((unsigned __int64)(v25 + 8) >> 5) & 0x7F);
      KiHaltOnAddressWakeEntireList(v30, _InterlockedExchange64((volatile __int64 *)(v29 + 8 * v28 + 15863072), 0LL));
      if ( v27 )
      {
        v31 = KeGetCurrentPrcb();
        v32 = (signed __int32 *)v31->SchedulerAssist;
        if ( v32 )
        {
          _m_prefetchw(v32);
          v135 = *v32;
          do
          {
            v136 = v135;
            v135 = _InterlockedCompareExchange(v32, v135 & 0xFFDFFFFF, v135);
          }
          while ( v136 != v135 );
          if ( (v135 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
        _enable();
      }
    }
    goto LABEL_42;
  }
  KiReleaseQueuedSpinLockInstrumented(&v173, retaddr, v6, v1);
LABEL_42:
  v23 = (unsigned __int8)v175;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v175);
  __writecr8(v23);
  if ( v180 )
  {
    v62 = KeGetCurrentIrql();
    v177 = v62;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v62, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v63 = v180;
    for ( k = *v180; ; k = *(_QWORD *)v179 )
    {
      v181 = v63;
      v179 = k;
      v169 = v63 + 3;
      KiAcquireKobjectLockSafe(v63 + 3);
      v65 = v181 + 3;
      *((_DWORD *)v181 + 7) = 1;
      v66 = (_QWORD *)*((_QWORD *)v65 + 1);
      v67 = v65 + 2;
      v170 = v65 + 2;
      while ( v66 != v67 )
      {
        v68 = *v66;
        v69 = v66;
        v70 = (_QWORD *)v66[1];
        v176 = (_QWORD *)v68;
        if ( *(_QWORD **)(v68 + 8) != v69 || (_QWORD *)*v70 != v69 )
          goto LABEL_127;
        *v70 = v68;
        *(_QWORD *)(v68 + 8) = v70;
        v116 = *((_BYTE *)v69 + 16);
        if ( v116 == 1 )
        {
          v117 = KiTryUnwaitThread(CurrentPrcb, v69, *((unsigned __int16 *)v69 + 9), 0LL);
          v67 = v170;
          v118 = v117 == 0;
          v66 = v176;
          v65 = v169;
          if ( !v118 )
          {
            v118 = v169[1]-- == 1;
            if ( v118 )
              break;
          }
        }
        else if ( v116 == 2 )
        {
          *((_BYTE *)v69 + 17) = 5;
          KiInsertQueueInternal(v69[3], v69);
          v65 = v169;
          v118 = v169[1]-- == 1;
          if ( v118 )
            break;
          v66 = v176;
          v67 = v170;
        }
        else
        {
          if ( v116 == 4 )
          {
            *((_BYTE *)v69 + 17) = 5;
            v65[1] = 0;
            KeInsertQueueDpc((PRKDPC)v69[3], v65, v69);
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v69, 256LL, 0LL);
          }
          v66 = v176;
          v67 = v170;
          v65 = v169;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)v181 + 6, 0xFFFFFF7F);
      if ( (unsigned __int64 *)v179 == v180 )
        break;
      v63 = (unsigned __int64 *)v179;
    }
    v119 = CurrentPrcb;
    KiRemoveBoostThread(CurrentPrcb);
    KiExitDispatcher(v119, v177);
  }
  v24 = 65570;
  v9 = 0;
  LODWORD(v176) = 65570;
LABEL_69:
  __incgsdword(0x906Cu);
  if ( (_BYTE)v168 )
  {
    v183 = 0LL;
    v184 = 0LL;
    v185 = 0LL;
    v40 = KeGetCurrentPrcb();
    v177 = __rdtsc();
    ++v40->SynchCounters.ExEtwSynchTrackingNotificationsCount;
    Group = v40->Group;
    LOBYTE(v168) = v40->GroupIndex;
    if ( KeGetCurrentThread()[1].WaitBlock[0].Object )
    {
      v41 = KeGetCurrentThread();
      v42 = v24 & 0xFFFF0000;
      LODWORD(v169) = v24 & 0xFFFF0000;
      if ( (*(_DWORD *)(&v41[1].SwapListEntry + 1) & 1) == 0 )
      {
        v43 = (signed __int64)v41[1].WaitBlock[0].Object;
        v44 = EtwpEthreadSyncTrackingSequence;
        LODWORD(v170) = EtwpEthreadSyncTrackingSequence;
        if ( !v43 )
        {
          v45 = ExAllocatePool2(0x48uLL);
          v46 = v45;
          if ( !v45 )
            return;
          *(_QWORD *)(v45 + 16) = Resource;
          *(_DWORD *)(v45 + 28) = (_DWORD)v169;
          *(_DWORD *)(v45 + 40) = (_DWORD)v170;
          *(_DWORD *)(v45 + 32) = 0;
          v43 = _InterlockedCompareExchange64((volatile signed __int64 *)&v41[1].WaitBlock[0].Object, v45, 0LL);
          if ( !v43 )
          {
LABEL_88:
            if ( *(_DWORD *)(v46 + 32) )
            {
              ++v40->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
              v50 = v9 + 1;
              if ( *(_DWORD *)(v46 + 36) < v50 )
                *(_DWORD *)(v46 + 36) = v50;
              if ( (_DWORD)v176 != 65570 )
              {
                if ( (_DWORD)v176 == 65586 )
                  *(_DWORD *)(v46 + 32) = 2;
                return;
              }
              v102 = *(_QWORD *)(v46 + 8);
              if ( v102 > 2 && *(_WORD *)(v46 + 24) == Group && *(_BYTE *)(v46 + 26) == (_BYTE)v168 )
                v103 = v177 - v102;
              else
                v103 = 0LL;
              if ( *(_QWORD *)v46 <= 1uLL
                || (v40->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                  + v40->SynchCounters.ExecutiveResourceReleaseSharedCount)
                 % EtwpExecutiveResourceContentionSampleRate )
              {
                v104 = *(_DWORD *)(v46 + 44);
                v105 = ContentionCount;
                if ( (ContentionCount <= v104 || (ContentionCount - v104) % EtwpExecutiveResourceContentionSampleRate)
                  && (v40->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                    + v40->SynchCounters.ExecutiveResourceReleaseSharedCount)
                   % EtwpExecutiveResourceReleaseSampleRate )
                {
                  goto LABEL_211;
                }
              }
              else
              {
                v105 = ContentionCount;
              }
              DWORD2(v185) = 65570;
              *(_QWORD *)&v185 = Resource;
              *(_QWORD *)&v183 = *(_QWORD *)(v46 + 8);
              DWORD2(v184) = *(_DWORD *)(v46 + 36);
              *((_QWORD *)&v183 + 1) = v103;
              *(_QWORD *)&v184 = *(_QWORD *)v46;
              HIDWORD(v185) = v105 - *(_DWORD *)(v46 + 44);
              v141 = &v183;
              HIDWORD(v184) = KeGetCurrentThread()[1].CurrentRunTime;
              goto LABEL_281;
            }
LABEL_211:
            *(_DWORD *)(v46 + 28) = 0;
            return;
          }
          ExFreePoolWithTag((PVOID)v45, 0);
          v42 = (unsigned int)v169;
          v44 = (int)v170;
        }
        v47 = 0LL;
        for ( m = 0; m < 8; ++m )
        {
          v49 = *(_DWORD *)(v43 + 28);
          if ( v49 == v42 && *(PERESOURCE *)(v43 + 16) == Resource && *(_DWORD *)(v43 + 40) == v44 )
            goto LABEL_87;
          if ( !v47 )
          {
            if ( v49 )
            {
              if ( *(_DWORD *)(v43 + 40) < v44 )
              {
                v47 = v43;
                break;
              }
            }
            else
            {
              v47 = v43;
            }
          }
          v43 += 64LL;
        }
        v43 = v47;
        if ( v47 )
        {
          *(_QWORD *)(v47 + 16) = Resource;
          *(_DWORD *)(v47 + 28) = v42;
          *(_QWORD *)(v47 + 32) = 0LL;
          *(_QWORD *)v47 = 0LL;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_DWORD *)(v47 + 24) = 0;
          *(_DWORD *)(v47 + 40) = v44;
          *(_DWORD *)(v47 + 44) = 0;
        }
LABEL_87:
        v46 = v43;
        if ( v43 )
          goto LABEL_88;
      }
    }
  }
}
