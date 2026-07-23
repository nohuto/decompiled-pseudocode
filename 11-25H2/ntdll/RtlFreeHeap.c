/*
 * XREFs of RtlFreeHeap @ 0x180080DD0
 * Callers:
 *     RtlpFreeUserBlockToHeap @ 0x180001A30 (RtlpFreeUserBlockToHeap.c)
 *     RtlpCreateSerializationGroup @ 0x180002FE0 (RtlpCreateSerializationGroup.c)
 *     RtlpFcAllocateChangeRegistration @ 0x180003278 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x180004BC0 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180004CA4 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x180004D50 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800050BC (RtlpCreateWnfNameSubscription.c)
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x18000876C (LdrpDynamicShimModule.c)
 *     LdrpDestroyNode @ 0x180008BB8 (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x180008C0C (LdrpReleaseTlsEntry.c)
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 *     LdrpFreeTls @ 0x180009480 (LdrpFreeTls.c)
 *     RtlFreeActivationContextStack @ 0x180009580 (RtlFreeActivationContextStack.c)
 *     RtlpFreeHeapMetadata @ 0x18000A864 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsHeapFree @ 0x18000AB1C (RtlpFlsHeapFree.c)
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18001D460 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x180020030 (LdrRemoveLoadAsDataTable.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpAllocateTlsEntry @ 0x1800236B8 (LdrpAllocateTlsEntry.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800239B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlAddGrowableFunctionTable @ 0x180024410 (RtlAddGrowableFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     LdrpAcquireTlsIndex @ 0x180025310 (LdrpAcquireTlsIndex.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     TppQueryMaximumGroupCount @ 0x180034454 (TppQueryMaximumGroupCount.c)
 *     CsrFreeCaptureBuffer @ 0x180035BE0 (CsrFreeCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180037DFC (RtlpExtendFrontEndUsageArray.c)
 *     RtlpFcFreeChangeRegistration @ 0x18003A2D4 (RtlpFcFreeChangeRegistration.c)
 *     TpReleaseWork @ 0x18003A420 (TpReleaseWork.c)
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x18003AF88 (TppPoolUpdateNodeRelation.c)
 *     TppIopFree @ 0x18003B260 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x18003B2C0 (TpAllocIoCompletion.c)
 *     RtlpTpTimerRundown @ 0x18003B610 (RtlpTpTimerRundown.c)
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     TppFreeDirectParams @ 0x18003BEA0 (TppFreeDirectParams.c)
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlpTpWaitRundown @ 0x18003CC94 (RtlpTpWaitRundown.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     RtlpTpWorkUnposted @ 0x18003DA30 (RtlpTpWorkUnposted.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x18003FF90 (TpWaitForTimer.c)
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 *     RtlpWnfNotificationThread @ 0x180040FB0 (RtlpWnfNotificationThread.c)
 *     TppFreeWait @ 0x180041EB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x180041F00 (TppTimerpFree.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppIopCallbackEpilog @ 0x1800432B0 (TppIopCallbackEpilog.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     EtwpEventApiCallback @ 0x180044EB0 (EtwpEventApiCallback.c)
 *     EtwpNotificationThread @ 0x1800451D0 (EtwpNotificationThread.c)
 *     EtwpRegisterProvider @ 0x180045330 (EtwpRegisterProvider.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     TpAllocWork @ 0x180046F70 (TpAllocWork.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpAllocateModuleEntry @ 0x18004F520 (LdrpAllocateModuleEntry.c)
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
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
 *     RtlpIsNameInExpressionPrivate @ 0x180068918 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180068FD4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     GetModuleFullPathName @ 0x180069508 (GetModuleFullPathName.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18006C6E0 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x18006CBC4 (QueryRegistryValue.c)
 *     LdrpLogNewDllLoadInternal @ 0x18006EE20 (LdrpLogNewDllLoadInternal.c)
 *     LdrpLoadContextReplaceModule @ 0x18006F2DC (LdrpLoadContextReplaceModule.c)
 *     LdrpLogEtwDllSearchResults @ 0x18006F538 (LdrpLogEtwDllSearchResults.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     SbpDetermineDllContext @ 0x180071D10 (SbpDetermineDllContext.c)
 *     LdrpCheckModule @ 0x180071F80 (LdrpCheckModule.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180073C90 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpCallVectoredHandlers @ 0x180075B30 (RtlpCallVectoredHandlers.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x18007F750 (TppPrepareDirectParams.c)
 *     LdrSetDllDirectory @ 0x1800804E0 (LdrSetDllDirectory.c)
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x180083460 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x1800838D4 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180083A7C (EtwpGetRegDwordValue.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180083D80 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180084060 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180086A64 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegFreeStringPool @ 0x180087410 (RtlpMuiRegFreeStringPool.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800874B0 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlCleanUpTEBLangLists @ 0x180087620 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x1800876EC (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x180088970 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180088D50 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180088DA0 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180089B50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008D024 (RtlpMuiRegFreeLanguageConfigList.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18008E210 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpHeapTrkTrackStack @ 0x18008FEF0 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800901E0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800902C0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800907E0 (RtlpHeapTrkDereferenceStack.c)
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180099670 (RtlpValidateRemoteDebugInformation.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800A00DC (TppPoolUpdateTrimmedWorker.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800A04D4 (RtlpFcNotifyFeatureUsageTarget.c)
 *     TppPoolpFree @ 0x1800A09A4 (TppPoolpFree.c)
 *     RtlpCheckDeviceName @ 0x1800A0BCC (RtlpCheckDeviceName.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A11C0 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x1800A1460 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A1560 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A1730 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800A1CE0 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800A1E80 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A2500 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A4B20 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 *     LdrpGetParentLangId @ 0x1800A6FA8 (LdrpGetParentLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpFreeTraverseNodes @ 0x1800A9600 (RtlpFreeTraverseNodes.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlDosSearchPath_U @ 0x1800AAC20 (RtlDosSearchPath_U.c)
 *     RtlpClearEnvironmentHashTable @ 0x1800AAF0C (RtlpClearEnvironmentHashTable.c)
 *     RtlpGetCachedPath @ 0x1800AC640 (RtlpGetCachedPath.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x1800ADF2C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x1800AE5E0 (RtlpScanEnvironment.c)
 *     _IsProgramFilesPath @ 0x1800AF20C (_IsProgramFilesPath.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800B31E4 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetNextAvailableLoggerId @ 0x1800B5EE0 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x1800B786C (EtwpFreeStreamIndexMap.c)
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800B8EAC (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpProcessHeapsRemove @ 0x1800B9024 (RtlpProcessHeapsRemove.c)
 *     RtlDeleteResource @ 0x1800B91B0 (RtlDeleteResource.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800C04F0 (RtlpIdnToUnicodeWorker.c)
 *     RtlpGetNormalization @ 0x1800C12A4 (RtlpGetNormalization.c)
 *     RtlpTpIoDllLoaded @ 0x1800C3F68 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x1800C4B54 (RtlpTpIoAlloc.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x1800C8758 (PsspCaptureHandleInformation.c)
 *     PssNtFreeSnapshot @ 0x1800C93A0 (PssNtFreeSnapshot.c)
 *     WerpGlobalFlagsForProcess @ 0x1800CFC84 (WerpGlobalFlagsForProcess.c)
 *     LdrpIsReparsePoint @ 0x1800D02AC (LdrpIsReparsePoint.c)
 *     LdrpInitShimEngine @ 0x1800D0BF0 (LdrpInitShimEngine.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D1D10 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 *     LdrpObtainLockedEnclave @ 0x1800D8D00 (LdrpObtainLockedEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8F28 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpFreeLoadContext @ 0x1800D9060 (LdrpFreeLoadContext.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B8 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D9660 (LdrpAllocatePlaceHolder.c)
 *     LdrpDereferenceEnclave @ 0x1800DE050 (LdrpDereferenceEnclave.c)
 *     RtlpFreeActivationContext @ 0x1800E1E78 (RtlpFreeActivationContext.c)
 *     RtlCreateActivationContext @ 0x1800E1EF0 (RtlCreateActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800E2350 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x1800E27D4 (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800E3344 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E41B8 (LdrpLogDllRelocationEtwEvent.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800E5178 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlContractHashTable @ 0x1800E5250 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x1800E53B0 (RtlExpandHashTable.c)
 *     RtlDeleteHashTable @ 0x1800E5790 (RtlDeleteHashTable.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E5B00 (RtlCreateProcessParametersInternal.c)
 *     LdrpResValidateFilePath @ 0x1800E65B8 (LdrpResValidateFilePath.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 *     RtlpComputeMergedAcl @ 0x1800E8468 (RtlpComputeMergedAcl.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800E8934 (RtlpValidOwnerSubjectContext.c)
 *     RtlDeleteFunctionTable @ 0x1800E8C20 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E8E30 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E9520 (RtlpMergeSecurityAttributeInformation.c)
 *     EtwpSetProviderTraits @ 0x1800E9BD0 (EtwpSetProviderTraits.c)
 *     LdrpQueryValueKey @ 0x1800EA0C0 (LdrpQueryValueKey.c)
 *     RtlAcquirePrivilege @ 0x1800EA3C0 (RtlAcquirePrivilege.c)
 *     TpSimpleTryPost @ 0x1800EB150 (TpSimpleTryPost.c)
 *     EtwRegisterTraceGuidsW @ 0x1800EB570 (EtwRegisterTraceGuidsW.c)
 *     RtlFreeSid @ 0x1800EBA00 (RtlFreeSid.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800EBE10 (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpCleanupThreadTlsData @ 0x1800ECF14 (LdrpCleanupThreadTlsData.c)
 *     RtlReleasePath @ 0x1800EEB00 (RtlReleasePath.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800EF0B0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800EF3C4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     LdrpMergeNodes @ 0x1800EF5D4 (LdrpMergeNodes.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EFBE8 (EtwpReceiveReplyDataBlock.c)
 *     RtlUnlockModuleSection @ 0x1800F02C0 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800F0370 (RtlLockModuleSection.c)
 *     RtlpRemoveVectoredHandler @ 0x1800F0A44 (RtlpRemoveVectoredHandler.c)
 *     SaferpIsDllAllowed @ 0x1800F1DAC (SaferpIsDllAllowed.c)
 *     RtlDeleteSecurityObject @ 0x1800F3990 (RtlDeleteSecurityObject.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800F3E18 (SbpRetrieveCompatibilityManifest.c)
 *     RtlSetSearchPathMode @ 0x1800F4950 (RtlSetSearchPathMode.c)
 *     EtwUnregisterTraceGuids @ 0x1800F4C30 (EtwUnregisterTraceGuids.c)
 *     RtlpNtQueryValueKey @ 0x1800F5170 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F5954 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     TppFreeThreadData @ 0x1800F5B58 (TppFreeThreadData.c)
 *     EvtIntReportEventWorker @ 0x1800F5D70 (EvtIntReportEventWorker.c)
 *     TppFreeDirectParamsCache @ 0x1800F6834 (TppFreeDirectParamsCache.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F7190 (RtlpNtEnumerateSubKey.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 *     RtlpFreeDebugInfo @ 0x1800F7DE0 (RtlpFreeDebugInfo.c)
 *     RtlpInitializeWnf @ 0x1800F9018 (RtlpInitializeWnf.c)
 *     RtlReleasePrivilege @ 0x1800F9660 (RtlReleasePrivilege.c)
 *     TpAllocCleanupGroup @ 0x1800FB3A0 (TpAllocCleanupGroup.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800FB5AC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlSetProtectedPolicy @ 0x1800FBDC0 (RtlSetProtectedPolicy.c)
 *     TpAllocJobNotification @ 0x1800FCCC0 (TpAllocJobNotification.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FD158 (RtlpTpTimerQueueRundown.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FD438 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlDestroyProcessParameters @ 0x1800FD850 (RtlDestroyProcessParameters.c)
 *     RtlInitializeRXact @ 0x180108C20 (RtlInitializeRXact.c)
 *     RtlAbortRXact @ 0x180109340 (RtlAbortRXact.c)
 *     TpReleaseCleanupGroup @ 0x18010B590 (TpReleaseCleanupGroup.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010D324 (EtwpDereferenceUmGuidEntry.c)
 *     RtlAddAttributeActionToRXact @ 0x18010D8C0 (RtlAddAttributeActionToRXact.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     TppJobpFree @ 0x18010E580 (TppJobpFree.c)
 *     LdrAddDllDirectory @ 0x18010EA40 (LdrAddDllDirectory.c)
 *     LdrpCheckPagesForTampering @ 0x180110664 (LdrpCheckPagesForTampering.c)
 *     LdrFlushAlternateResourceModules @ 0x180110920 (LdrFlushAlternateResourceModules.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 *     LdrRemoveDllDirectory @ 0x180113960 (LdrRemoveDllDirectory.c)
 *     RtlDestroyHandleTable @ 0x180113A60 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x18011445C (EtwpShutdownCompression.c)
 *     LdrUnregisterDllNotification @ 0x180114590 (LdrUnregisterDllNotification.c)
 *     RtlSetFeatureConfigurations @ 0x1801147E0 (RtlSetFeatureConfigurations.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18011687C (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpWnfRetryTimerCallback @ 0x180116B70 (RtlpWnfRetryTimerCallback.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x1801171A0 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1801175A0 (RtlpLookupSafeCurDirList.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180118F10 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpGetPersistedRegistryLocation @ 0x18011C240 (RtlpGetPersistedRegistryLocation.c)
 *     RtlQueryRegistryValueWithFallback @ 0x180121CA0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180121E10 (RtlpConvertCultureNamesToLCIDs.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180133340 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180133630 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x180134330 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1801343A0 (RtlEnableThreadProfiling.c)
 *     RtlCreateUserSecurityObject @ 0x180135330 (RtlCreateUserSecurityObject.c)
 *     ImportTablepFreeModuleSorted @ 0x180136578 (ImportTablepFreeModuleSorted.c)
 *     RtlQueryModuleInformation @ 0x180139A70 (RtlQueryModuleInformation.c)
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
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x180143160 (RtlMultipleFreeHeap.c)
 *     RtlCompareExchangePointerMapping @ 0x1801445C0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180144710 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x180144A90 (RtlRemovePointerMapping.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x180145E20 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x180148398 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlRcuFree @ 0x1801491B0 (RtlRcuFree.c)
 *     RtlpRcuCurrentThreadData @ 0x1801493F8 (RtlpRcuCurrentThreadData.c)
 *     RtlpGetWindowsPolicy @ 0x18014A4A0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18014A5B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014C210 (_RtlpMuiRegValidateInstalled.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180158FB4 (UcpRetrieveCurrentConfigSettings.c)
 *     UcpUnInitializeListHead @ 0x180159120 (UcpUnInitializeListHead.c)
 *     RtlpSignalSystemDirsModification @ 0x18015FA74 (RtlpSignalSystemDirsModification.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18016105C (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x1800010D4 (RtlpLogHeapFreeEvent.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180001D00 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180055450 (RtlpProbeUserBufferSafe.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800DC930 (RtlpValidateLFHBlock.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DF5A0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013D8A4 (RtlpHeapFatalExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180167010 (RtlpInterlockedFlushSList.c)
 */

