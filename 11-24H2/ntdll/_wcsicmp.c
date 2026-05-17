/*
 * XREFs of _wcsicmp @ 0x180122C70
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLookupAtomInAtomTable @ 0x1800329C0 (RtlLookupAtomInAtomTable.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlGetNeutralFallback @ 0x180033500 (RtlGetNeutralFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x180033B90 (RtlpAddNeutralsToMergedList.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180039430 (RtlpLangNameInMultiSzString_Size.c)
 *     LdrRscIsTypeExist @ 0x18005EF00 (LdrRscIsTypeExist.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180077CA8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x180079BD0 (LdrpResSearchResourceMappedFile.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18007D410 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpLangNameInMultiSzString @ 0x18007D7B0 (RtlpLangNameInMultiSzString.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800AE554 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x1800AED80 (RtlpFreeAllAtom.c)
 *     PsspWalkHandleTable @ 0x1800C425C (PsspWalkHandleTable.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800D2A40 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800D2C90 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800D9DA8 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E1C48 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E1F5C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800EC8F0 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x180117268 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpParseVerifierDllsString @ 0x180117F30 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x18011DC24 (AVrfpVerifierStopInitialize.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x180131EBC (AVrfpFindClosestThunkDuplicate.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180149004 (RtlpMuiRegAddAlternateCodePage.c)
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
