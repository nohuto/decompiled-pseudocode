/*
 * XREFs of RtlAllocateHeap @ 0x180011260
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800011F0 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlLockModuleSection @ 0x180001DD0 (RtlLockModuleSection.c)
 *     WerpGlobalFlagsForProcess @ 0x1800020A0 (WerpGlobalFlagsForProcess.c)
 *     LdrpAddNodeServiceTag @ 0x180004D7C (LdrpAddNodeServiceTag.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpAcquireTlsIndex @ 0x180006038 (LdrpAcquireTlsIndex.c)
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     LdrpGetNewTlsVector @ 0x18000681C (LdrpGetNewTlsVector.c)
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrpAllocateTlsEntry @ 0x18000776C (LdrpAllocateTlsEntry.c)
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpAllocateModuleEntry @ 0x180010680 (LdrpAllocateModuleEntry.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180011160 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpAllocateTls @ 0x180012580 (LdrpAllocateTls.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     LdrpFastpthReloadedDll @ 0x180019870 (LdrpFastpthReloadedDll.c)
 *     TpAllocWork @ 0x18001BE50 (TpAllocWork.c)
 *     EtwpTrackBinaryForSession @ 0x18001C2A0 (EtwpTrackBinaryForSession.c)
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 *     ProviderHandleInsert @ 0x18001D670 (ProviderHandleInsert.c)
 *     EtwpRegisterProvider @ 0x18001DD30 (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x18001DFF0 (EtwpNotificationThread.c)
 *     EtwpEventApiCallback @ 0x18001EC50 (EtwpEventApiCallback.c)
 *     RtlpWnfNotificationThread @ 0x18001FCF0 (RtlpWnfNotificationThread.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpAddNeutralsToMergedList @ 0x180033B90 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180034340 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180034D6C (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180035280 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpUpdateTEBLanguage @ 0x1800355A0 (RtlpUpdateTEBLanguage.c)
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180035F10 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpHeapTrkTrackStack @ 0x18003C500 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x18003C7F0 (RtlpHeapTrkTrackAdd.c)
 *     EtwpRelogEvent @ 0x18003D220 (EtwpRelogEvent.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18003DEE0 (RtlpAllocateActivationContextStackFrame.c)
 *     EtwpFinalizeLogFileHeader @ 0x18003ED60 (EtwpFinalizeLogFileHeader.c)
 *     RtlpPushPageDescriptor @ 0x18003F524 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x18004156C (RtlpSetBlockInfo.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180045990 (RtlpValidateRemoteDebugInformation.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18005F120 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrAddLoadAsDataTable @ 0x180064190 (LdrAddLoadAsDataTable.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180066090 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     TpAllocCleanupGroup @ 0x180069DA0 (TpAllocCleanupGroup.c)
 *     TpSimpleTryPost @ 0x18006A740 (TpSimpleTryPost.c)
 *     TpAllocTimer @ 0x18006CE10 (TpAllocTimer.c)
 *     RtlCreateTimer @ 0x18006D040 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     LdrpCheckModule @ 0x180071380 (LdrpCheckModule.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800714E0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x180071C30 (RtlInsertElementGenericTableAvl.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800745A0 (LdrpLogNewDllLoadInternal.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 *     LdrpLogEtwDllSearchResults @ 0x180076294 (LdrpLogEtwDllSearchResults.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800766F0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180077E08 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078610 (RtlpCreateNewDirectoryReference.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18007A580 (LdrpResSearchResourceInsideDirectory.c)
 *     RtlGetUILanguageInfo @ 0x18007B9D0 (RtlGetUILanguageInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18007C4E0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18007D170 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpInitializeUserList @ 0x18007D9E0 (RtlpInitializeUserList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18007E2D0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpIsQualifiedLanguage @ 0x1800806B0 (RtlpIsQualifiedLanguage.c)
 *     IdnaMemAlloc @ 0x180080824 (IdnaMemAlloc.c)
 *     RtlCreateActivationContext @ 0x180080BB0 (RtlCreateActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180081010 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800813A4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180082004 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlDosSearchPath_U @ 0x180082890 (RtlDosSearchPath_U.c)
 *     RtlCreateEnvironmentEx @ 0x180082D50 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x180083998 (RtlpAllocateEnvBlock.c)
 *     RtlpComputePath @ 0x180084760 (RtlpComputePath.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180085B9C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x180086250 (RtlpScanEnvironment.c)
 *     RtlpAllocateEnvironmentHashTable @ 0x180086E48 (RtlpAllocateEnvironmentHashTable.c)
 *     _IsProgramFilesPath @ 0x180086E7C (_IsProgramFilesPath.c)
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18008A254 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetNextAvailableLoggerId @ 0x18008D230 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x18008D330 (EtwpInitLoggerContext.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x18008D9BC (EtwpFillProcessorStreamIndexMap.c)
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 *     RtlpCreateSerializationGroup @ 0x180097970 (RtlpCreateSerializationGroup.c)
 *     RtlpFcAllocateChangeRegistration @ 0x180097C08 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpCreateWnfUserSubscription @ 0x180099984 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x180099A4C (RtlpCreateWnfNameSubscription.c)
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     RtlDebugAllocateHeap @ 0x18009CC30 (RtlDebugAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlCreateTagHeap @ 0x1800A5370 (RtlCreateTagHeap.c)
 *     TppQueryMaximumGroupCount @ 0x1800A5614 (TppQueryMaximumGroupCount.c)
 *     CsrAllocateCaptureBuffer @ 0x1800A6CD0 (CsrAllocateCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x1800A7080 (CsrpConnectToServer.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     RtlpProcessHeapsInsert @ 0x1800A8C18 (RtlpProcessHeapsInsert.c)
 *     RtlpExtendFrontEndUsageArray @ 0x1800A8FBC (RtlpExtendFrontEndUsageArray.c)
 *     RtlpAllocateListLookup @ 0x1800A9350 (RtlpAllocateListLookup.c)
 *     RtlpExtendListLookup @ 0x1800A9610 (RtlpExtendListLookup.c)
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x1800ABAAC (TppPoolUpdateNodeRelation.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlAllocateHandle @ 0x1800AEB70 (RtlAllocateHandle.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800AEFD8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800AF614 (RtlpUpcaseUnicodeStringPrivate.c)
 *     GetModuleFullPathName @ 0x1800AFB48 (GetModuleFullPathName.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B2D20 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x1800B3204 (QueryRegistryValue.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800B3A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800B4D10 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x1800B5184 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x1800B532C (EtwpGetRegDwordValue.c)
 *     RtlGetAppContainerParent @ 0x1800B5720 (RtlGetAppContainerParent.c)
 *     RtlpFlsHeapAlloc @ 0x1800B9618 (RtlpFlsHeapAlloc.c)
 *     RtlpNameprepAsciiWorker @ 0x1800B9CC0 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToAscii @ 0x1800BA110 (RtlIdnToAscii.c)
 *     RtlCanonicalizeDomainName @ 0x1800BA3D0 (RtlCanonicalizeDomainName.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800BB490 (RtlpIdnToUnicodeWorker.c)
 *     RtlpGetNormalization @ 0x1800BC244 (RtlpGetNormalization.c)
 *     RtlpTpIoAlloc @ 0x1800BEC44 (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800BF070 (TpAllocJobNotification.c)
 *     TppAllocAlpcCompletion @ 0x1800BF374 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800BF6A0 (TpAllocIoCompletion.c)
 *     RtlInsertElementGenericTable @ 0x1800BFF40 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800C00C0 (RtlInsertElementGenericTableFull.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800C6760 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1800C69DC (RtlpCreateServerAcl.c)
 *     RtlpComputeMergedAcl @ 0x1800C6C64 (RtlpComputeMergedAcl.c)
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C8C40 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C90B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1800CB040 (RtlpCombineAcls.c)
 *     RtlpInheritAcl @ 0x1800CB760 (RtlpInheritAcl.c)
 *     RtlDefaultNpAcl @ 0x1800CD980 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x1800CE250 (RtlCreateAndSetSD.c)
 *     RtlpSysVolAllocate @ 0x1800CE870 (RtlpSysVolAllocate.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpResSearchResourceHandle @ 0x1800D1ACC (LdrpResSearchResourceHandle.c)
 *     _MuiRegAllocArray @ 0x1800D2690 (_MuiRegAllocArray.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800D6E50 (RtlpFcNotifyFeatureUsageTarget.c)
 *     LdrpLoadEnclaveModule @ 0x1800D9218 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D96C0 (LdrpAllocatePlaceHolder.c)
 *     LdrpCreateLangFallbackList @ 0x1800DA720 (LdrpCreateLangFallbackList.c)
 *     LdrpRecordModuleDependency @ 0x1800DB8A0 (LdrpRecordModuleDependency.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800DCC30 (LdrpLogDelayLoadTrigger.c)
 *     LdrpBuildForwarderLink @ 0x1800DF720 (LdrpBuildForwarderLink.c)
 *     RtlInstallFunctionTableCallback @ 0x1800E0D10 (RtlInstallFunctionTableCallback.c)
 *     LdrpRecordUnloadEvent @ 0x1800E3290 (LdrpRecordUnloadEvent.c)
 *     RtlAllocateAndInitializeSid @ 0x1800E4010 (RtlAllocateAndInitializeSid.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E51E8 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlExpandHashTable @ 0x1800E62F0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1800E6534 (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800E669C (RtlpAllocateSecondLevelDir.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E6A30 (RtlCreateProcessParametersInternal.c)
 *     _SafeAllocBlob @ 0x1800E7470 (_SafeAllocBlob.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E7DE0 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpSetProviderTraits @ 0x1800E8690 (EtwpSetProviderTraits.c)
 *     LdrpQueryValueKey @ 0x1800E8D50 (LdrpQueryValueKey.c)
 *     RtlAcquirePrivilege @ 0x1800E9050 (RtlAcquirePrivilege.c)
 *     EtwpCreateRegGuidsContext @ 0x1800EA2D0 (EtwpCreateRegGuidsContext.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800EA9C0 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EB31C (RtlpMuiRegLoadLicInformation.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800EBF30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpDupTebLanguageList @ 0x1800EC0D4 (RtlpDupTebLanguageList.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800EDFB0 (TpSetDefaultPoolStackInformation.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EE9F8 (EtwpReceiveReplyDataBlock.c)
 *     TppAllocThreadData @ 0x1800EF610 (TppAllocThreadData.c)
 *     RtlpAllocateHeapMetadata @ 0x1800F0330 (RtlpAllocateHeapMetadata.c)
 *     SaferpIsDllAllowed @ 0x1800F04FC (SaferpIsDllAllowed.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800F1210 (RtlCreateBoundaryDescriptor.c)
 *     RtlAddFunctionTable @ 0x1800F1F70 (RtlAddFunctionTable.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800F22A8 (SbpRetrieveCompatibilityManifest.c)
 *     RtlpNtQueryValueKey @ 0x1800F3600 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F3BC4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800F3DB4 (TppPoolUpdateTrimmedWorker.c)
 *     EvtIntReportEventWorker @ 0x1800F4050 (EvtIntReportEventWorker.c)
 *     RtlCopySecurityDescriptor @ 0x1800F4EE0 (RtlCopySecurityDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F5610 (RtlpNtEnumerateSubKey.c)
 *     TpTrimPools @ 0x1800F57E0 (TpTrimPools.c)
 *     RtlpInitParameterBlock @ 0x1800F6818 (RtlpInitParameterBlock.c)
 *     RtlpInitializeWnf @ 0x1800F73B8 (RtlpInitializeWnf.c)
 *     RtlAllocateActivationContextStack @ 0x1800F9330 (RtlAllocateActivationContextStack.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F980C (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F9A50 (LdrpAllocateSchedulerSharedData.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 *     RtlSetCurrentDirectory_U @ 0x1800FAB90 (RtlSetCurrentDirectory_U.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeSnapsBuffer @ 0x1800FB3AC (LdrpInitializeSnapsBuffer.c)
 *     LdrpInitializePatchData @ 0x1800FB56C (LdrpInitializePatchData.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RtlCreateTimerQueue @ 0x180106E00 (RtlCreateTimerQueue.c)
 *     RtlpInitializeLeakDetection @ 0x18010A7C8 (RtlpInitializeLeakDetection.c)
 *     RtlStartRXact @ 0x18010AB30 (RtlStartRXact.c)
 *     LdrRegisterDllNotification @ 0x18010AE40 (LdrRegisterDllNotification.c)
 *     RtlAddAttributeActionToRXact @ 0x18010B220 (RtlAddAttributeActionToRXact.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     EtwpAllocateUmGuidEntry @ 0x18010C304 (EtwpAllocateUmGuidEntry.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 *     LdrpCheckPagesForTampering @ 0x18010DBB4 (LdrpCheckPagesForTampering.c)
 *     RtlSetFeatureConfigurations @ 0x1801116E0 (RtlSetFeatureConfigurations.c)
 *     LdrpCreateSoftwareEnclave @ 0x180111BD4 (LdrpCreateSoftwareEnclave.c)
 *     EtwpInitializeCompression @ 0x180112360 (EtwpInitializeCompression.c)
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1801138EC (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x1801141F0 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlpCheckDeviceName @ 0x1801145F0 (RtlpCheckDeviceName.c)
 *     RtlpLookupSafeCurDirList @ 0x1801146A8 (RtlpLookupSafeCurDirList.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180116698 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180116C48 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x180116FC0 (RtlpMuiRegCreateRegistryInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180117D74 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     AVrfpParseVerifierDllsString @ 0x180117F30 (AVrfpParseVerifierDllsString.c)
 *     EtwpTrackDebugIdForSession @ 0x1801184BC (EtwpTrackDebugIdForSession.c)
 *     RtlpGetPersistedRegistryLocation @ 0x180119720 (RtlpGetPersistedRegistryLocation.c)
 *     RtlInitializeExceptionLog @ 0x18011F59C (RtlInitializeExceptionLog.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1801203D0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180120540 (RtlpConvertCultureNamesToLCIDs.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180131860 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180131B50 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlEnableThreadProfiling @ 0x1801328C0 (RtlEnableThreadProfiling.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180134B40 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180134C04 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 *     RtlQueryModuleInformation @ 0x180138300 (RtlQueryModuleInformation.c)
 *     RtlAllocateAndInitializeSidEx @ 0x180138E60 (RtlAllocateAndInitializeSidEx.c)
 *     RtlIsUntrustedObject @ 0x180139110 (RtlIsUntrustedObject.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1801393B0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpConvertAclToAutoInherit @ 0x180139B00 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013A340 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x18013B100 (RtlAddResourceAttributeAce.c)
 *     RtlCheckBootStatusIntegrity @ 0x18013E0F0 (RtlCheckBootStatusIntegrity.c)
 *     RtlCreateBootStatusDataFile @ 0x18013E260 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013E774 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18013F11C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013F9D0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIGetAllInstalledLang @ 0x18014004C (RtlpMUIGetAllInstalledLang.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     _MuiRegAllocArray_0 @ 0x1801414A8 (_MuiRegAllocArray_0.c)
 *     RtlMultipleAllocateHeap @ 0x180141A00 (RtlMultipleAllocateHeap.c)
 *     RtlCompareExchangePointerMapping @ 0x180142ED0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180143020 (RtlCompareExchangePropertyStore.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180144970 (RtlRegisterSecureMemoryCacheCallback.c)
 *     __ft_array_insert @ 0x180146144 (__ft_array_insert.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x180146DE8 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlRcuAllocate @ 0x180147B30 (RtlRcuAllocate.c)
 *     RtlpRcuCurrentThreadData @ 0x180147E48 (RtlpRcuCurrentThreadData.c)
 *     RtlpGetWindowsPolicy @ 0x180148EF0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180149004 (RtlpMuiRegAddAlternateCodePage.c)
 *     UcpCreateTelemetryRecord @ 0x1801577D4 (UcpCreateTelemetryRecord.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180157A04 (UcpRetrieveCurrentConfigSettings.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18015E4D4 (RtlpEnsureTailingSlashAndAddToList.c)
 *     LdrpAddRedirectedFunction @ 0x180160C30 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlpAllocateNTHeapInternal @ 0x1800283A0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18004B138 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpAllocateHeapBackend @ 0x180051334 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180056390 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800A4EB0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpVsContextAllocate @ 0x1800ED0DC (RtlpHpVsContextAllocate.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801154C4 (RtlpAllocateHeapRaiseException.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180119830 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011CBF4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013C174 (RtlpHeapFatalExceptionFilter.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x180167000 (RtlHeapZero.c)
 */

