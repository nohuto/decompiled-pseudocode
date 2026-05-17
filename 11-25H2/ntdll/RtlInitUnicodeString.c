/*
 * XREFs of RtlInitUnicodeString @ 0x1800A8A00
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001D670 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800690DC (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180086A64 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800890A4 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180089B50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     GetNameFromLangListNode @ 0x18008BF90 (GetNameFromLangListNode.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800A86FC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800B0728 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800B270C (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800EF3C4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x1801098F0 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x18010E1A0 (LdrResRelease.c)
 *     RtlpGetUserLocaleName @ 0x180115BDC (RtlpGetUserLocaleName.c)
 *     RtlpMatchUILanguage @ 0x180118314 (RtlpMatchUILanguage.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180118410 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     LdrpMUIEtwOutput @ 0x180118730 (LdrpMUIEtwOutput.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801189C4 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 *     AVrfpParseVerifierDllsString @ 0x18011AFB4 (AVrfpParseVerifierDllsString.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180121E10 (RtlpConvertCultureNamesToLCIDs.c)
 *     WerpEscalationReadUlongFromKey @ 0x18013610C (WerpEscalationReadUlongFromKey.c)
 *     RtlCreateBootStatusDataFile @ 0x18013F990 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013FEA4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801410C0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x180141CD0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     RtlOsDeploymentState @ 0x180148AD0 (RtlOsDeploymentState.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180148D00 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpGetWindowsPolicy @ 0x18014A4A0 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18014A5B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014B180 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x18014B270 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014B448 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014B788 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014B860 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x18014BAA4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014BD20 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014C944 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     wcslen @ 0x1801292B0 (wcslen.c)
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
