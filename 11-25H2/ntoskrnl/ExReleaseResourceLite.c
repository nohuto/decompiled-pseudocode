/*
 * XREFs of ExReleaseResourceLite @ 0x140296E10
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x140205238 (PnpUnregisterPlugPlayNotification.c)
 *     SepExamineGlobalSaclEx @ 0x14020540C (SepExamineGlobalSaclEx.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140206E6C (SeTokenGetNoChildProcessRestricted.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1402914F4 (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     KeCapturePersistentThreadState @ 0x1402AA100 (KeCapturePersistentThreadState.c)
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     SepTrustLevelCheck @ 0x14035FC50 (SepTrustLevelCheck.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1403678D0 (SepCanTokenMatchAllPackageSid.c)
 *     MiReleaseLoadLock @ 0x14036E2B0 (MiReleaseLoadLock.c)
 *     SepQueueWorkItem @ 0x1403D74A8 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 *     SepReleaseOrderedReadLocks @ 0x140455508 (SepReleaseOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x14046F3F0 (IopCreateSecurityCheck.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140477B20 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x14047A880 (IoCheckRedirectionTrustLevel.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14048DA00 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x140497B08 (SeTokenSetRedirectionTrustPolicy.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404BA494 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404BE3BC (PiDmaGuardQueueRemoveEntry.c)
 *     IoCaptureLiveDump @ 0x1404D7188 (IoCaptureLiveDump.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14057E130 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x14057E640 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     IoFillTriageDumpBuffer @ 0x14058DA9C (IoFillTriageDumpBuffer.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058ED08 (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x140594458 (IoSetDeferredLiveDumpFileHandle.c)
 *     PiSwIrpCancelStartCreate @ 0x1405A54F0 (PiSwIrpCancelStartCreate.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A5F80 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     RtlpAllocateHeap @ 0x1405DE67C (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1405E06E0 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405E1428 (RtlpSetupExtendedBlock.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405FCC88 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405FCDF0 (SeSetSecurityAttributesTokenEx.c)
 *     DifExReleaseResourceLiteWrapper @ 0x140614FB0 (DifExReleaseResourceLiteWrapper.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x14064AF00 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     FsRtlMdlReadDev @ 0x1406FE3A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406FE5D0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x140700BD0 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x140700E00 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x1407017FC (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1407019A0 (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x140704968 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x140705934 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140706328 (IopInitializeBootLogging.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140707F80 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x1407081F0 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407083C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x140708C40 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140708D00 (IoUnregisterFsRegistrationChange.c)
 *     PnpShutdownDevices @ 0x14070E9A0 (PnpShutdownDevices.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140712B28 (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyHwProfileChange @ 0x140714584 (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407147D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PpReleaseBootDDB @ 0x140718F48 (PpReleaseBootDDB.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14071A548 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     PiSwIrpCleanup @ 0x140724800 (PiSwIrpCleanup.c)
 *     PiSwIrpGetAttributes @ 0x1407249F4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x140724A94 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x140724B34 (PiSwIrpSetAttributes.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x140725150 (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x140727FAC (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14072E110 (PiDmaGuardQueueInsertEntry.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x14074D254 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x140753080 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x140753350 (PopDripsWatchdogDiagnosticWorker.c)
 *     TtmNotifyDeviceArrival @ 0x1407588D0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140758BD0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140758C90 (TtmNotifyDeviceInput.c)
 *     TtmpStartCallout @ 0x140759E84 (TtmpStartCallout.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x14075A1F0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiSessionsRundown @ 0x14075A59C (TtmiSessionsRundown.c)
 *     TtmpInitiateModernStandbyTransition @ 0x14075ADF8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpInsertPowerRequestToSession @ 0x14075AE78 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionPowerControl @ 0x14075B2AC (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x14075B340 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x14075B630 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14075B7B4 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14075B924 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x14075BA50 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14075BAF8 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14075BC38 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14075BD28 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchOpenTerminal @ 0x14075BE98 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x14075BF34 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x14075BFF0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14075C09C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14075C150 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x14075C20C (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiResetInactivityTimer @ 0x1407600D0 (TtmiResetInactivityTimer.c)
 *     TtmpCloseTerminalHandle @ 0x140760770 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140760940 (TtmpScheduledEvaluationWorker.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140760D70 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpDeleteQueue @ 0x1407613A0 (TtmpDeleteQueue.c)
 *     TtmpReleaseQueueLock @ 0x1407614A0 (TtmpReleaseQueueLock.c)
 *     PsSwapProcessWorkingSet @ 0x140764C54 (PsSwapProcessWorkingSet.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1407682C4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140768374 (PspSetJobMemoryPartition.c)
 *     PspSetPagePriorityLimitJobTree @ 0x140768A10 (PspSetPagePriorityLimitJobTree.c)
 *     RtlZeroHeap @ 0x140773FD0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x140780578 (SeSetPrivateNameSpaceToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140780630 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x140780948 (SepSetServerSiloToken.c)
 *     SepIdAssignableAsGroup @ 0x140783230 (SepIdAssignableAsGroup.c)
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x1407841A0 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140784298 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140784434 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140784688 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407853E0 (SepRmGlobalSaclSetWrkr.c)
 *     WmipFindSMBiosStructure @ 0x140794DA4 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosEventlog @ 0x140794FB8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140795210 (WmipGetSysIds.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407A61B0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x1407B4A60 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x1408072F0 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408127F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PfSnCheckActionsNeeded @ 0x140826AA8 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140828764 (PfSnPrefetchCacheEntryUpdate.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpDelayedRemoveWorker @ 0x14082EE10 (PnpDelayedRemoveWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140830954 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408313BC (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryAndAllocateBootResources @ 0x140831F94 (PiQueryAndAllocateBootResources.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140833618 (PiUpdateDevicePanel.c)
 *     PiControlGetPropertyData @ 0x140834060 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140834EE0 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PiSwIrpInterfacePropertySet @ 0x140835F5C (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408380E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiSwPdoPnPDispatch @ 0x14083A790 (PiSwPdoPnPDispatch.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x14083D860 (_CmGetDeviceSoftwareKeyPath.c)
 *     SeQueryUserSidToken @ 0x14083E7E0 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     CmpAccountForLogReservation @ 0x140866618 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x1408667CC (CmpTransWriteLog.c)
 *     NtQuerySecurityAttributesToken @ 0x140867840 (NtQuerySecurityAttributesToken.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x1408A3EE0 (NtDuplicateToken.c)
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A82D0 (AlpcpExposeTokenAttribute.c)
 *     PspChargeJobWakeCounter @ 0x1408B3740 (PspChargeJobWakeCounter.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x1408BA140 (PspSetProcessPriorityClass.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CCFCC (PiDmEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD7B0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDEA0 (PiDmObjectGetCachedObjectProperty.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEAE0 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBC0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF70 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1408D0940 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408D0B10 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408D0B70 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408D82A0 (PspGetMemoryPartitionFromJobList.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408D8590 (PspUnlockJobsAndProcessExclusive.c)
 *     PspUnlockJobChain @ 0x1408D864C (PspUnlockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8888 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1408DAC64 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408DB3B0 (PspSendProcessNotificationToJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408DC284 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x1408DC5C0 (PspLockRootJobShared.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x1408DCB30 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x1408DCC28 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     SepValidOwnerSubjectContext @ 0x14091C194 (SepValidOwnerSubjectContext.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140925E00 (EtwpGetSidExtendedHeaderItem.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineGlobalSacl @ 0x14092EC88 (SeExamineGlobalSacl.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140930CDC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140930D80 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbNodeActionCallback @ 0x140931920 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140931A50 (PiDrvDbLoadNode.c)
 *     NtAdjustPrivilegesToken @ 0x1409334E0 (NtAdjustPrivilegesToken.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiGetRelatedDevice @ 0x1409349F8 (PiGetRelatedDevice.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094EE88 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x14095DFA4 (PiSwIrpInterfaceSetState.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PiDmObjectManagerReleaseLock @ 0x140968CC0 (PiDmObjectManagerReleaseLock.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x1409697E4 (PspLockRootJobExclusive.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409699F8 (ExpGetSystemFirmwareTableInformation.c)
 *     IoSetDeviceInterfaceState @ 0x140969D40 (IoSetDeviceInterfaceState.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14096CC3C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x14096CFB0 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 *     PnpDeleteDeviceInterfaces @ 0x140981CA4 (PnpDeleteDeviceInterfaces.c)
 *     NtAdjustGroupsToken @ 0x140996CB0 (NtAdjustGroupsToken.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 *     PiSwStopDestroy @ 0x1409A13B8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409A1544 (PiSwProcessParentRemoveIrp.c)
 *     PnpDisableDeviceInterfaces @ 0x1409A18E0 (PnpDisableDeviceInterfaces.c)
 *     PiSwCompleteCreate @ 0x1409A3A80 (PiSwCompleteCreate.c)
 *     PiSwFreePdoAssociationsList @ 0x1409A3F9C (PiSwFreePdoAssociationsList.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     PpCheckInDriverDatabase @ 0x1409AF608 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IoOpenDeviceRegistryKey @ 0x1409B2B40 (IoOpenDeviceRegistryKey.c)
 *     SeQueryServerSiloToken @ 0x1409BB180 (SeQueryServerSiloToken.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 *     SeGetTokenControlInformation @ 0x1409D8610 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x1409E0750 (SeQuerySessionIdTokenEx.c)
 *     SeQuerySecurityAttributesToken @ 0x1409F23F0 (SeQuerySecurityAttributesToken.c)
 *     NtCreateTimer @ 0x1409FAF30 (NtCreateTimer.c)
 *     SeQuerySessionIdToken @ 0x1409FF180 (SeQuerySessionIdToken.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     SepRmGlobalSaclFind @ 0x140A08700 (SepRmGlobalSaclFind.c)
 *     AlpcpQuerySidToken @ 0x140A0A644 (AlpcpQuerySidToken.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F5F0 (AlpcpCheckConnectionSecurity.c)
 *     IoGetLegacyVetoList @ 0x140A10B20 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x140A10C3C (PopFilterCapabilities.c)
 *     NtGetMUIRegistryInfo @ 0x140A168A0 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x140A1862C (SepCreateLogonSessionTrack.c)
 *     FsRtlCopyRead @ 0x140A1D340 (FsRtlCopyRead.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A1EDA8 (PopDripsWatchdogStopWatchdog.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A1EE1C (PopDripsWatchdogStartWatchdog.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     SeIsTokenAssignableToProcess @ 0x140A2AC34 (SeIsTokenAssignableToProcess.c)
 *     SepReferenceLogonSessionSilo @ 0x140A2B0F4 (SepReferenceLogonSessionSilo.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140A2CE40 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A2CFA4 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140A2D020 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A2D0B0 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionTerminalInput @ 0x140A2D208 (TtmNotifySessionTerminalInput.c)
 *     TtmInitCurrentSession @ 0x140A2D29C (TtmInitCurrentSession.c)
 *     TtmSessionMonitorControl @ 0x140A2D9F8 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A2DB84 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x140A2DD78 (TtmpAcquireSessionById.c)
 *     PspUnlockJobConditionally @ 0x140A30D30 (PspUnlockJobConditionally.c)
 *     PspAssignProcessQuotaBlock @ 0x140A30EE8 (PspAssignProcessQuotaBlock.c)
 *     FsRtlCopyWrite @ 0x140A34DE0 (FsRtlCopyWrite.c)
 *     PiQueryDeviceRelations @ 0x140A3A63C (PiQueryDeviceRelations.c)
 *     PspSetJobIoRateControl @ 0x140A3AD48 (PspSetJobIoRateControl.c)
 *     WmipGetSMBiosTableData @ 0x140A3D178 (WmipGetSMBiosTableData.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A3E170 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140A3E3F0 (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x140A46520 (PiGetDeviceDepth.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A4671C (SepGetLogonSessionAccountInfo.c)
 *     PpDeviceRegistration @ 0x140A46B4C (PpDeviceRegistration.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4769C (SeSetMandatoryPolicyToken.c)
 *     PspSetProcessAffinitySafe @ 0x140A48864 (PspSetProcessAffinitySafe.c)
 *     SepUpdateLogonSessionTrack @ 0x140A49044 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140A4CF28 (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     PspSetBackgroundJobTree @ 0x140A558BC (PspSetBackgroundJobTree.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A573D4 (IopSetDeviceSecurityDescriptor.c)
 *     IopGetRootDevices @ 0x140A608F8 (IopGetRootDevices.c)
 *     SepDeleteLogonSessionTrack @ 0x140A62490 (SepDeleteLogonSessionTrack.c)
 *     PiQueryResourceRequirements @ 0x140A64274 (PiQueryResourceRequirements.c)
 *     PiSwIrpPropertySet @ 0x140A66038 (PiSwIrpPropertySet.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140A6A02C (SeMaximumAuditMaskFromGlobalSacl.c)
 *     IopDoDeferredSetInterfaceState @ 0x140A6C2D0 (IopDoDeferredSetInterfaceState.c)
 *     PspValidateJobAffinityState @ 0x140A6C688 (PspValidateJobAffinityState.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     AdtpBuildAccessesString @ 0x140A70050 (AdtpBuildAccessesString.c)
 *     PspFreezeJobTree @ 0x140A71B9C (PspFreezeJobTree.c)
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 *     WmipReleaseSmbiosLockShared @ 0x140A79F50 (WmipReleaseSmbiosLockShared.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7BD60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PiSwProcessParentStartIrp @ 0x140A7FC24 (PiSwProcessParentStartIrp.c)
 *     PnpChainDereferenceComplete @ 0x140A82AFC (PnpChainDereferenceComplete.c)
 *     CmpStopRMLog @ 0x140A843A4 (CmpStopRMLog.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A84448 (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140A85DC0 (SeSetVirtualizationToken.c)
 *     PiQueryPowerRelations @ 0x140A872C8 (PiQueryPowerRelations.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A886D8 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92360 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopQueryInterfaceRecurseUp @ 0x140A95844 (IopQueryInterfaceRecurseUp.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140A9C8DC (IoLockUnlockPnpDeviceTree.c)
 *     PiDmaGuardQueueFlush @ 0x140A9CE10 (PiDmaGuardQueueFlush.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140AA24D0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     TtmCleanupCurrentSession @ 0x140AA7F5C (TtmCleanupCurrentSession.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AA8710 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     SepBlockAccessForLogonSession @ 0x140AB7820 (SepBlockAccessForLogonSession.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140AB8700 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABBD2C (PiCMUnregisterDeviceInterface.c)
 *     PiSwIrpSetLifetime @ 0x140AC0768 (PiSwIrpSetLifetime.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 *     CmpStartRMLog @ 0x140AD49C8 (CmpStartRMLog.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     IopInitCrashDumpRegCallback @ 0x140C0B880 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140C10EE0 (PipResetMatchingFilteredDevices.c)
 *     ExpPrmInitialization @ 0x140C2FA44 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140C52668 (VslRegisterBootDrivers.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     RtlRemoveHeadCircularList @ 0x1402FF580 (RtlRemoveHeadCircularList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ExReleaseResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  __int64 v2; // r9
  USHORT Flag; // cx
  ULONG_PTR v5; // r15
  KSPIN_LOCK *p_SpinLock; // rdi
  unsigned __int8 v7; // r14
  __int64 v8; // rdx
  struct _KTHREAD *v9; // r8
  __int64 v10; // rdx
  ULONG v11; // r14d
  ULONG TableSize; // eax
  ERESOURCE_THREAD OwnerThread; // rdi
  char v14; // r14
  KIRQL v15; // r15
  _QWORD *v16; // r13
  signed __int64 v17; // rax
  bool v18; // cc
  signed __int64 v19; // rax
  ERESOURCE_THREAD v20; // r14
  ULONG NumberOfSharedWaiters; // ecx
  unsigned __int64 *SharedWaiters; // rax
  ULONG v23; // edx
  ULONG v24; // eax
  __int64 v25; // rax
  unsigned __int8 v26; // cl
  bool v27; // di
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rcx
  struct _KPRCB *v31; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v33; // rdi
  bool v34; // zf
  char v35; // di
  unsigned int v36; // r14d
  int v37; // r14d
  ULONG v38; // r13d
  __int64 v39; // rax
  unsigned __int8 v40; // cl
  bool v41; // di
  __int64 v42; // r8
  __int64 v43; // r10
  __int64 v44; // rcx
  struct _KPRCB *v45; // rcx
  signed __int32 *v46; // r8
  unsigned __int64 v47; // rdi
  struct _KPRCB *v48; // r13
  struct _KTHREAD *v49; // rcx
  unsigned int v50; // r15d
  signed __int64 Object; // r14
  int v52; // r8d
  signed __int64 Pool2; // rax
  signed __int64 v54; // rdi
  _QWORD *v55; // rcx
  signed __int64 v56; // rax
  unsigned int j; // edx
  int v58; // ecx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r9
  ULONG v61; // ecx
  ULONG v62; // r10d
  char v63; // al
  char v64; // r14
  unsigned int v65; // eax
  unsigned __int64 v66; // rdx
  OWNER_ENTRY *p_OwnerEntry; // rdi
  unsigned __int64 v68; // rcx
  POWNER_ENTRY OwnerTable; // rdi
  signed __int32 v70; // eax
  signed __int32 v71; // ett
  signed __int32 v72; // eax
  signed __int32 v73; // ett
  PVOID ExclusiveWaiters; // rcx
  _QWORD *v75; // rdx
  PVOID *v76; // rax
  _QWORD *v77; // rax
  unsigned __int64 *v78; // r13
  unsigned __int64 i; // rax
  _DWORD *v80; // r9
  _QWORD *v81; // r13
  _QWORD *v82; // rax
  _QWORD *v83; // rdx
  __int64 v84; // rax
  _QWORD *v85; // rcx
  char v86; // cl
  char v87; // al
  struct _KPRCB *v88; // r15
  signed int v89; // eax
  unsigned int v90; // r9d
  unsigned int v91; // eax
  ULONG_PTR v92; // r14
  char v93; // r15
  KIRQL v94; // r13
  _QWORD *v95; // rax
  signed __int64 v96; // rax
  signed __int64 v97; // rax
  ERESOURCE_THREAD v98; // r14
  ULONG v99; // ecx
  ULONG v100; // eax
  ULONG v101; // eax
  __int64 v102; // rax
  unsigned __int8 v103; // cl
  bool v104; // di
  __int64 v105; // r8
  __int64 v106; // r10
  __int64 v107; // rcx
  struct _KPRCB *v108; // rcx
  signed __int32 *v109; // r8
  unsigned __int64 v110; // rdi
  char v111; // di
  unsigned int v112; // r14d
  int v113; // r14d
  ULONG v114; // r13d
  __int64 v115; // rax
  unsigned __int8 v116; // cl
  bool v117; // di
  __int64 v118; // r8
  __int64 v119; // r10
  __int64 v120; // rcx
  struct _KPRCB *v121; // rcx
  signed __int32 *v122; // r8
  unsigned __int64 v123; // rdi
  struct _KPRCB *v124; // r13
  struct _KTHREAD *v125; // rcx
  unsigned int v126; // r15d
  signed __int64 v127; // r14
  int v128; // r8d
  signed __int64 v129; // rax
  _QWORD *v130; // rcx
  signed __int64 v131; // rax
  unsigned int m; // edx
  int v133; // ecx
  signed __int32 v134; // eax
  signed __int32 v135; // ett
  signed __int32 v136; // eax
  signed __int32 v137; // ett
  unsigned __int64 *v138; // rax
  _QWORD *v139; // rax
  unsigned __int64 *v140; // r13
  unsigned __int64 *k; // rax
  _DWORD *v142; // r9
  _QWORD *v143; // r13
  _QWORD *v144; // rax
  _QWORD *v145; // rdx
  __int64 v146; // rax
  _QWORD *v147; // rcx
  char v148; // cl
  char v149; // al
  struct _KPRCB *v150; // r15
  signed int v151; // eax
  unsigned int v152; // r9d
  unsigned __int64 *v153; // rax
  __int128 *v154; // rax
  unsigned __int64 **v155; // rdx
  unsigned __int64 v156; // rax
  unsigned __int64 v157; // r8
  ULONG v158; // ecx
  ULONG v159; // r10d
  unsigned __int64 *v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // r13
  struct _KTHREAD *v164; // r14
  unsigned __int8 v165; // si
  ULONG *p_ActiveEntries; // rdi
  char v167; // cl
  volatile signed __int64 *v168; // rcx
  volatile signed __int64 *v169; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v172; // rcx
  __int64 **v173; // r14
  __int64 *v174; // rcx
  __int64 **v175; // r14
  __int64 *v176; // rcx
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 **v179; // r15
  __int64 *v180; // rcx
  __int64 **v181; // r15
  __int64 *v182; // rcx
  __int64 v183; // rax
  __int64 v184; // rax
  signed __int32 v185[6]; // [rsp+8h] [rbp-100h] BYREF
  char GroupIndex; // [rsp+38h] [rbp-D0h]
  int WaiterPriority; // [rsp+3Ch] [rbp-CCh]
  _DWORD *v188; // [rsp+40h] [rbp-C8h]
  _DWORD *v189; // [rsp+48h] [rbp-C0h]
  __int16 Group; // [rsp+50h] [rbp-B8h]
  ULONG ContentionCount; // [rsp+54h] [rbp-B4h]
  __int64 v192; // [rsp+58h] [rbp-B0h] BYREF
  KSPIN_LOCK *v193; // [rsp+60h] [rbp-A8h]
  __int64 v194; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v195; // [rsp+70h] [rbp-98h]
  _QWORD *p_Lock; // [rsp+78h] [rbp-90h]
  struct _KPRCB *CurrentPrcb; // [rsp+80h] [rbp-88h]
  unsigned __int64 *v198; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v199; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v200; // [rsp+98h] [rbp-70h]
  __int128 v201; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v202; // [rsp+B0h] [rbp-58h]
  __int128 v203; // [rsp+C0h] [rbp-48h]
  __int128 v204; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v205; // [rsp+E0h] [rbp-28h]
  __int128 v206; // [rsp+F0h] [rbp-18h]
  _QWORD v207[2]; // [rsp+100h] [rbp-8h] BYREF
  void *retaddr; // [rsp+140h] [rbp+38h]

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
    v164 = KeGetCurrentThread();
    v165 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v165);
    if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 && Resource->Reserved2 == v164 )
    {
      p_ActiveEntries = &Resource->ActiveEntries;
LABEL_352:
      if ( p_ActiveEntries )
      {
        v63 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v63 & 2) != 0 )
        {
          v64 = 0;
        }
        else
        {
          v64 = 1;
          *((_BYTE *)p_ActiveEntries + 37) = v63 & 0xFE;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v165);
        __writecr8(v165);
        ExReleaseFastResource((ULONG_PTR)Resource, (ULONG_PTR)p_ActiveEntries);
        if ( v64 )
          ExFreePoolWithTag(p_ActiveEntries, 0);
        return;
      }
    }
    else
    {
      for ( p_ActiveEntries = (ULONG *)v164[1].WaitBlock[3].SparePtr;
            p_ActiveEntries != (ULONG *)&v164[1].LastXStateSaveDebugInfo;
            p_ActiveEntries = *(ULONG **)p_ActiveEntries )
      {
        v167 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v167 & 2) == 0 && *((PERESOURCE *)p_ActiveEntries + 3) == Resource && (v167 & 1) != 0 )
          goto LABEL_352;
      }
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)v164, 0LL, 0LL);
  }
  v5 = (ULONG_PTR)KeGetCurrentThread();
  p_SpinLock = &Resource->SpinLock;
  v194 = 0LL;
  v193 = &Resource->SpinLock;
  v192 = 0LL;
  v7 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v7);
  LOBYTE(v194) = v7;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v192);
    if ( v8 )
      KxWaitForLockOwnerShip(&v192, v8, v1, v2);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v192, p_SpinLock);
  }
  v9 = KeGetCurrentThread();
  v10 = Resource->Flag;
  if ( ((v10 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v5 & 3) != 3 && (struct _KTHREAD *)v5 != v9 )
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v9, v5, 0LL);
  if ( (v10 & 0x80u) != 0LL )
  {
    v198 = 0LL;
    GroupIndex = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    if ( ((v10 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && Resource->OwnerEntry.OwnerThread != v5 )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v5, (ULONG_PTR)Resource->OwnerTable, 1uLL);
    v11 = Resource->OwnerEntry.TableSize & 7 | (8 * (Resource->OwnerEntry.TableSize >> 3) - 8);
    Resource->OwnerEntry.TableSize = v11;
    LODWORD(v189) = v11 >> 3;
    if ( !(v11 >> 3) )
    {
      TableSize = Resource->OwnerEntry.TableSize;
      OwnerThread = Resource->OwnerEntry.OwnerThread;
      if ( (TableSize & 2) != 0 )
      {
        OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      else if ( (OwnerThread & 3) != 0 )
      {
        goto LABEL_30;
      }
      if ( !OwnerThread )
        goto LABEL_30;
      if ( (TableSize & 1) == 0 )
      {
LABEL_23:
        if ( (TableSize & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1508));
          TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFB;
          Resource->OwnerEntry.TableSize = TableSize;
        }
        if ( (TableSize & 2) != 0 )
        {
          if ( ObpTraceFlags )
            ObpPushStackInfo(OwnerThread - 48);
          v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(OwnerThread - 48), 0xFFFFFFFFFFFFFFFFuLL);
          v18 = v17 <= 1;
          v19 = v17 - 1;
          if ( v18 )
          {
            if ( *(_QWORD *)(OwnerThread - 40) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(OwnerThread - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(OwnerThread - 48) >> 8)],
                OwnerThread,
                3uLL,
                *(_QWORD *)(OwnerThread - 40));
            if ( v19 < 0 )
              KeBugCheckEx(0x18u, 0LL, OwnerThread, 4uLL, v19);
            ObpDeferObjectDeletion(OwnerThread - 48, v10, v9, v2);
          }
          Resource->OwnerEntry.TableSize &= ~2u;
        }
LABEL_30:
        Resource->OwnerEntry.OwnerThread = 0LL;
        v20 = 0LL;
        NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
        ContentionCount = Resource->ContentionCount;
        if ( NumberOfSharedWaiters )
        {
          SharedWaiters = (unsigned __int64 *)Resource->SharedWaiters;
          Resource->SharedWaiters = 0LL;
          Resource->Flag &= ~0x80u;
          v198 = SharedWaiters;
          Resource->NumberOfSharedWaiters = 0;
LABEL_32:
          v23 = NumberOfSharedWaiters + Resource->ActiveEntries - 1;
LABEL_33:
          Resource->ActiveEntries = v23;
          if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
            Resource->Flag &= 0xF9u;
          WaiterPriority = Resource->WaiterPriority;
          if ( v20 )
          {
            v24 = Resource->OwnerEntry.TableSize & 7;
            Resource->OwnerEntry.OwnerThread = v20;
            Resource->OwnerEntry.TableSize = v24 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
          {
            KiReleaseQueuedSpinLockInstrumented(&v192, retaddr);
            goto LABEL_46;
          }
          _m_prefetchw(&v192);
          v25 = v192;
          if ( !v192 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v193, 0LL, (signed __int64)&v192) == &v192 )
            {
LABEL_46:
              v33 = (unsigned __int8)v194;
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v194);
              __writecr8(v33);
              v34 = v20 == 0;
              v35 = 1;
              v36 = 1;
              if ( !v34 )
                v35 = 3;
              if ( v198 )
              {
                v77 = (_QWORD *)KeGetCurrentIrql();
                p_Lock = v77;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v77);
                v78 = v198;
                CurrentPrcb = KeGetCurrentPrcb();
                for ( i = *v198; ; i = *(_QWORD *)v195 )
                {
                  v195 = i;
                  v200 = v78;
                  v188 = v78 + 3;
                  KiAcquireKobjectLockSafe((volatile signed __int32 *)v78 + 6);
                  v80 = v78 + 3;
                  *((_DWORD *)v78 + 7) = 1;
                  v81 = (_QWORD *)v78[4];
                  v82 = v80 + 2;
                  v189 = v80 + 2;
                  while ( v81 != v82 )
                  {
                    v83 = (_QWORD *)*v81;
                    v84 = (__int64)v81;
                    v81 = v83;
                    v85 = *(_QWORD **)(v84 + 8);
                    if ( v83[1] != v84 || *v85 != v84 )
                      goto LABEL_140;
                    *v85 = v83;
                    v83[1] = v85;
                    v86 = *(_BYTE *)(v84 + 16);
                    if ( v86 == 1 )
                    {
                      v87 = KiTryUnwaitThread((__int64)CurrentPrcb, v84, *(unsigned __int16 *)(v84 + 18), 0LL);
                      v80 = v188;
                      v34 = v87 == 0;
                      v82 = v189;
                      if ( !v34 )
                      {
                        v34 = v188[1]-- == 1;
                        if ( v34 )
                          break;
                      }
                    }
                    else if ( v86 == 2 )
                    {
                      *(_BYTE *)(v84 + 17) = 5;
                      KiInsertQueueInternal(*(_QWORD *)(v84 + 24), (__int64 *)v84);
                      v80 = v188;
                      v34 = v188[1]-- == 1;
                      if ( v34 )
                        break;
                      v82 = v189;
                    }
                    else
                    {
                      if ( v86 == 4 )
                      {
                        *(_BYTE *)(v84 + 17) = 5;
                        v80[1] = 0;
                        KeInsertQueueDpc(*(PRKDPC *)(v84 + 24), v80, (PVOID)v84);
                      }
                      else
                      {
                        KiTryUnwaitThread((__int64)CurrentPrcb, v84, 256LL, 0LL);
                      }
                      v82 = v189;
                      v80 = v188;
                    }
                  }
                  _InterlockedAnd((volatile signed __int32 *)v200 + 6, 0xFFFFFF7F);
                  if ( (unsigned __int64 *)v195 == v198 )
                    break;
                  v78 = (unsigned __int64 *)v195;
                }
                v88 = CurrentPrcb;
                v89 = KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
                v90 = WaiterPriority;
                if ( WaiterPriority )
                {
                  v36 = 2;
                  if ( v89 > WaiterPriority )
                    v90 = v89;
                }
                if ( (v35 & 2) != 0 && v36 == 1 )
                  v90 = 1;
                KiExitDispatcher(v88, 0LL, v36, v90, (unsigned __int8)p_Lock);
              }
              v37 = 65570;
              LODWORD(v189) = 0;
              WaiterPriority = 65570;
LABEL_63:
              __incgsdword(0x906Cu);
              if ( !GroupIndex )
                return;
              v201 = 0LL;
              v202 = 0LL;
              v203 = 0LL;
              v48 = KeGetCurrentPrcb();
              v195 = __rdtsc();
              ++v48->SynchCounters.ExEtwSynchTrackingNotificationsCount;
              Group = v48->Group;
              GroupIndex = v48->GroupIndex;
              if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
                return;
              v49 = KeGetCurrentThread();
              v50 = v37 & 0xFFFF0000;
              p_Lock = &v49->Header.Lock;
              if ( (*(_DWORD *)(&v49[1].SwapListEntry + 1) & 1) != 0 )
                return;
              Object = (signed __int64)v49[1].WaitBlock[0].Object;
              v52 = EtwpEthreadSyncTrackingSequence;
              LODWORD(v188) = EtwpEthreadSyncTrackingSequence;
              if ( !Object )
              {
                Pool2 = ExAllocatePool2(0x48uLL);
                v54 = Pool2;
                if ( !Pool2 )
                  return;
                v55 = p_Lock;
                *(_QWORD *)(Pool2 + 16) = Resource;
                *(_DWORD *)(Pool2 + 28) = v50;
                *(_DWORD *)(Pool2 + 32) = 0;
                *(_DWORD *)(Pool2 + 40) = (_DWORD)v188;
                Object = _InterlockedCompareExchange64(v55 + 196, Pool2, 0LL);
                if ( !Object )
                  goto LABEL_82;
                ExFreePoolWithTag((PVOID)Pool2, 0);
                v52 = (int)v188;
              }
              v56 = 0LL;
              for ( j = 0; j < 8; ++j )
              {
                v58 = *(_DWORD *)(Object + 28);
                if ( v58 == v50 && *(PERESOURCE *)(Object + 16) == Resource && *(_DWORD *)(Object + 40) == v52 )
                  goto LABEL_81;
                if ( !v56 )
                {
                  if ( v58 )
                  {
                    if ( *(_DWORD *)(Object + 40) < v52 )
                    {
                      v56 = Object;
                      break;
                    }
                  }
                  else
                  {
                    v56 = Object;
                  }
                }
                Object += 64LL;
              }
              Object = v56;
              if ( v56 )
              {
                *(_QWORD *)(v56 + 16) = Resource;
                *(_DWORD *)(v56 + 28) = v50;
                *(_QWORD *)(v56 + 32) = 0LL;
                *(_QWORD *)v56 = 0LL;
                *(_QWORD *)(v56 + 8) = 0LL;
                *(_DWORD *)(v56 + 24) = 0;
                *(_DWORD *)(v56 + 40) = v52;
                *(_DWORD *)(v56 + 44) = 0;
              }
LABEL_81:
              v54 = Object;
              if ( !Object )
                return;
LABEL_82:
              if ( *(_DWORD *)(v54 + 32) )
              {
                ++v48->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
                if ( *(_DWORD *)(v54 + 36) < (unsigned int)((_DWORD)v189 + 1) )
                  *(_DWORD *)(v54 + 36) = (_DWORD)v189 + 1;
                if ( WaiterPriority == 65570 )
                {
                  v59 = *(_QWORD *)(v54 + 8);
                  if ( v59 > 2 && *(_WORD *)(v54 + 24) == Group && *(_BYTE *)(v54 + 26) == GroupIndex )
                    v60 = v195 - v59;
                  else
                    v60 = 0LL;
                  if ( *(_QWORD *)v54 <= 1uLL
                    || (v48->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                      + v48->SynchCounters.ExecutiveResourceReleaseSharedCount)
                     % EtwpExecutiveResourceContentionSampleRate )
                  {
                    v61 = *(_DWORD *)(v54 + 44);
                    v62 = ContentionCount;
                    if ( (ContentionCount <= v61 || (ContentionCount - v61) % EtwpExecutiveResourceContentionSampleRate)
                      && (v48->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                        + v48->SynchCounters.ExecutiveResourceReleaseSharedCount)
                       % EtwpExecutiveResourceReleaseSampleRate )
                    {
                      goto LABEL_91;
                    }
                  }
                  else
                  {
                    v62 = ContentionCount;
                  }
                  DWORD2(v203) = 65570;
                  *(_QWORD *)&v203 = Resource;
                  *(_QWORD *)&v201 = *(_QWORD *)(v54 + 8);
                  DWORD2(v202) = *(_DWORD *)(v54 + 36);
                  *((_QWORD *)&v201 + 1) = v60;
                  *(_QWORD *)&v202 = *(_QWORD *)v54;
                  HIDWORD(v203) = v62 - *(_DWORD *)(v54 + 44);
                  v154 = &v201;
                  HIDWORD(v202) = KeGetCurrentThread()[1].CurrentRunTime;
                  goto LABEL_280;
                }
                if ( WaiterPriority == 65586 )
                  *(_DWORD *)(v54 + 32) = 2;
                return;
              }
LABEL_91:
              *(_DWORD *)(v54 + 28) = 0;
              return;
            }
            v25 = KxWaitForLockChainValid(&v192);
          }
          v192 = 0LL;
          v26 = (unsigned __int8)v193;
          if ( ((v26 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v25 + 8), (__int64)v193)) & 4) != 0 )
          {
            _InterlockedOr(v185, 0);
            v27 = KeDisableInterrupts();
            KiHaltOnAddressWakeEntireList(
              v30,
              _InterlockedExchange64((volatile __int64 *)(v29 + 8 * v28 + 15861120), 0LL));
            if ( v27 )
            {
              v31 = KeGetCurrentPrcb();
              SchedulerAssist = (signed __int32 *)v31->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw(SchedulerAssist);
                v72 = *SchedulerAssist;
                do
                {
                  v73 = v72;
                  v72 = _InterlockedCompareExchange(SchedulerAssist, v72 & 0xFFDFFFFF, v72);
                }
                while ( v73 != v72 );
                if ( (v72 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)v31);
              }
              _enable();
            }
          }
          goto LABEL_46;
        }
        if ( !Resource->NumberOfExclusiveWaiters )
        {
          Resource->ActiveCount = 0;
          Resource->Flag &= ~0x80u;
          v23 = 0;
          goto LABEL_33;
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
            v75 = *(_QWORD **)ExclusiveWaiters;
            v76 = (PVOID *)*((_QWORD *)ExclusiveWaiters + 1);
            if ( *(PVOID *)(*(_QWORD *)ExclusiveWaiters + 8LL) != ExclusiveWaiters || *v76 != ExclusiveWaiters )
              goto LABEL_140;
            *v76 = v75;
            v75[1] = v76;
          }
          v138 = v198;
          v20 = *((_QWORD *)ExclusiveWaiters + 2);
          if ( v198 )
          {
            v155 = (unsigned __int64 **)v198[1];
            if ( *v155 == v198 )
            {
              *(_QWORD *)ExclusiveWaiters = v198;
              *((_QWORD *)ExclusiveWaiters + 1) = v155;
              *v155 = (unsigned __int64 *)ExclusiveWaiters;
              v138[1] = (unsigned __int64)ExclusiveWaiters;
              --Resource->NumberOfExclusiveWaiters;
              v198 = (unsigned __int64 *)ExclusiveWaiters;
              NumberOfSharedWaiters = 1;
              goto LABEL_32;
            }
LABEL_140:
            __fastfail(3u);
          }
          *((_QWORD *)ExclusiveWaiters + 1) = ExclusiveWaiters;
          *(_QWORD *)ExclusiveWaiters = ExclusiveWaiters;
          v198 = (unsigned __int64 *)ExclusiveWaiters;
        }
        --Resource->NumberOfExclusiveWaiters;
        NumberOfSharedWaiters = 1;
        goto LABEL_32;
      }
      v14 = 0;
      v15 = 0;
      v16 = 0LL;
      if ( PspAlwaysTrackIoBoosting )
      {
        v14 = 1;
        v161 = ExAllocatePool2(0x40uLL);
        v16 = (_QWORD *)v161;
        if ( v161 )
        {
          RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v161 + 16), 0LL);
          v16[12] = KeGetCurrentThread();
          v16[13] = 0LL;
        }
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(OwnerThread + 1552));
      }
      if ( *(_DWORD *)(OwnerThread + 1504) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1504));
        if ( !v14 )
        {
LABEL_22:
          TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFE;
          Resource->OwnerEntry.TableSize = TableSize;
          goto LABEL_23;
        }
        if ( *(_DWORD *)(OwnerThread + 1504) )
        {
          if ( v16 )
          {
            v172 = *(_QWORD **)(OwnerThread + 1544);
            if ( *v172 != OwnerThread + 1536 )
              goto LABEL_140;
            *v16 = OwnerThread + 1536;
            v16[1] = v172;
            *v172 = v16;
            *(_QWORD *)(OwnerThread + 1544) = v16;
          }
        }
        else
        {
          if ( v16 )
            ExFreePoolWithTag(v16, 0x736F6F42u);
          v173 = (__int64 **)(OwnerThread + 1520);
          while ( 1 )
          {
            v174 = *v173;
            if ( *v173 == (__int64 *)v173 )
              break;
            v178 = *v174;
            if ( (__int64 **)v174[1] != v173 || *(__int64 **)(v178 + 8) != v174 )
              goto LABEL_140;
            *v173 = (__int64 *)v178;
            *(_QWORD *)(v178 + 8) = v173;
            ExFreePoolWithTag(v174, 0x736F6F42u);
          }
          v175 = (__int64 **)(OwnerThread + 1536);
          while ( 1 )
          {
            v176 = *v175;
            if ( *v175 == (__int64 *)v175 )
              break;
            v177 = *v176;
            if ( (__int64 **)v176[1] != v175 || *(__int64 **)(v177 + 8) != v176 )
              goto LABEL_140;
            *v175 = (__int64 *)v177;
            *(_QWORD *)(v177 + 8) = v175;
            ExFreePoolWithTag(v176, 0x736F6F42u);
          }
        }
      }
      else if ( !v14 )
      {
        goto LABEL_22;
      }
      v168 = (volatile signed __int64 *)(OwnerThread + 1552);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64(v168, 0LL);
      else
        KiReleaseSpinLockInstrumented(v168, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
      __writecr8(v15);
      goto LABEL_22;
    }
    v37 = 65586;
    v38 = Resource->ContentionCount;
    WaiterPriority = 65586;
    ContentionCount = v38;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v192, retaddr);
      goto LABEL_60;
    }
    _m_prefetchw(&v192);
    v39 = v192;
    if ( !v192 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v193, 0LL, (signed __int64)&v192) == &v192 )
      {
LABEL_60:
        v47 = (unsigned __int8)v194;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v194);
        __writecr8(v47);
        goto LABEL_63;
      }
      v39 = KxWaitForLockChainValid(&v192);
    }
    v192 = 0LL;
    v40 = (unsigned __int8)v193;
    if ( ((v40 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v39 + 8), (__int64)v193)) & 4) != 0 )
    {
      _InterlockedOr(v185, 0);
      v41 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v44, _InterlockedExchange64((volatile __int64 *)(v43 + 8 * v42 + 15861120), 0LL));
      if ( v41 )
      {
        v45 = KeGetCurrentPrcb();
        v46 = (signed __int32 *)v45->SchedulerAssist;
        if ( v46 )
        {
          _m_prefetchw(v46);
          v70 = *v46;
          do
          {
            v71 = v70;
            v70 = _InterlockedCompareExchange(v46, v70 & 0xFFDFFFFF, v70);
          }
          while ( v71 != v70 );
          if ( (v70 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v45);
        }
        _enable();
      }
    }
    goto LABEL_60;
  }
  v199 = 0LL;
  GroupIndex = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (v5 & 3) != 0 )
    v65 = 0;
  else
    v65 = *(unsigned __int8 *)(v5 + 1120);
  v66 = Resource->OwnerEntry.OwnerThread;
  p_OwnerEntry = &Resource->OwnerEntry;
  if ( v66 != v5 )
  {
    v68 = Resource->OwnerEntry.OwnerThread != 0;
    if ( !v65
      || (v66 = (unsigned __int64)Resource->OwnerTable) == 0
      || v65 >= *(_DWORD *)(v66 + 8)
      || (p_OwnerEntry = (OWNER_ENTRY *)(v66 + 16LL * v65), p_OwnerEntry->OwnerThread != v5) )
    {
      OwnerTable = Resource->OwnerTable;
      v66 = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
      if ( OwnerTable )
      {
        v9 = (struct _KTHREAD *)&OwnerTable[OwnerTable->TableSize];
        p_OwnerEntry = OwnerTable + 1;
        if ( v68 < v66 )
        {
          while ( p_OwnerEntry->OwnerThread != v5 )
          {
            if ( !p_OwnerEntry->OwnerThread || (++v68, v68 != v66) )
            {
              if ( ++p_OwnerEntry != (OWNER_ENTRY *)v9 )
                continue;
            }
            goto LABEL_146;
          }
          KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                      - LODWORD(Resource->OwnerTable)) >> 4;
          goto LABEL_160;
        }
LABEL_146:
        OwnerTable = Resource->OwnerTable;
      }
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v5, (ULONG_PTR)OwnerTable, 2uLL);
    }
  }
LABEL_160:
  v91 = p_OwnerEntry->TableSize & 7 | (8 * (p_OwnerEntry->TableSize >> 3) - 8);
  p_OwnerEntry->TableSize = v91;
  LODWORD(v189) = v91 >> 3;
  if ( v91 >> 3 )
  {
    v113 = 65618;
    v114 = Resource->ContentionCount;
    LODWORD(v188) = 65618;
    ContentionCount = v114;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v192, retaddr);
      goto LABEL_209;
    }
    _m_prefetchw(&v192);
    v115 = v192;
    if ( !v192 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v193, 0LL, (signed __int64)&v192) == &v192 )
      {
LABEL_209:
        v123 = (unsigned __int8)v194;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v194);
        __writecr8(v123);
        goto LABEL_212;
      }
      v115 = KxWaitForLockChainValid(&v192);
    }
    v192 = 0LL;
    v116 = (unsigned __int8)v193;
    if ( ((v116 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v115 + 8), (__int64)v193)) & 4) != 0 )
    {
      _InterlockedOr(v185, 0);
      v117 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v120, _InterlockedExchange64((volatile __int64 *)(v119 + 8 * v118 + 15861120), 0LL));
      if ( v117 )
      {
        v121 = KeGetCurrentPrcb();
        v122 = (signed __int32 *)v121->SchedulerAssist;
        if ( v122 )
        {
          _m_prefetchw(v122);
          v134 = *v122;
          do
          {
            v135 = v134;
            v134 = _InterlockedCompareExchange(v122, v134 & 0xFFDFFFFF, v134);
          }
          while ( v135 != v134 );
          if ( (v134 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v121);
        }
        _enable();
      }
    }
    goto LABEL_209;
  }
  v92 = p_OwnerEntry->OwnerThread;
  if ( (v91 & 2) != 0 )
  {
    v92 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v92 & 3) != 0 )
  {
    goto LABEL_176;
  }
  if ( !v92 )
    goto LABEL_176;
  if ( (v91 & 1) != 0 )
  {
    v93 = 0;
    v94 = 0;
    v95 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v93 = 1;
      v162 = ExAllocatePool2(0x40uLL);
      p_Lock = (_QWORD *)v162;
      v163 = v162;
      if ( v162 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v162 + 16), 0LL);
        *(_QWORD *)(v163 + 96) = KeGetCurrentThread();
        *(_QWORD *)(v163 + 104) = 0LL;
      }
      v94 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v92 + 1552));
      v95 = p_Lock;
    }
    if ( *(_DWORD *)(v92 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v92 + 1504));
      if ( !v93 )
      {
LABEL_168:
        v91 = p_OwnerEntry->TableSize & 0xFFFFFFFE;
        p_OwnerEntry->TableSize = v91;
        goto LABEL_169;
      }
      if ( *(_DWORD *)(v92 + 1504) )
      {
        if ( v95 )
        {
          v66 = *(_QWORD *)(v92 + 1544);
          if ( *(_QWORD *)v66 != v92 + 1536 )
            goto LABEL_140;
          *v95 = v92 + 1536;
          v95[1] = v66;
          *(_QWORD *)v66 = v95;
          *(_QWORD *)(v92 + 1544) = v95;
        }
      }
      else
      {
        if ( v95 )
          ExFreePoolWithTag(v95, 0x736F6F42u);
        v179 = (__int64 **)(v92 + 1520);
        while ( 1 )
        {
          v180 = *v179;
          if ( *v179 == (__int64 *)v179 )
            break;
          v184 = *v180;
          if ( (__int64 **)v180[1] != v179 || *(__int64 **)(v184 + 8) != v180 )
            goto LABEL_140;
          *v179 = (__int64 *)v184;
          *(_QWORD *)(v184 + 8) = v179;
          ExFreePoolWithTag(v180, 0x736F6F42u);
        }
        v181 = (__int64 **)(v92 + 1536);
        while ( 1 )
        {
          v182 = *v181;
          if ( *v181 == (__int64 *)v181 )
            break;
          v183 = *v182;
          if ( (__int64 **)v182[1] != v181 || *(__int64 **)(v183 + 8) != v182 )
            goto LABEL_140;
          *v181 = (__int64 *)v183;
          *(_QWORD *)(v183 + 8) = v181;
          ExFreePoolWithTag(v182, 0x736F6F42u);
        }
      }
    }
    else if ( !v93 )
    {
      goto LABEL_168;
    }
    v169 = (volatile signed __int64 *)(v92 + 1552);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v169, 0LL);
    else
      KiReleaseSpinLockInstrumented(v169, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v94);
    __writecr8(v94);
    goto LABEL_168;
  }
LABEL_169:
  if ( (v91 & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v92 + 1508));
    v91 = p_OwnerEntry->TableSize & 0xFFFFFFFB;
    p_OwnerEntry->TableSize = v91;
  }
  if ( (v91 & 2) != 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v92 - 48);
    v96 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v92 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v18 = v96 <= 1;
    v97 = v96 - 1;
    if ( v18 )
    {
      if ( *(_QWORD *)(v92 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v92 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v92 - 48) >> 8)],
          v92,
          3uLL,
          *(_QWORD *)(v92 - 40));
      if ( v97 < 0 )
        KeBugCheckEx(0x18u, 0LL, v92, 4uLL, v97);
      ObpDeferObjectDeletion(v92 - 48, v66, v9, v2);
    }
    p_OwnerEntry->TableSize &= ~2u;
  }
LABEL_176:
  p_OwnerEntry->OwnerThread = 0LL;
  v98 = 0LL;
  v18 = Resource->ActiveEntries <= 1;
  ContentionCount = Resource->ContentionCount;
  if ( !v18 )
  {
LABEL_179:
    v99 = 0;
    goto LABEL_180;
  }
  if ( Resource->NumberOfExclusiveWaiters )
  {
    v153 = (unsigned __int64 *)RtlRemoveHeadCircularList(&Resource->ExclusiveWaiters, v66, v9);
    if ( v153 )
    {
      v98 = v153[2];
      v153[1] = (unsigned __int64)v153;
      *v153 = (unsigned __int64)v153;
      v199 = v153;
    }
    --Resource->NumberOfExclusiveWaiters;
    Resource->Flag |= 0x80u;
    v99 = 1;
  }
  else
  {
    v99 = Resource->NumberOfSharedWaiters;
    if ( !v99 )
      goto LABEL_179;
    v160 = (unsigned __int64 *)Resource->SharedWaiters;
    Resource->SharedWaiters = 0LL;
    v199 = v160;
    Resource->NumberOfSharedWaiters = 0;
  }
LABEL_180:
  v100 = Resource->ActiveEntries - 1;
  Resource->ActiveEntries = v100 + v99;
  if ( !(v100 + v99) )
    Resource->ActiveCount = 0;
  if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
    Resource->Flag &= 0xF9u;
  WaiterPriority = Resource->WaiterPriority;
  if ( v98 )
  {
    v101 = Resource->OwnerEntry.TableSize & 7;
    Resource->OwnerEntry.OwnerThread = v98;
    Resource->OwnerEntry.TableSize = v101 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v192, retaddr);
    goto LABEL_195;
  }
  _m_prefetchw(&v192);
  v102 = v192;
  if ( v192 )
  {
LABEL_191:
    v192 = 0LL;
    v103 = (unsigned __int8)v193;
    if ( ((v103 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v102 + 8), (__int64)v193)) & 4) != 0 )
    {
      _InterlockedOr(v185, 0);
      v104 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v107, _InterlockedExchange64((volatile __int64 *)(v106 + 8 * v105 + 15861120), 0LL));
      if ( v104 )
      {
        v108 = KeGetCurrentPrcb();
        v109 = (signed __int32 *)v108->SchedulerAssist;
        if ( v109 )
        {
          _m_prefetchw(v109);
          v136 = *v109;
          do
          {
            v137 = v136;
            v136 = _InterlockedCompareExchange(v109, v136 & 0xFFDFFFFF, v136);
          }
          while ( v137 != v136 );
          if ( (v136 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v108);
        }
        _enable();
      }
    }
    goto LABEL_195;
  }
  if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v193, 0LL, (signed __int64)&v192) != &v192 )
  {
    v102 = KxWaitForLockChainValid(&v192);
    goto LABEL_191;
  }
LABEL_195:
  v110 = (unsigned __int8)v194;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v194);
  __writecr8(v110);
  v34 = v98 == 0;
  v111 = 1;
  v112 = 1;
  if ( !v34 )
    v111 = 3;
  if ( v199 )
  {
    v139 = (_QWORD *)KeGetCurrentIrql();
    p_Lock = v139;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v139);
    v140 = v199;
    CurrentPrcb = KeGetCurrentPrcb();
    for ( k = (unsigned __int64 *)*v199; ; k = (unsigned __int64 *)*v200 )
    {
      v200 = k;
      v195 = (unsigned __int64)v140;
      v188 = v140 + 3;
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v140 + 6);
      v142 = v140 + 3;
      *((_DWORD *)v140 + 7) = 1;
      v143 = (_QWORD *)v140[4];
      v144 = v142 + 2;
      v189 = v142 + 2;
      while ( v143 != v144 )
      {
        v145 = (_QWORD *)*v143;
        v146 = (__int64)v143;
        v143 = v145;
        v147 = *(_QWORD **)(v146 + 8);
        if ( v145[1] != v146 || *v147 != v146 )
          goto LABEL_140;
        *v147 = v145;
        v145[1] = v147;
        v148 = *(_BYTE *)(v146 + 16);
        if ( v148 == 1 )
        {
          v149 = KiTryUnwaitThread((__int64)CurrentPrcb, v146, *(unsigned __int16 *)(v146 + 18), 0LL);
          v142 = v188;
          v34 = v149 == 0;
          v144 = v189;
          if ( !v34 )
          {
            v34 = v188[1]-- == 1;
            if ( v34 )
              break;
          }
        }
        else if ( v148 == 2 )
        {
          *(_BYTE *)(v146 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v146 + 24), (__int64 *)v146);
          v142 = v188;
          v34 = v188[1]-- == 1;
          if ( v34 )
            break;
          v144 = v189;
        }
        else
        {
          if ( v148 == 4 )
          {
            *(_BYTE *)(v146 + 17) = 5;
            v142[1] = 0;
            KeInsertQueueDpc(*(PRKDPC *)(v146 + 24), v142, (PVOID)v146);
          }
          else
          {
            KiTryUnwaitThread((__int64)CurrentPrcb, v146, 256LL, 0LL);
          }
          v144 = v189;
          v142 = v188;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)(v195 + 24), 0xFFFFFF7F);
      if ( v200 == v199 )
        break;
      v140 = v200;
    }
    v150 = CurrentPrcb;
    v151 = KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    v152 = WaiterPriority;
    if ( WaiterPriority )
    {
      v112 = 2;
      if ( v151 > WaiterPriority )
        v152 = v151;
    }
    if ( (v111 & 2) != 0 && v112 == 1 )
      v152 = 1;
    KiExitDispatcher(v150, 0LL, v112, v152, (unsigned __int8)p_Lock);
  }
  v113 = 65602;
  LODWORD(v189) = 0;
  LODWORD(v188) = 65602;
LABEL_212:
  __incgsdword(0x9070u);
  if ( !GroupIndex )
    return;
  v204 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  v124 = KeGetCurrentPrcb();
  v195 = __rdtsc();
  ++v124->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  Group = v124->Group;
  GroupIndex = v124->GroupIndex;
  if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
    return;
  v125 = KeGetCurrentThread();
  v126 = v113 & 0xFFFF0000;
  p_Lock = &v125->Header.Lock;
  if ( (*(_DWORD *)(&v125[1].SwapListEntry + 1) & 1) != 0 )
    return;
  v127 = (signed __int64)v125[1].WaitBlock[0].Object;
  v128 = EtwpEthreadSyncTrackingSequence;
  WaiterPriority = EtwpEthreadSyncTrackingSequence;
  if ( !v127 )
  {
    v129 = ExAllocatePool2(0x48uLL);
    v54 = v129;
    if ( !v129 )
      return;
    v130 = p_Lock;
    *(_QWORD *)(v129 + 16) = Resource;
    *(_DWORD *)(v129 + 28) = v126;
    *(_DWORD *)(v129 + 32) = 0;
    *(_DWORD *)(v129 + 40) = WaiterPriority;
    v127 = _InterlockedCompareExchange64(v130 + 196, v129, 0LL);
    if ( !v127 )
      goto LABEL_231;
    ExFreePoolWithTag((PVOID)v129, 0);
    v128 = WaiterPriority;
  }
  v131 = 0LL;
  for ( m = 0; m < 8; ++m )
  {
    v133 = *(_DWORD *)(v127 + 28);
    if ( v133 == v126 && *(PERESOURCE *)(v127 + 16) == Resource && *(_DWORD *)(v127 + 40) == v128 )
      goto LABEL_230;
    if ( !v131 )
    {
      if ( v133 )
      {
        if ( *(_DWORD *)(v127 + 40) < v128 )
        {
          v131 = v127;
          break;
        }
      }
      else
      {
        v131 = v127;
      }
    }
    v127 += 64LL;
  }
  v127 = v131;
  if ( v131 )
  {
    *(_QWORD *)(v131 + 16) = Resource;
    *(_DWORD *)(v131 + 28) = v126;
    *(_QWORD *)(v131 + 32) = 0LL;
    *(_QWORD *)v131 = 0LL;
    *(_QWORD *)(v131 + 8) = 0LL;
    *(_DWORD *)(v131 + 24) = 0;
    *(_DWORD *)(v131 + 40) = v128;
    *(_DWORD *)(v131 + 44) = 0;
  }
LABEL_230:
  v54 = v127;
  if ( !v127 )
    return;
LABEL_231:
  if ( !*(_DWORD *)(v54 + 32) )
    goto LABEL_91;
  ++v124->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
  if ( *(_DWORD *)(v54 + 36) < (unsigned int)((_DWORD)v189 + 1) )
    *(_DWORD *)(v54 + 36) = (_DWORD)v189 + 1;
  if ( (_DWORD)v188 == 65602 )
  {
    v156 = *(_QWORD *)(v54 + 8);
    if ( v156 > 2 && *(_WORD *)(v54 + 24) == Group && *(_BYTE *)(v54 + 26) == GroupIndex )
      v157 = v195 - v156;
    else
      v157 = 0LL;
    if ( *(_QWORD *)v54 <= 1uLL
      || (v124->SynchCounters.ExecutiveResourceReleaseExclusiveCount
        + v124->SynchCounters.ExecutiveResourceReleaseSharedCount)
       % EtwpExecutiveResourceContentionSampleRate )
    {
      v158 = *(_DWORD *)(v54 + 44);
      v159 = ContentionCount;
      if ( (ContentionCount <= v158 || (ContentionCount - v158) % EtwpExecutiveResourceContentionSampleRate)
        && (v124->SynchCounters.ExecutiveResourceReleaseExclusiveCount
          + v124->SynchCounters.ExecutiveResourceReleaseSharedCount)
         % EtwpExecutiveResourceReleaseSampleRate )
      {
        goto LABEL_91;
      }
    }
    else
    {
      v159 = ContentionCount;
    }
    DWORD2(v206) = 65602;
    *(_QWORD *)&v206 = Resource;
    *(_QWORD *)&v204 = *(_QWORD *)(v54 + 8);
    DWORD2(v205) = *(_DWORD *)(v54 + 36);
    *((_QWORD *)&v204 + 1) = v157;
    *(_QWORD *)&v205 = *(_QWORD *)v54;
    HIDWORD(v206) = v159 - *(_DWORD *)(v54 + 44);
    v154 = &v204;
    HIDWORD(v205) = KeGetCurrentThread()[1].CurrentRunTime;
LABEL_280:
    v207[0] = v154;
    v207[1] = 48LL;
    EtwTraceKernelEvent((int)v207, 1, 0x20020000u, 1323, 23074818);
    goto LABEL_91;
  }
  if ( (_DWORD)v188 == 65618 )
    *(_DWORD *)(v54 + 32) = 2;
}
