/*
 * XREFs of RtlFreeHeap @ 0x1800533F0
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x180001138 (RtlpMUIEnumerateFolder.c)
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpFreeActivationContext @ 0x1800029B8 (RtlpFreeActivationContext.c)
 *     RtlCreateActivationContext @ 0x180002A30 (RtlCreateActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180002E90 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x180003314 (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180003E84 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x18000402C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDosSearchPath_U @ 0x180004710 (RtlDosSearchPath_U.c)
 *     RtlpClearEnvironmentHashTable @ 0x1800049FC (RtlpClearEnvironmentHashTable.c)
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpGetCachedPath @ 0x180006160 (RtlpGetCachedPath.c)
 *     RtlpComputePath @ 0x180006610 (RtlpComputePath.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x180008100 (RtlpScanEnvironment.c)
 *     _IsProgramFilesPath @ 0x180008D2C (_IsProgramFilesPath.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18000C1A0 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpFreeTraverseNodes @ 0x180014820 (RtlpFreeTraverseNodes.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x180015914 (RtlpMuiRegFreeLanguageConfigList.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180016190 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18001AAA0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpHeapTrkTrackStack @ 0x18001C780 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x18001CA70 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18001CB50 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18001CC90 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18001D070 (RtlpHeapTrkDereferenceStack.c)
 *     EtwpFinalizeLogFileHeader @ 0x18001EFE0 (EtwpFinalizeLogFileHeader.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     TppQueryMaximumGroupCount @ 0x180023184 (TppQueryMaximumGroupCount.c)
 *     CsrFreeCaptureBuffer @ 0x180024190 (CsrFreeCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x1800243D4 (CsrpConnectToServer.c)
 *     RtlpRemoveVectoredHandler @ 0x180027330 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteResource @ 0x180027580 (RtlDeleteResource.c)
 *     RtlDeleteFunctionTable @ 0x1800277A0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpProcessHeapsRemove @ 0x180028028 (RtlpProcessHeapsRemove.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x18002866C (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180029920 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpCreateSerializationGroup @ 0x18002C7C0 (RtlpCreateSerializationGroup.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18002CA58 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18002DFFC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18002E3A0 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18002E484 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x18002E530 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x18002E89C (RtlpCreateWnfNameSubscription.c)
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     LdrpDestroyNode @ 0x180031528 (LdrpDestroyNode.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x18003257C (LdrpDynamicShimModule.c)
 *     LdrpAcquireTlsIndex @ 0x180032A38 (LdrpAcquireTlsIndex.c)
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     LdrpAllocateTlsEntry @ 0x18003416C (LdrpAllocateTlsEntry.c)
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpAllocateModuleEntry @ 0x18003D080 (LdrpAllocateModuleEntry.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpAllocateTls @ 0x18003EF80 (LdrpAllocateTls.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     RtlpCallVectoredHandlers @ 0x1800467C0 (RtlpCallVectoredHandlers.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     TpAllocWork @ 0x180048850 (TpAllocWork.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     EtwpRegisterProvider @ 0x18004A730 (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x18004A9F0 (EtwpNotificationThread.c)
 *     EtwpEventApiCallback @ 0x18004B650 (EtwpEventApiCallback.c)
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18004BE80 (TppExecuteWaitCallback.c)
 *     RtlpWnfNotificationThread @ 0x18004C6F0 (RtlpWnfNotificationThread.c)
 *     TppFreeWait @ 0x18004CEA0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18004CEF0 (TppTimerpFree.c)
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004D6B0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppIopCallbackEpilog @ 0x18004E2E0 (TppIopCallbackEpilog.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x180051D70 (TppPrepareDirectParams.c)
 *     LdrSetDllDirectory @ 0x180052B00 (LdrSetDllDirectory.c)
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     RtlpAllocateNTHeapInternal @ 0x180054DA0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     TpTrimPools @ 0x18005E2D0 (TpTrimPools.c)
 *     RtlpFreeHeapMetadata @ 0x1800647B8 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsHeapFree @ 0x180064ABC (RtlpFlsHeapFree.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1800773E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpIsReparsePoint @ 0x18007A600 (LdrpIsReparsePoint.c)
 *     RtlpIsNameInExpressionPrivate @ 0x18007B878 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x18007BEB4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     GetModuleFullPathName @ 0x18007C3E8 (GetModuleFullPathName.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18007F5C0 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x18007FAA4 (QueryRegistryValue.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18007FBD0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180080330 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800815B0 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x180081A24 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180081BCC (EtwpGetRegDwordValue.c)
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x180085F2C (TppPoolUpdateNodeRelation.c)
 *     TpReleaseCleanupGroup @ 0x180086420 (TpReleaseCleanupGroup.c)
 *     TpAllocCleanupGroup @ 0x180086490 (TpAllocCleanupGroup.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180086B88 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TpSimpleTryPost @ 0x180086E30 (TpSimpleTryPost.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x1800889F0 (TpWaitForTimer.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     RtlpTpTimerRundown @ 0x18008941C (RtlpTpTimerRundown.c)
 *     TpReleaseWork @ 0x180089580 (TpReleaseWork.c)
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     TppFreeDirectParams @ 0x18008A070 (TppFreeDirectParams.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     RtlpTpWaitRundown @ 0x18008B074 (RtlpTpWaitRundown.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     RtlpTpWorkUnposted @ 0x18008BF40 (RtlpTpWorkUnposted.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18008CA60 (RtlpFreeActivationContextStackFrame.c)
 *     SbpDetermineDllContext @ 0x18008D9F0 (SbpDetermineDllContext.c)
 *     LdrpCheckModule @ 0x18008DC60 (LdrpCheckModule.c)
 *     LdrpLogNewDllLoadInternal @ 0x180090E80 (LdrpLogNewDllLoadInternal.c)
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 *     LdrpLogEtwDllSearchResults @ 0x180092B74 (LdrpLogEtwDllSearchResults.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180092FD0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x180093650 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800937A0 (RtlDosSearchPath_Ustr.c)
 *     RtlReleaseRelativeName @ 0x180094110 (RtlReleaseRelativeName.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800946E8 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpCheckForSameCurdir @ 0x180094920 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180094A20 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x180094BF0 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x180094EF0 (RtlpCreateNewDirectoryReference.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800969C0 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResSearchResourceHandle @ 0x18009856C (LdrpResSearchResourceHandle.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180098E48 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     LdrpGetParentLangId @ 0x180099B74 (LdrpGetParentLangId.c)
 *     RtlpFreeUserBlockToHeap @ 0x1800A1250 (RtlpFreeUserBlockToHeap.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800A5D14 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetNextAvailableLoggerId @ 0x1800A8CF0 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x1800A8DF0 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x1800AA48C (EtwpFreeLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x1800AA6EC (EtwpFreeStreamIndexMap.c)
 *     RtlUnlockModuleSection @ 0x1800AAA30 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800AAAE0 (RtlLockModuleSection.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrpFreeTls @ 0x1800AB4A0 (LdrpFreeTls.c)
 *     RtlFreeActivationContextStack @ 0x1800AB5A0 (RtlFreeActivationContextStack.c)
 *     WerpGlobalFlagsForProcess @ 0x1800AC868 (WerpGlobalFlagsForProcess.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800AE26C (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800B3250 (RtlpIdnToUnicodeWorker.c)
 *     RtlpGetNormalization @ 0x1800B4004 (RtlpGetNormalization.c)
 *     RtlpTpIoAlloc @ 0x1800B6A04 (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800B6E30 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800B70B0 (TppJobpFree.c)
 *     TppAllocAlpcCompletion @ 0x1800B7134 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x1800B7400 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x1800B7460 (TpAllocIoCompletion.c)
 *     RtlpTpIoDllLoaded @ 0x1800B7798 (RtlpTpIoDllLoaded.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     PssNtFreeSnapshot @ 0x1800BC1B0 (PssNtFreeSnapshot.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800BE320 (RtlpValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x1800BE824 (RtlpComputeMergedAcl.c)
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C0800 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C0C70 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1800C2C00 (RtlpCombineAcls.c)
 *     RtlpInheritAcl @ 0x1800C3320 (RtlpInheritAcl.c)
 *     RtlDefaultNpAcl @ 0x1800C5540 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x1800C5E10 (RtlCreateAndSetSD.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800C8700 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800C99F0 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlCleanUpTEBLangLists @ 0x1800CA500 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x1800CA5CC (RtlpFreeTebLanguageList.c)
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800CAB90 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800CB614 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800CB7D0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800CC110 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800CC340 (RtlpMuiRegFreeStringPool.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800CC41C (RtlpMuiRegLoadLicInformation.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D1F28 (LdrpLoadContextReplaceModule.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800D21C0 (RtlpFcNotifyFeatureUsageTarget.c)
 *     LdrpObtainLockedEnclave @ 0x1800D40D0 (LdrpObtainLockedEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D42F8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpFreeLoadContext @ 0x1800D4430 (LdrpFreeLoadContext.c)
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D4A30 (LdrpAllocatePlaceHolder.c)
 *     LdrpReleaseTlsEntry @ 0x1800D73C8 (LdrpReleaseTlsEntry.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800D7DA0 (LdrpLogDelayLoadTrigger.c)
 *     TppPoolpFree @ 0x1800D9FB4 (TppPoolpFree.c)
 *     LdrpDereferenceEnclave @ 0x1800DC130 (LdrpDereferenceEnclave.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DD52C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800DF398 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E0698 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlContractHashTable @ 0x1800E1640 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x1800E17A0 (RtlExpandHashTable.c)
 *     RtlDeleteHashTable @ 0x1800E1B80 (RtlDeleteHashTable.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E1EE0 (RtlCreateProcessParametersInternal.c)
 *     LdrpResValidateFilePath @ 0x1800E2638 (LdrpResValidateFilePath.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E2AF0 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpSetProviderTraits @ 0x1800E3D80 (EtwpSetProviderTraits.c)
 *     LdrpQueryValueKey @ 0x1800E4440 (LdrpQueryValueKey.c)
 *     RtlAcquirePrivilege @ 0x1800E4740 (RtlAcquirePrivilege.c)
 *     EtwRegisterTraceGuidsW @ 0x1800E5940 (EtwRegisterTraceGuidsW.c)
 *     RtlFreeSid @ 0x1800E5EB0 (RtlFreeSid.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800E6230 (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpCleanupThreadTlsData @ 0x1800E7D74 (LdrpCleanupThreadTlsData.c)
 *     RtlReleasePath @ 0x1800E8E60 (RtlReleasePath.c)
 *     LdrpMergeNodes @ 0x1800E95CC (LdrpMergeNodes.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800E9BD8 (EtwpReceiveReplyDataBlock.c)
 *     SaferpIsDllAllowed @ 0x1800EB17C (SaferpIsDllAllowed.c)
 *     RtlDeleteSecurityObject @ 0x1800ECAA0 (RtlDeleteSecurityObject.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800ECF28 (SbpRetrieveCompatibilityManifest.c)
 *     RtlSetSearchPathMode @ 0x1800ED6D0 (RtlSetSearchPathMode.c)
 *     EtwUnregisterTraceGuids @ 0x1800ED9B0 (EtwUnregisterTraceGuids.c)
 *     RtlpNtQueryValueKey @ 0x1800EDEF0 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800EE0E4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     TppFreeThreadData @ 0x1800EE288 (TppFreeThreadData.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800EE2D4 (TppPoolUpdateTrimmedWorker.c)
 *     EvtIntReportEventWorker @ 0x1800EE760 (EvtIntReportEventWorker.c)
 *     TppFreeDirectParamsCache @ 0x1800EF874 (TppFreeDirectParamsCache.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F0130 (RtlpNtEnumerateSubKey.c)
 *     RtlpFreeDebugInfo @ 0x1800F07C0 (RtlpFreeDebugInfo.c)
 *     RtlpInitializeWnf @ 0x1800F1B08 (RtlpInitializeWnf.c)
 *     RtlReleasePrivilege @ 0x1800F2570 (RtlReleasePrivilege.c)
 *     RtlpFcFreeChangeRegistration @ 0x1800F26AC (RtlpFcFreeChangeRegistration.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F44BC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 *     RtlSetCurrentDirectory_U @ 0x1800F58F0 (RtlSetCurrentDirectory_U.c)
 *     RtlpTpTimerQueueRundown @ 0x1800F5E58 (RtlpTpTimerQueueRundown.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800F5EA4 (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F6138 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlDestroyProcessParameters @ 0x1800F6550 (RtlDestroyProcessParameters.c)
 *     RtlInitializeRXact @ 0x180101240 (RtlInitializeRXact.c)
 *     RtlAbortRXact @ 0x180101960 (RtlAbortRXact.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180105730 (EtwpDereferenceUmGuidEntry.c)
 *     RtlAddAttributeActionToRXact @ 0x180105FC0 (RtlAddAttributeActionToRXact.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 *     LdrpCheckPagesForTampering @ 0x180108A94 (LdrpCheckPagesForTampering.c)
 *     LdrFlushAlternateResourceModules @ 0x180108D30 (LdrFlushAlternateResourceModules.c)
 *     LdrpResMapFile @ 0x180109564 (LdrpResMapFile.c)
 *     LdrRemoveDllDirectory @ 0x18010BDB0 (LdrRemoveDllDirectory.c)
 *     RtlDestroyHandleTable @ 0x18010BEB0 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x18010C83C (EtwpShutdownCompression.c)
 *     LdrUnregisterDllNotification @ 0x18010C8A0 (LdrUnregisterDllNotification.c)
 *     RtlSetFeatureConfigurations @ 0x18010CAF0 (RtlSetFeatureConfigurations.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18010EBEC (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpWnfRetryTimerCallback @ 0x18010EEB0 (RtlpWnfRetryTimerCallback.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x18010F440 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlpCheckDeviceName @ 0x18010F840 (RtlpCheckDeviceName.c)
 *     RtlpLookupSafeCurDirList @ 0x18010F9B4 (RtlpLookupSafeCurDirList.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1801111B0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801118CC (LdrpCnvrtShortToLongFileName.c)
 *     RtlpGetPersistedRegistryLocation @ 0x180117950 (RtlpGetPersistedRegistryLocation.c)
 *     RtlQueryRegistryValueWithFallback @ 0x18011E600 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x18011E770 (RtlpConvertCultureNamesToLCIDs.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x18012FA90 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x18012FD80 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x180130A80 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x180130AF0 (RtlEnableThreadProfiling.c)
 *     RtlCreateUserSecurityObject @ 0x180131A80 (RtlCreateUserSecurityObject.c)
 *     ImportTablepFreeModuleSorted @ 0x180132EF8 (ImportTablepFreeModuleSorted.c)
 *     RtlQueryModuleInformation @ 0x180136530 (RtlQueryModuleInformation.c)
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
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x18013FC50 (RtlMultipleFreeHeap.c)
 *     RtlpQueryMemoryUsageInformation @ 0x180140C8C (RtlpQueryMemoryUsageInformation.c)
 *     RtlCompareExchangePointerMapping @ 0x180141280 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1801413D0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x180141750 (RtlRemovePointerMapping.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x180142C60 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x180145198 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlRcuFree @ 0x180145FB0 (RtlRcuFree.c)
 *     RtlpRcuCurrentThreadData @ 0x1801461F8 (RtlpRcuCurrentThreadData.c)
 *     RtlpGetWindowsPolicy @ 0x1801472A0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801473B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180155DC4 (UcpRetrieveCurrentConfigSettings.c)
 *     UcpUnInitializeListHead @ 0x180155F30 (UcpUnInitializeListHead.c)
 *     RtlpSignalSystemDirsModification @ 0x18015C974 (RtlpSignalSystemDirsModification.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015DEC8 (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180059380 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800A1520 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpLogHeapFreeEvent @ 0x1800A19C4 (RtlpLogHeapFreeEvent.c)
 *     RtlpValidateLFHBlock @ 0x1800D9AC0 (RtlpValidateLFHBlock.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DDEC0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013A364 (RtlpHeapFatalExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180160A50 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180163E00 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180163E40 (RtlpInterlockedFlushSList.c)
 */

