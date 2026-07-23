/*
 * XREFs of RtlInitUnicodeString @ 0x1800C7EE0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x18007BFBC (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlpGetUserLocaleName @ 0x180099D30 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180099E20 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpMatchUILanguage @ 0x18009A584 (RtlpMatchUILanguage.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800A3254 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800A523C (LdrpInitializeApplicationVerifierPackage.c)
 *     GetNameFromLangListNode @ 0x1800C7870 (GetNameFromLangListNode.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800C7BDC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800CAB90 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800CB340 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800CC41C (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DD52C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180101F10 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x180106520 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1801107C8 (LdrpMUIEtwOutput.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180110C68 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801118CC (LdrpCnvrtShortToLongFileName.c)
 *     AVrfpParseVerifierDllsString @ 0x180112EA4 (AVrfpParseVerifierDllsString.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x18011E770 (RtlpConvertCultureNamesToLCIDs.c)
 *     WerpEscalationReadUlongFromKey @ 0x180132A8C (WerpEscalationReadUlongFromKey.c)
 *     RtlCreateBootStatusDataFile @ 0x18013C450 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013C964 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013DBC0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x18013E330 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x18013E7D0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     RtlOsDeploymentState @ 0x1801458D0 (RtlOsDeploymentState.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180145B00 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpGetWindowsPolicy @ 0x1801472A0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801473B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpRefreshCachedUILanguage @ 0x180147F80 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x180148070 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x180148248 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180148588 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180148660 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801488A4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180148B20 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180149744 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

void __stdcall RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  size_t v3; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (wchar_t *)SourceString;
  if ( SourceString )
  {
    v3 = 2 * wcslen(SourceString);
    if ( v3 >= 0xFFFE )
      LOWORD(v3) = -4;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 2;
  }
}
