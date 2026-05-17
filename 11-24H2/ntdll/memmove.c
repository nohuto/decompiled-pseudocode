/*
 * XREFs of memmove @ 0x180167400
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800011F0 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     ReportExceptionInternal @ 0x18000287C (ReportExceptionInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800035B0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x180005FC8 (RtlpRemoveInvertedFunctionTableEntry.c)
 *     LdrpAcquireTlsIndex @ 0x180006038 (LdrpAcquireTlsIndex.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x1800072D0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrpGetProcApphelpCheckModule @ 0x18000AC90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x18000B980 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18000BF10 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180011160 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     LdrpAllocateTls @ 0x180012580 (LdrpAllocateTls.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800144D0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     LdrGetDllFullName @ 0x18001A4C0 (LdrGetDllFullName.c)
 *     EtwpProviderArrivalCallback @ 0x18001B9D0 (EtwpProviderArrivalCallback.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18001BFD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     EtwpTrackBinaryForSession @ 0x18001C2A0 (EtwpTrackBinaryForSession.c)
 *     EtwpEventApiCallback @ 0x18001EC50 (EtwpEventApiCallback.c)
 *     TppPrepareDirectParams @ 0x180025370 (TppPrepareDirectParams.c)
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlCreateUnicodeString @ 0x180028050 (RtlCreateUnicodeString.c)
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlGetNeutralFallback @ 0x180033500 (RtlGetNeutralFallback.c)
 *     RtlGetParentLocaleName @ 0x180033970 (RtlGetParentLocaleName.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180035280 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180035F10 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpComputeLangListCheckSum @ 0x180036440 (RtlpComputeLangListCheckSum.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlAddAccessAllowedAceEx @ 0x180037E90 (RtlAddAccessAllowedAceEx.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x1800387C0 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x180038BA0 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180038CD0 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x180038E40 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x1800390E0 (RtlIntegerToUnicode.c)
 *     RtlLargeIntegerToUnicode @ 0x1800395A0 (RtlLargeIntegerToUnicode.c)
 *     RtlCheckTokenMembershipEx @ 0x180039A70 (RtlCheckTokenMembershipEx.c)
 *     EtwpWriteToPrivateBuffers @ 0x18003B480 (EtwpWriteToPrivateBuffers.c)
 *     RtlCheckTokenCapability @ 0x18003BE90 (RtlCheckTokenCapability.c)
 *     RtlpHeapTrkTrackStack @ 0x18003C500 (RtlpHeapTrkTrackStack.c)
 *     EtwpTraceUmEvent @ 0x18003CEA0 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18003D220 (EtwpRelogEvent.c)
 *     RtlpHeapTrkReportResult @ 0x18003EC58 (RtlpHeapTrkReportResult.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x18003F0AC (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlpPushPageDescriptor @ 0x18003F524 (RtlpPushPageDescriptor.c)
 *     RtlpValidateHeapHeaders @ 0x1800413BC (RtlpValidateHeapHeaders.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180045DD0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800463B0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x180046D20 (RtlQueryProcessBackTraceInformation.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18005B1C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18005D5B0 (sxsisol_SearchActCtxForDllName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180064190 (LdrAddLoadAsDataTable.c)
 *     LdrpBuildSystem32FileName @ 0x180065710 (LdrpBuildSystem32FileName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180066090 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpCheckModule @ 0x180071380 (LdrpCheckModule.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800714E0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x180071C30 (RtlInsertElementGenericTableAvl.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800745A0 (LdrpLogNewDllLoadInternal.c)
 *     LdrpResolvePatchDllName @ 0x180074708 (LdrpResolvePatchDllName.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x180075B50 (LdrpResolveDllName.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800766F0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlDosSearchPath_Ustr @ 0x180076EC0 (RtlDosSearchPath_Ustr.c)
 *     RtlGetCurrentDirectory_U @ 0x180078140 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078610 (RtlpCreateNewDirectoryReference.c)
 *     LdrpTraceLoadMUIDll @ 0x1800790FC (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceMappedFile @ 0x180079BD0 (LdrpResSearchResourceMappedFile.c)
 *     RtlpMuiRegDupLanguageList @ 0x18007D0E0 (RtlpMuiRegDupLanguageList.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180081010 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180081558 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C00 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180082004 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800821AC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180082694 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlDosSearchPath_U @ 0x180082890 (RtlDosSearchPath_U.c)
 *     RtlCreateEnvironmentEx @ 0x180082D50 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180083050 (RtlSetEnvironmentVar.c)
 *     RtlpComputePath @ 0x180084760 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180085B9C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpQueryEnvironmentHashTable @ 0x180085ED0 (RtlpQueryEnvironmentHashTable.c)
 *     RtlpScanEnvironment @ 0x180086250 (RtlpScanEnvironment.c)
 *     RtlQueryImageMitigationPolicy @ 0x180087B60 (RtlQueryImageMitigationPolicy.c)
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlNtPathNameToDosPathName @ 0x18008A780 (RtlNtPathNameToDosPathName.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18008AB50 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x18008B0C0 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x18008B22C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     EtwpWriteBufferCompressed @ 0x18008E788 (EtwpWriteBufferCompressed.c)
 *     RtlSparseArrayElementAllocate @ 0x180091434 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpLargeReAlloc @ 0x180093AA4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     CsrCaptureMessageBuffer @ 0x1800A5ED0 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x1800A6990 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x1800A6B90 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x1800A7080 (CsrpConnectToServer.c)
 *     RtlpExtendFrontEndUsageArray @ 0x1800A8FBC (RtlpExtendFrontEndUsageArray.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x1800AAE20 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800AC950 (RtlQueryActivationContextApplicationSettings.c)
 *     GetImageTuple @ 0x1800AE238 (GetImageTuple.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800AE554 (RtlAddAtomToAtomTableEx.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x1800AFC40 (RtlReplaceSystemDirectoryInPath.c)
 *     LdrpProtectedCopyMemory @ 0x1800B1280 (LdrpProtectedCopyMemory.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x1800B283C (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B2D20 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x1800B3204 (QueryRegistryValue.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800B3A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800B4D10 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x1800B5184 (EtwpQueryRegString.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1800B6A14 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x1800B6EE4 (RtlpQueryRegistryDirect.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800B7D40 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlIpv6AddressToStringExW @ 0x1800B9960 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x1800B9B30 (RtlIpv4AddressToStringExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800BA3D0 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressW @ 0x1800BAC80 (RtlIpv6StringToAddressW.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800BB090 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800BB490 (RtlpIdnToUnicodeWorker.c)
 *     RtlInsertElementGenericTable @ 0x1800BFF40 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800C00C0 (RtlInsertElementGenericTableFull.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspDumpThread @ 0x1800C30B4 (PsspDumpThread.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800C536C (PsspCaptureVaSpaceInformation2.c)
 *     RtlpCreateServerAcl @ 0x1800C69DC (RtlpCreateServerAcl.c)
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpNormalizeAcl @ 0x1800C84D4 (RtlpNormalizeAcl.c)
 *     RtlCopySid @ 0x1800C8B90 (RtlCopySid.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x1800CB040 (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x1800CB980 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x1800CC000 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x1800CC4B0 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x1800CCC80 (RtlpCopyAces.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800CE8E0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800CEBBC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlMakeSelfRelativeSD @ 0x1800CEFB0 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1800CF210 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpResSearchResourceHandle @ 0x1800D1ACC (LdrpResSearchResourceHandle.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800D2A40 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800D2C90 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpGetUserLocaleName @ 0x1800D2DDC (RtlpGetUserLocaleName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800D30B0 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlFormatMessageEx @ 0x1800D3250 (RtlFormatMessageEx.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800D5500 (RtlpHpLfhSubsegmentWalk.c)
 *     EtwpTraceUmMessage @ 0x1800D723C (EtwpTraceUmMessage.c)
 *     LdrpLoadEnclaveModule @ 0x1800D9218 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D96C0 (LdrpAllocatePlaceHolder.c)
 *     RtlCopyUnicodeString @ 0x1800DC080 (RtlCopyUnicodeString.c)
 *     RtlpCopyXStateChunk @ 0x1800DE120 (RtlpCopyXStateChunk.c)
 *     RtlpSaveX87State @ 0x1800E0C40 (RtlpSaveX87State.c)
 *     RtlIntegerToChar @ 0x1800E1770 (RtlIntegerToChar.c)
 *     LdrpRecordUnloadEvent @ 0x1800E3290 (LdrpRecordUnloadEvent.c)
 *     RtlpHpExtrasMove @ 0x1800E3FC0 (RtlpHpExtrasMove.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E51E8 (LdrpLogDllRelocationEtwEvent.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E6A30 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x1800E6F80 (RtlpCopyProcString.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E7DE0 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpQueryValueKey @ 0x1800E8D50 (LdrpQueryValueKey.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EB31C (RtlpMuiRegLoadLicInformation.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EBACC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1800EC278 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x1800ECE80 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlDuplicateUnicodeString @ 0x1800ED600 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800EE180 (LdrUpdatePackageSearchPath.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800EF820 (RtlpStdLogCapturedStackTrace.c)
 *     RtlIpv6StringToAddressA @ 0x1800EFDC0 (RtlIpv6StringToAddressA.c)
 *     SaferpIsDllAllowed @ 0x1800F04FC (SaferpIsDllAllowed.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F0CE0 (RtlIpv6AddressToStringExA.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800F1210 (RtlCreateBoundaryDescriptor.c)
 *     RtlpNtQueryValueKey @ 0x1800F3600 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F3BC4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800F3F14 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F4740 (RtlIpv4AddressToStringExA.c)
 *     PsspHandleDumper @ 0x1800F4CA0 (PsspHandleDumper.c)
 *     RtlCopySecurityDescriptor @ 0x1800F4EE0 (RtlCopySecurityDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F5610 (RtlpNtEnumerateSubKey.c)
 *     RtlpInitParameterBlock @ 0x1800F6818 (RtlpInitParameterBlock.c)
 *     RtlpRegisterStackTrace @ 0x1800F7CE0 (RtlpRegisterStackTrace.c)
 *     EtwpAddEventToBuffer @ 0x1800F8490 (EtwpAddEventToBuffer.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F980C (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlpCopyMappedMemoryEx @ 0x1800F9D50 (RtlpCopyMappedMemoryEx.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 *     LZNT1CompressChunk @ 0x1800FA54C (LZNT1CompressChunk.c)
 *     RtlLargeIntegerToChar @ 0x1800FA820 (RtlLargeIntegerToChar.c)
 *     LZ4HC_compress_generic @ 0x1800FBC4C (LZ4HC_compress_generic.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x1800FE5EC (LZ4HC_compress_generic_dictCtx.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RtlDecompressBuffer2Xp10 @ 0x180108388 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ScatteredReadBytes @ 0x1801085D8 (Xp10ScatteredReadBytes.c)
 *     Xp10BitCopy @ 0x180108AA8 (Xp10BitCopy.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x180109FB0 (LdrpCorFixupImage.c)
 *     RtlAddAttributeActionToRXact @ 0x18010B220 (RtlAddAttributeActionToRXact.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     sxsisol_RespectDotLocal @ 0x18010BDCC (sxsisol_RespectDotLocal.c)
 *     RtlComputePrivatizedDllName_U @ 0x18010BF40 (RtlComputePrivatizedDllName_U.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 *     RtlCopyString @ 0x18010CDE0 (RtlCopyString.c)
 *     RtlQuerySecurityObject @ 0x18010D880 (RtlQuerySecurityObject.c)
 *     LZ4_compress_fast_extState @ 0x18010ED5C (LZ4_compress_fast_extState.c)
 *     RtlExtractBitMap @ 0x1801110F0 (RtlExtractBitMap.c)
 *     RtlSetFeatureConfigurations @ 0x1801116E0 (RtlSetFeatureConfigurations.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180111EFC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlDecompressBufferLZNT1 @ 0x180112180 (RtlDecompressBufferLZNT1.c)
 *     RtlConnectToSm @ 0x180112900 (RtlConnectToSm.c)
 *     RtlSetEnvironmentStrings @ 0x180112E80 (RtlSetEnvironmentStrings.c)
 *     RtlpCheckDeviceName @ 0x1801145F0 (RtlpCheckDeviceName.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x180114EF0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180115A10 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180116698 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpAddSystemPath @ 0x180116924 (RtlpAddSystemPath.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180116C48 (LdrpSpecialCacheTypeHandle.c)
 *     EtwpTrackDebugIdForSession @ 0x1801184BC (EtwpTrackDebugIdForSession.c)
 *     RtlQueryAtomInAtomTable @ 0x1801191C0 (RtlQueryAtomInAtomTable.c)
 *     RtlpInitEnvironmentBlock @ 0x18011AFD4 (RtlpInitEnvironmentBlock.c)
 *     RtlGetImageEnclaveConfig @ 0x18011E74C (RtlGetImageEnclaveConfig.c)
 *     TpSetDefaultPoolCpuSets @ 0x18011EF8C (TpSetDefaultPoolCpuSets.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1801203D0 (RtlQueryRegistryValueWithFallback.c)
 *     wcscpy @ 0x180127660 (wcscpy.c)
 *     wcsncat @ 0x1801278F0 (wcsncat.c)
 *     wcsncpy @ 0x1801279A0 (wcsncpy.c)
 *     RaiseException @ 0x18012A750 (RaiseException.c)
 *     memcpy_s @ 0x18012D760 (memcpy_s.c)
 *     memmove_s @ 0x18012D800 (memmove_s.c)
 *     ReadString_1 @ 0x1801305DC (ReadString_1.c)
 *     RtlSetProcessDebugInformation @ 0x180133BB0 (RtlSetProcessDebugInformation.c)
 *     RtlInitializeNtUserPfn @ 0x180134070 (RtlInitializeNtUserPfn.c)
 *     RtlSetImageMitigationPolicy @ 0x180136E80 (RtlSetImageMitigationPolicy.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1801393B0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x180139690 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x180139B00 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013A340 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpFilterSacl @ 0x18013A864 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x18013ACD0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013B100 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x18013B810 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x18013C5A0 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x18013C620 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x18013C7F0 (RtlCopyBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x18013DCF4 (RtlpCopyBitMapTailToHead.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013E774 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x18013EB60 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18013F11C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013F9D0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x180141FE0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180142330 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180142900 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlCompareExchangePropertyStore @ 0x180143020 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180143480 (RtlRemovePropertyStore.c)
 *     RtlWriteNonVolatileMemory @ 0x180145140 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x1801453D0 (RtlGenerate8dot3Name.c)
 *     __ft_array_insert @ 0x180146144 (__ft_array_insert.c)
 *     RtlRemoteCall @ 0x1801469B0 (RtlRemoteCall.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014856C (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegResizeStringPool @ 0x180149AEC (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x18014BE80 (RtlpHpStackTraceEventWriter.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18014D110 (RtlDecompressFragmentLZNT1.c)
 *     Xp10ScatteredCopy @ 0x1801502F8 (Xp10ScatteredCopy.c)
 *     RtlDecompressBufferLz4 @ 0x180150640 (RtlDecompressBufferLz4.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x1801512EC (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     inflate @ 0x180151674 (inflate.c)
 *     updatewindow @ 0x1801528AC (updatewindow.c)
 *     deflate_stored @ 0x180153E80 (deflate_stored.c)
 *     fill_window @ 0x1801542F0 (fill_window.c)
 *     flush_pending @ 0x180154658 (flush_pending.c)
 *     read_buf @ 0x180154964 (read_buf.c)
 *     _tr_stored_block @ 0x180155D88 (_tr_stored_block.c)
 *     SymCryptSha256Append @ 0x18015A2E0 (SymCryptSha256Append.c)
 *     SymCryptHashAppendInternal @ 0x18015B714 (SymCryptHashAppendInternal.c)
 *     EtwTraceEventInstance @ 0x18015C050 (EtwTraceEventInstance.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015DBBC (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpAddRedirectedFunction @ 0x180160C30 (LdrpAddRedirectedFunction.c)
 *     RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x18017125C (RtlpFcQueryAllGovernedFeaturesFromBufferSet.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x180171678 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
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
