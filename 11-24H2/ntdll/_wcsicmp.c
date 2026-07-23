/*
 * XREFs of _wcsicmp @ 0x180120EA0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     RtlGetNeutralFallback @ 0x180012B40 (RtlGetNeutralFallback.c)
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLookupAtomInAtomTable @ 0x180013A80 (RtlLookupAtomInAtomTable.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800196B0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrRscIsTypeExist @ 0x180074AE0 (LdrRscIsTypeExist.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007AD34 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x18007B560 (RtlpFreeAllAtom.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180094588 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800993D0 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180099620 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PsspWalkHandleTable @ 0x1800BBE1C (PsspWalkHandleTable.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800C7BDC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpIsALicensedRegularLanguage @ 0x1800CAE30 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpLangNameInMultiSzString @ 0x1800CB1D0 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DD52C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800E7520 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x180112258 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpParseVerifierDllsString @ 0x180112EA4 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x18011BE54 (AVrfpVerifierStopInitialize.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1801300EC (AVrfpFindClosestThunkDuplicate.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801473B4 (RtlpMuiRegAddAlternateCodePage.c)
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
