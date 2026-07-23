/*
 * XREFs of memmove @ 0x1801657C0
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x180001138 (RtlpMUIEnumerateFolder.c)
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180002E90 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180003A80 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180003E84 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x18000402C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180004514 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlDosSearchPath_U @ 0x180004710 (RtlDosSearchPath_U.c)
 *     RtlCreateEnvironmentEx @ 0x180004BD0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180004ED0 (RtlSetEnvironmentVar.c)
 *     RtlpComputePath @ 0x180006610 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpQueryEnvironmentHashTable @ 0x180007D80 (RtlpQueryEnvironmentHashTable.c)
 *     RtlpScanEnvironment @ 0x180008100 (RtlpScanEnvironment.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800099A0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x18000A4F0 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18000C1A0 (RtlpExtendFrontEndUsageArray.c)
 *     RtlGetParentLocaleName @ 0x180012850 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x180012B40 (RtlGetNeutralFallback.c)
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180016190 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlpComputeLangListCheckSum @ 0x1800166C0 (RtlpComputeLangListCheckSum.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlAddAccessAllowedAceEx @ 0x180018110 (RtlAddAccessAllowedAceEx.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180018A40 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180018C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x180018E20 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180018F50 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x1800190C0 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x180019360 (RtlIntegerToUnicode.c)
 *     RtlLargeIntegerToUnicode @ 0x180019820 (RtlLargeIntegerToUnicode.c)
 *     RtlCheckTokenMembershipEx @ 0x180019CF0 (RtlCheckTokenMembershipEx.c)
 *     EtwpWriteToPrivateBuffers @ 0x18001B700 (EtwpWriteToPrivateBuffers.c)
 *     RtlCheckTokenCapability @ 0x18001C110 (RtlCheckTokenCapability.c)
 *     RtlpHeapTrkTrackStack @ 0x18001C780 (RtlpHeapTrkTrackStack.c)
 *     EtwpTraceUmEvent @ 0x18001D120 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18001D4A0 (EtwpRelogEvent.c)
 *     RtlpHeapTrkReportResult @ 0x18001EED8 (RtlpHeapTrkReportResult.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x18001F32C (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlpPushPageDescriptor @ 0x18001FE54 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x180021CEC (RtlpValidateHeapHeaders.c)
 *     CsrCaptureMessageBuffer @ 0x180023800 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x180023D80 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x180023F80 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x1800243D4 (CsrpConnectToServer.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180029D60 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x18002A340 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x18002AD20 (RtlQueryProcessBackTraceInformation.c)
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800311F0 (RtlpStdLogCapturedStackTrace.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1800329C8 (RtlpRemoveInvertedFunctionTableEntry.c)
 *     LdrpAcquireTlsIndex @ 0x180032A38 (LdrpAcquireTlsIndex.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180033CD0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180037690 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x180038380 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180038910 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18003DB60 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpAllocateTls @ 0x18003EF80 (LdrpAllocateTls.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     LdrGetDllFullName @ 0x180046EC0 (LdrGetDllFullName.c)
 *     EtwpProviderArrivalCallback @ 0x1800483D0 (EtwpProviderArrivalCallback.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800489D0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     EtwpTrackBinaryForSession @ 0x180048CA0 (EtwpTrackBinaryForSession.c)
 *     EtwpEventApiCallback @ 0x18004B650 (EtwpEventApiCallback.c)
 *     TppPrepareDirectParams @ 0x180051D70 (TppPrepareDirectParams.c)
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180070DA0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180073190 (sxsisol_SearchActCtxForDllName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180079D70 (LdrAddLoadAsDataTable.c)
 *     RtlQueryAtomInAtomTable @ 0x18007AA70 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007AD34 (RtlAddAtomToAtomTableEx.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x18007C4E0 (RtlReplaceSystemDirectoryInPath.c)
 *     LdrpProtectedCopyMemory @ 0x18007DB20 (LdrpProtectedCopyMemory.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18007F0DC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18007F5C0 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x18007FAA4 (QueryRegistryValue.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180080330 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800815B0 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x180081A24 (EtwpQueryRegString.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1800832B4 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x180083784 (RtlpQueryRegistryDirect.c)
 *     LdrpCheckModule @ 0x18008DC60 (LdrpCheckModule.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18008DDC0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x18008E510 (RtlInsertElementGenericTableAvl.c)
 *     LdrpLogNewDllLoadInternal @ 0x180090E80 (LdrpLogNewDllLoadInternal.c)
 *     LdrpResolvePatchDllName @ 0x180090FE8 (LdrpResolvePatchDllName.c)
 *     RtlAppendUnicodeStringToString @ 0x180092390 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x180092430 (LdrpResolveDllName.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180092FD0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlDosSearchPath_Ustr @ 0x1800937A0 (RtlDosSearchPath_Ustr.c)
 *     RtlGetCurrentDirectory_U @ 0x180094A20 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x180094EF0 (RtlpCreateNewDirectoryReference.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x18009856C (LdrpResSearchResourceHandle.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800993D0 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180099620 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetUserLocaleName @ 0x180099D30 (RtlpGetUserLocaleName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18009A010 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlSparseArrayElementAllocate @ 0x18009BFC0 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800A2080 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A3620 (RtlQueryImageMitigationPolicy.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlNtPathNameToDosPathName @ 0x1800A6240 (RtlNtPathNameToDosPathName.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800A6610 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x1800A6B80 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800A6CEC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     EtwpWriteBufferCompressed @ 0x1800AA248 (EtwpWriteBufferCompressed.c)
 *     ReportExceptionInternal @ 0x1800AC57C (ReportExceptionInternal.c)
 *     LdrpBuildSystem32FileName @ 0x1800AD5E0 (LdrpBuildSystem32FileName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800AE26C (LdrpLogFatalLdrEtwEvent.c)
 *     RtlIpv6AddressToStringExW @ 0x1800B1700 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x1800B18F0 (RtlIpv4AddressToStringExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressW @ 0x1800B2A40 (RtlIpv6StringToAddressW.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800B2E50 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800B3250 (RtlpIdnToUnicodeWorker.c)
 *     RtlInsertElementGenericTable @ 0x1800B7D00 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800B7E80 (RtlInsertElementGenericTableFull.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspDumpThread @ 0x1800BAC78 (PsspDumpThread.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800BCF2C (PsspCaptureVaSpaceInformation2.c)
 *     RtlpCreateServerAcl @ 0x1800BE59C (RtlpCreateServerAcl.c)
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpNormalizeAcl @ 0x1800C0094 (RtlpNormalizeAcl.c)
 *     RtlCopySid @ 0x1800C0750 (RtlCopySid.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1800C2C00 (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x1800C3540 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x1800C3BC0 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x1800C4070 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x1800C4840 (RtlpCopyAces.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C64A0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C677C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlMakeSelfRelativeSD @ 0x1800C6B70 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1800C6DD0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800C72D0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x1800C9DCC (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1800CB820 (RtlpMuiRegDupLanguageConfigList.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800CB894 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1800CBBD4 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800CC41C (RtlpMuiRegLoadLicInformation.c)
 *     RtlFormatMessageEx @ 0x1800CE5C0 (RtlFormatMessageEx.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800D0870 (RtlpHpLfhSubsegmentWalk.c)
 *     EtwpTraceUmMessage @ 0x1800D25AC (EtwpTraceUmMessage.c)
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D4A30 (LdrpAllocatePlaceHolder.c)
 *     RtlCopyUnicodeString @ 0x1800D7160 (RtlCopyUnicodeString.c)
 *     RtlpCopyXStateChunk @ 0x1800D9290 (RtlpCopyXStateChunk.c)
 *     RtlpSaveX87State @ 0x1800DC190 (RtlpSaveX87State.c)
 *     RtlIntegerToChar @ 0x1800DCD40 (RtlIntegerToChar.c)
 *     LdrpRecordUnloadEvent @ 0x1800DE860 (LdrpRecordUnloadEvent.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800DF398 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpHpExtrasMove @ 0x1800DF940 (RtlpHpExtrasMove.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E0698 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E1EE0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x1800E2430 (RtlpCopyProcString.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E2AF0 (RtlpMergeSecurityAttributeInformation.c)
 *     GetImageTuple @ 0x1800E39FC (GetImageTuple.c)
 *     LdrpQueryValueKey @ 0x1800E4440 (LdrpQueryValueKey.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800E6DDC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x1800E7E50 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlDuplicateUnicodeString @ 0x1800E88F0 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800E9360 (LdrUpdatePackageSearchPath.c)
 *     RtlIpv6StringToAddressA @ 0x1800EAA40 (RtlIpv6StringToAddressA.c)
 *     SaferpIsDllAllowed @ 0x1800EB17C (SaferpIsDllAllowed.c)
 *     RtlIpv6AddressToStringExA @ 0x1800EB960 (RtlIpv6AddressToStringExA.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800EBE90 (RtlCreateBoundaryDescriptor.c)
 *     RtlpNtQueryValueKey @ 0x1800EDEF0 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800EE0E4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800EE434 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv4AddressToStringExA @ 0x1800EED10 (RtlIpv4AddressToStringExA.c)
 *     PsspHandleDumper @ 0x1800EF8C0 (PsspHandleDumper.c)
 *     RtlCopySecurityDescriptor @ 0x1800EFB00 (RtlCopySecurityDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F0130 (RtlpNtEnumerateSubKey.c)
 *     RtlpInitParameterBlock @ 0x1800F0D78 (RtlpInitParameterBlock.c)
 *     RtlpRegisterStackTrace @ 0x1800F2850 (RtlpRegisterStackTrace.c)
 *     EtwpAddEventToBuffer @ 0x1800F3000 (EtwpAddEventToBuffer.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F44BC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlpCopyMappedMemoryEx @ 0x1800F4AB0 (RtlpCopyMappedMemoryEx.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 *     LZNT1CompressChunk @ 0x1800F52AC (LZNT1CompressChunk.c)
 *     RtlLargeIntegerToChar @ 0x1800F5580 (RtlLargeIntegerToChar.c)
 *     LZ4HC_compress_generic @ 0x1800F6B7C (LZ4HC_compress_generic.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x1800F951C (LZ4HC_compress_generic_dictCtx.c)
 *     RtlInitializeRXact @ 0x180101240 (RtlInitializeRXact.c)
 *     RtlDecompressBuffer2Xp10 @ 0x1801032B8 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ScatteredReadBytes @ 0x180103508 (Xp10ScatteredReadBytes.c)
 *     Xp10BitCopy @ 0x1801039D8 (Xp10BitCopy.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x180104EE0 (LdrpCorFixupImage.c)
 *     RtlAddAttributeActionToRXact @ 0x180105FC0 (RtlAddAttributeActionToRXact.c)
 *     sxsisol_RespectDotLocal @ 0x18010679C (sxsisol_RespectDotLocal.c)
 *     RtlComputePrivatizedDllName_U @ 0x180106910 (RtlComputePrivatizedDllName_U.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 *     RtlCopyString @ 0x180107C30 (RtlCopyString.c)
 *     RtlQuerySecurityObject @ 0x180108760 (RtlQuerySecurityObject.c)
 *     LZ4_compress_fast_extState @ 0x180109D3C (LZ4_compress_fast_extState.c)
 *     RtlExtractBitMap @ 0x18010C3B0 (RtlExtractBitMap.c)
 *     RtlSetFeatureConfigurations @ 0x18010CAF0 (RtlSetFeatureConfigurations.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x18010D36C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010D5F0 (RtlDecompressBufferLZNT1.c)
 *     RtlConnectToSm @ 0x18010DBE0 (RtlConnectToSm.c)
 *     RtlSetEnvironmentStrings @ 0x18010E140 (RtlSetEnvironmentStrings.c)
 *     RtlpCheckDeviceName @ 0x18010F840 (RtlpCheckDeviceName.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1801102C0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180110EA4 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801118CC (LdrpCnvrtShortToLongFileName.c)
 *     RtlpAddSystemPath @ 0x180111B58 (RtlpAddSystemPath.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180111D34 (LdrpSpecialCacheTypeHandle.c)
 *     EtwpTrackDebugIdForSession @ 0x180113430 (EtwpTrackDebugIdForSession.c)
 *     RtlpInitEnvironmentBlock @ 0x180119204 (RtlpInitEnvironmentBlock.c)
 *     RtlGetImageEnclaveConfig @ 0x18011C97C (RtlGetImageEnclaveConfig.c)
 *     TpSetDefaultPoolCpuSets @ 0x18011D1BC (TpSetDefaultPoolCpuSets.c)
 *     RtlQueryRegistryValueWithFallback @ 0x18011E600 (RtlQueryRegistryValueWithFallback.c)
 *     wcscpy @ 0x180125890 (wcscpy.c)
 *     wcsncat @ 0x180125B20 (wcsncat.c)
 *     wcsncpy @ 0x180125BD0 (wcsncpy.c)
 *     RaiseException @ 0x180128980 (RaiseException.c)
 *     memcpy_s @ 0x18012B990 (memcpy_s.c)
 *     memmove_s @ 0x18012BA30 (memmove_s.c)
 *     ReadString_1 @ 0x18012E80C (ReadString_1.c)
 *     RtlSetProcessDebugInformation @ 0x180131DE0 (RtlSetProcessDebugInformation.c)
 *     RtlInitializeNtUserPfn @ 0x1801322A0 (RtlInitializeNtUserPfn.c)
 *     RtlSetImageMitigationPolicy @ 0x1801350B0 (RtlSetImageMitigationPolicy.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1801375E0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1801378C0 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x180137D30 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x180138570 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpFilterSacl @ 0x180138A94 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x180138F00 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x180139330 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x180139A40 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x18013A790 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x18013A810 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x18013A9E0 (RtlCopyBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x18013BEE4 (RtlpCopyBitMapTailToHead.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013C964 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x18013CD50 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18013D30C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013DBC0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x180140190 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1801404E0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180140AB0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlCompareExchangePropertyStore @ 0x1801413D0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180141830 (RtlRemovePropertyStore.c)
 *     RtlWriteNonVolatileMemory @ 0x1801434F0 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x180143780 (RtlGenerate8dot3Name.c)
 *     __ft_array_insert @ 0x1801444F4 (__ft_array_insert.c)
 *     RtlRemoteCall @ 0x180144D60 (RtlRemoteCall.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014691C (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegResizeStringPool @ 0x180147E9C (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x18014A230 (RtlpHpStackTraceEventWriter.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18014B4D0 (RtlDecompressFragmentLZNT1.c)
 *     Xp10ScatteredCopy @ 0x18014E6B8 (Xp10ScatteredCopy.c)
 *     RtlDecompressBufferLz4 @ 0x18014EA00 (RtlDecompressBufferLz4.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x18014F6AC (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     inflate @ 0x18014FA34 (inflate.c)
 *     updatewindow @ 0x180150C6C (updatewindow.c)
 *     deflate_stored @ 0x180152240 (deflate_stored.c)
 *     fill_window @ 0x1801526B0 (fill_window.c)
 *     flush_pending @ 0x180152A18 (flush_pending.c)
 *     read_buf @ 0x180152D24 (read_buf.c)
 *     _tr_stored_block @ 0x180154148 (_tr_stored_block.c)
 *     SymCryptSha256Append @ 0x1801586A0 (SymCryptSha256Append.c)
 *     SymCryptHashAppendInternal @ 0x180159AD4 (SymCryptHashAppendInternal.c)
 *     EtwTraceEventInstance @ 0x18015A410 (EtwTraceEventInstance.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015BF7C (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpAddRedirectedFunction @ 0x18015EFF0 (LdrpAddRedirectedFunction.c)
 *     RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x18017025C (RtlpFcQueryAllGovernedFeaturesFromBufferSet.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x180170678 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
