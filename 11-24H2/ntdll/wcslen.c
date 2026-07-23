/*
 * XREFs of wcslen @ 0x180125A00
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180002200 (RtlGetFullPathName_U.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180003A80 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     RtlpResetDriveEnvironment @ 0x180004AF8 (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x180005890 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpCheckRelativeDrive @ 0x180008A90 (RtlpCheckRelativeDrive.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800099A0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryNlsSystemCodePages @ 0x180009BE0 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18000A5E0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     ReadUlongFromKey @ 0x18000A8A4 (ReadUlongFromKey.c)
 *     SwitchedRtlGetVersion @ 0x18000AE00 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18000B7B0 (RtlGetVersion.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     LdrResFallbackLangList @ 0x180011F70 (LdrResFallbackLangList.c)
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     RtlGetNeutralFallback @ 0x180012B40 (RtlGetNeutralFallback.c)
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     GetLCIDFromLangListNode @ 0x180014860 (GetLCIDFromLangListNode.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x180015070 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180016190 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlpComputeLangListCheckSum @ 0x1800166C0 (RtlpComputeLangListCheckSum.c)
 *     RtlOpenCurrentUser @ 0x180017270 (RtlOpenCurrentUser.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180018A40 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180018C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCapabilityCheck @ 0x18001A270 (RtlCapabilityCheck.c)
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     LdrpReportError @ 0x180032720 (LdrpReportError.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180037690 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     RtlGetImageFileMachines @ 0x18006F0C0 (RtlGetImageFileMachines.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrpIsReparsePoint @ 0x18007A600 (LdrpIsReparsePoint.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x18007BFBC (RtlpWow64SelectSystem32PathInternal.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18007F0DC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18007F5C0 (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x18007F704 (_GetOverlayPackagePathFromKey.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18007FBD0 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800818D4 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x180081A24 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180081BCC (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x1800829E0 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x180083A90 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x180083C40 (RtlDeleteRegistryValue.c)
 *     CompatCachepLookupCdb @ 0x18008F2EC (CompatCachepLookupCdb.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UEx @ 0x1800935F0 (RtlDoesFileExists_UEx.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180098E48 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1800992DC (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMatchUserLanguage @ 0x18009A410 (RtlpMatchUserLanguage.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800A30F8 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A3620 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800A5A48 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800A5D14 (RtlpProcessIFEOKeyFilter.c)
 *     EtwpGetPrivateLoggerContext @ 0x1800A95B4 (EtwpGetPrivateLoggerContext.c)
 *     LdrpBuildSystem32FileName @ 0x1800AD5E0 (LdrpBuildSystem32FileName.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     SendMessageToWERService @ 0x1800ADEC8 (SendMessageToWERService.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C64A0 (RtlCreateSystemVolumeInformationFolder.c)
 *     GetNameFromLangListNode @ 0x1800C7870 (GetNameFromLangListNode.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800C9BA0 (RtlpLoadUserUIByPolicy.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800CAB90 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800CB894 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800D5990 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800D6F10 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800DADC0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800DC580 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800DC860 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1800DD070 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlGetFullPathName_UEx @ 0x1800DD740 (RtlGetFullPathName_UEx.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800DDCB0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800DEAF0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800DEFFC (WerpEscalationIsWMRSendStringSet.c)
 *     RtlIsDosDeviceName_U @ 0x1800DFBA0 (RtlIsDosDeviceName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800E2880 (RtlDosPathNameToNtPathName_U.c)
 *     LdrLoadAlternateResourceModule @ 0x1800EC360 (LdrLoadAlternateResourceModule.c)
 *     RtlpIsCustomLocale @ 0x1800F2354 (RtlpIsCustomLocale.c)
 *     RtlInitializeRXact @ 0x180101240 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180101690 (RtlApplyRXact.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180101BA0 (RtlpLoadMachineUIByPolicy.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     RtlConnectToSm @ 0x18010DBE0 (RtlConnectToSm.c)
 *     WerpEscalationIsDisabled @ 0x180110668 (WerpEscalationIsDisabled.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801118CC (LdrpCnvrtShortToLongFileName.c)
 *     wcscat @ 0x180125850 (wcscat.c)
 *     wcscpy @ 0x180125890 (wcscpy.c)
 *     wcsncat @ 0x180125B20 (wcsncat.c)
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
