/*
 * XREFs of ExReleaseResourceLite @ 0x14028AA60
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14025A8C4 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025B37C (FsRtlAcquireFileForModWriteEx.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     SepMandatoryIntegrityCheck @ 0x14028A540 (SepMandatoryIntegrityCheck.c)
 *     MiReleaseLoadLock @ 0x1402BBE90 (MiReleaseLoadLock.c)
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140323590 (SepCanTokenMatchAllPackageSid.c)
 *     IopCreateSecurityCheck @ 0x1403B5AE0 (IopCreateSecurityCheck.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403B9324 (SepInternalSetSecurityAttributesToken.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     SepQueueWorkItem @ 0x1403C35C4 (SepQueueWorkItem.c)
 *     SepTrustLevelCheck @ 0x1403E33C0 (SepTrustLevelCheck.c)
 *     KeCapturePersistentThreadState @ 0x140420EC0 (KeCapturePersistentThreadState.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140446A8C (SeTokenGetNoChildProcessRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x14044A464 (SepReleaseOrderedReadLocks.c)
 *     SepExamineGlobalSaclEx @ 0x14045837C (SepExamineGlobalSaclEx.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140469950 (PnpUnregisterPlugPlayNotification.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140473D20 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404769B0 (IoCheckRedirectionTrustLevel.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x140487CC0 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x140491F2C (SeTokenSetRedirectionTrustPolicy.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404B4294 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404B84B4 (PiDmaGuardQueueRemoveEntry.c)
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14057EC60 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x14057F170 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IoFillTriageDumpBuffer @ 0x14058E2EC (IoFillTriageDumpBuffer.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058F55C (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x140594AE4 (IoSetDeferredLiveDumpFileHandle.c)
 *     PiSwIrpCancelStartCreate @ 0x1405A5CF0 (PiSwIrpCancelStartCreate.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A6880 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1405E9FB0 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405EAD40 (RtlpSetupExtendedBlock.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1406069D8 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140607780 (SeSetSecurityAttributesTokenEx.c)
 *     DifExReleaseResourceLiteWrapper @ 0x14061F530 (DifExReleaseResourceLiteWrapper.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x140655500 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     FsRtlMdlReadDev @ 0x140707E40 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x14070A650 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14070A880 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14070B27C (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14070B420 (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x14070E5F8 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x14070F5C4 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x14070FFB8 (IopInitializeBootLogging.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140711C10 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFileSystem @ 0x140711E80 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140712050 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x1407128D0 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140712990 (IoUnregisterFsRegistrationChange.c)
 *     PnpShutdownDevices @ 0x140718630 (PnpShutdownDevices.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyHwProfileChange @ 0x14071E214 (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x14071E464 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PpReleaseBootDDB @ 0x140722A54 (PpReleaseBootDDB.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140724058 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x14072B0A4 (PpDevCfgProcessDevices.c)
 *     PiSwIrpCleanup @ 0x14072E8F0 (PiSwIrpCleanup.c)
 *     PiSwIrpGetAttributes @ 0x14072EAE4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x14072EB84 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x14072EC24 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x14072ED60 (PiSwIrpSetLifetime.c)
 *     PiCMDeleteDeviceWorker @ 0x14072F100 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14072F37C (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x14073216C (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x1407382D0 (PiDmaGuardQueueInsertEntry.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140757974 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14075EC80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075EF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     TtmNotifyDeviceArrival @ 0x1407684B0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407687B0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140768870 (TtmNotifyDeviceInput.c)
 *     TtmpStartCallout @ 0x140769A64 (TtmpStartCallout.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140769DD0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiSessionsRundown @ 0x14076A17C (TtmiSessionsRundown.c)
 *     TtmpInitiateModernStandbyTransition @ 0x14076A9D8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpInsertPowerRequestToSession @ 0x14076AA58 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionPowerControl @ 0x14076AE8C (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x14076AF20 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x14076B210 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14076B394 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B504 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x14076B630 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14076B6D8 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14076B818 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14076B908 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchOpenTerminal @ 0x14076BA78 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x14076BB14 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x14076BBD0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14076BC7C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14076BD30 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x14076BDEC (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiResetInactivityTimer @ 0x14076FCB0 (TtmiResetInactivityTimer.c)
 *     TtmpCloseTerminalHandle @ 0x140770350 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140770520 (TtmpScheduledEvaluationWorker.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140770950 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpDeleteQueue @ 0x140770F80 (TtmpDeleteQueue.c)
 *     TtmpReleaseQueueLock @ 0x140771080 (TtmpReleaseQueueLock.c)
 *     PsSwapProcessWorkingSet @ 0x140774844 (PsSwapProcessWorkingSet.c)
 *     PspSetIoPriorityLimitJobTree @ 0x140777F64 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407786B0 (PspSetPagePriorityLimitJobTree.c)
 *     RtlZeroHeap @ 0x1407831B0 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14078F808 (SeSetPrivateNameSpaceToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14078F8C0 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14078FBD8 (SepSetServerSiloToken.c)
 *     SepIdAssignableAsGroup @ 0x1407924C0 (SepIdAssignableAsGroup.c)
 *     SeExchangePrimaryToken @ 0x140792C70 (SeExchangePrimaryToken.c)
 *     SepAddTokenLogonSession @ 0x140793610 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140793708 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1407938A4 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140793AF8 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407948C0 (SepRmGlobalSaclSetWrkr.c)
 *     WmipFindSMBiosStructure @ 0x1407A4284 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosEventlog @ 0x1407A4498 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1407A46F0 (WmipGetSysIds.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5AA0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x1407C41A0 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x140817930 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x140858E9C (PspLockRootJobExclusive.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1408590B8 (ExpGetSystemFirmwareTableInformation.c)
 *     PspSetJobIoRateControl @ 0x14085A388 (PspSetJobIoRateControl.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14085B860 (PspSetEnergyTrackingStateJobTree.c)
 *     PspSendProcessNotificationToJobChain @ 0x14085BFB0 (PspSendProcessNotificationToJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14085CE84 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockRootJobShared @ 0x14085D1C0 (PspLockRootJobShared.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x14085D730 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x14085D828 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObCheckObjectAccess @ 0x14087E5F0 (ObCheckObjectAccess.c)
 *     NtQuerySecurityAttributesToken @ 0x14088CC70 (NtQuerySecurityAttributesToken.c)
 *     SeExamineGlobalSacl @ 0x14088DC88 (SeExamineGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x14088DDC4 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088E1C0 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     AlpcpQuerySidToken @ 0x140892064 (AlpcpQuerySidToken.c)
 *     AlpcpExposeTokenAttribute @ 0x1408A0FD0 (AlpcpExposeTokenAttribute.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopInvalidateVolumesForDevice @ 0x1408AEAB4 (IopInvalidateVolumesForDevice.c)
 *     PiSwIrpInterfaceSetState @ 0x1408AF56C (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408AF734 (PiSwIrpPropertySet.c)
 *     IopDoDeferredSetInterfaceState @ 0x1408AFDC4 (IopDoDeferredSetInterfaceState.c)
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     IoSetDeviceInterfaceState @ 0x1408B19A0 (IoSetDeviceInterfaceState.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B69EC (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1408B93F0 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceDepth @ 0x1408B9C2C (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiGetRelatedDevice @ 0x1408BC818 (PiGetRelatedDevice.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1408C9AD0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408C9CA0 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408C9D00 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD650 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEB60 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBE0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF90 (PiUEventApplyAdditionalFilters.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D07C0 (PiDqObjectManagerServiceActionQueue.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408D7BB8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1408D7DF0 (PspGetMemoryPartitionFromJobList.c)
 *     PspUnlockJobChain @ 0x1408D80E0 (PspUnlockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8304 (PspApplyWorkingSetLimitsToProcess.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1408E0D10 (_CmGetDeviceSoftwareKeyPath.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x1408EB3D4 (PspSetProcessPriorityClass.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     NtGetMUIRegistryInfo @ 0x1408F7D70 (NtGetMUIRegistryInfo.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140927308 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbNodeActionCallback @ 0x140927F50 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 *     PfSnCheckActionsNeeded @ 0x140948CE8 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14094A9E4 (PfSnPrefetchCacheEntryUpdate.c)
 *     PiQueryAndAllocateBootResources @ 0x140978DA8 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1409795E8 (PiQueryResourceRequirements.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x14097B2F8 (PiUpdateDevicePanel.c)
 *     IopQueryInterfaceRecurseUp @ 0x14098215C (IopQueryInterfaceRecurseUp.c)
 *     NtAdjustPrivilegesToken @ 0x140984860 (NtAdjustPrivilegesToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     NtAdjustGroupsToken @ 0x140986940 (NtAdjustGroupsToken.c)
 *     FsRtlReleaseFile @ 0x14098D3F0 (FsRtlReleaseFile.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14098FEE0 (EtwpGetSidExtendedHeaderItem.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14099D3C4 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifyLowPowerStateExited @ 0x14099D528 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x14099D5A4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x14099D634 (TtmNotifySessionTerminalInput.c)
 *     TtmInitCurrentSession @ 0x14099D6C8 (TtmInitCurrentSession.c)
 *     TtmSessionMonitorControl @ 0x14099DE24 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x14099DFB0 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x14099E1A4 (TtmpAcquireSessionById.c)
 *     IoGetLegacyVetoList @ 0x14099F770 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     SeQueryServerSiloToken @ 0x1409A0F90 (SeQueryServerSiloToken.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409A12DC (TtmNotifyConsoleUserPresent.c)
 *     PopReleaseAdaptiveLock @ 0x1409A183C (PopReleaseAdaptiveLock.c)
 *     PspChargeJobWakeCounter @ 0x1409AECC0 (PspChargeJobWakeCounter.c)
 *     IoOpenDeviceRegistryKey @ 0x1409B6100 (IoOpenDeviceRegistryKey.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     PpCheckInDriverDatabase @ 0x1409B89D4 (PpCheckInDriverDatabase.c)
 *     PnpDelayedRemoveWorker @ 0x1409BABD0 (PnpDelayedRemoveWorker.c)
 *     PpDeviceRegistration @ 0x1409BAF3C (PpDeviceRegistration.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 *     PiSwStopDestroy @ 0x1409BE704 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409BEA08 (PiSwProcessParentRemoveIrp.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 *     PnpDisableDeviceInterfaces @ 0x1409BF2E8 (PnpDisableDeviceInterfaces.c)
 *     PiSwProcessParentStartIrp @ 0x1409BFAA8 (PiSwProcessParentStartIrp.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409C1EC0 (FsRtlReleaseFileForCcFlush.c)
 *     PiCreateDeviceInstanceKey @ 0x1409C3F58 (PiCreateDeviceInstanceKey.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1409CDD3C (PiPnpRtlSetDeviceRegProperty.c)
 *     SeGetTokenControlInformation @ 0x1409CF560 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x1409D9400 (SeQuerySessionIdTokenEx.c)
 *     SeQuerySecurityAttributesToken @ 0x1409E61E0 (SeQuerySecurityAttributesToken.c)
 *     NtCreateTimer @ 0x1409EADF0 (NtCreateTimer.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EC16C (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EC4E0 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EC964 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwFreePdoAssociationsList @ 0x1409F0A88 (PiSwFreePdoAssociationsList.c)
 *     PiSwCompleteCreate @ 0x1409F0EA8 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwPdoPnPDispatch @ 0x1409F33B0 (PiSwPdoPnPDispatch.c)
 *     SeQuerySessionIdToken @ 0x1409F4CB0 (SeQuerySessionIdToken.c)
 *     CmpStopRMLog @ 0x140A00A5C (CmpStopRMLog.c)
 *     CmpAccountForLogReservation @ 0x140A016A4 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x140A01E5C (CmpTransWriteLog.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F9D4 (AlpcpCheckConnectionSecurity.c)
 *     SepCreateLogonSessionTrack @ 0x140A16FEC (SepCreateLogonSessionTrack.c)
 *     FsRtlCopyRead @ 0x140A1B070 (FsRtlCopyRead.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A1C7C8 (PopDripsWatchdogStopWatchdog.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A1C834 (PopDripsWatchdogStartWatchdog.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     SepValidOwnerSubjectContext @ 0x140A22078 (SepValidOwnerSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 *     SepReferenceLogonSessionSilo @ 0x140A25AB4 (SepReferenceLogonSessionSilo.c)
 *     PspUnlockJobConditionally @ 0x140A2BA80 (PspUnlockJobConditionally.c)
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 *     PiQueryDeviceRelations @ 0x140A3435C (PiQueryDeviceRelations.c)
 *     WmipGetSMBiosTableData @ 0x140A37918 (WmipGetSMBiosTableData.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A38EF0 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140A39170 (PipForDeviceNodeSubtree.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A3C49C (SepGetLogonSessionAccountInfo.c)
 *     SeSetMandatoryPolicyToken @ 0x140A412E4 (SeSetMandatoryPolicyToken.c)
 *     PspSetProcessAffinitySafe @ 0x140A42004 (PspSetProcessAffinitySafe.c)
 *     SepUpdateLogonSessionTrack @ 0x140A427E4 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140A471F8 (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     PspSetBackgroundJobTree @ 0x140A50138 (PspSetBackgroundJobTree.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A524DC (IopSetDeviceSecurityDescriptor.c)
 *     IopGetRootDevices @ 0x140A5ADB8 (IopGetRootDevices.c)
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 *     PspValidateJobAffinityState @ 0x140A673AC (PspValidateJobAffinityState.c)
 *     PspFreezeJobTree @ 0x140A67B30 (PspFreezeJobTree.c)
 *     PipGenerateContainerID @ 0x140A69ACC (PipGenerateContainerID.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     IopBootLog @ 0x140A728F8 (IopBootLog.c)
 *     WmipReleaseSmbiosLockShared @ 0x140A75DE8 (WmipReleaseSmbiosLockShared.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A78A28 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PnpChainDereferenceComplete @ 0x140A83D94 (PnpChainDereferenceComplete.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140A86A68 (SeSetVirtualizationToken.c)
 *     PiQueryPowerRelations @ 0x140A887F8 (PiQueryPowerRelations.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A89C08 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92DE0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140A9D5CC (IoLockUnlockPnpDeviceTree.c)
 *     PiDmaGuardQueueFlush @ 0x140A9D9A0 (PiDmaGuardQueueFlush.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140AA2360 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA2768 (PnpDeleteDeviceInterfaces.c)
 *     TtmCleanupCurrentSession @ 0x140AA850C (TtmCleanupCurrentSession.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AA8C70 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     SepBlockAccessForLogonSession @ 0x140AB6B80 (SepBlockAccessForLogonSession.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140AB78A0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 *     IopInitCrashDumpRegCallback @ 0x140C1EA90 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140C24080 (PipResetMatchingFilteredDevices.c)
 *     ExpPrmInitialization @ 0x140C42EA4 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140C65AF8 (VslRegisterBootDrivers.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     RtlRemoveHeadCircularList @ 0x14041CA50 (RtlRemoveHeadCircularList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall ExReleaseResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r9
  USHORT Flag; // cx
  ULONG_PTR v4; // r14
  unsigned __int8 v5; // r12
  __int64 v6; // rdx
  struct _KTHREAD *v7; // r8
  __int64 v8; // rdx
  ULONG v9; // r13d
  ULONG v10; // r13d
  ULONG TableSize; // eax
  ERESOURCE_THREAD v12; // rdi
  char v13; // r14
  KIRQL v14; // r12
  _QWORD *v15; // r13
  signed __int64 v16; // rax
  bool v17; // cc
  signed __int64 v18; // rax
  ERESOURCE_THREAD v19; // r14
  ULONG v20; // ecx
  unsigned __int64 *v21; // rax
  __int64 v22; // rdx
  ULONG v23; // eax
  unsigned __int64 v24; // rdi
  int v25; // r14d
  __int64 v26; // rax
  KSPIN_LOCK *v27; // rcx
  char v28; // di
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // r9
  struct _KPRCB *v33; // rcx
  unsigned __int32 *v34; // r8
  unsigned int v35; // eax
  unsigned __int64 OwnerThread; // rdx
  OWNER_ENTRY *p_OwnerEntry; // rdi
  unsigned __int64 v38; // rcx
  POWNER_ENTRY OwnerTable; // rdi
  ULONG v40; // eax
  unsigned __int64 v41; // rdi
  struct _KPRCB *v42; // r15
  struct _KTHREAD *v43; // r12
  unsigned int v44; // ecx
  signed __int64 v45; // r14
  int v46; // r8d
  signed __int64 v47; // rax
  signed __int64 v48; // rdi
  signed __int64 v49; // rax
  unsigned int m; // edx
  int v51; // r9d
  ULONG v52; // r13d
  __int64 v53; // rax
  KSPIN_LOCK *v54; // rcx
  char v55; // di
  __int64 v56; // r8
  __int64 v57; // r10
  __int64 v58; // rcx
  __int64 v59; // r9
  struct _KPRCB *v60; // rcx
  unsigned __int32 *v61; // r8
  PVOID ExclusiveWaiters; // rcx
  _QWORD *v63; // rdx
  PVOID *v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 *v66; // rax
  unsigned __int64 k; // rcx
  _DWORD *v68; // r9
  _QWORD *v69; // rax
  _QWORD *v70; // rcx
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  _QWORD *v73; // rax
  unsigned int v74; // eax
  ULONG_PTR v75; // r14
  char v76; // r12
  KIRQL v77; // r13
  _QWORD *v78; // rax
  signed __int64 v79; // rax
  signed __int64 v80; // rax
  ERESOURCE_THREAD v81; // rdi
  ULONG NumberOfSharedWaiters; // ecx
  ULONG v83; // eax
  ULONG v84; // eax
  unsigned __int64 v85; // r14
  int v86; // r14d
  __int64 v87; // rax
  KSPIN_LOCK *v88; // rdx
  ULONG v89; // r13d
  unsigned __int64 v90; // rdi
  struct _KPRCB *v91; // r13
  struct _KTHREAD *v92; // rcx
  unsigned int v93; // r12d
  signed __int64 Object; // r14
  int v95; // r8d
  signed __int64 Pool2; // rax
  unsigned __int64 v97; // rcx
  signed __int64 v98; // rax
  unsigned int j; // edx
  int v100; // ecx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // r9
  ULONG v103; // ecx
  ULONG v104; // r10d
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // r9
  ULONG v107; // ecx
  ULONG v108; // r10d
  char v109; // al
  char v110; // r14
  __int64 v111; // rax
  KSPIN_LOCK *v112; // rcx
  char v113; // di
  __int64 v114; // r8
  __int64 v115; // r10
  __int64 v116; // rcx
  __int64 v117; // r9
  struct _KPRCB *v118; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  char v120; // al
  char v121; // al
  bool v122; // zf
  struct _KPRCB *v123; // r12
  unsigned __int64 *v124; // rax
  unsigned __int64 v125; // rax
  unsigned __int64 *v126; // r13
  unsigned __int64 *i; // rax
  _DWORD *v128; // r9
  _QWORD *v129; // r13
  _QWORD *v130; // rax
  _QWORD *v131; // rdx
  _QWORD *v132; // rax
  _QWORD *v133; // rcx
  char v134; // cl
  char v135; // al
  struct _KPRCB *v136; // r13
  unsigned __int32 v137; // eax
  __int64 v138; // rdx
  unsigned __int32 v139; // ett
  unsigned __int32 v140; // eax
  __int64 v141; // rdx
  unsigned __int32 v142; // ett
  unsigned __int64 **v143; // rdx
  unsigned __int64 *v144; // rax
  unsigned __int32 v145; // eax
  __int64 v146; // rdx
  unsigned __int32 v147; // ett
  __int128 *v148; // rax
  unsigned __int64 *SharedWaiters; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // r13
  ULONG *p_ActiveEntries; // rdi
  struct _KTHREAD *v154; // r14
  unsigned __int8 v155; // si
  char v156; // cl
  volatile signed __int64 *v157; // rcx
  volatile signed __int64 *v158; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v161; // rcx
  __int64 **v162; // r14
  __int64 *v163; // rcx
  __int64 **v164; // r14
  __int64 *v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 **v168; // r12
  __int64 *v169; // rcx
  __int64 **v170; // r12
  __int64 *v171; // rcx
  __int64 v172; // rax
  __int64 v173; // rax
  signed __int32 v174[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v175; // [rsp+38h] [rbp-D0h]
  _DWORD *v176; // [rsp+40h] [rbp-C8h]
  _DWORD *v177; // [rsp+48h] [rbp-C0h]
  __int16 Group; // [rsp+50h] [rbp-B8h]
  ULONG ContentionCount; // [rsp+54h] [rbp-B4h]
  __int64 v180; // [rsp+58h] [rbp-B0h] BYREF
  KSPIN_LOCK *p_SpinLock; // [rsp+60h] [rbp-A8h]
  __int64 v182; // [rsp+68h] [rbp-A0h]
  _QWORD *v183; // [rsp+70h] [rbp-98h]
  unsigned __int64 v184; // [rsp+78h] [rbp-90h]
  struct _KPRCB *CurrentPrcb; // [rsp+80h] [rbp-88h]
  unsigned __int64 v186; // [rsp+88h] [rbp-80h]
  unsigned __int64 *v187; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v188; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v189; // [rsp+A0h] [rbp-68h]
  __int128 v190; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v191; // [rsp+B8h] [rbp-50h]
  __int128 v192; // [rsp+C8h] [rbp-40h]
  __int128 v193; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v194; // [rsp+E8h] [rbp-20h]
  __int128 v195; // [rsp+F8h] [rbp-10h]
  _QWORD v196[2]; // [rsp+108h] [rbp+0h] BYREF
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
    v154 = KeGetCurrentThread();
    v155 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v155, 2LL);
    if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 && Resource->Reserved2 == v154 )
    {
      p_ActiveEntries = &Resource->ActiveEntries;
LABEL_317:
      if ( p_ActiveEntries )
      {
        v109 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v109 & 2) != 0 )
        {
          v110 = 0;
        }
        else
        {
          v110 = 1;
          *((_BYTE *)p_ActiveEntries + 37) = v109 & 0xFE;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v155);
        __writecr8(v155);
        ExReleaseFastResource((ULONG_PTR)Resource, (ULONG_PTR)p_ActiveEntries);
        if ( v110 )
          ExFreePoolWithTag(p_ActiveEntries, 0);
        return;
      }
    }
    else
    {
      for ( p_ActiveEntries = (ULONG *)v154[1].WaitBlock[3].SparePtr;
            p_ActiveEntries != (ULONG *)&v154[1].LastXStateSaveDebugInfo;
            p_ActiveEntries = *(ULONG **)p_ActiveEntries )
      {
        v156 = *((_BYTE *)p_ActiveEntries + 37);
        if ( (v156 & 2) == 0 && *((PERESOURCE *)p_ActiveEntries + 3) == Resource && (v156 & 1) != 0 )
          goto LABEL_317;
      }
    }
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)v154, 0LL, 0LL);
  }
  v4 = (ULONG_PTR)KeGetCurrentThread();
  v182 = 0LL;
  p_SpinLock = &Resource->SpinLock;
  v180 = 0LL;
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
  LOBYTE(v182) = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&v180);
    if ( v6 )
      KxWaitForLockOwnerShip(&v180, v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v180, &Resource->SpinLock);
  }
  v7 = KeGetCurrentThread();
  v8 = Resource->Flag;
  if ( ((v8 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v4 & 3) != 3 && (struct _KTHREAD *)v4 != v7 )
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v7, v4, 0LL);
  if ( (v8 & 0x80u) == 0LL )
  {
    v189 = 0LL;
    LOBYTE(v175) = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    if ( (v4 & 3) != 0 )
      v35 = 0;
    else
      v35 = *(unsigned __int8 *)(v4 + 1120);
    OwnerThread = Resource->OwnerEntry.OwnerThread;
    p_OwnerEntry = &Resource->OwnerEntry;
    if ( OwnerThread == v4 )
      goto LABEL_132;
    v38 = Resource->OwnerEntry.OwnerThread != 0;
    if ( v35 )
    {
      OwnerThread = (unsigned __int64)Resource->OwnerTable;
      if ( OwnerThread )
      {
        if ( v35 < *(_DWORD *)(OwnerThread + 8) )
        {
          p_OwnerEntry = (OWNER_ENTRY *)(OwnerThread + 16LL * v35);
          if ( p_OwnerEntry->OwnerThread == v4 )
            goto LABEL_132;
        }
      }
    }
    OwnerTable = Resource->OwnerTable;
    OwnerThread = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
    if ( OwnerTable )
    {
      v7 = (struct _KTHREAD *)&OwnerTable[OwnerTable->TableSize];
      p_OwnerEntry = OwnerTable + 1;
      if ( v38 < OwnerThread )
      {
        while ( p_OwnerEntry->OwnerThread != v4 )
        {
          if ( !p_OwnerEntry->OwnerThread || (++v38, v38 != OwnerThread) )
          {
            if ( ++p_OwnerEntry != (OWNER_ENTRY *)v7 )
              continue;
          }
          goto LABEL_114;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                    - LODWORD(Resource->OwnerTable)) >> 4;
LABEL_132:
        v74 = p_OwnerEntry->TableSize & 7 | (8 * (p_OwnerEntry->TableSize >> 3) - 8);
        p_OwnerEntry->TableSize = v74;
        LODWORD(v177) = v74 >> 3;
        if ( !(v74 >> 3) )
        {
          v75 = p_OwnerEntry->OwnerThread;
          if ( (v74 & 2) != 0 )
          {
            v75 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v75 & 3) != 0 )
          {
            goto LABEL_148;
          }
          if ( !v75 )
            goto LABEL_148;
          if ( (v74 & 1) == 0 )
          {
LABEL_141:
            if ( (v74 & 4) != 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v75 + 1508));
              v74 = p_OwnerEntry->TableSize & 0xFFFFFFFB;
              p_OwnerEntry->TableSize = v74;
            }
            if ( (v74 & 2) != 0 )
            {
              if ( ObpTraceFlags )
                ObpPushStackInfo(v75 - 48);
              v79 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v75 - 48), 0xFFFFFFFFFFFFFFFFuLL);
              v17 = v79 <= 1;
              v80 = v79 - 1;
              if ( v17 )
              {
                if ( *(_QWORD *)(v75 - 40) )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v75 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v75 - 48) >> 8)],
                    v75,
                    3uLL,
                    *(_QWORD *)(v75 - 40));
                if ( v80 < 0 )
                  KeBugCheckEx(0x18u, 0LL, v75, 4uLL, v80);
                ObpDeferObjectDeletion(v75 - 48);
              }
              p_OwnerEntry->TableSize &= ~2u;
            }
LABEL_148:
            p_OwnerEntry->OwnerThread = 0LL;
            v81 = 0LL;
            v17 = Resource->ActiveEntries <= 1;
            ContentionCount = Resource->ContentionCount;
            if ( v17 )
            {
              if ( Resource->NumberOfExclusiveWaiters )
              {
                v144 = (unsigned __int64 *)RtlRemoveHeadCircularList(&Resource->ExclusiveWaiters, OwnerThread, v7);
                if ( v144 )
                {
                  v81 = v144[2];
                  v144[1] = (unsigned __int64)v144;
                  *v144 = (unsigned __int64)v144;
                  v189 = v144;
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
                v189 = SharedWaiters;
                Resource->NumberOfSharedWaiters = 0;
              }
LABEL_152:
              v83 = Resource->ActiveEntries - 1;
              Resource->ActiveEntries = v83 + NumberOfSharedWaiters;
              if ( !(v83 + NumberOfSharedWaiters) )
                Resource->ActiveCount = 0;
              if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
                Resource->Flag &= 0xF9u;
              LODWORD(v183) = Resource->WaiterPriority;
              if ( v81 )
              {
                v84 = Resource->OwnerEntry.TableSize & 7;
                Resource->OwnerEntry.OwnerThread = v81;
                Resource->OwnerEntry.TableSize = v84 | 8;
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
              {
                KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
LABEL_162:
                v85 = (unsigned __int8)v182;
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v182);
                __writecr8(v85);
                if ( v189 )
                {
                  v125 = KeGetCurrentIrql();
                  v184 = v125;
                  __writecr8(2uLL);
                  if ( KiIrqlFlags )
                    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v125, 2LL);
                  v126 = v189;
                  CurrentPrcb = KeGetCurrentPrcb();
                  for ( i = (unsigned __int64 *)*v189; ; i = (unsigned __int64 *)*v188 )
                  {
                    v188 = i;
                    v186 = (unsigned __int64)v126;
                    v176 = v126 + 3;
                    KiAcquireKobjectLockSafe(v126 + 3);
                    v128 = v126 + 3;
                    *((_DWORD *)v126 + 7) = 1;
                    v129 = (_QWORD *)v126[4];
                    v130 = v128 + 2;
                    v177 = v128 + 2;
                    while ( v129 != v130 )
                    {
                      v131 = (_QWORD *)*v129;
                      v132 = v129;
                      v129 = v131;
                      v133 = (_QWORD *)v132[1];
                      if ( (_QWORD *)v131[1] != v132 || (_QWORD *)*v133 != v132 )
                        goto LABEL_127;
                      *v133 = v131;
                      v131[1] = v133;
                      v134 = *((_BYTE *)v132 + 16);
                      if ( v134 == 1 )
                      {
                        v135 = KiTryUnwaitThread(CurrentPrcb, v132, *((unsigned __int16 *)v132 + 9), 0LL);
                        v128 = v176;
                        v122 = v135 == 0;
                        v130 = v177;
                        if ( !v122 )
                        {
                          v122 = v176[1]-- == 1;
                          if ( v122 )
                            break;
                        }
                      }
                      else if ( v134 == 2 )
                      {
                        *((_BYTE *)v132 + 17) = 5;
                        KiInsertQueueInternal(v132[3], v132);
                        v128 = v176;
                        v122 = v176[1]-- == 1;
                        if ( v122 )
                          break;
                        v130 = v177;
                      }
                      else
                      {
                        if ( v134 == 4 )
                        {
                          *((_BYTE *)v132 + 17) = 5;
                          v128[1] = 0;
                          KeInsertQueueDpc((PRKDPC)v132[3], v128, v132);
                        }
                        else
                        {
                          KiTryUnwaitThread(CurrentPrcb, v132, 256LL, 0LL);
                        }
                        v130 = v177;
                        v128 = v176;
                      }
                    }
                    _InterlockedAnd((volatile signed __int32 *)(v186 + 24), 0xFFFFFF7F);
                    if ( v188 == v189 )
                      break;
                    v126 = v188;
                  }
                  v136 = CurrentPrcb;
                  KiRemoveBoostThread(CurrentPrcb);
                  KiExitDispatcher(v136, v184);
                }
                v86 = 65602;
                LODWORD(v177) = 0;
                LODWORD(v176) = 65602;
LABEL_177:
                __incgsdword(0x9070u);
                if ( !(_BYTE)v175 )
                  return;
                v193 = 0LL;
                v194 = 0LL;
                v195 = 0LL;
                v91 = KeGetCurrentPrcb();
                v186 = __rdtsc();
                ++v91->SynchCounters.ExEtwSynchTrackingNotificationsCount;
                Group = v91->Group;
                LOBYTE(v175) = v91->GroupIndex;
                if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
                  return;
                v92 = KeGetCurrentThread();
                v93 = v86 & 0xFFFF0000;
                v184 = (unsigned __int64)v92;
                if ( (*(_DWORD *)(&v92[1].SwapListEntry + 1) & 1) != 0 )
                  return;
                Object = (signed __int64)v92[1].WaitBlock[0].Object;
                v95 = EtwpEthreadSyncTrackingSequence;
                LODWORD(v183) = EtwpEthreadSyncTrackingSequence;
                if ( !Object )
                {
                  Pool2 = ExAllocatePool2(0x48uLL, 0x200uLL, 0x72546552u);
                  v48 = Pool2;
                  if ( !Pool2 )
                    return;
                  v97 = v184;
                  *(_QWORD *)(Pool2 + 16) = Resource;
                  *(_DWORD *)(Pool2 + 28) = v93;
                  *(_DWORD *)(Pool2 + 32) = 0;
                  *(_DWORD *)(Pool2 + 40) = (_DWORD)v183;
                  Object = _InterlockedCompareExchange64((volatile signed __int64 *)(v97 + 1568), Pool2, 0LL);
                  if ( !Object )
                  {
LABEL_196:
                    if ( !*(_DWORD *)(v48 + 32) )
                      goto LABEL_211;
                    ++v91->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
                    if ( *(_DWORD *)(v48 + 36) < (unsigned int)((_DWORD)v177 + 1) )
                      *(_DWORD *)(v48 + 36) = (_DWORD)v177 + 1;
                    if ( (_DWORD)v176 == 65602 )
                    {
                      v101 = *(_QWORD *)(v48 + 8);
                      if ( v101 > 2 && *(_WORD *)(v48 + 24) == Group && *(_BYTE *)(v48 + 26) == (_BYTE)v175 )
                        v102 = v186 - v101;
                      else
                        v102 = 0LL;
                      if ( *(_QWORD *)v48 <= 1uLL
                        || (v91->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                          + v91->SynchCounters.ExecutiveResourceReleaseSharedCount)
                         % EtwpExecutiveResourceContentionSampleRate )
                      {
                        v103 = *(_DWORD *)(v48 + 44);
                        v104 = ContentionCount;
                        if ( (ContentionCount <= v103
                           || (ContentionCount - v103) % EtwpExecutiveResourceContentionSampleRate)
                          && (v91->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                            + v91->SynchCounters.ExecutiveResourceReleaseSharedCount)
                           % EtwpExecutiveResourceReleaseSampleRate )
                        {
                          goto LABEL_211;
                        }
                      }
                      else
                      {
                        v104 = ContentionCount;
                      }
                      DWORD2(v195) = 65602;
                      *(_QWORD *)&v195 = Resource;
                      *(_QWORD *)&v193 = *(_QWORD *)(v48 + 8);
                      DWORD2(v194) = *(_DWORD *)(v48 + 36);
                      *((_QWORD *)&v193 + 1) = v102;
                      *(_QWORD *)&v194 = *(_QWORD *)v48;
                      HIDWORD(v195) = v104 - *(_DWORD *)(v48 + 44);
                      v148 = &v193;
                      HIDWORD(v194) = KeGetCurrentThread()[1].CurrentRunTime;
LABEL_281:
                      v196[0] = v148;
                      v196[1] = 48LL;
                      EtwTraceKernelEvent((int)v196, 1, 0x20020000u, 1323, 23074818);
                      goto LABEL_211;
                    }
                    if ( (_DWORD)v176 == 65618 )
                      *(_DWORD *)(v48 + 32) = 2;
                    return;
                  }
                  ExFreePoolWithTag((PVOID)Pool2, 0);
                  v95 = (int)v183;
                }
                v98 = 0LL;
                for ( j = 0; j < 8; ++j )
                {
                  v100 = *(_DWORD *)(Object + 28);
                  if ( v100 == v93 && *(PERESOURCE *)(Object + 16) == Resource && *(_DWORD *)(Object + 40) == v95 )
                    goto LABEL_195;
                  if ( !v98 )
                  {
                    if ( v100 )
                    {
                      if ( *(_DWORD *)(Object + 40) < v95 )
                      {
                        v98 = Object;
                        break;
                      }
                    }
                    else
                    {
                      v98 = Object;
                    }
                  }
                  Object += 64LL;
                }
                Object = v98;
                if ( v98 )
                {
                  *(_QWORD *)(v98 + 16) = Resource;
                  *(_DWORD *)(v98 + 28) = v93;
                  *(_QWORD *)(v98 + 32) = 0LL;
                  *(_QWORD *)v98 = 0LL;
                  *(_QWORD *)(v98 + 8) = 0LL;
                  *(_DWORD *)(v98 + 24) = 0;
                  *(_DWORD *)(v98 + 40) = v95;
                  *(_DWORD *)(v98 + 44) = 0;
                }
LABEL_195:
                v48 = Object;
                if ( !Object )
                  return;
                goto LABEL_196;
              }
              _m_prefetchw(&v180);
              v87 = v180;
              if ( !v180 )
              {
                if ( (__int64 *)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)p_SpinLock,
                                  0LL,
                                  (signed __int64)&v180) == &v180 )
                  goto LABEL_162;
                v87 = KxWaitForLockChainValid(&v180);
              }
              v180 = 0LL;
              v88 = p_SpinLock;
              if ( (((unsigned __int8)v88 ^ (unsigned __int8)_InterlockedExchange64(
                                                               (volatile __int64 *)(v87 + 8),
                                                               (__int64)p_SpinLock)) & 4) != 0 )
                KeWakeAddressAll(v87 + 8, v88, v7, v1);
              goto LABEL_162;
            }
LABEL_151:
            NumberOfSharedWaiters = 0;
            goto LABEL_152;
          }
          v76 = 0;
          v77 = 0;
          v78 = 0LL;
          if ( PspAlwaysTrackIoBoosting )
          {
            v76 = 1;
            v151 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
            v184 = v151;
            v152 = v151;
            if ( v151 )
            {
              RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v151 + 16), 0LL);
              *(_QWORD *)(v152 + 96) = KeGetCurrentThread();
              *(_QWORD *)(v152 + 104) = 0LL;
            }
            v77 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v75 + 1552));
            v78 = (_QWORD *)v184;
          }
          if ( *(_DWORD *)(v75 + 1504) )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v75 + 1504));
            if ( !v76 )
            {
LABEL_140:
              v74 = p_OwnerEntry->TableSize & 0xFFFFFFFE;
              p_OwnerEntry->TableSize = v74;
              goto LABEL_141;
            }
            if ( *(_DWORD *)(v75 + 1504) )
            {
              if ( v78 )
              {
                OwnerThread = *(_QWORD *)(v75 + 1544);
                if ( *(_QWORD *)OwnerThread != v75 + 1536 )
                  goto LABEL_127;
                *v78 = v75 + 1536;
                v78[1] = OwnerThread;
                *(_QWORD *)OwnerThread = v78;
                *(_QWORD *)(v75 + 1544) = v78;
              }
            }
            else
            {
              if ( v78 )
                ExFreePoolWithTag(v78, 0x736F6F42u);
              v168 = (__int64 **)(v75 + 1520);
              while ( 1 )
              {
                v169 = *v168;
                if ( *v168 == (__int64 *)v168 )
                  break;
                v173 = *v169;
                if ( (__int64 **)v169[1] != v168 || *(__int64 **)(v173 + 8) != v169 )
                  goto LABEL_127;
                *v168 = (__int64 *)v173;
                *(_QWORD *)(v173 + 8) = v168;
                ExFreePoolWithTag(v169, 0x736F6F42u);
              }
              v170 = (__int64 **)(v75 + 1536);
              while ( 1 )
              {
                v171 = *v170;
                if ( *v170 == (__int64 *)v170 )
                  break;
                v172 = *v171;
                if ( (__int64 **)v171[1] != v170 || *(__int64 **)(v172 + 8) != v171 )
                  goto LABEL_127;
                *v170 = (__int64 *)v172;
                *(_QWORD *)(v172 + 8) = v170;
                ExFreePoolWithTag(v171, 0x736F6F42u);
              }
            }
          }
          else if ( !v76 )
          {
            goto LABEL_140;
          }
          v158 = (volatile signed __int64 *)(v75 + 1552);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64(v158, 0LL);
          else
            KiReleaseSpinLockInstrumented(v158, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v77);
          __writecr8(v77);
          goto LABEL_140;
        }
        v86 = 65618;
        v89 = Resource->ContentionCount;
        LODWORD(v176) = 65618;
        ContentionCount = v89;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
LABEL_174:
          v90 = (unsigned __int8)v182;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v182);
          __writecr8(v90);
          goto LABEL_177;
        }
        _m_prefetchw(&v180);
        v111 = v180;
        if ( !v180 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)p_SpinLock,
                            0LL,
                            (signed __int64)&v180) == &v180 )
            goto LABEL_174;
          v111 = KxWaitForLockChainValid(&v180);
        }
        v180 = 0LL;
        v112 = p_SpinLock;
        if ( (((unsigned __int8)v112 ^ (unsigned __int8)_InterlockedExchange64(
                                                          (volatile __int64 *)(v111 + 8),
                                                          (__int64)p_SpinLock)) & 4) != 0 )
        {
          _InterlockedOr(v174, 0);
          v113 = KeDisableInterrupts(v112, OwnerThread, ((unsigned __int64)(v111 + 8) >> 5) & 0x7F, v1);
          KiHaltOnAddressWakeEntireList(
            v116,
            _InterlockedExchange64((volatile __int64 *)(v115 + 8 * v114 + 15863808), 0LL));
          if ( v113 )
          {
            v118 = KeGetCurrentPrcb();
            SchedulerAssist = (unsigned __int32 *)v118->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v145 = *SchedulerAssist;
              do
              {
                v146 = v145;
                LODWORD(v146) = v145 & 0xFFDFFFFF;
                v147 = v145;
                v145 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v145 & 0xFFDFFFFF, v145);
              }
              while ( v147 != v145 );
              if ( (v145 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v118, v146, SchedulerAssist, v117);
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
  v187 = 0LL;
  LOBYTE(v175) = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((v8 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && Resource->OwnerEntry.OwnerThread != v4 )
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)Resource->OwnerTable, 1uLL);
  v9 = Resource->OwnerEntry.TableSize & 7 | (8 * (Resource->OwnerEntry.TableSize >> 3) - 8);
  Resource->OwnerEntry.TableSize = v9;
  v10 = v9 >> 3;
  if ( v10 )
  {
    v25 = 65586;
    v40 = Resource->ContentionCount;
    LODWORD(v183) = 65586;
    ContentionCount = v40;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
LABEL_66:
      v41 = (unsigned __int8)v182;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v182);
      __writecr8(v41);
      goto LABEL_69;
    }
    _m_prefetchw(&v180);
    v53 = v180;
    if ( !v180 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v180) == &v180 )
        goto LABEL_66;
      v53 = KxWaitForLockChainValid(&v180);
    }
    v180 = 0LL;
    v54 = p_SpinLock;
    if ( (((unsigned __int8)v54 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v53 + 8),
                                                     (__int64)p_SpinLock)) & 4) != 0 )
    {
      _InterlockedOr(v174, 0);
      v55 = KeDisableInterrupts(v54, v8, ((unsigned __int64)(v53 + 8) >> 5) & 0x7F, v1);
      KiHaltOnAddressWakeEntireList(v58, _InterlockedExchange64((volatile __int64 *)(v57 + 8 * v56 + 15863808), 0LL));
      if ( v55 )
      {
        v60 = KeGetCurrentPrcb();
        v61 = (unsigned __int32 *)v60->SchedulerAssist;
        if ( v61 )
        {
          _m_prefetchw(v61);
          v137 = *v61;
          do
          {
            v138 = v137;
            LODWORD(v138) = v137 & 0xFFDFFFFF;
            v139 = v137;
            v137 = _InterlockedCompareExchange((volatile signed __int32 *)v61, v137 & 0xFFDFFFFF, v137);
          }
          while ( v139 != v137 );
          if ( (v137 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v60, v138, v61, v59);
        }
        _enable();
      }
    }
    goto LABEL_66;
  }
  TableSize = Resource->OwnerEntry.TableSize;
  v12 = Resource->OwnerEntry.OwnerThread;
  if ( (TableSize & 2) != 0 )
  {
    v12 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v12 & 3) != 0 )
  {
    goto LABEL_31;
  }
  if ( !v12 )
    goto LABEL_31;
  if ( (TableSize & 1) != 0 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v13 = 1;
      v150 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
      v15 = (_QWORD *)v150;
      if ( v150 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(v150 + 16), 0LL);
        v15[12] = KeGetCurrentThread();
        v15[13] = 0LL;
      }
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 1552));
    }
    if ( *(_DWORD *)(v12 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 1504));
      if ( !v13 )
      {
LABEL_23:
        TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFE;
        Resource->OwnerEntry.TableSize = TableSize;
        goto LABEL_24;
      }
      if ( *(_DWORD *)(v12 + 1504) )
      {
        if ( v15 )
        {
          v161 = *(_QWORD **)(v12 + 1544);
          if ( *v161 != v12 + 1536 )
            goto LABEL_127;
          *v15 = v12 + 1536;
          v15[1] = v161;
          *v161 = v15;
          *(_QWORD *)(v12 + 1544) = v15;
        }
      }
      else
      {
        if ( v15 )
          ExFreePoolWithTag(v15, 0x736F6F42u);
        v162 = (__int64 **)(v12 + 1520);
        while ( 1 )
        {
          v163 = *v162;
          if ( *v162 == (__int64 *)v162 )
            break;
          v167 = *v163;
          if ( (__int64 **)v163[1] != v162 || *(__int64 **)(v167 + 8) != v163 )
            goto LABEL_127;
          *v162 = (__int64 *)v167;
          *(_QWORD *)(v167 + 8) = v162;
          ExFreePoolWithTag(v163, 0x736F6F42u);
        }
        v164 = (__int64 **)(v12 + 1536);
        while ( 1 )
        {
          v165 = *v164;
          if ( *v164 == (__int64 *)v164 )
            break;
          v166 = *v165;
          if ( (__int64 **)v165[1] != v164 || *(__int64 **)(v166 + 8) != v165 )
            goto LABEL_127;
          *v164 = (__int64 *)v166;
          *(_QWORD *)(v166 + 8) = v164;
          ExFreePoolWithTag(v165, 0x736F6F42u);
        }
      }
    }
    else if ( !v13 )
    {
      goto LABEL_23;
    }
    v157 = (volatile signed __int64 *)(v12 + 1552);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v157, 0LL);
    else
      KiReleaseSpinLockInstrumented(v157, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
    goto LABEL_23;
  }
LABEL_24:
  if ( (TableSize & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 1508));
    TableSize = Resource->OwnerEntry.TableSize & 0xFFFFFFFB;
    Resource->OwnerEntry.TableSize = TableSize;
  }
  if ( (TableSize & 2) != 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v12 - 48);
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v17 = v16 <= 1;
    v18 = v16 - 1;
    if ( v17 )
    {
      if ( *(_QWORD *)(v12 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v12 - 48) >> 8)],
          v12,
          3uLL,
          *(_QWORD *)(v12 - 40));
      if ( v18 < 0 )
        KeBugCheckEx(0x18u, 0LL, v12, 4uLL, v18);
      ObpDeferObjectDeletion(v12 - 48);
    }
    Resource->OwnerEntry.TableSize &= ~2u;
  }
LABEL_31:
  Resource->OwnerEntry.OwnerThread = 0LL;
  v19 = 0LL;
  v20 = Resource->NumberOfSharedWaiters;
  ContentionCount = Resource->ContentionCount;
  if ( !v20 )
  {
    if ( !Resource->NumberOfExclusiveWaiters )
    {
      Resource->ActiveCount = 0;
      Resource->Flag &= ~0x80u;
      v22 = 0LL;
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
        v63 = *(_QWORD **)ExclusiveWaiters;
        v64 = (PVOID *)*((_QWORD *)ExclusiveWaiters + 1);
        if ( *(PVOID *)(*(_QWORD *)ExclusiveWaiters + 8LL) != ExclusiveWaiters || *v64 != ExclusiveWaiters )
          goto LABEL_127;
        *v64 = v63;
        v63[1] = v64;
      }
      v124 = v187;
      v19 = *((_QWORD *)ExclusiveWaiters + 2);
      if ( v187 )
      {
        v143 = (unsigned __int64 **)v187[1];
        if ( *v143 == v187 )
        {
          *(_QWORD *)ExclusiveWaiters = v187;
          *((_QWORD *)ExclusiveWaiters + 1) = v143;
          *v143 = (unsigned __int64 *)ExclusiveWaiters;
          v124[1] = (unsigned __int64)ExclusiveWaiters;
          --Resource->NumberOfExclusiveWaiters;
          v187 = (unsigned __int64 *)ExclusiveWaiters;
          v20 = 1;
          goto LABEL_33;
        }
LABEL_127:
        __fastfail(3u);
      }
      *((_QWORD *)ExclusiveWaiters + 1) = ExclusiveWaiters;
      *(_QWORD *)ExclusiveWaiters = ExclusiveWaiters;
      v187 = (unsigned __int64 *)ExclusiveWaiters;
    }
    --Resource->NumberOfExclusiveWaiters;
    v20 = 1;
    goto LABEL_33;
  }
  v21 = (unsigned __int64 *)Resource->SharedWaiters;
  Resource->SharedWaiters = 0LL;
  Resource->Flag &= ~0x80u;
  v187 = v21;
  Resource->NumberOfSharedWaiters = 0;
LABEL_33:
  v22 = v20 + Resource->ActiveEntries - 1;
LABEL_34:
  Resource->ActiveEntries = v22;
  if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
    Resource->Flag &= 0xF9u;
  if ( v19 )
  {
    v23 = Resource->OwnerEntry.TableSize & 7;
    Resource->OwnerEntry.OwnerThread = v19;
    Resource->OwnerEntry.TableSize = v23 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v180);
    v26 = v180;
    if ( !v180 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v180) == &v180 )
        goto LABEL_42;
      v26 = KxWaitForLockChainValid(&v180);
    }
    v180 = 0LL;
    v27 = p_SpinLock;
    if ( (((unsigned __int8)v27 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v26 + 8),
                                                     (__int64)p_SpinLock)) & 4) != 0 )
    {
      _InterlockedOr(v174, 0);
      v28 = KeDisableInterrupts(v27, v22, ((unsigned __int64)(v26 + 8) >> 5) & 0x7F, v1);
      KiHaltOnAddressWakeEntireList(v31, _InterlockedExchange64((volatile __int64 *)(v30 + 8 * v29 + 15863808), 0LL));
      if ( v28 )
      {
        v33 = KeGetCurrentPrcb();
        v34 = (unsigned __int32 *)v33->SchedulerAssist;
        if ( v34 )
        {
          _m_prefetchw(v34);
          v140 = *v34;
          do
          {
            v141 = v140;
            LODWORD(v141) = v140 & 0xFFDFFFFF;
            v142 = v140;
            v140 = _InterlockedCompareExchange((volatile signed __int32 *)v34, v140 & 0xFFDFFFFF, v140);
          }
          while ( v142 != v140 );
          if ( (v140 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v33, v141, v34, v32);
        }
        _enable();
      }
    }
    goto LABEL_42;
  }
  KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
LABEL_42:
  v24 = (unsigned __int8)v182;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v182);
  __writecr8(v24);
  if ( v187 )
  {
    v65 = KeGetCurrentIrql();
    v184 = v65;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v65, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v66 = v187;
    for ( k = *v187; ; k = *(_QWORD *)v186 )
    {
      v188 = v66;
      v186 = k;
      v176 = v66 + 3;
      KiAcquireKobjectLockSafe(v66 + 3);
      v68 = v188 + 3;
      *((_DWORD *)v188 + 7) = 1;
      v69 = (_QWORD *)*((_QWORD *)v68 + 1);
      v70 = v68 + 2;
      v177 = v68 + 2;
      while ( v69 != v70 )
      {
        v71 = *v69;
        v72 = v69;
        v73 = (_QWORD *)v69[1];
        v183 = (_QWORD *)v71;
        if ( *(_QWORD **)(v71 + 8) != v72 || (_QWORD *)*v73 != v72 )
          goto LABEL_127;
        *v73 = v71;
        *(_QWORD *)(v71 + 8) = v73;
        v120 = *((_BYTE *)v72 + 16);
        if ( v120 == 1 )
        {
          v121 = KiTryUnwaitThread(CurrentPrcb, v72, *((unsigned __int16 *)v72 + 9), 0LL);
          v70 = v177;
          v122 = v121 == 0;
          v69 = v183;
          v68 = v176;
          if ( !v122 )
          {
            v122 = v176[1]-- == 1;
            if ( v122 )
              break;
          }
        }
        else if ( v120 == 2 )
        {
          *((_BYTE *)v72 + 17) = 5;
          KiInsertQueueInternal(v72[3], v72);
          v68 = v176;
          v122 = v176[1]-- == 1;
          if ( v122 )
            break;
          v69 = v183;
          v70 = v177;
        }
        else
        {
          if ( v120 == 4 )
          {
            *((_BYTE *)v72 + 17) = 5;
            v68[1] = 0;
            KeInsertQueueDpc((PRKDPC)v72[3], v68, v72);
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v72, 256LL, 0LL);
          }
          v69 = v183;
          v70 = v177;
          v68 = v176;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)v188 + 6, 0xFFFFFF7F);
      if ( (unsigned __int64 *)v186 == v187 )
        break;
      v66 = (unsigned __int64 *)v186;
    }
    v123 = CurrentPrcb;
    KiRemoveBoostThread(CurrentPrcb);
    KiExitDispatcher(v123, v184);
  }
  v25 = 65570;
  v10 = 0;
  LODWORD(v183) = 65570;
LABEL_69:
  __incgsdword(0x906Cu);
  if ( (_BYTE)v175 )
  {
    v190 = 0LL;
    v191 = 0LL;
    v192 = 0LL;
    v42 = KeGetCurrentPrcb();
    v184 = __rdtsc();
    ++v42->SynchCounters.ExEtwSynchTrackingNotificationsCount;
    Group = v42->Group;
    LOBYTE(v175) = v42->GroupIndex;
    if ( KeGetCurrentThread()[1].WaitBlock[0].Object )
    {
      v43 = KeGetCurrentThread();
      v44 = v25 & 0xFFFF0000;
      LODWORD(v176) = v25 & 0xFFFF0000;
      if ( (*(_DWORD *)(&v43[1].SwapListEntry + 1) & 1) == 0 )
      {
        v45 = (signed __int64)v43[1].WaitBlock[0].Object;
        v46 = EtwpEthreadSyncTrackingSequence;
        LODWORD(v177) = EtwpEthreadSyncTrackingSequence;
        if ( !v45 )
        {
          v47 = ExAllocatePool2(0x48uLL, 0x200uLL, 0x72546552u);
          v48 = v47;
          if ( !v47 )
            return;
          *(_QWORD *)(v47 + 16) = Resource;
          *(_DWORD *)(v47 + 28) = (_DWORD)v176;
          *(_DWORD *)(v47 + 40) = (_DWORD)v177;
          *(_DWORD *)(v47 + 32) = 0;
          v45 = _InterlockedCompareExchange64((volatile signed __int64 *)&v43[1].WaitBlock[0].Object, v47, 0LL);
          if ( !v45 )
          {
LABEL_88:
            if ( *(_DWORD *)(v48 + 32) )
            {
              ++v42->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
              v52 = v10 + 1;
              if ( *(_DWORD *)(v48 + 36) < v52 )
                *(_DWORD *)(v48 + 36) = v52;
              if ( (_DWORD)v183 != 65570 )
              {
                if ( (_DWORD)v183 == 65586 )
                  *(_DWORD *)(v48 + 32) = 2;
                return;
              }
              v105 = *(_QWORD *)(v48 + 8);
              if ( v105 > 2 && *(_WORD *)(v48 + 24) == Group && *(_BYTE *)(v48 + 26) == (_BYTE)v175 )
                v106 = v184 - v105;
              else
                v106 = 0LL;
              if ( *(_QWORD *)v48 <= 1uLL
                || (v42->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                  + v42->SynchCounters.ExecutiveResourceReleaseSharedCount)
                 % EtwpExecutiveResourceContentionSampleRate )
              {
                v107 = *(_DWORD *)(v48 + 44);
                v108 = ContentionCount;
                if ( (ContentionCount <= v107 || (ContentionCount - v107) % EtwpExecutiveResourceContentionSampleRate)
                  && (v42->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                    + v42->SynchCounters.ExecutiveResourceReleaseSharedCount)
                   % EtwpExecutiveResourceReleaseSampleRate )
                {
                  goto LABEL_211;
                }
              }
              else
              {
                v108 = ContentionCount;
              }
              DWORD2(v192) = 65570;
              *(_QWORD *)&v192 = Resource;
              *(_QWORD *)&v190 = *(_QWORD *)(v48 + 8);
              DWORD2(v191) = *(_DWORD *)(v48 + 36);
              *((_QWORD *)&v190 + 1) = v106;
              *(_QWORD *)&v191 = *(_QWORD *)v48;
              HIDWORD(v192) = v108 - *(_DWORD *)(v48 + 44);
              v148 = &v190;
              HIDWORD(v191) = KeGetCurrentThread()[1].CurrentRunTime;
              goto LABEL_281;
            }
LABEL_211:
            *(_DWORD *)(v48 + 28) = 0;
            return;
          }
          ExFreePoolWithTag((PVOID)v47, 0);
          v44 = (unsigned int)v176;
          v46 = (int)v177;
        }
        v49 = 0LL;
        for ( m = 0; m < 8; ++m )
        {
          v51 = *(_DWORD *)(v45 + 28);
          if ( v51 == v44 && *(PERESOURCE *)(v45 + 16) == Resource && *(_DWORD *)(v45 + 40) == v46 )
            goto LABEL_87;
          if ( !v49 )
          {
            if ( v51 )
            {
              if ( *(_DWORD *)(v45 + 40) < v46 )
              {
                v49 = v45;
                break;
              }
            }
            else
            {
              v49 = v45;
            }
          }
          v45 += 64LL;
        }
        v45 = v49;
        if ( v49 )
        {
          *(_QWORD *)(v49 + 16) = Resource;
          *(_DWORD *)(v49 + 28) = v44;
          *(_QWORD *)(v49 + 32) = 0LL;
          *(_QWORD *)v49 = 0LL;
          *(_QWORD *)(v49 + 8) = 0LL;
          *(_DWORD *)(v49 + 24) = 0;
          *(_DWORD *)(v49 + 40) = v46;
          *(_DWORD *)(v49 + 44) = 0;
        }
LABEL_87:
        v48 = v45;
        if ( v45 )
          goto LABEL_88;
      }
    }
  }
}
