/*
 * XREFs of RtlImageNtHeaderEx @ 0x1800590F0
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x1800038F8 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpLocateMrdata @ 0x1800071C0 (LdrpLocateMrdata.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800074AC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180007690 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180008850 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     LdrInitSecurityCookie @ 0x180008BA0 (LdrInitSecurityCookie.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x18001B9D0 (EtwpProviderArrivalCallback.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180058BE0 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180058DA0 (LdrpGetProcedureAddress.c)
 *     RtlGetImageFileMachines @ 0x1800594E0 (RtlGetImageFileMachines.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18005F120 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x1800615D0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpGetImageSize @ 0x180063760 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180064DAC (AVrfpLoadAndInitializeProvider.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     SbpDetermineDllContext @ 0x180071110 (SbpDetermineDllContext.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrpCompleteMapModule @ 0x180073340 (LdrpCompleteMapModule.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180073ED0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpMapResourceFile @ 0x180076970 (LdrpMapResourceFile.c)
 *     LdrpResGetResourceDirectory @ 0x1800789A0 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800791F0 (LdrpResGetMappingSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 *     CsrClientConnectToServer @ 0x1800A67A0 (CsrClientConnectToServer.c)
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 *     RtlImageNtHeader @ 0x1800E0960 (RtlImageNtHeader.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800E349C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800E3520 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpSetProtection @ 0x1800E5320 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800E5420 (LdrRelocateImageWithBias.c)
 *     LdrGetDllHandleByMapping @ 0x1800EF240 (LdrGetDllHandleByMapping.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 *     RtlCreateUserStack @ 0x1800F51C0 (RtlCreateUserStack.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180107258 (LdrpInitializeCfgScpHelpers.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x180109FB0 (LdrpCorFixupImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180110720 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x180112C50 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 *     RtlGetImageEnclaveConfig @ 0x18011E74C (RtlGetImageEnclaveConfig.c)
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 *     LdrpGetMappingFromCacheEntry @ 0x180136D08 (LdrpGetMappingFromCacheEntry.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180143680 (LdrVerifyMappedImageMatchesChecksum.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x18014B594 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015EF48 (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x180146864 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v5; // r10
  char v6; // r11
  unsigned int v7; // ecx

  result = 0LL;
  v5 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 == 23117 )
  {
    v7 = *(_DWORD *)(a2 + 60);
    if ( v6 && (v7 >= a3 || v7 >= 0xFFFFFFE7 || (unsigned __int64)v7 + 24 >= a3) )
    {
      result = 3221225595LL;
      v5 = 0LL;
      goto LABEL_18;
    }
    if ( v7 >= 0x10000000 )
    {
      result = 3221225595LL;
      v5 = 0LL;
      goto LABEL_18;
    }
    v5 = (_DWORD *)(a2 + v7);
    if ( (unsigned __int64)v5 >= a2 && *v5 == 17744 )
      goto LABEL_18;
  }
  result = 3221225595LL;
LABEL_18:
  if ( (int)result >= 0 )
    *a4 = v5;
  return result;
}