LOGICAL __cdecl RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  _DWORD *v3; // rdi
  ULONG v4; // r15d
  _DWORD *v5; // r14
  LOGICAL v6; // r13d
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
  _DWORD *v34; // rsi
  bool v35; // zf
  ULONG v36; // r14d
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
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BaseAddressa; // [rsp+40h] [rbp-A8h] BYREF
  _OWORD MemoryInformation[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v60; // [rsp+68h] [rbp-80h]
  __int128 v61; // [rsp+78h] [rbp-70h]
  __int128 v62; // [rsp+88h] [rbp-60h]
  __int128 v63; // [rsp+98h] [rbp-50h]
  ULONG OldProtect; // [rsp+108h] [rbp+20h] BYREF

  v3 = BaseAddress;
  v4 = Flags;
  v5 = HeapHandle;
  if ( ((unsigned __int64)HeapHandle & (unsigned __int64)BaseAddress) != 0 )
    goto LABEL_2;
  if ( BaseAddress )
  {
    if ( !HeapHandle )
    {
      v6 = 0;
      RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
LABEL_3:
      if ( v5[4] == -571548178 )
      {
        if ( (RtlpHpHeapFeatures & 2) == 0 )
        {
          v6 = RtlpHpFreeHeap(v5, v3);
          if ( !v6 )
          {
            v21 = NtCurrentTeb();
            v21->LastStatusValue = -1073741811;
            v21->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
          }
          return v6;
        }
      }
      else if ( (RtlpHpHeapFeatures & 2) == 0 )
      {
        v7 = 0LL;
        if ( (v5[29] & 0x1000000) != 0 )
        {
LABEL_88:
          v39 = RtlpFreeHeap(v5);
          v6 = v39;
          if ( v39 )
          {
LABEL_36:
            if ( (dword_1801CD8B8 & 1) != 0
              && (dword_1801CD8B8 & 2) != 0
              && NtCurrentPeb()->ProcessHeap
              && v5 != (_DWORD *)qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[BYTE1(RtlpHpEnvHandle)]]
              && (v4 & 0x10000000) == 0 )
            {
              RtlpHpStackTraceRemoveStack(v5, v3);
            }
          }
          return v6;
        }
        if ( (v5[30] & 1) != 0 )
        {
          v7 = RtlpProbeUserBufferSafe(v5, v3);
        }
        else if ( ((unsigned __int8)v3 & 0xF) != 0 )
        {
          RtlpLogHeapFailure(9, (_DWORD)v5, (_DWORD)v3, 0, 0LL, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)(v3 - 4);
          _m_prefetchw(v3 - 4);
          if ( *((_BYTE *)v3 - 1) == 5 )
            v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
          if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
          {
            RtlpLogHeapFailure(8, (_DWORD)v5, v7, 0, 0LL, 0LL);
            v7 = 0LL;
          }
        }
        if ( !v7 )
          goto LABEL_122;
        if ( *((_BYTE *)v3 - 1) != 5 )
          goto LABEL_14;
        if ( *(char *)(v7 + 15) >= 0 )
        {
          v47 = v5 + 31;
          if ( v5[31] )
          {
            v61 = 0LL;
            DWORD2(v61) = v5[34] ^ *(_DWORD *)(v7 + 8);
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
              RtlpLogHeapFailure(3, (_DWORD)v5, v7, (_DWORD)v3, 0LL, 0LL);
              goto LABEL_122;
            }
            if ( (v4 & 0x3C000102) != 0
              || (*((_BYTE *)v3 - 1) != 5 ? (v50 = 0LL) : (v50 = (__int64)&v3[-4 * *((unsigned __int8 *)v3 - 2)]),
                  (int)RtlpCallInterceptRoutine(*(v3 - 2), (_DWORD)v5, (_DWORD)v3, 3, v50) >= 0) )
            {
LABEL_14:
              if ( *(char *)(v7 + 15) < 0 )
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)v5 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
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
                        OldProtect = 0;
                        BaseAddressa = (PVOID)(((unsigned __int64)v8[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
                        RegionSize = 16
                                   * (unsigned __int16)((((16 * (*((unsigned __int16 *)v8 + 18) + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
                                                       + 4096) >> 4)
                                   * (unsigned __int64)*((unsigned __int16 *)v8 + 20);
                        v34 = *(_DWORD **)(v32 + 24);
                        v35 = (v34[28] & 0x40000) == 0;
                        v36 = 64;
                        if ( (v34[28] & 0x40000) == 0 )
                          v36 = 4;
                        memset(MemoryInformation, 0, sizeof(MemoryInformation));
                        v60 = 0LL;
                        if ( !v35
                          && (ZwQueryVirtualMemory(
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                v34,
                                MemoryBasicInformation,
                                MemoryInformation,
                                0x30uLL,
                                0LL) < 0
                           || (BYTE4(v60) & 0x60) == 0
                           || *(_DWORD **)&MemoryInformation[0] != v34) )
                        {
                          RtlpLogHeapFailure(0, (_DWORD)v34, 1, DWORD1(v60), 0LL, 0LL);
                          v36 = 4;
                        }
                        ZwProtectVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddressa,
                          &RegionSize,
                          v36,
                          &OldProtect);
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
                  v5 = HeapHandle;
                  v4 = Flags;
                }
                else
                {
                  RtlpLogHeapFailure(3, (_DWORD)v5, v7, 0, 0LL, 0LL);
                }
                v6 = 1;
                v3 = BaseAddress;
                goto LABEL_36;
              }
              goto LABEL_88;
            }
LABEL_122:
            v51 = NtCurrentTeb();
            v51->LastStatusValue = -1073741811;
            v51->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
            return v6;
          }
          v47 = v5 + 31;
        }
        if ( *(char *)(v7 + 15) >= 0 )
        {
          if ( *v47 )
          {
            v62 = 0LL;
            LODWORD(v48) = *(_DWORD *)(v7 + 8);
            if ( ((unsigned int)v48 & *v47) != 0 )
            {
              LODWORD(v48) = v5[34] ^ v48;
              DWORD2(v62) = v48;
              v47 = v5 + 31;
            }
          }
          else
          {
            LOWORD(v48) = *(_WORD *)(v7 + 8);
          }
        }
        else
        {
          if ( *(_WORD *)(v7 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)v5 ^ (v7 >> 4)) )
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
              v56 ^= v5[34];
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
        if ( v49 + v7 < (unsigned __int64)v3 )
          goto LABEL_117;
        goto LABEL_139;
      }
      return RtlpHpTagFreeHeap(v5, v3, v4);
    }
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  return 1;
}
