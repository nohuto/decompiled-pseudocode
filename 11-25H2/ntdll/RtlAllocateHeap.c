/*
 * XREFs of RtlAllocateHeap @ 0x180050340
 * Callers:
 *     RtlpCreateSerializationGroup @ 0x180002FE0 (RtlpCreateSerializationGroup.c)
 *     RtlpFcAllocateChangeRegistration @ 0x180003278 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpCreateWnfUserSubscription @ 0x180004FF4 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800050BC (RtlpCreateWnfNameSubscription.c)
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     LdrpAddNodeServiceTag @ 0x18000796C (LdrpAddNodeServiceTag.c)
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpFlsHeapAlloc @ 0x18000A748 (RtlpFlsHeapAlloc.c)
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001AD80 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrAddLoadAsDataTable @ 0x18001FDF0 (LdrAddLoadAsDataTable.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     LdrpGetNewTlsVector @ 0x18002099C (LdrpGetNewTlsVector.c)
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpAllocateTlsEntry @ 0x1800236B8 (LdrpAllocateTlsEntry.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800239B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlAddGrowableFunctionTable @ 0x180024410 (RtlAddGrowableFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     LdrpAcquireTlsIndex @ 0x180025310 (LdrpAcquireTlsIndex.c)
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlCreateTagHeap @ 0x1800341B0 (RtlCreateTagHeap.c)
 *     TppQueryMaximumGroupCount @ 0x180034454 (TppQueryMaximumGroupCount.c)
 *     CsrAllocateCaptureBuffer @ 0x180035B10 (CsrAllocateCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlpProcessHeapsInsert @ 0x180037A58 (RtlpProcessHeapsInsert.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180037DFC (RtlpExtendFrontEndUsageArray.c)
 *     RtlpAllocateListLookup @ 0x180038190 (RtlpAllocateListLookup.c)
 *     RtlpExtendListLookup @ 0x180038450 (RtlpExtendListLookup.c)
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x18003AF88 (TppPoolUpdateNodeRelation.c)
 *     TpAllocIoCompletion @ 0x18003B2C0 (TpAllocIoCompletion.c)
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     RtlpWnfNotificationThread @ 0x180040FB0 (RtlpWnfNotificationThread.c)
 *     EtwpEventApiCallback @ 0x180044EB0 (EtwpEventApiCallback.c)
 *     EtwpNotificationThread @ 0x1800451D0 (EtwpNotificationThread.c)
 *     EtwpRegisterProvider @ 0x180045330 (EtwpRegisterProvider.c)
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     ProviderHandleInsert @ 0x180045860 (ProviderHandleInsert.c)
 *     TpAllocTimer @ 0x1800461E0 (TpAllocTimer.c)
 *     EtwpTrackBinaryForSession @ 0x180046D70 (EtwpTrackBinaryForSession.c)
 *     TpAllocWork @ 0x180046F70 (TpAllocWork.c)
 *     LdrpFastpthReloadedDll @ 0x180047890 (LdrpFastpthReloadedDll.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpAllocateModuleEntry @ 0x18004F520 (LdrpAllocateModuleEntry.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180050240 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18005C790 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800608DC (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180060DC0 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180061230 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1800631C0 (RtlpCombineAcls.c)
 *     RtlpInheritAcl @ 0x1800638E0 (RtlpInheritAcl.c)
 *     RtlDefaultNpAcl @ 0x180065B00 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x180065F40 (RtlCreateAndSetSD.c)
 *     RtlpSysVolAllocate @ 0x180066560 (RtlpSysVolAllocate.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlAllocateHandle @ 0x180068460 (RtlAllocateHandle.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180068918 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180068FD4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     GetModuleFullPathName @ 0x180069508 (GetModuleFullPathName.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18006C6E0 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x18006CBC4 (QueryRegistryValue.c)
 *     LdrpLogNewDllLoadInternal @ 0x18006EE20 (LdrpLogNewDllLoadInternal.c)
 *     LdrpLogEtwDllSearchResults @ 0x18006F538 (LdrpLogEtwDllSearchResults.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     LdrpCheckModule @ 0x180071F80 (LdrpCheckModule.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800720E0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x180072830 (RtlInsertElementGenericTableAvl.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x180083460 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x1800838D4 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180083A7C (EtwpGetRegDwordValue.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180083D80 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetAppContainerParent @ 0x180084AF0 (RtlGetAppContainerParent.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180086A64 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpDupTebLanguageList @ 0x180087590 (RtlpDupTebLanguageList.c)
 *     RtlpInitializeUserList @ 0x180087740 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x180088970 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180088DA0 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180089780 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180089B50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18008C6FC (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpUpdateTEBLanguage @ 0x18008CF30 (RtlpUpdateTEBLanguage.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpHeapTrkTrackStack @ 0x18008FEF0 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800901E0 (RtlpHeapTrkTrackAdd.c)
 *     EtwpRelogEvent @ 0x180090C10 (EtwpRelogEvent.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x1800918D0 (RtlpAllocateActivationContextStackFrame.c)
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 *     RtlpPushPageDescriptor @ 0x180092F14 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x180094F5C (RtlpSetBlockInfo.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180099670 (RtlpValidateRemoteDebugInformation.c)
 *     LdrpBuildForwarderLink @ 0x18009EEC0 (LdrpBuildForwarderLink.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800A00DC (TppPoolUpdateTrimmedWorker.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800A04D4 (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlpCheckDeviceName @ 0x1800A0BCC (RtlpCheckDeviceName.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A11C0 (RtlSetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800A1CE0 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800A1E80 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A4B20 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 *     _MuiRegAllocArray @ 0x1800A7340 (_MuiRegAllocArray.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     LdrpCreateLangFallbackList @ 0x1800A9080 (LdrpCreateLangFallbackList.c)
 *     RtlpIsQualifiedLanguage @ 0x1800A9220 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     RtlDosSearchPath_U @ 0x1800AAC20 (RtlDosSearchPath_U.c)
 *     RtlCreateEnvironmentEx @ 0x1800AB0E0 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x1800ABD28 (RtlpAllocateEnvBlock.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x1800ADF2C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x1800AE5E0 (RtlpScanEnvironment.c)
 *     RtlpAllocateEnvironmentHashTable @ 0x1800AF1D8 (RtlpAllocateEnvironmentHashTable.c)
 *     _IsProgramFilesPath @ 0x1800AF20C (_IsProgramFilesPath.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800B31E4 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetNextAvailableLoggerId @ 0x1800B5EE0 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x1800B6868 (EtwpFillProcessorStreamIndexMap.c)
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 *     IdnaMemAlloc @ 0x1800BEB6C (IdnaMemAlloc.c)
 *     RtlpNameprepAsciiWorker @ 0x1800BED20 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToAscii @ 0x1800BF170 (RtlIdnToAscii.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800C04F0 (RtlpIdnToUnicodeWorker.c)
 *     RtlpGetNormalization @ 0x1800C12A4 (RtlpGetNormalization.c)
 *     RtlInsertElementGenericTable @ 0x1800C44D0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800C4650 (RtlInsertElementGenericTableFull.c)
 *     RtlpTpIoAlloc @ 0x1800C4B54 (RtlpTpIoAlloc.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x1800C8758 (PsspCaptureHandleInformation.c)
 *     WerpGlobalFlagsForProcess @ 0x1800CFC84 (WerpGlobalFlagsForProcess.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D1D10 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B8 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D9660 (LdrpAllocatePlaceHolder.c)
 *     LdrpRecordModuleDependency @ 0x1800DAF80 (LdrpRecordModuleDependency.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DE0B0 (RtlInstallFunctionTableCallback.c)
 *     LdrpRecordUnloadEvent @ 0x1800DFF40 (LdrpRecordUnloadEvent.c)
 *     RtlAllocateAndInitializeSid @ 0x1800E10D0 (RtlAllocateAndInitializeSid.c)
 *     RtlCreateActivationContext @ 0x1800E1EF0 (RtlCreateActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800E2350 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800E26E4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800E3344 (RtlpInsertAssemblyStorageMapEntry.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E41B8 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlExpandHashTable @ 0x1800E53B0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1800E55F4 (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800E575C (RtlpAllocateSecondLevelDir.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E5B00 (RtlCreateProcessParametersInternal.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 *     RtlpComputeMergedAcl @ 0x1800E8468 (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1800E85A8 (RtlpCreateServerAcl.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800E8934 (RtlpValidOwnerSubjectContext.c)
 *     _SafeAllocBlob @ 0x1800E8BB0 (_SafeAllocBlob.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E9520 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpSetProviderTraits @ 0x1800E9BD0 (EtwpSetProviderTraits.c)
 *     LdrpQueryValueKey @ 0x1800EA0C0 (LdrpQueryValueKey.c)
 *     RtlAcquirePrivilege @ 0x1800EA3C0 (RtlAcquirePrivilege.c)
 *     TpSimpleTryPost @ 0x1800EB150 (TpSimpleTryPost.c)
 *     EtwpCreateRegGuidsContext @ 0x1800EB690 (EtwpCreateRegGuidsContext.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800EBE10 (RtlpLowFragHeapAllocateFromZone.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EFBE8 (EtwpReceiveReplyDataBlock.c)
 *     RtlLockModuleSection @ 0x1800F0370 (RtlLockModuleSection.c)
 *     TppAllocThreadData @ 0x1800F0D70 (TppAllocThreadData.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800F0E10 (TpSetDefaultPoolStackInformation.c)
 *     RtlpAllocateHeapMetadata @ 0x1800F1BE0 (RtlpAllocateHeapMetadata.c)
 *     SaferpIsDllAllowed @ 0x1800F1DAC (SaferpIsDllAllowed.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800F2D80 (RtlCreateBoundaryDescriptor.c)
 *     RtlAddFunctionTable @ 0x1800F3AE0 (RtlAddFunctionTable.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800F3E18 (SbpRetrieveCompatibilityManifest.c)
 *     RtlpNtQueryValueKey @ 0x1800F5170 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F5954 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     EvtIntReportEventWorker @ 0x1800F5D70 (EvtIntReportEventWorker.c)
 *     RtlCopySecurityDescriptor @ 0x1800F6AC0 (RtlCopySecurityDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F7190 (RtlpNtEnumerateSubKey.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 *     RtlpInitParameterBlock @ 0x1800F84E8 (RtlpInitParameterBlock.c)
 *     RtlpInitializeWnf @ 0x1800F9018 (RtlpInitializeWnf.c)
 *     RtlAllocateActivationContextStack @ 0x1800FAF50 (RtlAllocateActivationContextStack.c)
 *     TpAllocCleanupGroup @ 0x1800FB3A0 (TpAllocCleanupGroup.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800FB5AC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800FB7F0 (LdrpAllocateSchedulerSharedData.c)
 *     RtlSetProtectedPolicy @ 0x1800FBDC0 (RtlSetProtectedPolicy.c)
 *     TpAllocJobNotification @ 0x1800FCCC0 (TpAllocJobNotification.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeSnapsBuffer @ 0x1800FD5DC (LdrpInitializeSnapsBuffer.c)
 *     LdrpInitializePatchData @ 0x1800FD79C (LdrpInitializePatchData.c)
 *     RtlpInitializeLeakDetection @ 0x1800FE428 (RtlpInitializeLeakDetection.c)
 *     RtlInitializeRXact @ 0x180108C20 (RtlInitializeRXact.c)
 *     RtlCreateTimerQueue @ 0x180109710 (RtlCreateTimerQueue.c)
 *     RtlStartRXact @ 0x18010D2C0 (RtlStartRXact.c)
 *     LdrRegisterDllNotification @ 0x18010D5A0 (LdrRegisterDllNotification.c)
 *     RtlAddAttributeActionToRXact @ 0x18010D8C0 (RtlAddAttributeActionToRXact.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     EtwpAllocateUmGuidEntry @ 0x18010E41C (EtwpAllocateUmGuidEntry.c)
 *     LdrAddDllDirectory @ 0x18010EA40 (LdrAddDllDirectory.c)
 *     LdrpCheckPagesForTampering @ 0x180110664 (LdrpCheckPagesForTampering.c)
 *     RtlSetFeatureConfigurations @ 0x1801147E0 (RtlSetFeatureConfigurations.c)
 *     LdrpCreateSoftwareEnclave @ 0x180114CD4 (LdrpCreateSoftwareEnclave.c)
 *     EtwpInitializeCompression @ 0x180115460 (EtwpInitializeCompression.c)
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18011687C (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x1801171A0 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1801175A0 (RtlpLookupSafeCurDirList.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180119F8C (LdrpSpecialCacheTypeHandle.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x18011A200 (RtlpMuiRegCreateRegistryInfo.c)
 *     AVrfpParseVerifierDllsString @ 0x18011AFB4 (AVrfpParseVerifierDllsString.c)
 *     EtwpTrackDebugIdForSession @ 0x18011B540 (EtwpTrackDebugIdForSession.c)
 *     RtlpGetPersistedRegistryLocation @ 0x18011C240 (RtlpGetPersistedRegistryLocation.c)
 *     RtlInitializeExceptionLog @ 0x180120E6C (RtlInitializeExceptionLog.c)
 *     RtlQueryRegistryValueWithFallback @ 0x180121CA0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180121E10 (RtlpConvertCultureNamesToLCIDs.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180133340 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180133630 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlEnableThreadProfiling @ 0x1801343A0 (RtlEnableThreadProfiling.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1801363F0 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1801364B4 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x180136750 (RtlComputeImportTableHash.c)
 *     RtlQueryModuleInformation @ 0x180139A70 (RtlQueryModuleInformation.c)
 *     RtlAllocateAndInitializeSidEx @ 0x18013A5D0 (RtlAllocateAndInitializeSidEx.c)
 *     RtlIsUntrustedObject @ 0x18013A880 (RtlIsUntrustedObject.c)
 *     RtlNormalizeSecurityDescriptor @ 0x18013AB20 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpConvertAclToAutoInherit @ 0x18013B270 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013BAB0 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x18013C870 (RtlAddResourceAttributeAce.c)
 *     RtlCheckBootStatusIntegrity @ 0x18013F820 (RtlCheckBootStatusIntegrity.c)
 *     RtlCreateBootStatusDataFile @ 0x18013F990 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013FEA4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18014080C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801410C0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIGetAllInstalledLang @ 0x18014173C (RtlpMUIGetAllInstalledLang.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     _MuiRegAllocArray_0 @ 0x180142B98 (_MuiRegAllocArray_0.c)
 *     RtlMultipleAllocateHeap @ 0x1801430F0 (RtlMultipleAllocateHeap.c)
 *     RtlCompareExchangePointerMapping @ 0x1801445C0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180144710 (RtlCompareExchangePropertyStore.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180145EE0 (RtlRegisterSecureMemoryCacheCallback.c)
 *     __ft_array_insert @ 0x1801476F4 (__ft_array_insert.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x180148398 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlRcuAllocate @ 0x1801490E0 (RtlRcuAllocate.c)
 *     RtlpRcuCurrentThreadData @ 0x1801493F8 (RtlpRcuCurrentThreadData.c)
 *     RtlpGetWindowsPolicy @ 0x18014A4A0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18014A5B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     UcpCreateTelemetryRecord @ 0x180158D84 (UcpCreateTelemetryRecord.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180158FB4 (UcpRetrieveCurrentConfigSettings.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18015F994 (RtlpEnsureTailingSlashAndAddToList.c)
 *     LdrpAddRedirectedFunction @ 0x1801621C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpAllocateHeapBackend @ 0x18000CF74 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18002DB5C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpVsContextAllocate @ 0x18002DD2C (RtlpHpVsContextAllocate.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x18002FDE0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801186A8 (RtlpAllocateHeapRaiseException.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013D8A4 (RtlpHeapFatalExceptionFilter.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180143DB4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlHeapZero @ 0x180168590 (RtlHeapZero.c)
 */

