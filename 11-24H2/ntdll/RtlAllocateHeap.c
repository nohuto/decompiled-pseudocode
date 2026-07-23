/*
 * XREFs of RtlAllocateHeap @ 0x18003DC60
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x180001138 (RtlpMUIEnumerateFolder.c)
 *     RtlpIsQualifiedLanguage @ 0x180001530 (RtlpIsQualifiedLanguage.c)
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlCreateActivationContext @ 0x180002A30 (RtlCreateActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180002E90 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180003224 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180003E84 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlDosSearchPath_U @ 0x180004710 (RtlDosSearchPath_U.c)
 *     RtlCreateEnvironmentEx @ 0x180004BD0 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x180005818 (RtlpAllocateEnvBlock.c)
 *     RtlpComputePath @ 0x180006610 (RtlpComputePath.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x180008100 (RtlpScanEnvironment.c)
 *     RtlpAllocateEnvironmentHashTable @ 0x180008CF8 (RtlpAllocateEnvironmentHashTable.c)
 *     _IsProgramFilesPath @ 0x180008D2C (_IsProgramFilesPath.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18000C1A0 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpExtendListLookup @ 0x18000C7B8 (RtlpExtendListLookup.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180011A20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180014FEC (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpUpdateTEBLanguage @ 0x180015820 (RtlpUpdateTEBLanguage.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180016190 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpHeapTrkTrackStack @ 0x18001C780 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x18001CA70 (RtlpHeapTrkTrackAdd.c)
 *     EtwpRelogEvent @ 0x18001D4A0 (EtwpRelogEvent.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18001E160 (RtlpAllocateActivationContextStackFrame.c)
 *     EtwpFinalizeLogFileHeader @ 0x18001EFE0 (EtwpFinalizeLogFileHeader.c)
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlpPushPageDescriptor @ 0x18001FE54 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x180021E9C (RtlpSetBlockInfo.c)
 *     RtlpInitializeLeakDetection @ 0x180022D68 (RtlpInitializeLeakDetection.c)
 *     RtlCreateTagHeap @ 0x180022EE0 (RtlCreateTagHeap.c)
 *     TppQueryMaximumGroupCount @ 0x180023184 (TppQueryMaximumGroupCount.c)
 *     CsrAllocateCaptureBuffer @ 0x1800240C0 (CsrAllocateCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x1800243D4 (CsrpConnectToServer.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpProcessHeapsInsert @ 0x180025F8C (RtlpProcessHeapsInsert.c)
 *     LdrpInitializeTls @ 0x1800266A4 (LdrpInitializeTls.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180029920 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpCreateSerializationGroup @ 0x18002C7C0 (RtlpCreateSerializationGroup.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18002CA58 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpCreateWnfUserSubscription @ 0x18002E7D4 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x18002E89C (RtlpCreateWnfNameSubscription.c)
 *     RtlInitializeResource @ 0x18002F1C0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002FD30 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     LdrpAddNodeServiceTag @ 0x18003177C (LdrpAddNodeServiceTag.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpAcquireTlsIndex @ 0x180032A38 (LdrpAcquireTlsIndex.c)
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     LdrpGetNewTlsVector @ 0x18003321C (LdrpGetNewTlsVector.c)
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     LdrpAllocateTlsEntry @ 0x18003416C (LdrpAllocateTlsEntry.c)
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpAllocateModuleEntry @ 0x18003D080 (LdrpAllocateModuleEntry.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18003DB60 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpAllocateTls @ 0x18003EF80 (LdrpAllocateTls.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     LdrpFastpthReloadedDll @ 0x180046270 (LdrpFastpthReloadedDll.c)
 *     TpAllocWork @ 0x180048850 (TpAllocWork.c)
 *     EtwpTrackBinaryForSession @ 0x180048CA0 (EtwpTrackBinaryForSession.c)
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 *     ProviderHandleInsert @ 0x18004A070 (ProviderHandleInsert.c)
 *     EtwpRegisterProvider @ 0x18004A730 (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x18004A9F0 (EtwpNotificationThread.c)
 *     EtwpEventApiCallback @ 0x18004B650 (EtwpEventApiCallback.c)
 *     RtlpWnfNotificationThread @ 0x18004C6F0 (RtlpWnfNotificationThread.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     TpTrimPools @ 0x18005E2D0 (TpTrimPools.c)
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrAddLoadAsDataTable @ 0x180079D70 (LdrAddLoadAsDataTable.c)
 *     RtlAllocateHandle @ 0x18007B350 (RtlAllocateHandle.c)
 *     RtlpIsNameInExpressionPrivate @ 0x18007B878 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x18007BEB4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     GetModuleFullPathName @ 0x18007C3E8 (GetModuleFullPathName.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18007F5C0 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x18007FAA4 (QueryRegistryValue.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180080330 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800815B0 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x180081A24 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180081BCC (EtwpGetRegDwordValue.c)
 *     RtlGetAppContainerParent @ 0x180081FC0 (RtlGetAppContainerParent.c)
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x180085F2C (TppPoolUpdateNodeRelation.c)
 *     TpAllocCleanupGroup @ 0x180086490 (TpAllocCleanupGroup.c)
 *     TpSimpleTryPost @ 0x180086E30 (TpSimpleTryPost.c)
 *     TpAllocTimer @ 0x1800896F0 (TpAllocTimer.c)
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     LdrpCheckModule @ 0x18008DC60 (LdrpCheckModule.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18008DDC0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x18008E510 (RtlInsertElementGenericTableAvl.c)
 *     LdrpLogNewDllLoadInternal @ 0x180090E80 (LdrpLogNewDllLoadInternal.c)
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 *     LdrpLogEtwDllSearchResults @ 0x180092B74 (LdrpLogEtwDllSearchResults.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180092FD0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800946E8 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpCreateNewDirectoryReference @ 0x180094EF0 (RtlpCreateNewDirectoryReference.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800969C0 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResSearchResourceHandle @ 0x18009856C (LdrpResSearchResourceHandle.c)
 *     _MuiRegAllocArray @ 0x180099020 (_MuiRegAllocArray.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800A5D14 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetNextAvailableLoggerId @ 0x1800A8CF0 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x1800A8DF0 (EtwpInitLoggerContext.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x1800A947C (EtwpFillProcessorStreamIndexMap.c)
 *     RtlLockModuleSection @ 0x1800AAAE0 (RtlLockModuleSection.c)
 *     WerpGlobalFlagsForProcess @ 0x1800AC868 (WerpGlobalFlagsForProcess.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800AE26C (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlpFlsHeapAlloc @ 0x1800B13B8 (RtlpFlsHeapAlloc.c)
 *     IdnaMemAlloc @ 0x1800B18CC (IdnaMemAlloc.c)
 *     RtlpNameprepAsciiWorker @ 0x1800B1A80 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToAscii @ 0x1800B1ED0 (RtlIdnToAscii.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800B3250 (RtlpIdnToUnicodeWorker.c)
 *     RtlpGetNormalization @ 0x1800B4004 (RtlpGetNormalization.c)
 *     RtlpTpIoAlloc @ 0x1800B6A04 (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800B6E30 (TpAllocJobNotification.c)
 *     TppAllocAlpcCompletion @ 0x1800B7134 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800B7460 (TpAllocIoCompletion.c)
 *     RtlInsertElementGenericTable @ 0x1800B7D00 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800B7E80 (RtlInsertElementGenericTableFull.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800BE320 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1800BE59C (RtlpCreateServerAcl.c)
 *     RtlpComputeMergedAcl @ 0x1800BE824 (RtlpComputeMergedAcl.c)
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C0800 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C0C70 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1800C2C00 (RtlpCombineAcls.c)
 *     RtlpInheritAcl @ 0x1800C3320 (RtlpInheritAcl.c)
 *     RtlDefaultNpAcl @ 0x1800C5540 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x1800C5E10 (RtlCreateAndSetSD.c)
 *     RtlpSysVolAllocate @ 0x1800C6430 (RtlpSysVolAllocate.c)
 *     LdrpCreateLangFallbackList @ 0x1800C8560 (LdrpCreateLangFallbackList.c)
 *     RtlpInitializeUserList @ 0x1800C87E0 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800C99F0 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpDupTebLanguageList @ 0x1800CA478 (RtlpDupTebLanguageList.c)
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800CAB90 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800CB614 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800CC41C (RtlpMuiRegLoadLicInformation.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800D21C0 (RtlpFcNotifyFeatureUsageTarget.c)
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D4A30 (LdrpAllocatePlaceHolder.c)
 *     LdrpRecordModuleDependency @ 0x1800D5E00 (LdrpRecordModuleDependency.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800D7DA0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpBuildForwarderLink @ 0x1800DA890 (LdrpBuildForwarderLink.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DC260 (RtlInstallFunctionTableCallback.c)
 *     LdrpRecordUnloadEvent @ 0x1800DE860 (LdrpRecordUnloadEvent.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800DF398 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlAllocateAndInitializeSid @ 0x1800DF990 (RtlAllocateAndInitializeSid.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E0698 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlExpandHashTable @ 0x1800E17A0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1800E19E4 (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800E1B4C (RtlpAllocateSecondLevelDir.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E1EE0 (RtlCreateProcessParametersInternal.c)
 *     _SafeAllocBlob @ 0x1800E2920 (_SafeAllocBlob.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E2AF0 (RtlpMergeSecurityAttributeInformation.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwpSetProviderTraits @ 0x1800E3D80 (EtwpSetProviderTraits.c)
 *     LdrpQueryValueKey @ 0x1800E4440 (LdrpQueryValueKey.c)
 *     RtlAcquirePrivilege @ 0x1800E4740 (RtlAcquirePrivilege.c)
 *     EtwpCreateRegGuidsContext @ 0x1800E5A60 (EtwpCreateRegGuidsContext.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800E6230 (RtlpLowFragHeapAllocateFromZone.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800E9190 (TpSetDefaultPoolStackInformation.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800E9BD8 (EtwpReceiveReplyDataBlock.c)
 *     TppAllocThreadData @ 0x1800EA5A0 (TppAllocThreadData.c)
 *     RtlpAllocateHeapMetadata @ 0x1800EAFB0 (RtlpAllocateHeapMetadata.c)
 *     SaferpIsDllAllowed @ 0x1800EB17C (SaferpIsDllAllowed.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800EBE90 (RtlCreateBoundaryDescriptor.c)
 *     RtlAddFunctionTable @ 0x1800ECBF0 (RtlAddFunctionTable.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800ECF28 (SbpRetrieveCompatibilityManifest.c)
 *     RtlpNtQueryValueKey @ 0x1800EDEF0 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800EE0E4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800EE2D4 (TppPoolUpdateTrimmedWorker.c)
 *     EvtIntReportEventWorker @ 0x1800EE760 (EvtIntReportEventWorker.c)
 *     RtlCopySecurityDescriptor @ 0x1800EFB00 (RtlCopySecurityDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F0130 (RtlpNtEnumerateSubKey.c)
 *     RtlpInitParameterBlock @ 0x1800F0D78 (RtlpInitParameterBlock.c)
 *     RtlpInitializeWnf @ 0x1800F1B08 (RtlpInitializeWnf.c)
 *     RtlAllocateActivationContextStack @ 0x1800F3F00 (RtlAllocateActivationContextStack.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F44BC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F4700 (LdrpAllocateSchedulerSharedData.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 *     RtlSetCurrentDirectory_U @ 0x1800F58F0 (RtlSetCurrentDirectory_U.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800F5EA4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeSnapsBuffer @ 0x1800F62DC (LdrpInitializeSnapsBuffer.c)
 *     LdrpInitializePatchData @ 0x1800F649C (LdrpInitializePatchData.c)
 *     RtlInitializeRXact @ 0x180101240 (RtlInitializeRXact.c)
 *     RtlCreateTimerQueue @ 0x180101D30 (RtlCreateTimerQueue.c)
 *     RtlStartRXact @ 0x1801056A0 (RtlStartRXact.c)
 *     LdrRegisterDllNotification @ 0x180105BE0 (LdrRegisterDllNotification.c)
 *     RtlAddAttributeActionToRXact @ 0x180105FC0 (RtlAddAttributeActionToRXact.c)
 *     EtwpAllocateUmGuidEntry @ 0x180106CD4 (EtwpAllocateUmGuidEntry.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 *     LdrpCheckPagesForTampering @ 0x180108A94 (LdrpCheckPagesForTampering.c)
 *     RtlSetFeatureConfigurations @ 0x18010CAF0 (RtlSetFeatureConfigurations.c)
 *     LdrpCreateSoftwareEnclave @ 0x18010CFE4 (LdrpCreateSoftwareEnclave.c)
 *     EtwpInitializeCompression @ 0x18010D7D0 (EtwpInitializeCompression.c)
 *     RtlHeapTrkInitialize @ 0x18010E7A0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18010EBEC (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x18010F440 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlpCheckDeviceName @ 0x18010F840 (RtlpCheckDeviceName.c)
 *     RtlpLookupSafeCurDirList @ 0x18010F9B4 (RtlpLookupSafeCurDirList.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801118CC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180111D34 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x180111FB0 (RtlpMuiRegCreateRegistryInfo.c)
 *     AVrfpParseVerifierDllsString @ 0x180112EA4 (AVrfpParseVerifierDllsString.c)
 *     EtwpTrackDebugIdForSession @ 0x180113430 (EtwpTrackDebugIdForSession.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlpGetPersistedRegistryLocation @ 0x180117950 (RtlpGetPersistedRegistryLocation.c)
 *     RtlInitializeExceptionLog @ 0x18011D7CC (RtlInitializeExceptionLog.c)
 *     RtlQueryRegistryValueWithFallback @ 0x18011E600 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x18011E770 (RtlpConvertCultureNamesToLCIDs.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x18012FA90 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x18012FD80 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlEnableThreadProfiling @ 0x180130AF0 (RtlEnableThreadProfiling.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180132D70 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180132E34 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 *     RtlQueryModuleInformation @ 0x180136530 (RtlQueryModuleInformation.c)
 *     RtlAllocateAndInitializeSidEx @ 0x180137090 (RtlAllocateAndInitializeSidEx.c)
 *     RtlIsUntrustedObject @ 0x180137340 (RtlIsUntrustedObject.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1801375E0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpConvertAclToAutoInherit @ 0x180137D30 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x180138570 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x180139330 (RtlAddResourceAttributeAce.c)
 *     RtlCheckBootStatusIntegrity @ 0x18013C2E0 (RtlCheckBootStatusIntegrity.c)
 *     RtlCreateBootStatusDataFile @ 0x18013C450 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013C964 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18013D30C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013DBC0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIGetAllInstalledLang @ 0x18013E23C (RtlpMUIGetAllInstalledLang.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     _MuiRegAllocArray_0 @ 0x18013F698 (_MuiRegAllocArray_0.c)
 *     RtlMultipleAllocateHeap @ 0x18013FBE0 (RtlMultipleAllocateHeap.c)
 *     RtlpQueryMemoryUsageInformation @ 0x180140C8C (RtlpQueryMemoryUsageInformation.c)
 *     RtlCompareExchangePointerMapping @ 0x180141280 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1801413D0 (RtlCompareExchangePropertyStore.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180142D20 (RtlRegisterSecureMemoryCacheCallback.c)
 *     __ft_array_insert @ 0x1801444F4 (__ft_array_insert.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x180145198 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlRcuAllocate @ 0x180145EE0 (RtlRcuAllocate.c)
 *     RtlpRcuCurrentThreadData @ 0x1801461F8 (RtlpRcuCurrentThreadData.c)
 *     RtlpGetWindowsPolicy @ 0x1801472A0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801473B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     UcpCreateTelemetryRecord @ 0x180155B94 (UcpCreateTelemetryRecord.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180155DC4 (UcpRetrieveCurrentConfigSettings.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18015C894 (RtlpEnsureTailingSlashAndAddToList.c)
 *     LdrpAddRedirectedFunction @ 0x18015EFF0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     RtlpAllocateNTHeapInternal @ 0x180054DA0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x180060D18 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpAllocateHeapBackend @ 0x180066F14 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18006BF70 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800D6820 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpVsContextAllocate @ 0x1800E80AC (RtlpHpVsContextAllocate.c)
 *     RtlpAllocateHeapRaiseException @ 0x180110740 (RtlpAllocateHeapRaiseException.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013A364 (RtlpHeapFatalExceptionFilter.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801653C0 (RtlHeapZero.c)
 */

