/*
 * XREFs of RtlImageNtHeaderEx @ 0x18006ECD0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     CsrClientConnectToServer @ 0x180023B90 (CsrClientConnectToServer.c)
 *     LdrpInitializeTls @ 0x1800266A4 (LdrpInitializeTls.c)
 *     LdrpLocateMrdata @ 0x180033BC0 (LdrpLocateMrdata.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180033EAC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180034090 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180035250 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     LdrInitSecurityCookie @ 0x1800355A0 (LdrInitSecurityCookie.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x1800483D0 (EtwpProviderArrivalCallback.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18006E7C0 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x18006E980 (LdrpGetProcedureAddress.c)
 *     RtlGetImageFileMachines @ 0x18006F0C0 (RtlGetImageFileMachines.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x1800771B0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrpGetImageSize @ 0x180079340 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     SbpDetermineDllContext @ 0x18008D9F0 (SbpDetermineDllContext.c)
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpCompleteMapModule @ 0x18008FC20 (LdrpCompleteMapModule.c)
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800907B0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     LdrpResGetMappingSize @ 0x180095500 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x180097F40 (LdrpResGetResourceDirectory.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800ACC7C (AVrfpLoadAndInitializeProvider.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800C7618 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlImageNtHeader @ 0x1800DBE70 (RtlImageNtHeader.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800DEA6C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800DEAF0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpSetProtection @ 0x1800E07D0 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800E08D0 (LdrRelocateImageWithBias.c)
 *     LdrGetDllHandleByMapping @ 0x1800EA420 (LdrGetDllHandleByMapping.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0 (LdrpInitializeNtdllDataTableEntry.c)
 *     RtlCreateUserStack @ 0x1800EFCE0 (RtlCreateUserStack.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180102188 (LdrpInitializeCfgScpHelpers.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x180104EE0 (LdrpCorFixupImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010B9E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010DF10 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 *     RtlGetImageEnclaveConfig @ 0x18011C97C (RtlGetImageEnclaveConfig.c)
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 *     LdrpGetMappingFromCacheEntry @ 0x180134F38 (LdrpGetMappingFromCacheEntry.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180141A30 (LdrVerifyMappedImageMatchesChecksum.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180149944 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015D308 (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x180144C14 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS result; // eax
  _IMAGE_NT_HEADERS64 *v5; // r10
  char v6; // r11
  unsigned int v7; // ecx

  result = 0;
  v5 = 0LL;
  if ( !OutHeaders )
    return -1073741811;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage == 23117 )
  {
    v7 = *((_DWORD *)BaseOfImage + 15);
    if ( v6 && (v7 >= Size || v7 >= 0xFFFFFFE7 || (unsigned __int64)v7 + 24 >= Size) )
    {
      result = -1073741701;
      v5 = 0LL;
      goto LABEL_18;
    }
    if ( v7 >= 0x10000000 )
    {
      result = -1073741701;
      v5 = 0LL;
      goto LABEL_18;
    }
    v5 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v7);
    if ( v5 >= BaseOfImage && v5->Signature == 17744 )
      goto LABEL_18;
  }
  result = -1073741701;
LABEL_18:
  if ( result >= 0 )
    *OutHeaders = v5;
  return result;
}