__int64 __fastcall RtlAllocateHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  __int64 HeapSlow; // rdi
  int v7; // esi
  int *v8; // r15
  unsigned int v9; // r14d
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // r14
  struct _TEB *v27; // r9
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int16 v32; // r15
  __int64 v33; // rax
  __int64 *v34; // r8
  __int64 v35; // r14
  int v36; // r9d
  __int64 *v37; // rcx
  __int64 *v38; // rdi
  __int64 v39; // r10
  unsigned int v43; // ecx
  __int16 v44; // cx
  signed __int64 i; // rbx
  signed __int64 v46; // rax
  unsigned __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rdi
  struct _TEB *v50; // r9
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rdx
  int v55; // r11d
  volatile signed __int64 *v56; // rdx
  __int64 v57; // rdi
  signed __int64 v58; // r9
  unsigned __int64 v60; // rax
  __int64 v64; // r8
  unsigned __int64 v67; // rax
  unsigned int v68; // eax
  signed __int64 v70; // rcx
  unsigned __int64 v71; // r8
  signed __int64 v72; // rax
  unsigned int v73; // esi
  __int64 v74; // rdi
  unsigned __int64 v75; // rdx
  __int16 v76; // cx
  signed __int64 v77; // rax
  char v78; // rcx^6
  unsigned __int64 v79; // rdx
  signed __int64 v80; // r10
  unsigned __int64 v81; // rdx
  __int64 v82; // rdx
  signed __int64 v83; // rax
  signed __int64 v84; // rtt
  __int64 v85; // rdx
  __int64 HeapBackend; // rax
  struct _TEB *v87; // rbx
  unsigned __int8 v90; // [rsp+30h] [rbp-148h]
  int v91; // [rsp+34h] [rbp-144h]
  unsigned int v92; // [rsp+38h] [rbp-140h]
  unsigned int v93; // [rsp+44h] [rbp-134h]
  unsigned __int16 v94; // [rsp+46h] [rbp-132h]
  int v95; // [rsp+48h] [rbp-130h]
  int v96; // [rsp+58h] [rbp-120h]
  __int64 v97; // [rsp+60h] [rbp-118h]
  int v98; // [rsp+64h] [rbp-114h]
  signed __int64 v99; // [rsp+68h] [rbp-110h]
  __int64 v100; // [rsp+80h] [rbp-F8h]
  unsigned __int8 v101; // [rsp+8Ch] [rbp-ECh]
  unsigned __int64 v102; // [rsp+A0h] [rbp-D8h]
  int *v104; // [rsp+C8h] [rbp-B0h]
  _DWORD v105[2]; // [rsp+D8h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-98h]
  unsigned __int64 v107; // [rsp+E8h] [rbp-90h]
  __int64 v108; // [rsp+F0h] [rbp-88h]
  __int64 v109; // [rsp+F8h] [rbp-80h]
  __int64 v110; // [rsp+100h] [rbp-78h]
  __int64 v111; // [rsp+108h] [rbp-70h]
  signed __int64 v112; // [rsp+110h] [rbp-68h]
  void *v113; // [rsp+118h] [rbp-60h] BYREF
  int v114; // [rsp+120h] [rbp-58h]
  int v115; // [rsp+124h] [rbp-54h]
  void *v116; // [rsp+128h] [rbp-50h]
  int v117; // [rsp+130h] [rbp-48h]
  int v118; // [rsp+134h] [rbp-44h]

  v5 = a1;
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, 0, 0, 0LL, 0LL);
  if ( *(_DWORD *)(v5 + 16) == -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 2) != 0 )
      return RtlpHpTagAllocateHeap(v5, a3, a2);
    if ( a2 )
    {
      if ( a2 == 8 )
      {
        v7 = 2;
      }
      else
      {
        v7 = 0;
        if ( (a2 & 8) != 0 )
          v7 = 2;
        v91 = v7;
        if ( (a2 & 4) != 0 )
        {
          v7 |= 0x80000000;
          v91 = v7;
        }
        if ( (a2 & 0x100) != 0 )
        {
          v7 |= 0x100u;
          v91 = v7;
        }
        if ( (a2 & 0xE00) != 0 )
        {
          v7 |= a2 & 0xE00;
          v91 = v7;
        }
        if ( (a2 & 0x10) == 0 )
        {
LABEL_21:
          v8 = (int *)(v5 + 20);
          v104 = (int *)(v5 + 20);
          __writegsqword(0x1858u, v5 + 20);
          v9 = ((unsigned __int16)v7 | (unsigned __int16)*(_DWORD *)(v5 + 20)) & 0x2FFA;
          v92 = v9;
          if ( (((unsigned __int16)v7 | (unsigned __int16)*(_DWORD *)(v5 + 20)) & 0x2FF8) != 0 )
          {
            if ( (v9 & 0x10) != 0 && *(_DWORD *)(v5 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
              RtlpHpEnvAcquireGlobalLockSharedContended(
                v5 + 20,
                ((unsigned __int16)v7 | (unsigned __int16)*(_DWORD *)(v5 + 20)) & 0x2FFA);
            HeapSlow = RtlpHpAllocateHeapSlow(v5, a3, v9);
            goto LABEL_128;
          }
          v10 = 1LL;
          if ( a3 > 1 )
            v10 = a3;
          v102 = v10;
          v107 = v10;
          if ( v10 >= *(unsigned __int16 *)(v5 + 900) )
          {
            v85 = (unsigned int)a3;
            goto LABEL_121;
          }
          v11 = v5 + 832;
          v12 = v10 + 2;
          if ( (_DWORD)a3 == (_DWORD)v10 )
            v12 = v10;
          v13 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v12 + 15) >> 4] - 1;
          v14 = *(unsigned __int16 *)(v5 + 908);
          if ( v14 >= 0x40 )
          {
            TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
            if ( TlsExpansionSlots )
              v15 = (__int64)TlsExpansionSlots[v14 - 64];
            else
              v15 = 0LL;
          }
          else
          {
            v15 = __readgsqword(8 * v14 + 5248);
            v108 = v15;
          }
          if ( !v15 )
            v15 = RtlpHpLfhThreadDataInitializeSet(v5 + 832);
          v101 = BYTE4(v15);
          v109 = v15;
          v17 = v11 + ((unsigned __int16)v15 << 6);
          v18 = *(unsigned __int16 *)(v17 + 2 * v13);
          if ( !*(_WORD *)(v17 + 2 * v13) )
          {
            if ( !RtlpHpLfhBucketCheckAndUpdate(v11, (unsigned int)v13, v18) )
            {
              HeapSlow = -1LL;
LABEL_111:
              v85 = (unsigned int)a3;
              if ( HeapSlow != -1 )
              {
LABEL_127:
                v7 = v91;
                v8 = v104;
LABEL_128:
                __writegsqword(0x1858u, 0LL);
                if ( !HeapSlow )
                {
                  v87 = NtCurrentTeb();
                  v87->LastStatusValue = -1073741801;
                  v87->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225495LL);
                  if ( v7 < 0 || *v8 < 0 )
                    RtlpAllocateHeapRaiseException(a3);
                }
                return HeapSlow;
              }
              v5 = a1;
LABEL_121:
              if ( v10 > 0x20000 )
              {
                if ( v10 > *(unsigned int *)(v5 + 528) )
                  HeapBackend = RtlpHpLargeAlloc(v5, a3, v10, v9);
                else
                  HeapBackend = RtlpHpAllocateHeapBackend(v5, a3, v10, v9);
              }
              else
              {
                HeapBackend = RtlpHpVsContextAllocate(v5 + 704, v85, (unsigned int)v10, v9);
              }
              HeapSlow = HeapBackend;
              goto LABEL_127;
            }
            v19 = v11 + ((unsigned __int64)v101 << 8) + 1472;
            LODWORD(v18) = *(unsigned __int16 *)(2 * v13 + v19);
            if ( v17 != v19 )
              *(_WORD *)(v17 + 2 * v13) = *(_WORD *)(2 * v13 + v19);
          }
          v20 = v11 + (unsigned int)((_DWORD)v18 << 6);
          v100 = v20;
          if ( *(_WORD *)(v20 + 4) )
          {
            v21 = *(_QWORD *)(v20 + 56);
            if ( (v21 & 0xFFF) == 0 )
            {
              HeapSlow = RtlpHpLfhSlotAllocateSlow(v11);
              goto LABEL_111;
            }
            v22 = v21 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(v20 + 56) = v21 - 1;
            v23 = qword_1801CDEC8 ^ *(_DWORD *)((v21 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v21 & 0xFFFFFFFFFFFFF000uLL) >> 12);
            v24 = (unsigned __int16)v23;
            v94 = HIWORD(v23);
            v25 = 0x100000001LL;
            if ( (unsigned int)a3 >= (unsigned __int16)v23 )
              v25 = 1LL;
            v26 = (unsigned int)*(unsigned __int8 *)(v22 + 24) - 8;
            v27 = NtCurrentTeb();
            v28 = v27->RngState[0];
            v29 = v27->RngState[1];
            v30 = (v29 + v28) >> 32;
            v31 = v28 ^ v29;
            v27->RngState[0] = v31 ^ (v31 << 16) ^ __ROL8__(v28, 24);
            v27->RngState[1] = __ROL8__(v31, 37);
            v32 = (unsigned __int8)v30;
            v33 = *(unsigned __int8 *)(v22 + 36);
            v34 = (__int64 *)(v22 + 64 + 8 * v33);
            v35 = v22 + 64 + 8 * (v26 - 1);
            v36 = v22 + 64 + 8 * v33;
            v37 = v34;
            v38 = v34;
            while ( 1 )
            {
              v39 = *v34;
              v110 = v39;
              v111 = (unsigned int)~(_DWORD)v39;
              if ( (_DWORD)v39 != -1 )
                break;
              if ( v37 == (__int64 *)v35 )
              {
                v34 = (__int64 *)(v22 + 64);
                v37 = (__int64 *)(v22 + 64);
                v38 = (__int64 *)(v22 + 64);
                v36 = v22 + 64;
              }
              else
              {
                v34 = v38 + 1;
                v37 = v34;
                ++v38;
                v36 = (int)v34;
              }
            }
            _RAX = 1LL << ((unsigned __int16)(v32 * __popcnt((unsigned int)~(_DWORD)v39)) >> 8);
            __asm
            {
              pdep    rcx, rax, rdx
              tzcnt   rdx, rcx
            }
            *v34 = (v25 << _RDX) | v39;
            v43 = _RDX + 4 * (v36 - (v22 + 64));
            *(_BYTE *)(v22 + 36) = v43 >> 5;
            HeapSlow = v22 + v94 + v43 * (unsigned int)v24;
            v9 = v92;
            if ( (v92 & 2) != 0 )
              RtlHeapZero(v22 + v94 + v43 * (unsigned int)v24, ((unsigned int)a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (unsigned int)a3 < (unsigned int)v24 )
            {
              v44 = v24 - a3;
              if ( (_DWORD)v24 - (_DWORD)a3 == 1 )
                v44 = 0x8000;
              *(_WORD *)(v24 + HeapSlow - 2) = v44;
            }
LABEL_110:
            v10 = v102;
            goto LABEL_111;
          }
          v95 = 0;
          _m_prefetchw((const void *)(v20 + 56));
          for ( i = *(_QWORD *)(v20 + 56); ; i = v46 )
          {
            if ( (i & 0xFFF) == 0 )
            {
              HeapSlow = RtlpHpLfhSlotAllocateSlow(v11);
              goto LABEL_110;
            }
            v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 56), i - 1, i);
            if ( i == v46 )
              break;
            v95 = 1;
          }
          v47 = i & 0xFFFFFFFFFFFFF000uLL;
          v96 = qword_1801CDEC8 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
          v48 = 0x100000001LL;
          if ( (unsigned int)a3 >= (unsigned __int16)v96 )
            v48 = 1LL;
          v97 = v48;
          v49 = (unsigned int)*(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
          v50 = NtCurrentTeb();
          v51 = v50->RngState[0];
          v52 = v50->RngState[1];
          v53 = (v52 + v51) >> 32;
          v54 = v51 ^ v52;
          v50->RngState[0] = v54 ^ (v54 << 16) ^ __ROL8__(v51, 24);
          v50->RngState[1] = __ROL8__(v54, 37);
          v55 = (unsigned __int8)v53;
          v93 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
          v90 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
          v56 = (volatile signed __int64 *)(v47 + 64 + 8LL * *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24));
          v57 = v47 + 64 + 8 * (v49 - 1);
          while ( 1 )
          {
            v58 = *v56;
            _R8 = (unsigned int)~*(_DWORD *)v56;
            if ( (unsigned int)*v56 != -1 )
              break;
LABEL_114:
            if ( v56 == (volatile signed __int64 *)v57 )
              v56 = (volatile signed __int64 *)(v47 + 64);
            else
              ++v56;
          }
          v60 = (unsigned int)_R8;
          while ( 1 )
          {
            if ( (qword_1801CDEE8 & 4) != 0 )
            {
              _RAX = 1LL << ((unsigned __int16)(v55 * __popcnt(v60)) >> 8);
              __asm
              {
                pdep    rcx, rax, rcx
                tzcnt   r10, rcx
              }
              v64 = v97 << _R10;
            }
            else
            {
              if ( v56 == (volatile signed __int64 *)v57 || v93 != 32 )
              {
                __asm { tzcnt   rcx, r8 }
                _BitScanReverse64(&v67, _R8);
                v68 = v67 - _RCX + 1;
                if ( v93 < v68 )
                  v68 = v93;
                v55 = _RCX + ((v68 * v55) >> 8);
                _R8 = __ROR8__(_R8, v55);
                __asm { tzcnt   r10, r8 }
                LODWORD(_R10) = v55 + _R10;
              }
              else
              {
                _RAX = (unsigned int)__ROR4__(_R8, v55);
                __asm { tzcnt   r10, rax }
                LODWORD(_R10) = ((_BYTE)v55 + (_BYTE)_R10) & 0x1F;
              }
              v64 = v97 << _R10;
            }
            v70 = v58;
            v71 = v58 | v64;
            v72 = _InterlockedCompareExchange64(v56, v71, v58);
            v58 = v72;
            if ( v72 == v70 )
              break;
            v60 = (unsigned int)~(_DWORD)v72;
            _R8 = (unsigned int)v60;
            if ( !(_DWORD)v60 )
              goto LABEL_114;
          }
          v73 = _R10 + 4 * ((_DWORD)v56 - (v47 + 64));
          *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v73 >> 5;
          v74 = HIWORD(v96) + v73 * (unsigned __int16)v96;
          if ( v90 <= 1u )
          {
            if ( v73 > *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
              RtlpHpLfhSubsegmentPrefetch(v11, i & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v74, (unsigned __int16)v96);
          }
          else if ( (int)RtlpHpLfhSubsegmentCommitBlock(v11, i & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v74) < 0 )
          {
            HeapSlow = 0LL;
            if ( v73 != -1 )
            {
              v71 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v73 & 0x1F);
              v75 = v47 + 8LL * (v73 >> 5);
              _m_prefetchw((const void *)(v75 + 64));
              v112 = _InterlockedAnd64((volatile signed __int64 *)(v75 + 64), v71);
            }
LABEL_89:
            if ( !HeapSlow )
            {
              v77 = *(_QWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x10);
              v98 = HIDWORD(v77);
              v78 = BYTE6(v77);
              v71 = v77;
              v79 = v77;
              v58 = v77;
              v80 = v77;
              while ( 1 )
              {
                v99 = v77;
                if ( v78 == 1 )
                {
                  BYTE6(v99) = 2;
                  v71 = v79;
                  v58 = v80;
                }
                WORD1(v99) = WORD1(v77) + 1;
                v81 = (unsigned __int64)*(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x2C) << 6;
                v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 16), v99, v71);
                if ( v77 == v58 )
                  break;
                v98 = HIDWORD(v77);
                v80 = v77;
                v58 = v77;
                v79 = v77;
                v71 = v77;
                v78 = BYTE6(v77);
              }
              if ( !*(_BYTE *)(v81 + v11 + 92) )
              {
                *(_BYTE *)(v81 + v11 + 92) = 1;
                if ( !(_DWORD)qword_1801CE278 )
                {
                  if ( qword_1801CE268 )
                  {
                    if ( byte_1801D2908 == (_BYTE)qword_1801CE278
                      && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CE278, 1, 0) )
                    {
                      TpSetTimerEx(qword_1801CE268, &qword_1801CE270, 0LL, 1000LL);
                      if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CC670 > 5 )
                      {
                        v105[0] = 184549376;
                        v105[1] = 5;
                        v106 = 0LL;
                        v113 = off_1801CC678;
                        v114 = *(unsigned __int16 *)off_1801CC678;
                        v115 = 2;
                        v116 = &unk_1801A23DE;
                        v117 = 25;
                        v118 = 1;
                        EtwEventWriteTransfer(qword_1801CC690, (unsigned int)v105, 0, 0, 2, (__int64)&v113);
                      }
                    }
                  }
                }
              }
              if ( BYTE2(v98) == 1 )
              {
                v82 = v11 + ((unsigned __int16)v98 << 6);
                _m_prefetchw((const void *)(v82 + 8));
                v71 = *(_QWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18);
                v83 = *(_QWORD *)(v82 + 8);
                do
                {
                  *(_QWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18) = v71 ^ (v83 ^ v71) & 0xFFFFFFFFFFFFF000uLL;
                  v84 = v83;
                  v83 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(v82 + 8),
                          v83 ^ (i ^ v83) & 0xFFFFFFFFFFFFF000uLL,
                          v83);
                }
                while ( v84 != v83 );
              }
            }
            if ( v95 )
              RtlpHpLfhBucketUpdateAffinityMapping(
                v11,
                v11 + ((unsigned __int64)*(unsigned __int16 *)(v100 + 2) << 6),
                v71,
                v58);
            v9 = v92;
            goto LABEL_110;
          }
          HeapSlow = v47 + v74;
          if ( (v92 & 2) != 0 )
            RtlHeapZero(HeapSlow, ((unsigned int)a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( (unsigned int)a3 < (unsigned __int16)v96 )
          {
            v76 = v96 - a3;
            if ( (unsigned __int16)v96 - (_DWORD)a3 == 1 )
              v76 = 0x8000;
            *(_WORD *)((unsigned __int16)v96 + HeapSlow - 2) = v76;
          }
          goto LABEL_89;
        }
        v7 |= 0x10000000u;
      }
    }
    else
    {
      v7 = 0;
    }
    v91 = v7;
    goto LABEL_21;
  }
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagAllocateHeap(v5, a3, a2);
  else
    return RtlpAllocateNTHeapInternal((void *)v5);
}
