/*
 * XREFs of wcslen @ 0x1801277D0
 * Callers:
 *     SendMessageToWERService @ 0x1800015D0 (SendMessageToWERService.c)
 *     LdrpReportError @ 0x180005D20 (LdrpReportError.c)
 *     LdrpGetProcApphelpCheckModule @ 0x18000AC90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlCreateUnicodeString @ 0x180028050 (RtlCreateUnicodeString.c)
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlGetNeutralFallback @ 0x180033500 (RtlGetNeutralFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x180033B90 (RtlpAddNeutralsToMergedList.c)
 *     GetNameFromLangListNode @ 0x180033ED0 (GetNameFromLangListNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180034340 (LdrpMergeParentBaseLanguagesToList.c)
 *     GetLCIDFromLangListNode @ 0x1800345E0 (GetLCIDFromLangListNode.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x180034DF0 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180035280 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180035F10 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpComputeLangListCheckSum @ 0x180036440 (RtlpComputeLangListCheckSum.c)
 *     RtlOpenCurrentUser @ 0x180036FF0 (RtlOpenCurrentUser.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x1800387C0 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlGetImageFileMachines @ 0x1800594E0 (RtlGetImageFileMachines.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpIsReparsePoint @ 0x180064A20 (LdrpIsReparsePoint.c)
 *     LdrpBuildSystem32FileName @ 0x180065710 (LdrpBuildSystem32FileName.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     CompatCachepLookupCdb @ 0x180072A0C (CompatCachepLookupCdb.c)
 *     LdrpMapResourceFile @ 0x180076970 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UEx @ 0x180076D10 (RtlDoesFileExists_UEx.c)
 *     RtlGetUILanguageInfo @ 0x18007B9D0 (RtlGetUILanguageInfo.c)
 *     LdrResFallbackLangList @ 0x18007BF40 (LdrResFallbackLangList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18007D170 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x18007EEC0 (RtlGetFullPathName_U.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18007FDF0 (RtlpLoadUserUIByPolicy.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C00 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlInitUnicodeStringEx @ 0x180082640 (RtlInitUnicodeStringEx.c)
 *     RtlpResetDriveEnvironment @ 0x180082C78 (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x1800839E4 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpCheckRelativeDrive @ 0x180086BE0 (RtlpCheckRelativeDrive.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x180087634 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlQueryImageMitigationPolicy @ 0x180087B60 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18008A254 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetPrivateLoggerContext @ 0x18008DAF4 (EtwpGetPrivateLoggerContext.c)
 *     SwitchedRtlGetVersion @ 0x1800A9C70 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800AA620 (RtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800AAF10 (RtlpGetDeviceFamilyInfoEnum.c)
 *     ReadUlongFromKey @ 0x1800AB1D4 (ReadUlongFromKey.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800AC950 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800ACB90 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800AF71C (RtlpWow64SelectSystem32PathInternal.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x1800B283C (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B2D20 (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x1800B2E64 (_GetOverlayPackagePathFromKey.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1800B3330 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800B5034 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800B5184 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x1800B532C (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x1800B6140 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x1800B71F0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1800B73A0 (RtlDeleteRegistryValue.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800CE8E0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpMatchUserLanguage @ 0x1800D10DC (RtlpMatchUserLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800D24B4 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1800D294C (RtlpMuiRegGetLanguageSpec.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800DB430 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800DBE30 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800DFC50 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800E1030 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800E1310 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1800E1AA0 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E1C48 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlGetFullPathName_UEx @ 0x1800E2170 (RtlGetFullPathName_UEx.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800E26E0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800E3520 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E3A2C (WerpEscalationIsWMRSendStringSet.c)
 *     RtlIsDosDeviceName_U @ 0x1800E46F0 (RtlIsDosDeviceName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800E73D0 (RtlDosPathNameToNtPathName_U.c)
 *     LdrLoadAlternateResourceModule @ 0x1800F16E0 (LdrLoadAlternateResourceModule.c)
 *     RtlpIsCustomLocale @ 0x1800F77DC (RtlpIsCustomLocale.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180106760 (RtlApplyRXact.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180106C70 (RtlpLoadMachineUIByPolicy.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     RtlConnectToSm @ 0x180112900 (RtlConnectToSm.c)
 *     WerpEscalationIsDisabled @ 0x180115298 (WerpEscalationIsDisabled.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180116698 (LdrpCnvrtShortToLongFileName.c)
 *     wcscat @ 0x180127620 (wcscat.c)
 *     wcscpy @ 0x180127660 (wcscpy.c)
 *     wcsncat @ 0x1801278F0 (wcsncat.c)
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
