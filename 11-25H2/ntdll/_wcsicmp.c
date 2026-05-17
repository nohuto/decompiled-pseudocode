/*
 * XREFs of _wcsicmp @ 0x180124750
 * Callers:
 *     LdrRscIsTypeExist @ 0x18001AB60 (LdrRscIsTypeExist.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrRemoveLoadAsDataTable @ 0x180020030 (LdrRemoveLoadAsDataTable.c)
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlLookupAtomInAtomTable @ 0x18005BC50 (RtlLookupAtomInAtomTable.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlGetNeutralFallback @ 0x18005C940 (RtlGetNeutralFallback.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18005F1D0 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800600E0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067E44 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x180068670 (RtlpFreeAllAtom.c)
 *     RtlpLangNameInMultiSzString @ 0x180089AE0 (RtlpLangNameInMultiSzString.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180089DF0 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A3438 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800A7B60 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800A86FC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     PsspWalkHandleTable @ 0x1800C8A4C (PsspWalkHandleTable.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800ED0D0 (AVrfpDllLoadNotificationInternal.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800EF0B0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800EF3C4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x18011A4A8 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpParseVerifierDllsString @ 0x18011AFB4 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x18011F4F4 (AVrfpVerifierStopInitialize.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x18013399C (AVrfpFindClosestThunkDuplicate.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18014A5B4 (RtlpMuiRegAddAlternateCodePage.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // r9
  signed __int64 v3; // r8
  unsigned __int16 v4; // dx
  wchar_t v5; // cx

  v2 = String2;
  v3 = (char *)String1 - (char *)String2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3) + 32;
    if ( (unsigned __int16)(*(const wchar_t *)((char *)v2 + v3) - 65) > 0x19u )
      v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2 + 32;
    if ( (unsigned __int16)(*v2 - 65) > 0x19u )
      v5 = *v2;
    ++v2;
  }
  while ( v4 && v4 == v5 );
  return v4 - v5;
}
