/*
 * XREFs of RtlImageNtHeaderEx @ 0x180014D30
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180014820 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x1800149E0 (LdrpGetProcedureAddress.c)
 *     RtlGetImageFileMachines @ 0x180015120 (RtlGetImageFileMachines.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001AD80 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x18001D230 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrpGetImageSize @ 0x18001F3C0 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpLocateMrdata @ 0x180020B90 (LdrpLocateMrdata.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180020E7C (LdrpGetImportDescriptorForSnap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180022070 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrInitSecurityCookie @ 0x1800223C0 (LdrInitSecurityCookie.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     CsrClientConnectToServer @ 0x1800355E0 (CsrClientConnectToServer.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     EtwpProviderArrivalCallback @ 0x1800470F0 (EtwpProviderArrivalCallback.c)
 *     LdrGetDllHandleByMapping @ 0x18006CD70 (LdrGetDllHandleByMapping.c)
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpCompleteMapModule @ 0x18006DBC0 (LdrpCompleteMapModule.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18006E750 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     SbpDetermineDllContext @ 0x180071D10 (SbpDetermineDllContext.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     LdrpResGetMappingSize @ 0x1800A3820 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1800A60A0 (LdrpResGetResourceDirectory.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8 (LdrpFindLoadedDllByMappingFile.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D04C4 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlImageNtHeader @ 0x1800DDD70 (RtlImageNtHeader.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800E014C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800E01D0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpSetProtection @ 0x1800E42F0 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800E43F0 (LdrRelocateImageWithBias.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 *     RtlCreateUserStack @ 0x1800F6D40 (RtlCreateUserStack.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180109B68 (LdrpInitializeCfgScpHelpers.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x18010CA20 (LdrpCorFixupImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x180115990 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 *     RtlGetImageEnclaveConfig @ 0x18012001C (RtlGetImageEnclaveConfig.c)
 *     RtlComputeImportTableHash @ 0x180136750 (RtlComputeImportTableHash.c)
 *     LdrpGetMappingFromCacheEntry @ 0x180138478 (LdrpGetMappingFromCacheEntry.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180144D70 (LdrVerifyMappedImageMatchesChecksum.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x18014CB44 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18016044C (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x180147E14 (RtlImageNtHeaderEx_ExceptionFilter.c)
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