PVOID __cdecl RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  int *v5; // rdi
  __int64 HeapSlow; // rdi
  int v7; // esi
  int *v8; // r15
  unsigned int v9; // r14d
  SIZE_T v10; // r15
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
  SIZE_T v102; // [rsp+A0h] [rbp-D8h]
  int *v104; // [rsp+C8h] [rbp-B0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D8h] [rbp-A0h] BYREF
  SIZE_T v106; // [rsp+E8h] [rbp-90h]
  __int64 v107; // [rsp+F0h] [rbp-88h]
  __int64 v108; // [rsp+F8h] [rbp-80h]
  __int64 v109; // [rsp+100h] [rbp-78h]
  __int64 v110; // [rsp+108h] [rbp-70h]
  signed __int64 v111; // [rsp+110h] [rbp-68h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp-60h] BYREF
  void *v113; // [rsp+128h] [rbp-50h]
  int v114; // [rsp+130h] [rbp-48h]
  int v115; // [rsp+134h] [rbp-44h]

  v5 = (int *)HeapHandle;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, 0, 0, 0LL, 0LL);
  if ( v5[4] == -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 2) != 0 )
      return (PVOID)RtlpHpTagAllocateHeap(v5);
    if ( Flags )
    {
      if ( Flags == 8 )
      {
        v7 = 2;
      }
      else
      {
        v7 = 0;
        if ( (Flags & 8) != 0 )
          v7 = 2;
        v91 = v7;
        if ( (Flags & 4) != 0 )
        {
          v7 |= 0x80000000;
          v91 = v7;
        }
        if ( (Flags & 0x100) != 0 )
        {
          v7 |= 0x100u;
          v91 = v7;
        }
        if ( (Flags & 0xE00) != 0 )
        {
          v7 |= Flags & 0xE00;
          v91 = v7;
        }
        if ( (Flags & 0x10) == 0 )
        {
LABEL_21:
          v8 = v5 + 5;
          v104 = v5 + 5;
          __writegsqword(0x1858u, (unsigned __int64)(v5 + 5));
          v9 = ((unsigned __int16)v7 | (unsigned __int16)v5[5]) & 0x2FFA;
          v92 = v9;
          if ( (((unsigned __int16)v7 | (unsigned __int16)v5[5]) & 0x2FF8) != 0 )
          {
            if ( (v9 & 0x10) != 0 && v5[56] != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
              RtlpHpEnvAcquireGlobalLockSharedContended(
                v5 + 5,
                ((unsigned __int16)v7 | (unsigned __int16)v5[5]) & 0x2FFA);
            HeapSlow = RtlpHpAllocateHeapSlow(v5, Size, v9);
            goto LABEL_128;
          }
          v10 = 1LL;
          if ( Size > 1 )
            v10 = Size;
          v102 = v10;
          v106 = v10;
          if ( v10 >= *((unsigned __int16 *)v5 + 450) )
          {
            v85 = (unsigned int)Size;
            goto LABEL_121;
          }
          v11 = (__int64)(v5 + 208);
          v12 = v10 + 2;
          if ( (_DWORD)Size == (_DWORD)v10 )
            v12 = v10;
          v13 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v12 + 15) >> 4] - 1;
          v14 = *((unsigned __int16 *)v5 + 454);
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
            v107 = v15;
          }
          if ( !v15 )
            v15 = RtlpHpLfhThreadDataInitializeSet(v5 + 208);
          v101 = BYTE4(v15);
          v108 = v15;
          v17 = v11 + ((unsigned __int16)v15 << 6);
          v18 = *(unsigned __int16 *)(v17 + 2 * v13);
          if ( !*(_WORD *)(v17 + 2 * v13) )
          {
            if ( !RtlpHpLfhBucketCheckAndUpdate(v11, (unsigned int)v13, v18) )
            {
              HeapSlow = -1LL;
LABEL_111:
              v85 = (unsigned int)Size;
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
                  v87->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
                  if ( v7 < 0 || *v8 < 0 )
                    RtlpAllocateHeapRaiseException(Size);
                }
                return (PVOID)HeapSlow;
              }
              v5 = (int *)HeapHandle;
LABEL_121:
              if ( v10 > 0x20000 )
              {
                if ( v10 > (unsigned int)v5[132] )
                  HeapBackend = RtlpHpLargeAlloc(v5, Size, v10, v9);
                else
                  HeapBackend = RtlpHpAllocateHeapBackend(v5, Size, v10, v9);
              }
              else
              {
                HeapBackend = RtlpHpVsContextAllocate(v5 + 176, v85, (unsigned int)v10, v9);
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
            v23 = qword_1801CCEC8 ^ *(_DWORD *)((v21 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v21 & 0xFFFFFFFFFFFFF000uLL) >> 12);
            v24 = (unsigned __int16)v23;
            v94 = HIWORD(v23);
            v25 = 0x100000001LL;
            if ( (unsigned int)Size >= (unsigned __int16)v23 )
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
              v109 = v39;
              v110 = (unsigned int)~(_DWORD)v39;
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
              RtlHeapZero(v22 + v94 + v43 * (unsigned int)v24, ((unsigned int)Size + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (unsigned int)Size < (unsigned int)v24 )
            {
              v44 = v24 - Size;
              if ( (_DWORD)v24 - (_DWORD)Size == 1 )
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
          v96 = qword_1801CCEC8 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
          v48 = 0x100000001LL;
          if ( (unsigned int)Size >= (unsigned __int16)v96 )
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
            if ( (qword_1801CCEE8 & 4) != 0 )
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
              v111 = _InterlockedAnd64((volatile signed __int64 *)(v75 + 64), v71);
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
                if ( !(_DWORD)qword_1801CD278 )
                {
                  if ( Context )
                  {
                    if ( byte_1801D1908 == (_BYTE)qword_1801CD278
                      && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CD278, 1, 0) )
                    {
                      TpSetTimerEx(Context, &DueTime, 0, 0x3E8u);
                      if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CB670 > 5 )
                      {
                        *(_DWORD *)&EventDescriptor.Id = 184549376;
                        *(_DWORD *)&EventDescriptor.Level = 5;
                        EventDescriptor.Keyword = 0LL;
                        UserData.Ptr = (unsigned __int64)off_1801CB678;
                        UserData.Size = *(unsigned __int16 *)off_1801CB678;
                        UserData.Reserved = 2;
                        v113 = &unk_1801A157E;
                        v114 = 25;
                        v115 = 1;
                        EtwEventWriteTransfer(qword_1801CB690, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
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
            RtlHeapZero(HeapSlow, ((unsigned int)Size + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( (unsigned int)Size < (unsigned __int16)v96 )
          {
            v76 = v96 - Size;
            if ( (unsigned __int16)v96 - (_DWORD)Size == 1 )
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
    return (PVOID)RtlpHpTagAllocateHeap(v5);
  else
    return (PVOID)RtlpAllocateNTHeapInternal(v5);
}