PVOID __cdecl RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  unsigned __int64 HeapBackend; // r14
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  SIZE_T v9; // rbx
  char *v10; // r14
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdx
  signed __int64 i; // rbx
  signed __int64 v18; // rax
  unsigned __int64 v19; // r11
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  volatile signed __int64 *v27; // rcx
  volatile signed __int64 *v28; // r8
  __int64 v29; // r10
  signed __int64 v30; // r9
  unsigned __int64 v32; // rax
  __int64 v35; // r10
  signed __int64 v36; // rcx
  signed __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // r14
  __int16 v40; // cx
  unsigned int v41; // ecx
  __int64 HeapSlow; // rax
  unsigned __int64 v43; // r8
  unsigned int v44; // edx
  struct _TEB *v45; // rbx
  int v46; // eax
  unsigned __int64 v50; // rax
  unsigned int v51; // eax
  void **TlsExpansionSlots; // r8
  char *v54; // rcx
  signed __int64 v55; // rax
  char v56; // rcx^6
  signed __int64 v57; // r10
  signed __int64 v58; // r9
  signed __int64 v59; // r11
  char *v60; // rdx
  unsigned __int64 v61; // r9
  char *v62; // r9
  __int64 v63; // rdx
  signed __int64 v64; // rax
  signed __int64 v65; // rtt
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // r14
  int v69; // eax
  unsigned int v70; // r11d
  __int64 v71; // rax
  unsigned int v72; // r10d
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rdx
  _QWORD *v77; // r8
  int v78; // r10d
  _QWORD *v79; // rcx
  unsigned int v83; // ecx
  __int16 v84; // cx
  volatile signed __int64 *v87; // [rsp+30h] [rbp-108h]
  _QWORD *v88; // [rsp+30h] [rbp-108h]
  int v89; // [rsp+34h] [rbp-104h]
  unsigned int v90; // [rsp+40h] [rbp-F8h]
  unsigned int v91; // [rsp+40h] [rbp-F8h]
  __int64 v92; // [rsp+48h] [rbp-F0h]
  signed __int64 v93; // [rsp+48h] [rbp-F0h]
  __int64 v94; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v95; // [rsp+50h] [rbp-E8h]
  __int64 v96; // [rsp+50h] [rbp-E8h]
  unsigned int v97; // [rsp+60h] [rbp-D8h]
  char *v98; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v99; // [rsp+68h] [rbp-D0h]
  int v100; // [rsp+70h] [rbp-C8h]
  int v101; // [rsp+84h] [rbp-B4h]
  unsigned __int8 v102; // [rsp+8Ch] [rbp-ACh]
  __int64 v103; // [rsp+98h] [rbp-A0h]
  SIZE_T v104; // [rsp+A0h] [rbp-98h]
  struct _TEB *v105; // [rsp+F0h] [rbp-48h]
  struct _TEB *v106; // [rsp+100h] [rbp-38h]
  unsigned int v107; // [rsp+140h] [rbp+8h]
  unsigned __int8 v108; // [rsp+140h] [rbp+8h]
  __int16 v109; // [rsp+140h] [rbp+8h]
  __int64 v110; // [rsp+158h] [rbp+20h]
  int v111; // [rsp+158h] [rbp+20h]
  unsigned int v112; // [rsp+158h] [rbp+20h]
  unsigned __int16 v113; // [rsp+15Ah] [rbp+22h]

  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, 0, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 2) != 0 )
      return (PVOID)RtlpHpTagAllocateHeap((__int64)HeapHandle, Size, Flags);
    if ( Flags )
    {
      v7 = 2;
      if ( Flags != 8 )
      {
        v46 = 0;
        if ( (Flags & 8) != 0 )
          v46 = 2;
        v7 = v46;
        if ( (Flags & 4) != 0 )
          v7 = v46 | 0x80000000;
        if ( (Flags & 0x100) != 0 )
          v7 |= 0x100u;
        if ( (Flags & 0xE00) != 0 )
          v7 |= Flags & 0xE00;
        if ( (Flags & 0x10) != 0 )
          v7 |= 0x10000000u;
      }
    }
    else
    {
      v7 = 0;
    }
    __writegsqword(0x1858u, (unsigned __int64)HeapHandle + 20);
    v8 = ((unsigned __int16)v7 | (unsigned __int16)*((_DWORD *)HeapHandle + 5)) & 0x2FFA;
    if ( (((unsigned __int16)v7 | (unsigned __int16)*((_DWORD *)HeapHandle + 5)) & 0x2FF8) != 0 )
    {
      if ( (((unsigned __int8)v7 | (unsigned __int8)*((_DWORD *)HeapHandle + 5)) & 0x10) != 0
        && *((_DWORD *)HeapHandle + 56) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      {
        RtlpHpEnvAcquireGlobalLockSharedContended(
          (char *)HeapHandle + 20,
          ((unsigned __int16)v7 | (unsigned __int16)*((_DWORD *)HeapHandle + 5)) & 0x2FFA);
      }
      HeapSlow = RtlpHpAllocateHeapSlow((__int64)HeapHandle, Size, v8);
LABEL_45:
      HeapBackend = HeapSlow;
LABEL_55:
      __writegsqword(0x1858u, 0LL);
      if ( !HeapBackend )
      {
        v45 = NtCurrentTeb();
        v45->LastStatusValue = -1073741801;
        v45->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
        if ( ((*((_DWORD *)HeapHandle + 5) | v7) & 0x80000000) != 0 )
          RtlpAllocateHeapRaiseException(Size);
      }
      return (PVOID)HeapBackend;
    }
    v9 = Size;
    if ( Size <= 1 )
      v9 = 1LL;
    v104 = v9;
    if ( v9 >= *((unsigned __int16 *)HeapHandle + 450) )
    {
      v44 = Size;
LABEL_79:
      if ( v9 <= 0x20000 )
      {
        HeapBackend = RtlpHpVsContextAllocate((_BYTE *)HeapHandle + 704, v44, v9, v8);
        goto LABEL_55;
      }
      if ( v9 <= *((unsigned int *)HeapHandle + 132) )
      {
        HeapBackend = RtlpHpAllocateHeapBackend((__int64)HeapHandle, Size, v9, v8);
        goto LABEL_55;
      }
      HeapSlow = RtlpHpLargeAlloc(HeapHandle, Size, v9, v8);
      goto LABEL_45;
    }
    v10 = (char *)HeapHandle + 832;
    v11 = v9 + 2;
    if ( (_DWORD)Size == (_DWORD)v9 )
      v11 = v9;
    v12 = RtlpLfhBucketIndexMap[(unsigned int)(v11 + 15) >> 4] - 1;
    v107 = v12;
    v13 = *((unsigned __int16 *)HeapHandle + 454);
    if ( v13 >= 0x40 )
    {
      TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
      if ( TlsExpansionSlots )
        v14 = (__int64)TlsExpansionSlots[v13 - 64];
      else
        v14 = 0LL;
    }
    else
    {
      v14 = __readgsqword(8 * v13 + 5248);
    }
    if ( !v14 )
    {
      v14 = RtlpHpLfhThreadDataInitializeSet((__int64)HeapHandle + 832);
      v12 = v107;
    }
    v102 = BYTE4(v14);
    v98 = &v10[64 * (unsigned __int16)v14];
    v110 = 2LL * v12;
    v15 = *(unsigned __int16 *)&v98[v110];
    if ( !*(_WORD *)&v98[v110] )
    {
      if ( !RtlpHpLfhBucketCheckAndUpdate((__int64)HeapHandle + 832, v12) )
      {
        HeapBackend = -1LL;
        goto LABEL_54;
      }
      v54 = &v10[256 * (unsigned __int64)v102 + 1472];
      v15 = *(unsigned __int16 *)&v54[v110];
      if ( v98 != v54 )
        *(_WORD *)&v98[v110] = v15;
    }
    v16 = (__int64)&v10[v15 << 6];
    v103 = v16;
    if ( *(_WORD *)(v16 + 4) )
    {
      v67 = *(_QWORD *)(v16 + 56);
      if ( (v67 & 0xFFF) != 0 )
      {
        v68 = v67 & 0xFFFFFFFFFFFFF000uLL;
        v99 = v67 & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(v16 + 56) = v67 - 1;
        v69 = qword_1801CFEC8 ^ *(_DWORD *)((v67 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v67 & 0xFFFFFFFFFFFFF000uLL) >> 12);
        v70 = (unsigned __int16)v69;
        v91 = v70;
        v113 = HIWORD(v69);
        v71 = 0x100000001LL;
        if ( (unsigned int)Size >= v70 )
          v71 = 1LL;
        v94 = v71;
        v72 = *(unsigned __int8 *)(v68 + 24) - 8;
        v105 = NtCurrentTeb();
        v73 = v105->RngState[0];
        v74 = v105->RngState[1];
        v75 = (v74 + v73) >> 32;
        v76 = v73 ^ v74;
        v105->RngState[0] = v76 ^ (v76 << 16) ^ __ROL8__(v73, 24);
        v105->RngState[1] = __ROL8__(v76, 37);
        v109 = (unsigned __int8)v75;
        v77 = (_QWORD *)(v68 + 64 + 8LL * *(unsigned __int8 *)(v68 + 36));
        v96 = v68 + 64 + 8 * (v72 - 1LL);
        v78 = v68 + 64 + 8 * *(unsigned __int8 *)(v68 + 36);
        v79 = v77;
        v88 = v77;
        while ( (unsigned int)*v77 == -1 )
        {
          if ( v79 == (_QWORD *)v96 )
          {
            v77 = (_QWORD *)(v68 + 64);
            v79 = (_QWORD *)(v68 + 64);
            v88 = (_QWORD *)(v68 + 64);
            v78 = v68 + 64;
          }
          else
          {
            v77 = v88 + 1;
            v79 = v77;
            ++v88;
            v78 = (int)v77;
          }
        }
        _RAX = 1LL << ((unsigned __int16)(v109 * __popcnt((unsigned int)~*(_DWORD *)v77)) >> 8);
        __asm
        {
          pdep    rcx, rax, rdx
          tzcnt   rdx, rcx
        }
        *v77 |= v94 << _RDX;
        v83 = _RDX + 4 * (v78 - (v68 + 64));
        *(_BYTE *)(v99 + 36) = v83 >> 5;
        HeapBackend = v99 + v113 + v83 * v70;
        if ( (v8 & 2) != 0 )
        {
          RtlHeapZero(v99 + v113 + v83 * v70, ((unsigned int)Size + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          v70 = v91;
        }
        if ( (unsigned int)Size < v70 )
        {
          v84 = v70 - Size;
          if ( v70 - (_DWORD)Size == 1 )
            v84 = 0x8000;
          *(_WORD *)(v70 + HeapBackend - 2) = v84;
        }
      }
      else
      {
        HeapBackend = RtlpHpLfhSlotAllocateSlow((unsigned __int64)HeapHandle + 832, v16, Size, v8);
      }
      goto LABEL_54;
    }
    v100 = 0;
    _m_prefetchw((const void *)(v16 + 56));
    for ( i = *(_QWORD *)(v16 + 56); ; i = v18 )
    {
      if ( (i & 0xFFF) == 0 )
      {
        HeapBackend = RtlpHpLfhSlotAllocateSlow((unsigned __int64)HeapHandle + 832, v16, Size, v8);
        goto LABEL_51;
      }
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 56), i - 1, i);
      if ( i == v18 )
        break;
      v100 = 1;
    }
    v19 = i & 0xFFFFFFFFFFFFF000uLL;
    v95 = i & 0xFFFFFFFFFFFFF000uLL;
    v20 = (unsigned __int16)(qword_1801CFEC8 ^ *(_WORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12));
    v90 = v20;
    v101 = qword_1801CFEC8 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
    v21 = 0x100000001LL;
    if ( (unsigned int)Size >= v20 )
      v21 = 1LL;
    v92 = v21;
    v22 = (unsigned int)*(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
    v106 = NtCurrentTeb();
    v23 = v106->RngState[0];
    v24 = v106->RngState[1];
    v25 = (v24 + v23) >> 32;
    v26 = v23 ^ v24;
    v106->RngState[0] = v26 ^ (v26 << 16) ^ __ROL8__(v23, 24);
    v106->RngState[1] = __ROL8__(v26, 37);
    v111 = (unsigned __int8)v25;
    v97 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
    v108 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
    v27 = (volatile signed __int64 *)(v19 + 64);
    v28 = (volatile signed __int64 *)(v19 + 64 + 8LL * *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24));
    v29 = v19 + 64 + 8 * (v22 - 1);
    v87 = (volatile signed __int64 *)v29;
    while ( 1 )
    {
      v30 = *v28;
      _RDX = (unsigned int)~*(_DWORD *)v28;
      if ( (unsigned int)*v28 != -1 )
        break;
LABEL_72:
      if ( v28 == (volatile signed __int64 *)v29 )
        v28 = v27;
      else
        ++v28;
    }
    v32 = (unsigned int)_RDX;
    while ( 1 )
    {
      if ( (qword_1801CFEE8 & 4) != 0 )
      {
        _RCX = 1LL << ((unsigned __int16)(v111 * __popcnt(v32)) >> 8);
        __asm
        {
          pdep    rdx, rcx, r10
          tzcnt   rdx, rdx
        }
        v35 = v92 << _RDX;
      }
      else
      {
        if ( v97 != 32 || v28 == v87 )
        {
          __asm { tzcnt   rcx, rdx }
          _BitScanReverse64(&v50, _RDX);
          v51 = v50 - _RCX + 1;
          if ( v97 < v51 )
            v51 = v97;
          v111 = _RCX + ((v51 * v111) >> 8);
          _RDX = __ROR8__(_RDX, v111);
          __asm { tzcnt   rdx, rdx }
          LODWORD(_RDX) = v111 + _RDX;
        }
        else
        {
          _RAX = (unsigned int)__ROR4__(_RDX, v111);
          __asm { tzcnt   rdx, rax }
          LODWORD(_RDX) = ((_BYTE)v111 + (_BYTE)_RDX) & 0x1F;
        }
        v35 = v92 << _RDX;
      }
      v36 = v30;
      v37 = _InterlockedCompareExchange64(v28, v30 | v35, v30);
      v30 = v37;
      if ( v37 == v36 )
        break;
      v32 = (unsigned int)~(_DWORD)v37;
      _RDX = (unsigned int)v32;
      if ( !(_DWORD)v32 )
      {
        v29 = (__int64)v87;
        v27 = (volatile signed __int64 *)(v19 + 64);
        goto LABEL_72;
      }
    }
    v38 = _RDX + 4 * ((_DWORD)v28 - (v19 + 64));
    v112 = v38;
    *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v38 >> 5;
    v39 = HIWORD(v101) + v38 * v20;
    if ( v108 > 1u )
    {
      if ( (int)RtlpHpLfhSubsegmentCommitBlock((__int64)HeapHandle + 832, i & 0xFFFFFFFFFFFFF000uLL, v39) < 0 )
      {
        HeapBackend = 0LL;
        v41 = v112;
        goto LABEL_48;
      }
    }
    else
    {
      if ( v38 <= *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
      {
LABEL_36:
        HeapBackend = v19 + v39;
        if ( (v8 & 2) != 0 )
          RtlHeapZero(HeapBackend, ((unsigned int)Size + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (unsigned int)Size < v90 )
        {
          v40 = v90 - Size;
          if ( v90 - (_DWORD)Size == 1 )
            v40 = 0x8000;
          *(_WORD *)(v90 + HeapBackend - 2) = v40;
        }
        v41 = -1;
LABEL_48:
        v43 = i & 0xFFFFFFFFFFFFF000uLL;
        if ( v41 != -1 )
        {
          v66 = v95 + 8LL * (v41 >> 5);
          _m_prefetchw((const void *)(v66 + 64));
          _InterlockedAnd64((volatile signed __int64 *)(v66 + 64), __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v41 & 0x1F));
        }
        if ( !HeapBackend )
        {
          v55 = *(_QWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x10);
          v89 = HIDWORD(v55);
          v56 = BYTE6(v55);
          v57 = v55;
          v58 = v55;
          v59 = v55;
          v60 = (char *)HeapHandle + 832;
          while ( 1 )
          {
            v93 = v55;
            if ( v56 == 1 )
            {
              BYTE6(v93) = 2;
              v57 = v58;
              v59 = v55;
            }
            WORD1(v93) = WORD1(v55) + 1;
            v61 = (unsigned __int64)*(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x2C) << 6;
            v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v95 + 16), v93, v57);
            if ( v55 == v59 )
              break;
            v89 = HIDWORD(v55);
            v59 = v55;
            v58 = v55;
            v57 = v55;
            v56 = BYTE6(v55);
          }
          if ( !v60[v61 + 92] )
          {
            v60[v61 + 92] = 1;
            if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v93, v60, v95, v61) )
            {
              RtlpHpEnvCompactionSchedule();
              v60 = (char *)HeapHandle + 832;
              v43 = i & 0xFFFFFFFFFFFFF000uLL;
            }
          }
          if ( BYTE2(v89) == 1 )
          {
            v62 = &v60[64 * (unsigned __int16)v89];
            _m_prefetchw(v62 + 8);
            v63 = *(_QWORD *)(v43 + 24);
            v64 = *((_QWORD *)v62 + 1);
            do
            {
              *(_QWORD *)(v43 + 24) = v63 ^ (v64 ^ v63) & 0xFFFFFFFFFFFFF000uLL;
              v65 = v64;
              v64 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v62 + 1,
                      v64 ^ (i ^ v64) & 0xFFFFFFFFFFFFF000uLL,
                      v64);
            }
            while ( v65 != v64 );
          }
        }
LABEL_51:
        if ( v100 )
          RtlpHpLfhBucketUpdateAffinityMapping(
            (__int64)HeapHandle + 832,
            (volatile signed __int8 *)HeapHandle + 64 * (unsigned __int64)*(unsigned __int16 *)(v103 + 2) + 832);
        v9 = v104;
LABEL_54:
        v44 = Size;
        if ( HeapBackend != -1LL )
          goto LABEL_55;
        goto LABEL_79;
      }
      RtlpHpLfhSubsegmentPrefetch((__int64)HeapHandle + 832, i & 0xFFFFFFFFFFFFF000uLL, v39, v90);
    }
    v19 = i & 0xFFFFFFFFFFFFF000uLL;
    goto LABEL_36;
  }
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (PVOID)RtlpHpTagAllocateHeap((__int64)HeapHandle, Size, Flags);
  else
    return (PVOID)RtlpAllocateNTHeapInternal((int)HeapHandle);
}
