/*
 * XREFs of RtlFreeHeap @ 0x1800269F0
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800011F0 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlUnlockModuleSection @ 0x180001D20 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180001DD0 (RtlLockModuleSection.c)
 *     WerpGlobalFlagsForProcess @ 0x1800020A0 (WerpGlobalFlagsForProcess.c)
 *     LdrpDereferenceEnclave @ 0x180003B50 (LdrpDereferenceEnclave.c)
 *     RtlFreeActivationContextStack @ 0x180004030 (RtlFreeActivationContextStack.c)
 *     LdrpFreeTls @ 0x180004110 (LdrpFreeTls.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrpReleaseTlsEntry @ 0x1800049CC (LdrpReleaseTlsEntry.c)
 *     LdrpDestroyNode @ 0x180004B28 (LdrpDestroyNode.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x180005B7C (LdrpDynamicShimModule.c)
 *     LdrpAcquireTlsIndex @ 0x180006038 (LdrpAcquireTlsIndex.c)
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrpAllocateTlsEntry @ 0x18000776C (LdrpAllocateTlsEntry.c)
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpAllocateModuleEntry @ 0x180010680 (LdrpAllocateModuleEntry.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpAllocateTls @ 0x180012580 (LdrpAllocateTls.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     RtlpCallVectoredHandlers @ 0x180019DC0 (RtlpCallVectoredHandlers.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     TpAllocWork @ 0x18001BE50 (TpAllocWork.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     EtwpRegisterProvider @ 0x18001DD30 (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x18001DFF0 (EtwpNotificationThread.c)
 *     EtwpEventApiCallback @ 0x18001EC50 (EtwpEventApiCallback.c)
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 *     RtlpWnfNotificationThread @ 0x18001FCF0 (RtlpWnfNotificationThread.c)
 *     TppFreeWait @ 0x1800204A0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x1800204F0 (TppTimerpFree.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppIopCallbackEpilog @ 0x1800218E0 (TppIopCallbackEpilog.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x180025370 (TppPrepareDirectParams.c)
 *     LdrSetDllDirectory @ 0x180026100 (LdrSetDllDirectory.c)
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800283A0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpAddNeutralsToMergedList @ 0x180033B90 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180034340 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpFreeTraverseNodes @ 0x1800345A0 (RtlpFreeTraverseNodes.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180035280 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x180035694 (RtlpMuiRegFreeLanguageConfigList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180035F10 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18003A820 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpHeapTrkTrackStack @ 0x18003C500 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x18003C7F0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18003C8D0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18003CA10 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18003CDF0 (RtlpHeapTrkDereferenceStack.c)
 *     EtwpFinalizeLogFileHeader @ 0x18003ED60 (EtwpFinalizeLogFileHeader.c)
 *     RtlDebugFreeHeap @ 0x18004178C (RtlDebugFreeHeap.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180045990 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpFreeHeapMetadata @ 0x18004EBD8 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsHeapFree @ 0x18004EEDC (RtlpFlsHeapFree.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180061800 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpIsReparsePoint @ 0x180064A20 (LdrpIsReparsePoint.c)
 *     LdrpInitShimEngine @ 0x1800654D8 (LdrpInitShimEngine.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180066090 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlpTpTimerQueueRundown @ 0x180068E28 (RtlpTpTimerQueueRundown.c)
 *     TpReleaseCleanupGroup @ 0x180069D30 (TpReleaseCleanupGroup.c)
 *     TpAllocCleanupGroup @ 0x180069DA0 (TpAllocCleanupGroup.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18006A498 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TpSimpleTryPost @ 0x18006A740 (TpSimpleTryPost.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x18006C110 (TpWaitForTimer.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     RtlpTpTimerRundown @ 0x18006CB3C (RtlpTpTimerRundown.c)
 *     TpReleaseWork @ 0x18006CCA0 (TpReleaseWork.c)
 *     RtlCreateTimer @ 0x18006D040 (RtlCreateTimer.c)
 *     TppFreeDirectParams @ 0x18006D790 (TppFreeDirectParams.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     RtlpTpWaitRundown @ 0x18006E794 (RtlpTpWaitRundown.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     RtlpTpWorkUnposted @ 0x18006F660 (RtlpTpWorkUnposted.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180070180 (RtlpFreeActivationContextStackFrame.c)
 *     SbpDetermineDllContext @ 0x180071110 (SbpDetermineDllContext.c)
 *     LdrpCheckModule @ 0x180071380 (LdrpCheckModule.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800745A0 (LdrpLogNewDllLoadInternal.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 *     LdrpLogEtwDllSearchResults @ 0x180076294 (LdrpLogEtwDllSearchResults.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800766F0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     LdrpMapResourceFile @ 0x180076970 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x180076D70 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x180076EC0 (RtlDosSearchPath_Ustr.c)
 *     RtlReleaseRelativeName @ 0x180077830 (RtlReleaseRelativeName.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180077E08 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpCheckForSameCurdir @ 0x180078040 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180078140 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x180078310 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078610 (RtlpCreateNewDirectoryReference.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18007A580 (LdrpResSearchResourceInsideDirectory.c)
 *     RtlGetUILanguageInfo @ 0x18007B9D0 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18007D170 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpFreeActivationContext @ 0x180080B3C (RtlpFreeActivationContext.c)
 *     RtlCreateActivationContext @ 0x180080BB0 (RtlCreateActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180081010 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x180081494 (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180081558 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180082004 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800821AC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDosSearchPath_U @ 0x180082890 (RtlDosSearchPath_U.c)
 *     RtlpClearEnvironmentHashTable @ 0x180082B7C (RtlpClearEnvironmentHashTable.c)
 *     RtlpGetCachedPath @ 0x1800842B0 (RtlpGetCachedPath.c)
 *     RtlpComputePath @ 0x180084760 (RtlpComputePath.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180085B9C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x180086250 (RtlpScanEnvironment.c)
 *     _IsProgramFilesPath @ 0x180086E7C (_IsProgramFilesPath.c)
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18008A254 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetNextAvailableLoggerId @ 0x18008D230 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x18008D330 (EtwpInitLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x18008E9CC (EtwpFreeStreamIndexMap.c)
 *     EtwpFreeLoggerContext @ 0x18008EA0C (EtwpFreeLoggerContext.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x18008FB2C (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpProcessHeapsRemove @ 0x18008FCA4 (RtlpProcessHeapsRemove.c)
 *     RtlDeleteResource @ 0x18008FE30 (RtlDeleteResource.c)
 *     RtlpFreeUserBlockToHeap @ 0x180096530 (RtlpFreeUserBlockToHeap.c)
 *     RtlpCreateSerializationGroup @ 0x180097970 (RtlpCreateSerializationGroup.c)
 *     RtlpFcAllocateChangeRegistration @ 0x180097C08 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x180099550 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180099634 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x1800996E0 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x180099A4C (RtlpCreateWnfNameSubscription.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     TppQueryMaximumGroupCount @ 0x1800A5614 (TppQueryMaximumGroupCount.c)
 *     CsrFreeCaptureBuffer @ 0x1800A6DA0 (CsrFreeCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x1800A7080 (CsrpConnectToServer.c)
 *     RtlpExtendFrontEndUsageArray @ 0x1800A8FBC (RtlpExtendFrontEndUsageArray.c)
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x1800ABAAC (TppPoolUpdateNodeRelation.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800AEFD8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800AF614 (RtlpUpcaseUnicodeStringPrivate.c)
 *     GetModuleFullPathName @ 0x1800AFB48 (GetModuleFullPathName.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B2D20 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x1800B3204 (QueryRegistryValue.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1800B3330 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800B3A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800B4D10 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x1800B5184 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x1800B532C (EtwpGetRegDwordValue.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800BB490 (RtlpIdnToUnicodeWorker.c)
 *     RtlpGetNormalization @ 0x1800BC244 (RtlpGetNormalization.c)
 *     RtlpTpIoAlloc @ 0x1800BEC44 (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800BF070 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800BF2F0 (TppJobpFree.c)
 *     TppAllocAlpcCompletion @ 0x1800BF374 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x1800BF640 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x1800BF6A0 (TpAllocIoCompletion.c)
 *     RtlpTpIoDllLoaded @ 0x1800BF9D8 (RtlpTpIoDllLoaded.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     PssNtFreeSnapshot @ 0x1800C45F0 (PssNtFreeSnapshot.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800C6760 (RtlpValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x1800C6C64 (RtlpComputeMergedAcl.c)
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C8C40 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C90B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1800CB040 (RtlpCombineAcls.c)
 *     RtlpInheritAcl @ 0x1800CB760 (RtlpInheritAcl.c)
 *     RtlDefaultNpAcl @ 0x1800CD980 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x1800CE250 (RtlCreateAndSetSD.c)
 *     LdrpGetParentLangId @ 0x1800D1514 (LdrpGetParentLangId.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpResSearchResourceHandle @ 0x1800D1ACC (LdrpResSearchResourceHandle.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800D24B4 (_RtlpMuiRegAddNeutralLanguage.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D6BB8 (LdrpLoadContextReplaceModule.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800D6E50 (RtlpFcNotifyFeatureUsageTarget.c)
 *     LdrpObtainLockedEnclave @ 0x1800D8D60 (LdrpObtainLockedEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8F88 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpFreeLoadContext @ 0x1800D90C0 (LdrpFreeLoadContext.c)
 *     LdrpLoadEnclaveModule @ 0x1800D9218 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D96C0 (LdrpAllocatePlaceHolder.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800DCC30 (LdrpLogDelayLoadTrigger.c)
 *     TppPoolpFree @ 0x1800DEE44 (TppPoolpFree.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E1C48 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E1F5C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E51E8 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlContractHashTable @ 0x1800E6190 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x1800E62F0 (RtlExpandHashTable.c)
 *     RtlDeleteHashTable @ 0x1800E66D0 (RtlDeleteHashTable.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E6A30 (RtlCreateProcessParametersInternal.c)
 *     LdrpResValidateFilePath @ 0x1800E7188 (LdrpResValidateFilePath.c)
 *     RtlDeleteFunctionTable @ 0x1800E74E0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E76F0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E7DE0 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpSetProviderTraits @ 0x1800E8690 (EtwpSetProviderTraits.c)
 *     LdrpQueryValueKey @ 0x1800E8D50 (LdrpQueryValueKey.c)
 *     RtlAcquirePrivilege @ 0x1800E9050 (RtlAcquirePrivilege.c)
 *     EtwRegisterTraceGuidsW @ 0x1800EA1B0 (EtwRegisterTraceGuidsW.c)
 *     RtlFreeSid @ 0x1800EA640 (RtlFreeSid.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800EA9C0 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800EAF10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800EB2F0 (RtlpMuiRegFreeStringPool.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EB31C (RtlpMuiRegLoadLicInformation.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800EBE50 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800EBF30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlCleanUpTEBLangLists @ 0x1800EC160 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x1800EC22C (RtlpFreeTebLanguageList.c)
 *     LdrpCleanupThreadTlsData @ 0x1800EC734 (LdrpCleanupThreadTlsData.c)
 *     RtlReleasePath @ 0x1800EDC80 (RtlReleasePath.c)
 *     LdrpMergeNodes @ 0x1800EE3EC (LdrpMergeNodes.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EE9F8 (EtwpReceiveReplyDataBlock.c)
 *     RtlpRemoveVectoredHandler @ 0x1800EF340 (RtlpRemoveVectoredHandler.c)
 *     SaferpIsDllAllowed @ 0x1800F04FC (SaferpIsDllAllowed.c)
 *     RtlDeleteSecurityObject @ 0x1800F1E20 (RtlDeleteSecurityObject.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800F22A8 (SbpRetrieveCompatibilityManifest.c)
 *     RtlSetSearchPathMode @ 0x1800F2DE0 (RtlSetSearchPathMode.c)
 *     EtwUnregisterTraceGuids @ 0x1800F30C0 (EtwUnregisterTraceGuids.c)
 *     RtlpNtQueryValueKey @ 0x1800F3600 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F3BC4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     TppFreeThreadData @ 0x1800F3D68 (TppFreeThreadData.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800F3DB4 (TppPoolUpdateTrimmedWorker.c)
 *     EvtIntReportEventWorker @ 0x1800F4050 (EvtIntReportEventWorker.c)
 *     TppFreeDirectParamsCache @ 0x1800F4C54 (TppFreeDirectParamsCache.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F5610 (RtlpNtEnumerateSubKey.c)
 *     TpTrimPools @ 0x1800F57E0 (TpTrimPools.c)
 *     RtlpFreeDebugInfo @ 0x1800F6260 (RtlpFreeDebugInfo.c)
 *     RtlpInitializeWnf @ 0x1800F73B8 (RtlpInitializeWnf.c)
 *     RtlReleasePrivilege @ 0x1800F7A00 (RtlReleasePrivilege.c)
 *     RtlpFcFreeChangeRegistration @ 0x1800F7B3C (RtlpFcFreeChangeRegistration.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F980C (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 *     RtlSetCurrentDirectory_U @ 0x1800FAB90 (RtlSetCurrentDirectory_U.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FB208 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlDestroyProcessParameters @ 0x1800FB620 (RtlDestroyProcessParameters.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RtlAbortRXact @ 0x180106A30 (RtlAbortRXact.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010ABC0 (EtwpDereferenceUmGuidEntry.c)
 *     RtlAddAttributeActionToRXact @ 0x18010B220 (RtlAddAttributeActionToRXact.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 *     LdrpCheckPagesForTampering @ 0x18010DBB4 (LdrpCheckPagesForTampering.c)
 *     LdrFlushAlternateResourceModules @ 0x18010DE50 (LdrFlushAlternateResourceModules.c)
 *     LdrpResMapFile @ 0x18010E614 (LdrpResMapFile.c)
 *     LdrRemoveDllDirectory @ 0x180110AF0 (LdrRemoveDllDirectory.c)
 *     RtlDestroyHandleTable @ 0x180110BF0 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x180111430 (EtwpShutdownCompression.c)
 *     LdrUnregisterDllNotification @ 0x180111490 (LdrUnregisterDllNotification.c)
 *     RtlSetFeatureConfigurations @ 0x1801116E0 (RtlSetFeatureConfigurations.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1801138EC (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpWnfRetryTimerCallback @ 0x180113BB0 (RtlpWnfRetryTimerCallback.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x1801141F0 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlpCheckDeviceName @ 0x1801145F0 (RtlpCheckDeviceName.c)
 *     RtlpLookupSafeCurDirList @ 0x1801146A8 (RtlpLookupSafeCurDirList.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180115D20 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180116698 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180117D74 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpGetPersistedRegistryLocation @ 0x180119720 (RtlpGetPersistedRegistryLocation.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1801203D0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180120540 (RtlpConvertCultureNamesToLCIDs.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180131860 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180131B50 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x180132850 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1801328C0 (RtlEnableThreadProfiling.c)
 *     RtlCreateUserSecurityObject @ 0x180133850 (RtlCreateUserSecurityObject.c)
 *     ImportTablepFreeModuleSorted @ 0x180134CC8 (ImportTablepFreeModuleSorted.c)
 *     RtlQueryModuleInformation @ 0x180138300 (RtlQueryModuleInformation.c)
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
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x180141A70 (RtlMultipleFreeHeap.c)
 *     RtlCompareExchangePointerMapping @ 0x180142ED0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180143020 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1801433A0 (RtlRemovePointerMapping.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1801448B0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x180146DE8 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlRcuFree @ 0x180147C00 (RtlRcuFree.c)
 *     RtlpRcuCurrentThreadData @ 0x180147E48 (RtlpRcuCurrentThreadData.c)
 *     RtlpGetWindowsPolicy @ 0x180148EF0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180149004 (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014AC60 (_RtlpMuiRegValidateInstalled.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180157A04 (UcpRetrieveCurrentConfigSettings.c)
 *     UcpUnInitializeListHead @ 0x180157B70 (UcpUnInitializeListHead.c)
 *     RtlpSignalSystemDirsModification @ 0x18015E5B4 (RtlpSignalSystemDirsModification.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015FB08 (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x18002C980 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlpLogHeapFreeEvent @ 0x180095BD4 (RtlpLogHeapFreeEvent.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180096800 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpValidateLFHBlock @ 0x1800DE950 (RtlpValidateLFHBlock.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800E28F0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013C174 (RtlpHeapFatalExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180165A40 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180165A80 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlFreeHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // r15d
  __int64 v5; // r14
  unsigned int v6; // r13d
  unsigned __int64 v7; // rsi
  _QWORD **v8; // rdi
  _QWORD *v9; // r15
  int v10; // r12d
  unsigned int v11; // r14d
  __int64 v12; // r10
  _DWORD *SharedData; // rcx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int i; // edx
  signed __int32 v17; // ebx
  _WORD *v18; // rcx
  _QWORD **v19; // rdx
  struct _TEB *v21; // rbx
  unsigned int v22; // r14d
  unsigned __int64 m; // r8
  unsigned int v24; // edx
  __int64 *v25; // r9
  __int64 v26; // rsi
  __int64 **v27; // rbx
  signed __int32 v29; // eax
  __int64 *v30; // rcx
  volatile signed __int32 *v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // rsi
  bool v35; // zf
  unsigned int v36; // r14d
  int v37; // r9d
  signed __int64 v38; // rcx
  unsigned __int8 v39; // al
  signed __int32 v41; // eax
  unsigned __int16 *v42; // r9
  unsigned int k; // r8d
  unsigned __int16 *v44; // rcx
  volatile signed __int32 *v45; // rdx
  char v46; // bl
  _DWORD *v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct _TEB *v51; // rbx
  __int64 v52; // rcx
  _QWORD **v53; // rdx
  _QWORD *j; // rax
  unsigned int v55; // edx
  int v56; // eax
  unsigned __int64 v57; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int64 v58; // [rsp+40h] [rbp-A8h] BYREF
  _OWORD v59[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v60; // [rsp+68h] [rbp-80h]
  __int128 v61; // [rsp+78h] [rbp-70h]
  __int128 v62; // [rsp+88h] [rbp-60h]
  __int128 v63; // [rsp+98h] [rbp-50h]
  int v67; // [rsp+108h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( (a1 & a3) != 0 )
    goto LABEL_2;
  if ( a3 )
  {
    if ( !a1 )
    {
      v6 = 0;
      RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
LABEL_3:
      if ( *(_DWORD *)(v5 + 16) == -571548178 )
      {
        if ( (RtlpHpHeapFeatures & 2) == 0 )
        {
          v6 = RtlpHpFreeHeap(v5, v3);
          if ( !v6 )
          {
            v21 = NtCurrentTeb();
            v21->LastStatusValue = -1073741811;
            v21->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
          }
          return v6;
        }
      }
      else if ( (RtlpHpHeapFeatures & 2) == 0 )
      {
        v7 = 0LL;
        if ( (*(_DWORD *)(v5 + 116) & 0x1000000) != 0 )
        {
LABEL_88:
          v39 = RtlpFreeHeap((void *)v5);
          v6 = v39;
          if ( v39 )
          {
LABEL_36:
            if ( (dword_1801CE8C8 & 1) != 0
              && (dword_1801CE8C8 & 2) != 0
              && NtCurrentPeb()->ProcessHeap
              && v5 != qword_1801D21B8[2 * (unsigned int)dword_1801800C8[BYTE1(RtlpHpEnvHandle)]]
              && (v4 & 0x10000000) == 0 )
            {
              RtlpHpStackTraceRemoveStack(v5, v3);
            }
          }
          return v6;
        }
        if ( (*(_BYTE *)(v5 + 120) & 1) != 0 )
        {
          v7 = RtlpProbeUserBufferSafe(v5, v3);
        }
        else if ( (v3 & 0xF) != 0 )
        {
          RtlpLogHeapFailure(9, v5, v3, 0, 0LL, 0LL);
        }
        else
        {
          v7 = v3 - 16;
          _m_prefetchw((const void *)(v3 - 16));
          if ( *(_BYTE *)(v3 - 16 + 15) == 5 )
            v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
          if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
          {
            RtlpLogHeapFailure(8, v5, v7, 0, 0LL, 0LL);
            v7 = 0LL;
          }
        }
        if ( !v7 )
          goto LABEL_122;
        if ( *(_BYTE *)(v3 - 1) != 5 )
          goto LABEL_14;
        if ( *(char *)(v7 + 15) >= 0 )
        {
          v47 = (_DWORD *)(v5 + 124);
          if ( *(_DWORD *)(v5 + 124) )
          {
            v61 = 0LL;
            DWORD2(v61) = *(_DWORD *)(v5 + 136) ^ *(_DWORD *)(v7 + 8);
            if ( BYTE11(v61) != (BYTE8(v61) ^ (unsigned __int8)(BYTE9(v61) ^ BYTE10(v61))) )
              goto LABEL_117;
          }
          v46 = 1;
        }
        else
        {
          v46 = RtlpValidateLFHBlock(v5, v7);
          if ( !v46 )
          {
LABEL_139:
            if ( !v46 )
            {
LABEL_117:
              RtlpLogHeapFailure(3, v5, v7, v3, 0LL, 0LL);
              goto LABEL_122;
            }
            if ( (v4 & 0x3C000102) != 0
              || (*(_BYTE *)(v3 - 16 + 15) != 5 ? (v50 = 0LL) : (v50 = v3 - 16LL * *(unsigned __int8 *)(v3 - 16 + 14)),
                  (int)RtlpCallInterceptRoutine(*(_DWORD *)(v3 - 8), v5, v3, 3, v50) >= 0) )
            {
LABEL_14:
              if ( *(char *)(v7 + 15) < 0 )
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v5 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
                  v8 = 0LL;
                else
                  v8 = *(_QWORD ***)(v7
                                   - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v5 ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12));
                if ( v8 )
                {
                  _m_prefetchw(v8);
                  v9 = v8[1];
                  v10 = 0;
                  v11 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
                  v12 = *(_QWORD *)(**v8 + 24LL);
                  if ( (_QWORD *)((char *)v9
                                + v11
                                * (((unsigned int)RtlpLFHKey ^ (unsigned int)v12 ^ *((_DWORD *)v9 + 6) ^ (unsigned int)v9) >> 16)
                                + (unsigned __int16)(RtlpLFHKey ^ v12 ^ *((_WORD *)v9 + 12) ^ (unsigned __int16)v9)) == (_QWORD *)v7 )
                  {
                    SharedData = NtCurrentPeb()->SharedData;
                    if ( SharedData && *SharedData )
                      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
                    else
                      v14 = 2147353472LL;
                    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                      RtlpLogHeapFreeEvent(*(_QWORD *)(v12 + 24), v7 + 16, 2LL);
                    v15 = 0;
                    if ( MEMORY[0x7FFE036A] > 1u )
                      v15 = 100;
                    for ( i = 0; i <= v15; ++i )
                    {
                      v17 = *((_DWORD *)v8 + 8);
                      if ( v17 >= 0
                        && _InterlockedCompareExchange((volatile signed __int32 *)v8 + 8, v17 | 0x80000000, v17) == v17 )
                      {
                        goto LABEL_31;
                      }
                    }
                    v17 = -1;
LABEL_31:
                    v18 = v8 + 2;
                    *(_BYTE *)(v7 + 15) = 0x80;
                    if ( v17 == -1 )
                    {
                      v19 = (_QWORD **)(v7 + 16);
                      goto LABEL_33;
                    }
                    _bittestandreset((signed __int32 *)v9[5], v11);
                    if ( *v18 )
                    {
                      for ( j = (_QWORD *)RtlpInterlockedFlushSList(); j; ++v10 )
                      {
                        v55 = *((_DWORD *)j - 1);
                        j = (_QWORD *)*j;
                        v11 = (unsigned __int16)(v55 >> 8);
                        _bittestandreset((signed __int32 *)v9[5], v11);
                      }
                    }
                    v22 = v11 << 16;
                    m = (unsigned __int64)*v8;
                    if ( ((unsigned __int16)v22 | (unsigned __int16)(v10 + v17 + 1)) != *((_WORD *)v8 + 20)
                      || (v24 = *(_DWORD *)(*(_QWORD *)m + 32LL),
                          v25 = (__int64 *)*(unsigned int *)(m + 168),
                          *(_DWORD *)(m + 164) == 1)
                      && v24 >= (unsigned int)v25
                      && v24 - (unsigned int)v25 < *(_DWORD *)(*(_QWORD *)m + 36LL) )
                    {
                      *((_DWORD *)v8 + 8) = v22 | (v10 + (unsigned __int16)v17 + 1);
                      if ( (*((_DWORD *)v8 + 11) & 2) == 0
                        && *((_WORD *)v8 + 16)
                        && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(m, v8) )
                      {
                        while ( 1 )
                        {
                          v41 = *((_DWORD *)v8 + 11);
                          if ( !v41 || (v41 & 2) != 0 )
                            break;
                          if ( v41 == _InterlockedCompareExchange((volatile signed __int32 *)v8 + 11, v41 | 2, v41) )
                          {
                            v42 = (unsigned __int16 *)*v8;
                            for ( k = 0; ; ++k )
                            {
                              if ( k >= 0x10 )
                              {
                                v18 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(**v8 + 24LL)
                                                          + 8LL * *((unsigned __int16 *)*v8 + 86)
                                                          + 1192)
                                              + 144LL);
                                goto LABEL_87;
                              }
                              v44 = &v42[4 * (((_BYTE)k + (unsigned __int8)v42[87]) & 0xF)];
                              v45 = (volatile signed __int32 *)*((_QWORD *)v44 + 2);
                              if ( v45 )
                              {
                                if ( (v45[11] & 1) == 0
                                  && v45 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                         (volatile signed __int64 *)v44 + 2,
                                                                         (signed __int64)v8,
                                                                         (signed __int64)v45) )
                                {
                                  _m_prefetchw((const void *)(v45 + 11));
                                  if ( _InterlockedAnd(v45 + 11, 0xFFFFFFFD) != 2 )
                                    goto LABEL_34;
                                  v18 = **(_WORD ***)v45;
                                  *(_QWORD *)v45 = 0LL;
                                  v19 = (_QWORD **)(v45 + 12);
                                  goto LABEL_33;
                                }
                              }
                              else if ( !_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v44 + 2,
                                           (signed __int64)v8,
                                           0LL) )
                              {
                                goto LABEL_34;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v26 = (__int64)*v8;
                      v27 = (__int64 **)_InterlockedExchange64(*v8 + 1, 0LL);
                      if ( v27 )
                      {
                        _m_prefetchw((char *)v27 + 44);
                        if ( _InterlockedAnd((volatile signed __int32 *)v27 + 11, 0xFFFFFFF9) == 6 )
                        {
                          v52 = **v27;
                          *v27 = 0LL;
LABEL_124:
                          v53 = v27 + 6;
LABEL_125:
                          RtlpInterlockedPushEntrySList(v52, v53);
                        }
                        else if ( *((_WORD *)v27 + 16)
                               && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(v26, v27) )
                        {
                          while ( 1 )
                          {
                            v29 = *((_DWORD *)v27 + 11);
                            if ( !v29 || (v29 & 2) != 0 )
                              break;
                            if ( v29 == _InterlockedCompareExchange((volatile signed __int32 *)v27 + 11, v29 | 2, v29) )
                            {
                              v25 = *v27;
                              for ( m = 0LL; ; m = (unsigned int)(m + 1) )
                              {
                                if ( (unsigned int)m >= 0x10 )
                                {
                                  v52 = *(_QWORD *)(*(_QWORD *)(**v27 + 24)
                                                  + 8LL * *((unsigned __int16 *)*v27 + 86)
                                                  + 1192)
                                      + 144LL;
                                  goto LABEL_124;
                                }
                                v30 = &v25[((_BYTE)m + (unsigned __int8)*((_WORD *)v25 + 87)) & 0xF];
                                v31 = (volatile signed __int32 *)v30[2];
                                if ( v31 )
                                {
                                  if ( (v31[11] & 1) == 0
                                    && v31 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                           v30 + 2,
                                                                           (signed __int64)v27,
                                                                           (signed __int64)v31) )
                                  {
                                    _m_prefetchw((const void *)(v31 + 11));
                                    if ( _InterlockedAnd(v31 + 11, 0xFFFFFFFD) != 2 )
                                      goto LABEL_78;
                                    v52 = **(_QWORD **)v31;
                                    *(_QWORD *)v31 = 0LL;
                                    v53 = (_QWORD **)(v31 + 12);
                                    goto LABEL_125;
                                  }
                                }
                                else if ( !_InterlockedCompareExchange64(v30 + 2, (signed __int64)v27, 0LL) )
                                {
                                  goto LABEL_78;
                                }
                              }
                            }
                          }
                        }
                      }
LABEL_78:
                      v32 = *(_QWORD *)(*(_QWORD *)v26 + 24LL);
                      v33 = (__int64)*v8;
                      if ( (*((_BYTE *)v8 + 38) & 3) != 0 )
                      {
                        v67 = 0;
                        v58 = ((unsigned __int64)v8[1] + 4151) & 0xFFFFFFFFFFFFF000uLL;
                        v57 = 16
                            * (unsigned __int16)((((16 * (*((unsigned __int16 *)v8 + 18) + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
                                                + 4096) >> 4)
                            * (unsigned __int64)*((unsigned __int16 *)v8 + 20);
                        v34 = *(_QWORD *)(v32 + 24);
                        v35 = (*(_DWORD *)(v34 + 112) & 0x40000) == 0;
                        v36 = 64;
                        if ( (*(_DWORD *)(v34 + 112) & 0x40000) == 0 )
                          v36 = 4;
                        memset(v59, 0, sizeof(v59));
                        v60 = 0LL;
                        if ( !v35
                          && ((int)ZwQueryVirtualMemory(-1LL, v34, 0LL, v59, 48LL, 0LL) < 0
                           || (BYTE4(v60) & 0x60) == 0
                           || *(_QWORD *)&v59[0] != v34) )
                        {
                          RtlpLogHeapFailure(0, v34, 1, DWORD1(v60), 0LL, 0LL);
                          v36 = 4;
                        }
                        ZwProtectVirtualMemory(-1LL, &v58, &v57, v36, &v67);
                      }
                      *((_DWORD *)v8[1] + 5) = 0;
                      RtlpFreeUserBlock(v32, v8[1], m, v25);
                      v37 = *((unsigned __int16 *)v8 + 20);
                      _m_prefetchw((const void *)(v33 + 160));
                      do
                        v38 = *(_QWORD *)(v33 + 160);
                      while ( _InterlockedCompareExchange64(
                                (volatile signed __int64 *)(v33 + 160),
                                (unsigned int)(v38 - v37) | ((unsigned __int64)(unsigned int)(HIDWORD(v38) - 1) << 32),
                                v38) != v38 );
                      v8[1] = 0LL;
                      _InterlockedIncrement((volatile signed __int32 *)(v32 + 60));
                      *((_DWORD *)v8 + 8) = 0;
                      _m_prefetchw((char *)v8 + 44);
                      if ( _InterlockedAnd((volatile signed __int32 *)v8 + 11, 0xFFFFFFFE) == 1 )
                      {
                        v18 = (_WORD *)**v8;
                        *v8 = 0LL;
LABEL_87:
                        v19 = v8 + 6;
LABEL_33:
                        RtlpInterlockedPushEntrySList(v18, v19);
                      }
                    }
                  }
                  else
                  {
                    RtlpLogHeapFailure(3, *(_QWORD *)(v12 + 24), v7, 0, 0LL, 0LL);
                  }
LABEL_34:
                  v5 = a1;
                  v4 = a2;
                }
                else
                {
                  RtlpLogHeapFailure(3, v5, v7, 0, 0LL, 0LL);
                }
                v6 = 1;
                v3 = a3;
                goto LABEL_36;
              }
              goto LABEL_88;
            }
LABEL_122:
            v51 = NtCurrentTeb();
            v51->LastStatusValue = -1073741811;
            v51->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
            return v6;
          }
          v47 = (_DWORD *)(v5 + 124);
        }
        if ( *(char *)(v7 + 15) >= 0 )
        {
          if ( *v47 )
          {
            v62 = 0LL;
            LODWORD(v48) = *(_DWORD *)(v7 + 8);
            if ( ((unsigned int)v48 & *v47) != 0 )
            {
              LODWORD(v48) = *(_DWORD *)(v5 + 136) ^ v48;
              DWORD2(v62) = v48;
              v47 = (_DWORD *)(v5 + 124);
            }
          }
          else
          {
            LOWORD(v48) = *(_WORD *)(v7 + 8);
          }
        }
        else
        {
          if ( *(_WORD *)(v7 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ v5 ^ (v7 >> 4)) )
            v48 = 0LL;
          else
            v48 = *(_QWORD *)(v7
                            - ((unsigned __int64)(*(_DWORD *)(v7 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v5 ^ (unsigned int)(v7 >> 4)) >> 12));
          LOWORD(v48) = *(_WORD *)(v48 + 36);
        }
        if ( *(_BYTE *)(v7 + 15) == 4 )
        {
          if ( *v47 )
          {
            v63 = 0LL;
            v56 = *(_DWORD *)(v7 + 8);
            if ( (v56 & *v47) != 0 )
            {
              v56 ^= *(_DWORD *)(v5 + 136);
              DWORD2(v63) = v56;
            }
          }
          else
          {
            LOWORD(v56) = *(_WORD *)(v7 + 8);
          }
          v49 = (unsigned __int16)v48 + *(_QWORD *)(v7 - 16) - (unsigned __int16)v56;
        }
        else
        {
          v49 = 16LL * (unsigned __int16)v48;
        }
        if ( v49 + v7 < v3 )
          goto LABEL_117;
        goto LABEL_139;
      }
      return (unsigned int)RtlpHpTagFreeHeap(v5, v3, v4);
    }
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  return 1LL;
}