LOGICAL __cdecl RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rdi
  ULONG v5; // r15d
  __int64 v6; // r14
  LOGICAL v7; // r13d
  unsigned __int64 v8; // rsi
  _QWORD **v9; // rdi
  _QWORD *v10; // r15
  int v11; // r12d
  unsigned int v12; // r14d
  __int64 v13; // r10
  _DWORD *SharedData; // rcx
  __int64 v15; // rcx
  unsigned __int64 k; // r8
  __int64 i; // rdx
  signed __int32 v18; // ebx
  _WORD *v19; // rcx
  _QWORD **v20; // rdx
  struct _TEB *v22; // rbx
  unsigned int v23; // r14d
  __int64 m; // r8
  unsigned int v25; // edx
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 **v28; // rbx
  signed __int32 v30; // eax
  __int64 v31; // rcx
  volatile signed __int32 *v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rbx
  _DWORD *v35; // rsi
  bool v36; // zf
  ULONG v37; // r14d
  signed __int64 v38; // rcx
  unsigned __int8 v39; // al
  signed __int32 v41; // eax
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rdx
  char v44; // bl
  _DWORD *v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct _TEB *v49; // rbx
  __int64 v50; // rcx
  _QWORD **v51; // rdx
  _QWORD *j; // rax
  unsigned int v53; // edx
  int v54; // eax
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BaseAddressa; // [rsp+40h] [rbp-A8h] BYREF
  _OWORD MemoryInformation[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v58; // [rsp+68h] [rbp-80h]
  __int128 v59; // [rsp+78h] [rbp-70h]
  __int128 v60; // [rsp+88h] [rbp-60h]
  __int128 v61; // [rsp+98h] [rbp-50h]
  ULONG OldProtect; // [rsp+108h] [rbp+20h] BYREF

  v4 = (unsigned __int64)BaseAddress;
  v5 = Flags;
  v6 = (__int64)HeapHandle;
  if ( ((unsigned __int64)HeapHandle & (unsigned __int64)BaseAddress) != 0 )
    goto LABEL_2;
  if ( BaseAddress )
  {
    if ( !HeapHandle )
    {
      v7 = 0;
      RtlpLogHeapFailure(19, 0LL, (__int64)BaseAddress, 0LL, 0LL, 0LL);
LABEL_3:
      if ( *(_DWORD *)(v6 + 16) == -571548178 )
      {
        if ( (RtlpHpHeapFeatures & 2) == 0 )
        {
          v7 = RtlpHpFreeHeap(v6, v4);
          if ( !v7 )
          {
            v22 = NtCurrentTeb();
            v22->LastStatusValue = -1073741811;
            v22->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
          }
          return v7;
        }
      }
      else if ( (RtlpHpHeapFeatures & 2) == 0 )
      {
        v8 = 0LL;
        if ( (*(_DWORD *)(v6 + 116) & 0x1000000) != 0 )
        {
LABEL_88:
          v39 = RtlpFreeHeap(v6, v5 | 2, v8, v4);
          v7 = v39;
          if ( v39 )
          {
LABEL_36:
            if ( (dword_1801D0918 & 1) != 0
              && (dword_1801D0918 & 2) != 0
              && NtCurrentPeb()->ProcessHeap
              && v6 != qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]]
              && (v5 & 0x10000000) == 0 )
            {
              RtlpHpStackTraceRemoveStack(v6, v4);
            }
          }
          return v7;
        }
        if ( (*(_BYTE *)(v6 + 120) & 1) != 0 )
        {
          v8 = (unsigned __int64)RtlpProbeUserBufferSafe(v6, v4);
        }
        else if ( (v4 & 0xF) != 0 )
        {
          RtlpLogHeapFailure(9, v6, v4, 0LL, 0LL, 0LL);
        }
        else
        {
          v8 = v4 - 16;
          _m_prefetchw((const void *)(v4 - 16));
          if ( *(_BYTE *)(v4 - 16 + 15) == 5 )
            v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
          if ( (*(_BYTE *)(v8 + 15) & 0x3F) == 0 )
          {
            RtlpLogHeapFailure(8, v6, v8, 0LL, 0LL, 0LL);
            v8 = 0LL;
          }
        }
        if ( !v8 )
          goto LABEL_122;
        if ( *(_BYTE *)(v4 - 1) != 5 )
          goto LABEL_14;
        if ( *(char *)(v8 + 15) >= 0 )
        {
          v45 = (_DWORD *)(v6 + 124);
          if ( *(_DWORD *)(v6 + 124) )
          {
            v59 = 0LL;
            DWORD2(v59) = *(_DWORD *)(v6 + 136) ^ *(_DWORD *)(v8 + 8);
            if ( BYTE11(v59) != (BYTE8(v59) ^ (unsigned __int8)(BYTE9(v59) ^ BYTE10(v59))) )
              goto LABEL_117;
          }
          v44 = 1;
        }
        else
        {
          v44 = RtlpValidateLFHBlock(v6, v8);
          if ( !v44 )
          {
LABEL_139:
            if ( !v44 )
            {
LABEL_117:
              RtlpLogHeapFailure(3, v6, v8, v4, 0LL, 0LL);
              goto LABEL_122;
            }
            if ( (v5 & 0x3C000102) != 0
              || (*(_BYTE *)(v4 - 16 + 15) != 5 ? (v48 = 0LL) : (v48 = v4 - 16LL * *(unsigned __int8 *)(v4 - 16 + 14)),
                  (int)RtlpCallInterceptRoutine(*(_DWORD *)(v4 - 8), (PVOID)v6, v4, 3u, v48) >= 0) )
            {
LABEL_14:
              if ( *(char *)(v8 + 15) < 0 )
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v6 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
                  v9 = 0LL;
                else
                  v9 = *(_QWORD ***)(v8
                                   - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v6 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
                if ( v9 )
                {
                  _m_prefetchw(v9);
                  v10 = v9[1];
                  v11 = 0;
                  v12 = (unsigned __int16)(*(_DWORD *)(v8 + 12) >> 8);
                  v13 = *(_QWORD *)(**v9 + 24LL);
                  if ( (_QWORD *)((char *)v10
                                + v12
                                * (((unsigned int)RtlpLFHKey ^ (unsigned int)v13 ^ *((_DWORD *)v10 + 6) ^ (unsigned int)v10) >> 16)
                                + (unsigned __int16)(RtlpLFHKey ^ v13 ^ *((_WORD *)v10 + 12) ^ (unsigned __int16)v10)) == (_QWORD *)v8 )
                  {
                    SharedData = NtCurrentPeb()->SharedData;
                    if ( SharedData && *SharedData )
                      v15 = (__int64)NtCurrentPeb()->SharedData + 550;
                    else
                      v15 = 2147353472LL;
                    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                      RtlpLogHeapFreeEvent(*(_QWORD *)(v13 + 24), v8 + 16, 2);
                    k = 0LL;
                    if ( MEMORY[0x7FFE036A] > 1u )
                      k = 100LL;
                    for ( i = 0LL; (unsigned int)i <= (unsigned int)k; i = (unsigned int)(i + 1) )
                    {
                      v18 = *((_DWORD *)v9 + 8);
                      if ( v18 >= 0
                        && _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v18 | 0x80000000, v18) == v18 )
                      {
                        goto LABEL_31;
                      }
                    }
                    v18 = -1;
LABEL_31:
                    v19 = v9 + 2;
                    *(_BYTE *)(v8 + 15) = 0x80;
                    if ( v18 == -1 )
                    {
                      v20 = (_QWORD **)(v8 + 16);
                      goto LABEL_33;
                    }
                    _bittestandreset((signed __int32 *)v10[5], v12);
                    if ( *v19 )
                    {
                      for ( j = (_QWORD *)RtlpInterlockedFlushSList(v19, i, k, v3); j; ++v11 )
                      {
                        v53 = *((_DWORD *)j - 1);
                        j = (_QWORD *)*j;
                        v12 = (unsigned __int16)(v53 >> 8);
                        _bittestandreset((signed __int32 *)v10[5], v12);
                      }
                    }
                    v23 = v12 << 16;
                    m = (__int64)*v9;
                    if ( ((unsigned __int16)v23 | (unsigned __int16)(v11 + v18 + 1)) != *((_WORD *)v9 + 20)
                      || (v25 = *(_DWORD *)(*(_QWORD *)m + 32LL),
                          v26 = *(unsigned int *)(m + 168),
                          *(_DWORD *)(m + 164) == 1)
                      && v25 >= (unsigned int)v26
                      && v25 - (unsigned int)v26 < *(_DWORD *)(*(_QWORD *)m + 36LL) )
                    {
                      *((_DWORD *)v9 + 8) = v23 | (v11 + (unsigned __int16)v18 + 1);
                      if ( (*((_DWORD *)v9 + 11) & 2) == 0
                        && *((_WORD *)v9 + 16)
                        && !RtlpIsSubSegmentReuseThresholdExceeded(m, (__int64)v9) )
                      {
                        while ( 1 )
                        {
                          v41 = *((_DWORD *)v9 + 11);
                          if ( !v41 || (v41 & 2) != 0 )
                            break;
                          if ( v41 == _InterlockedCompareExchange((volatile signed __int32 *)v9 + 11, v41 | 2, v41) )
                          {
                            v3 = (__int64)*v9;
                            for ( k = 0LL; ; k = (unsigned int)(k + 1) )
                            {
                              if ( (unsigned int)k >= 0x10 )
                              {
                                v19 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(**v9 + 24LL)
                                                          + 8LL * *((unsigned __int16 *)*v9 + 86)
                                                          + 1192)
                                              + 144LL);
                                goto LABEL_87;
                              }
                              v42 = v3 + 8LL * (((_BYTE)k + (unsigned __int8)*(_WORD *)(v3 + 174)) & 0xF);
                              v43 = *(volatile signed __int32 **)(v42 + 16);
                              if ( v43 )
                              {
                                if ( (v43[11] & 1) == 0
                                  && v43 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                         (volatile signed __int64 *)(v42 + 16),
                                                                         (signed __int64)v9,
                                                                         (signed __int64)v43) )
                                {
                                  _m_prefetchw((const void *)(v43 + 11));
                                  if ( _InterlockedAnd(v43 + 11, 0xFFFFFFFD) != 2 )
                                    goto LABEL_34;
                                  v19 = **(_WORD ***)v43;
                                  *(_QWORD *)v43 = 0LL;
                                  v20 = (_QWORD **)(v43 + 12);
                                  goto LABEL_33;
                                }
                              }
                              else if ( !_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)(v42 + 16),
                                           (signed __int64)v9,
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
                      v27 = (__int64)*v9;
                      v28 = (__int64 **)_InterlockedExchange64(*v9 + 1, 0LL);
                      if ( v28 )
                      {
                        _m_prefetchw((char *)v28 + 44);
                        if ( _InterlockedAnd((volatile signed __int32 *)v28 + 11, 0xFFFFFFF9) == 6 )
                        {
                          v50 = **v28;
                          *v28 = 0LL;
LABEL_124:
                          v51 = v28 + 6;
LABEL_125:
                          RtlpInterlockedPushEntrySList(v50, v51, m, v26);
                        }
                        else if ( *((_WORD *)v28 + 16) && !RtlpIsSubSegmentReuseThresholdExceeded(v27, (__int64)v28) )
                        {
                          while ( 1 )
                          {
                            v30 = *((_DWORD *)v28 + 11);
                            if ( !v30 || (v30 & 2) != 0 )
                              break;
                            if ( v30 == _InterlockedCompareExchange((volatile signed __int32 *)v28 + 11, v30 | 2, v30) )
                            {
                              v26 = (__int64)*v28;
                              for ( m = 0LL; ; m = (unsigned int)(m + 1) )
                              {
                                if ( (unsigned int)m >= 0x10 )
                                {
                                  v50 = *(_QWORD *)(*(_QWORD *)(**v28 + 24)
                                                  + 8LL * *((unsigned __int16 *)*v28 + 86)
                                                  + 1192)
                                      + 144LL;
                                  goto LABEL_124;
                                }
                                v31 = v26 + 8LL * (((_BYTE)m + (unsigned __int8)*(_WORD *)(v26 + 174)) & 0xF);
                                v32 = *(volatile signed __int32 **)(v31 + 16);
                                if ( v32 )
                                {
                                  if ( (v32[11] & 1) == 0
                                    && v32 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                           (volatile signed __int64 *)(v31 + 16),
                                                                           (signed __int64)v28,
                                                                           (signed __int64)v32) )
                                  {
                                    _m_prefetchw((const void *)(v32 + 11));
                                    if ( _InterlockedAnd(v32 + 11, 0xFFFFFFFD) != 2 )
                                      goto LABEL_78;
                                    v50 = **(_QWORD **)v32;
                                    *(_QWORD *)v32 = 0LL;
                                    v51 = (_QWORD **)(v32 + 12);
                                    goto LABEL_125;
                                  }
                                }
                                else if ( !_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)(v31 + 16),
                                             (signed __int64)v28,
                                             0LL) )
                                {
                                  goto LABEL_78;
                                }
                              }
                            }
                          }
                        }
                      }
LABEL_78:
                      v33 = *(_QWORD *)(*(_QWORD *)v27 + 24LL);
                      v34 = (__int64)*v9;
                      if ( (*((_BYTE *)v9 + 38) & 3) != 0 )
                      {
                        OldProtect = 0;
                        BaseAddressa = (PVOID)(((unsigned __int64)v9[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
                        RegionSize = 16
                                   * (unsigned __int16)((((16 * (*((unsigned __int16 *)v9 + 18) + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
                                                       + 4096) >> 4)
                                   * (unsigned __int64)*((unsigned __int16 *)v9 + 20);
                        v35 = *(_DWORD **)(v33 + 24);
                        v36 = (v35[28] & 0x40000) == 0;
                        v37 = 64;
                        if ( (v35[28] & 0x40000) == 0 )
                          v37 = 4;
                        memset(MemoryInformation, 0, sizeof(MemoryInformation));
                        v58 = 0LL;
                        if ( !v36
                          && (ZwQueryVirtualMemory(
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                v35,
                                MemoryBasicInformation,
                                MemoryInformation,
                                0x30uLL,
                                0LL) < 0
                           || (BYTE4(v58) & 0x60) == 0
                           || *(_DWORD **)&MemoryInformation[0] != v35) )
                        {
                          RtlpLogHeapFailure(0, (__int64)v35, 1LL, DWORD1(v58), 0LL, 0LL);
                          v37 = 4;
                        }
                        ZwProtectVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddressa,
                          &RegionSize,
                          v37,
                          &OldProtect);
                      }
                      *((_DWORD *)v9[1] + 5) = 0;
                      RtlpFreeUserBlock(v33, (unsigned __int8 *)v9[1], m, v26);
                      v3 = *((unsigned __int16 *)v9 + 20);
                      _m_prefetchw((const void *)(v34 + 160));
                      do
                      {
                        v38 = *(_QWORD *)(v34 + 160);
                        k = (unsigned int)(v38 - v3) | ((unsigned __int64)(unsigned int)(HIDWORD(v38) - 1) << 32);
                      }
                      while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 160), k, v38) != v38 );
                      v9[1] = 0LL;
                      _InterlockedIncrement((volatile signed __int32 *)(v33 + 60));
                      *((_DWORD *)v9 + 8) = 0;
                      _m_prefetchw((char *)v9 + 44);
                      if ( _InterlockedAnd((volatile signed __int32 *)v9 + 11, 0xFFFFFFFE) == 1 )
                      {
                        v19 = (_WORD *)**v9;
                        *v9 = 0LL;
LABEL_87:
                        v20 = v9 + 6;
LABEL_33:
                        RtlpInterlockedPushEntrySList(v19, v20, k, v3);
                      }
                    }
                  }
                  else
                  {
                    RtlpLogHeapFailure(3, *(_QWORD *)(v13 + 24), v8, 0LL, 0LL, 0LL);
                  }
LABEL_34:
                  v6 = (__int64)HeapHandle;
                  v5 = Flags;
                }
                else
                {
                  RtlpLogHeapFailure(3, v6, v8, 0LL, 0LL, 0LL);
                }
                v7 = 1;
                v4 = (unsigned __int64)BaseAddress;
                goto LABEL_36;
              }
              goto LABEL_88;
            }
LABEL_122:
            v49 = NtCurrentTeb();
            v49->LastStatusValue = -1073741811;
            v49->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
            return v7;
          }
          v45 = (_DWORD *)(v6 + 124);
        }
        if ( *(char *)(v8 + 15) >= 0 )
        {
          if ( *v45 )
          {
            v60 = 0LL;
            LODWORD(v46) = *(_DWORD *)(v8 + 8);
            if ( ((unsigned int)v46 & *v45) != 0 )
            {
              LODWORD(v46) = *(_DWORD *)(v6 + 136) ^ v46;
              DWORD2(v60) = v46;
              v45 = (_DWORD *)(v6 + 124);
            }
          }
          else
          {
            LOWORD(v46) = *(_WORD *)(v8 + 8);
          }
        }
        else
        {
          if ( *(_WORD *)(v8 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ v6 ^ (v8 >> 4)) )
            v46 = 0LL;
          else
            v46 = *(_QWORD *)(v8
                            - ((unsigned __int64)(*(_DWORD *)(v8 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v6 ^ (unsigned int)(v8 >> 4)) >> 12));
          LOWORD(v46) = *(_WORD *)(v46 + 36);
        }
        if ( *(_BYTE *)(v8 + 15) == 4 )
        {
          if ( *v45 )
          {
            v61 = 0LL;
            v54 = *(_DWORD *)(v8 + 8);
            if ( (v54 & *v45) != 0 )
            {
              v54 ^= *(_DWORD *)(v6 + 136);
              DWORD2(v61) = v54;
            }
          }
          else
          {
            LOWORD(v54) = *(_WORD *)(v8 + 8);
          }
          v47 = (unsigned __int16)v46 + *(_QWORD *)(v8 - 16) - (unsigned __int16)v54;
        }
        else
        {
          v47 = 16LL * (unsigned __int16)v46;
        }
        if ( v47 + v8 < v4 )
          goto LABEL_117;
        goto LABEL_139;
      }
      return RtlpHpTagFreeHeap(v6);
    }
LABEL_2:
    v7 = 0;
    goto LABEL_3;
  }
  return 1;
}
