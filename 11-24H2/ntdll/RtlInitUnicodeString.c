/*
 * XREFs of RtlInitUnicodeString @ 0x1800DA0A0
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x180033B90 (RtlpAddNeutralsToMergedList.c)
 *     GetNameFromLangListNode @ 0x180033ED0 (GetNameFromLangListNode.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180061A10 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18007D170 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x180087790 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x18008977C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800AF71C (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlpMatchUILanguage @ 0x1800D0FEC (RtlpMatchUILanguage.c)
 *     RtlpGetUserLocaleName @ 0x1800D2DDC (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800D2EC0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800D9DA8 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E1F5C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EB31C (RtlpMuiRegLoadLicInformation.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180106FE0 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x18010BB50 (LdrResRelease.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1801124E0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     LdrpMUIEtwOutput @ 0x18011554C (LdrpMUIEtwOutput.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801157D4 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180116698 (LdrpCnvrtShortToLongFileName.c)
 *     AVrfpParseVerifierDllsString @ 0x180117F30 (AVrfpParseVerifierDllsString.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180120540 (RtlpConvertCultureNamesToLCIDs.c)
 *     WerpEscalationReadUlongFromKey @ 0x18013485C (WerpEscalationReadUlongFromKey.c)
 *     RtlCreateBootStatusDataFile @ 0x18013E260 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013E774 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013F9D0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1801405E0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     RtlOsDeploymentState @ 0x180147520 (RtlOsDeploymentState.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180147750 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpGetWindowsPolicy @ 0x180148EF0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180149004 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpRefreshCachedUILanguage @ 0x180149BD0 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x180149CC0 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x180149E98 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014A1D8 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014A2B0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x18014A4F4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014A770 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014B394 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     wcslen @ 0x1801277D0 (wcslen.c)
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
