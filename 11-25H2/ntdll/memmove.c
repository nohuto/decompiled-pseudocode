/*
 * XREFs of memmove @ 0x180168980
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180019210 (sxsisol_SearchActCtxForDllName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x18001FDF0 (LdrAddLoadAsDataTable.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180020CA0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     LdrpAcquireTlsIndex @ 0x180025310 (LdrpAcquireTlsIndex.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18002C120 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     CsrCaptureMessageBuffer @ 0x180034D10 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x1800357D0 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x1800359D0 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180037DFC (RtlpExtendFrontEndUsageArray.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180039C60 (RtlConvertDeviceFamilyInfoToString.c)
 *     EtwpEventApiCallback @ 0x180044EB0 (EtwpEventApiCallback.c)
 *     EtwpTrackBinaryForSession @ 0x180046D70 (EtwpTrackBinaryForSession.c)
 *     EtwpProviderArrivalCallback @ 0x1800470F0 (EtwpProviderArrivalCallback.c)
 *     LdrGetDllFullName @ 0x180047DE0 (LdrGetDllFullName.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180048FD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18004ADB0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180050240 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18005C790 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetNeutralFallback @ 0x18005C940 (RtlGetNeutralFallback.c)
 *     RtlpComputeLangListCheckSum @ 0x18005CCE0 (RtlpComputeLangListCheckSum.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlAddAccessAllowedAceEx @ 0x18005E800 (RtlAddAccessAllowedAceEx.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18005F1D0 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18005F470 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x18005F650 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x18005F780 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x18005F8F0 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x18005FB90 (RtlIntegerToUnicode.c)
 *     RtlLargeIntegerToUnicode @ 0x18005FEDC (RtlLargeIntegerToUnicode.c)
 *     RtlCheckTokenMembershipEx @ 0x1800601A0 (RtlCheckTokenMembershipEx.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800608DC (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlCopySid @ 0x180060CD0 (RtlCopySid.c)
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1800631C0 (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x180063B00 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x180064180 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x180064630 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x180064E00 (RtlpCopyAces.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800665D0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlMakeSelfRelativeSD @ 0x180066CA0 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180066F00 (RtlSelfRelativeToAbsoluteSD2.c)
 *     GetImageTuple @ 0x180067918 (GetImageTuple.c)
 *     RtlQueryAtomInAtomTable @ 0x180067B90 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067E44 (RtlAddAtomToAtomTableEx.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180069600 (RtlReplaceSystemDirectoryInPath.c)
 *     LdrpProtectedCopyMemory @ 0x18006AC40 (LdrpProtectedCopyMemory.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18006C1FC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18006C6E0 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x18006CBC4 (QueryRegistryValue.c)
 *     LdrpLogNewDllLoadInternal @ 0x18006EE20 (LdrpLogNewDllLoadInternal.c)
 *     LdrpResolvePatchDllName @ 0x18006EF88 (LdrpResolvePatchDllName.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     LdrpCheckModule @ 0x180071F80 (LdrpCheckModule.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800720E0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x180072830 (RtlInsertElementGenericTableAvl.c)
 *     RtlpSaveX87State @ 0x180075AA0 (RtlpSaveX87State.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x18007BAE0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     TppPrepareDirectParams @ 0x18007F750 (TppPrepareDirectParams.c)
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x180083460 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x1800838D4 (EtwpQueryRegString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180083D80 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180086044 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x180086514 (RtlpQueryRegistryDirect.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180086A64 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x18008743C (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008A6F8 (RtlpMuiRegDupLanguageList.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     RtlCheckTokenCapability @ 0x18008F880 (RtlCheckTokenCapability.c)
 *     RtlpHeapTrkTrackStack @ 0x18008FEF0 (RtlpHeapTrkTrackStack.c)
 *     EtwpTraceUmEvent @ 0x180090890 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x180090C10 (EtwpRelogEvent.c)
 *     RtlpHeapTrkReportResult @ 0x180092648 (RtlpHeapTrkReportResult.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180092A9C (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlpPushPageDescriptor @ 0x180092F14 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x180094DAC (RtlpValidateHeapHeaders.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180099AB0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x18009A090 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x18009AA00 (RtlQueryProcessBackTraceInformation.c)
 *     RtlpCheckDeviceName @ 0x1800A0BCC (RtlpCheckDeviceName.c)
 *     sxsisol_RespectDotLocal @ 0x1800A0C84 (sxsisol_RespectDotLocal.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800A0DF0 (RtlComputePrivatizedDllName_U.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A1560 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800A1E80 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 *     RtlGetParentLocaleName @ 0x1800A7380 (RtlGetParentLocaleName.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800A7B60 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     RtlDosSearchPath_U @ 0x1800AAC20 (RtlDosSearchPath_U.c)
 *     RtlCreateEnvironmentEx @ 0x1800AB0E0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x1800AB3E0 (RtlSetEnvironmentVar.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x1800ADF2C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800AE260 (RtlpQueryEnvironmentHashTable.c)
 *     RtlpScanEnvironment @ 0x1800AE5E0 (RtlpScanEnvironment.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800B0060 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800B0AF0 (RtlQueryImageMitigationPolicy.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlNtPathNameToDosPathName @ 0x1800B3710 (RtlNtPathNameToDosPathName.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800B3AE0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x1800B4050 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800B41BC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     EtwpWriteBufferCompressed @ 0x1800B7628 (EtwpWriteBufferCompressed.c)
 *     RtlSparseArrayElementAllocate @ 0x1800BA7B4 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpLargeReAlloc @ 0x1800BCCC4 (RtlpHpLargeReAlloc.c)
 *     RtlIpv6AddressToStringExW @ 0x1800BE9A0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x1800BEB90 (RtlIpv4AddressToStringExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressW @ 0x1800BFCE0 (RtlIpv6StringToAddressW.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800C00F0 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800C04F0 (RtlpIdnToUnicodeWorker.c)
 *     RtlInsertElementGenericTable @ 0x1800C44D0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800C4650 (RtlInsertElementGenericTableFull.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspDumpThread @ 0x1800C77C4 (PsspDumpThread.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800CA11C (PsspCaptureVaSpaceInformation2.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800CBB70 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlFormatMessageEx @ 0x1800CD590 (RtlFormatMessageEx.c)
 *     ReportExceptionInternal @ 0x1800CF998 (ReportExceptionInternal.c)
 *     LdrpBuildSystem32FileName @ 0x1800D0E20 (LdrpBuildSystem32FileName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D1D10 (LdrpLogFatalLdrEtwEvent.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800D4910 (RtlpHpLfhSubsegmentWalk.c)
 *     EtwpTraceUmMessage @ 0x1800D4EFC (EtwpTraceUmMessage.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B8 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D9660 (LdrpAllocatePlaceHolder.c)
 *     RtlpCopyXStateChunk @ 0x1800DACA0 (RtlpCopyXStateChunk.c)
 *     RtlCopyUnicodeString @ 0x1800DB5F0 (RtlCopyUnicodeString.c)
 *     RtlIntegerToChar @ 0x1800DECF0 (RtlIntegerToChar.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800DF090 (RtlpInitUnicodeStringUsingBuffer.c)
 *     LdrpRecordUnloadEvent @ 0x1800DFF40 (LdrpRecordUnloadEvent.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800E0D80 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800E2350 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800E2F40 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800E3344 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E3980 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E41B8 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpInitEnvironmentBlock @ 0x1800E587C (RtlpInitEnvironmentBlock.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E5B00 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x1800E6050 (RtlpCopyProcString.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 *     RtlpNormalizeAcl @ 0x1800E8044 (RtlpNormalizeAcl.c)
 *     RtlpCreateServerAcl @ 0x1800E85A8 (RtlpCreateServerAcl.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E9520 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpQueryValueKey @ 0x1800EA0C0 (LdrpQueryValueKey.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EC7EC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x1800ED660 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlDuplicateUnicodeString @ 0x1800EDC80 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800EEC60 (LdrUpdatePackageSearchPath.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800F10D0 (RtlpStdLogCapturedStackTrace.c)
 *     RtlIpv6StringToAddressA @ 0x1800F1670 (RtlIpv6StringToAddressA.c)
 *     SaferpIsDllAllowed @ 0x1800F1DAC (SaferpIsDllAllowed.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F2850 (RtlIpv6AddressToStringExA.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800F2D80 (RtlCreateBoundaryDescriptor.c)
 *     RtlpNtQueryValueKey @ 0x1800F5170 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F5954 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800F5BC4 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1800F5C84 (RtlpRemoveInvertedFunctionTableEntry.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F6320 (RtlIpv4AddressToStringExA.c)
 *     PsspHandleDumper @ 0x1800F6880 (PsspHandleDumper.c)
 *     RtlCopySecurityDescriptor @ 0x1800F6AC0 (RtlCopySecurityDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F7190 (RtlpNtEnumerateSubKey.c)
 *     RtlpInitParameterBlock @ 0x1800F84E8 (RtlpInitParameterBlock.c)
 *     RtlpRegisterStackTrace @ 0x1800F9870 (RtlpRegisterStackTrace.c)
 *     EtwpAddEventToBuffer @ 0x1800FA020 (EtwpAddEventToBuffer.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800FB5AC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlpCopyMappedMemoryEx @ 0x1800FBC50 (RtlpCopyMappedMemoryEx.c)
 *     RtlSetProtectedPolicy @ 0x1800FBDC0 (RtlSetProtectedPolicy.c)
 *     LZNT1CompressChunk @ 0x1800FC44C (LZNT1CompressChunk.c)
 *     RtlLargeIntegerToChar @ 0x1800FC720 (RtlLargeIntegerToChar.c)
 *     LZ4HC_compress_generic @ 0x1800FE55C (LZ4HC_compress_generic.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x180100EFC (LZ4HC_compress_generic_dictCtx.c)
 *     RtlInitializeRXact @ 0x180108C20 (RtlInitializeRXact.c)
 *     RtlDecompressBuffer2Xp10 @ 0x18010AC98 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ScatteredReadBytes @ 0x18010AEE8 (Xp10ScatteredReadBytes.c)
 *     Xp10BitCopy @ 0x18010B3B8 (Xp10BitCopy.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x18010CA20 (LdrpCorFixupImage.c)
 *     RtlAddAttributeActionToRXact @ 0x18010D8C0 (RtlAddAttributeActionToRXact.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     LdrAddDllDirectory @ 0x18010EA40 (LdrAddDllDirectory.c)
 *     RtlCopyString @ 0x18010EE30 (RtlCopyString.c)
 *     RtlQuerySecurityObject @ 0x180110300 (RtlQuerySecurityObject.c)
 *     LZ4_compress_fast_extState @ 0x180111ACC (LZ4_compress_fast_extState.c)
 *     RtlExtractBitMap @ 0x180113F60 (RtlExtractBitMap.c)
 *     RtlSetFeatureConfigurations @ 0x1801147E0 (RtlSetFeatureConfigurations.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180114FFC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlDecompressBufferLZNT1 @ 0x180115280 (RtlDecompressBufferLZNT1.c)
 *     RtlConnectToSm @ 0x180115640 (RtlConnectToSm.c)
 *     RtlpGetUserLocaleName @ 0x180115BDC (RtlpGetUserLocaleName.c)
 *     RtlSetEnvironmentStrings @ 0x180115E10 (RtlSetEnvironmentStrings.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x180117DF0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180118C00 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpAddSystemPath @ 0x180119B14 (RtlpAddSystemPath.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180119F8C (LdrpSpecialCacheTypeHandle.c)
 *     EtwpTrackDebugIdForSession @ 0x18011B540 (EtwpTrackDebugIdForSession.c)
 *     RtlGetImageEnclaveConfig @ 0x18012001C (RtlGetImageEnclaveConfig.c)
 *     TpSetDefaultPoolCpuSets @ 0x18012085C (TpSetDefaultPoolCpuSets.c)
 *     RtlQueryRegistryValueWithFallback @ 0x180121CA0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlInitializeNtUserPfn @ 0x180122080 (RtlInitializeNtUserPfn.c)
 *     wcscpy @ 0x180129140 (wcscpy.c)
 *     wcsncat @ 0x1801293D0 (wcsncat.c)
 *     wcsncpy @ 0x180129480 (wcsncpy.c)
 *     RaiseException @ 0x18012C230 (RaiseException.c)
 *     memcpy_s @ 0x18012F240 (memcpy_s.c)
 *     memmove_s @ 0x18012F2E0 (memmove_s.c)
 *     ReadString_1 @ 0x1801320BC (ReadString_1.c)
 *     RtlSetProcessDebugInformation @ 0x180135690 (RtlSetProcessDebugInformation.c)
 *     RtlSetImageMitigationPolicy @ 0x1801385F0 (RtlSetImageMitigationPolicy.c)
 *     RtlNormalizeSecurityDescriptor @ 0x18013AB20 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x18013AE00 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x18013B270 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013BAB0 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpFilterSacl @ 0x18013BFD4 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x18013C440 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013C870 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x18013CF80 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x18013DCD0 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x18013DD50 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x18013DF20 (RtlCopyBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x18013F424 (RtlpCopyBitMapTailToHead.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013FEA4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x180140290 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18014080C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801410C0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1801436D0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180143A20 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180143FF0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlCompareExchangePropertyStore @ 0x180144710 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180144B70 (RtlRemovePropertyStore.c)
 *     RtlWriteNonVolatileMemory @ 0x1801466B0 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x180146940 (RtlGenerate8dot3Name.c)
 *     __ft_array_insert @ 0x1801476F4 (__ft_array_insert.c)
 *     RtlRemoteCall @ 0x180147F60 (RtlRemoteCall.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180149B1C (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegResizeStringPool @ 0x18014B09C (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x18014D430 (RtlpHpStackTraceEventWriter.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18014E6C0 (RtlDecompressFragmentLZNT1.c)
 *     Xp10ScatteredCopy @ 0x1801518A8 (Xp10ScatteredCopy.c)
 *     RtlDecompressBufferLz4 @ 0x180151BF0 (RtlDecompressBufferLz4.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x18015289C (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     inflate @ 0x180152C24 (inflate.c)
 *     updatewindow @ 0x180153E5C (updatewindow.c)
 *     deflate_stored @ 0x180155430 (deflate_stored.c)
 *     fill_window @ 0x1801558A0 (fill_window.c)
 *     flush_pending @ 0x180155C08 (flush_pending.c)
 *     read_buf @ 0x180155F14 (read_buf.c)
 *     _tr_stored_block @ 0x180157338 (_tr_stored_block.c)
 *     SymCryptSha256Append @ 0x18015B890 (SymCryptSha256Append.c)
 *     SymCryptHashAppendInternal @ 0x18015CCC4 (SymCryptHashAppendInternal.c)
 *     EtwTraceEventInstance @ 0x18015D5B0 (EtwTraceEventInstance.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015F080 (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpAddRedirectedFunction @ 0x1801621C4 (LdrpAddRedirectedFunction.c)
 *     RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x180173254 (RtlpFcQueryAllGovernedFeaturesFromBufferSet.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x180173678 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
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
