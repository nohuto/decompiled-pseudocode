/*
 * XREFs of wcslen @ 0x1801292B0
 * Callers:
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     RtlGetImageFileMachines @ 0x180015120 (RtlGetImageFileMachines.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     SwitchedRtlGetVersion @ 0x180038AB0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180039D50 (RtlpGetDeviceFamilyInfoEnum.c)
 *     ReadUlongFromKey @ 0x18003A014 (ReadUlongFromKey.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18005B490 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18005C790 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetNeutralFallback @ 0x18005C940 (RtlGetNeutralFallback.c)
 *     RtlpComputeLangListCheckSum @ 0x18005CCE0 (RtlpComputeLangListCheckSum.c)
 *     RtlOpenCurrentUser @ 0x18005D890 (RtlOpenCurrentUser.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18005F1D0 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18005F470 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800665D0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800690DC (RtlpWow64SelectSystem32PathInternal.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18006C1FC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18006C6E0 (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x18006C824 (_GetOverlayPackagePathFromKey.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     CompatCachepLookupCdb @ 0x1800712A4 (CompatCachepLookupCdb.c)
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180083784 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800838D4 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180083A7C (EtwpGetRegDwordValue.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180084060 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpQueryRegistryValues @ 0x180085770 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x180086820 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1800869D0 (RtlDeleteRegistryValue.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180088B20 (RtlpLoadUserUIByPolicy.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180089230 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180089B50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     GetNameFromLangListNode @ 0x18008BF90 (GetNameFromLangListNode.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x18008C780 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     GetLCIDFromLangListNode @ 0x18008D8A0 (GetLCIDFromLangListNode.c)
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UEx @ 0x1800A24A0 (RtlDoesFileExists_UEx.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1800A781C (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x1800AA590 (RtlGetFullPathName_U.c)
 *     RtlpResetDriveEnvironment @ 0x1800AB008 (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x1800ABD74 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpCheckRelativeDrive @ 0x1800AEF70 (RtlpCheckRelativeDrive.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800B0060 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800B02A0 (RtlpQueryNlsSystemCodePages.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800B05CC (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800B0AF0 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800B31E4 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetPrivateLoggerContext @ 0x1800B69A0 (EtwpGetPrivateLoggerContext.c)
 *     SendMessageToWERService @ 0x1800CFEA0 (SendMessageToWERService.c)
 *     LdrpIsReparsePoint @ 0x1800D02AC (LdrpIsReparsePoint.c)
 *     LdrpBuildSystem32FileName @ 0x1800D0E20 (LdrpBuildSystem32FileName.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800D98B0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800DB3A0 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800DD270 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800DE3D0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800DE890 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlGetFullPathName_UEx @ 0x1800DEE40 (RtlGetFullPathName_UEx.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800DF400 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800E01D0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E06DC (WerpEscalationIsWMRSendStringSet.c)
 *     RtlIsDosDeviceName_U @ 0x1800E17B0 (RtlIsDosDeviceName_U.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800E2F40 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800E6800 (RtlDosPathNameToNtPathName_U.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800EF0B0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     LdrLoadAlternateResourceModule @ 0x1800F3250 (LdrLoadAlternateResourceModule.c)
 *     RtlpIsCustomLocale @ 0x1800F943C (RtlpIsCustomLocale.c)
 *     RtlInitializeRXact @ 0x180108C20 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180109070 (RtlApplyRXact.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180109580 (RtlpLoadMachineUIByPolicy.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     RtlConnectToSm @ 0x180115640 (RtlConnectToSm.c)
 *     RtlpMatchUserLanguage @ 0x180115B18 (RtlpMatchUserLanguage.c)
 *     WerpEscalationIsDisabled @ 0x180118198 (WerpEscalationIsDisabled.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 *     wcscat @ 0x180129100 (wcscat.c)
 *     wcscpy @ 0x180129140 (wcscpy.c)
 *     wcsncat @ 0x1801293D0 (wcsncat.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcslen(const wchar_t *String)
{
  __int64 v4; // rcx
  __m128i *i; // rdx
  unsigned __int64 v6; // r10
  const wchar_t *v7; // rax
  size_t v8; // rdx
  unsigned __int64 v12; // r10
  const wchar_t *v13; // rax

  v4 = (unsigned __int8)String & 1;
  i = (__m128i *)String;
  if ( (_isa_info & 0x10) != 0 )
  {
    if ( v4 )
    {
      while ( i->m128i_i16[0] )
        i = (__m128i *)((char *)i + 2);
      return ((char *)i - (char *)String) >> 1;
    }
    v6 = ((32LL - ((unsigned __int8)String & 0x1F)) & (unsigned __int64)-(__int64)(((unsigned __int8)String & 0x1F) != 0LL)) >> 1;
    v7 = &String[v6];
    if ( String != v7 )
    {
      do
      {
        if ( !i->m128i_i16[0] )
          break;
        i = (__m128i *)((char *)i + 2);
      }
      while ( i != (__m128i *)v7 );
    }
    v8 = ((char *)i - (char *)String) >> 1;
    if ( v8 == v6 )
    {
      i = (__m128i *)&String[v8];
      __asm { vpxor   xmm2, xmm2, xmm2 }
      while ( 1 )
      {
        __asm
        {
          vpcmpeqw ymm1, ymm2, ymmword ptr [rdx]
          vpmovmskb eax, ymm1
        }
        if ( _EAX )
          break;
        i += 2;
      }
      __asm { vzeroupper }
      while ( i->m128i_i16[0] )
        i = (__m128i *)((char *)i + 2);
      return ((char *)i - (char *)String) >> 1;
    }
  }
  else
  {
    if ( v4 )
    {
      while ( i->m128i_i16[0] )
        i = (__m128i *)((char *)i + 2);
      return ((char *)i - (char *)String) >> 1;
    }
    v12 = ((16LL - ((unsigned __int8)String & 0xF)) & (unsigned __int64)-(__int64)(((unsigned __int8)String & 0xF) != 0LL)) >> 1;
    v13 = &String[v12];
    if ( String != v13 )
    {
      do
      {
        if ( !i->m128i_i16[0] )
          break;
        i = (__m128i *)((char *)i + 2);
      }
      while ( i != (__m128i *)v13 );
    }
    v8 = ((char *)i - (char *)String) >> 1;
    if ( v8 == v12 )
    {
      for ( i = (__m128i *)&String[v8]; !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *i)); ++i )
        ;
      while ( i->m128i_i16[0] )
        i = (__m128i *)((char *)i + 2);
      return ((char *)i - (char *)String) >> 1;
    }
  }
  return v8;
}
