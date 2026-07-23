/*
 * XREFs of RtlImageNtHeaderEx @ 0x140414520
 * Callers:
 *     PnpTraceStartDevice @ 0x1402F07F0 (PnpTraceStartDevice.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140468FF4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x14046919C (LdrpGetMappingFromCacheEntry.c)
 *     IopLoadCrashdumpDriver @ 0x1404D1D14 (IopLoadCrashdumpDriver.c)
 *     IoGetDumpHiberRanges @ 0x14058E9CC (IoGetDumpHiberRanges.c)
 *     IopAddCodeRegion @ 0x140590288 (IopAddCodeRegion.c)
 *     KiDumpParameterImages @ 0x1405B0BC8 (KiDumpParameterImages.c)
 *     KiShadowKernelSectionByAddress @ 0x1405C1070 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405C10E4 (KiUnshadowKernelSectionByAddress.c)
 *     LdrpMapResourceFile @ 0x1405E509C (LdrpMapResourceFile.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405EBB60 (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405F10E8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     PrExtExtractDataRecordTable @ 0x1406629BC (PrExtExtractDataRecordTable.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787BC0 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F0CBC (MiCaptureBootDriverRetpolineInfo.c)
 *     RtlFindHotPatchInformation @ 0x14082F8F4 (RtlFindHotPatchInformation.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x14093E62C (LdrCaptureDynamicRelocationTableHeader.c)
 *     LdrpResGetResourceDirectory @ 0x1409E29F8 (LdrpResGetResourceDirectory.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1409F91A0 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpResGetMappingSize @ 0x140A3C6A8 (LdrpResGetMappingSize.c)
 *     LdrInitSecurityCookie @ 0x140A5E0AC (LdrInitSecurityCookie.c)
 *     MiOpenHotPatchFile @ 0x140A9B20C (MiOpenHotPatchFile.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8C3B4 (VfDriverEnableVerifierForAll.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C38490 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 *     MiProtectKernelCfgData @ 0x140C50C60 (MiProtectKernelCfgData.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C573F4 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5779C (MiApplyRetpolineToBootDriver.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140C57C64 (MiPrepareScpFixupsForNtAndHal.c)
 *     MiCheckLargePageOk @ 0x140C57D14 (MiCheckLargePageOk.c)
 *     MiVerifyLargeSectionLayout @ 0x140C584CC (MiVerifyLargeSectionLayout.c)
 *     MiInitializeKernelCfgImages @ 0x140C5BBA0 (MiInitializeKernelCfgImages.c)
 *     MiFreeKernelPadSections @ 0x140C5CD98 (MiFreeKernelPadSections.c)
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 *     MiLocateKernelSections @ 0x140C5DA6C (MiLocateKernelSections.c)
 *     MiLockPagableSections @ 0x140C5DB28 (MiLockPagableSections.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS v5; // r10d
  char v6; // al
  ULONG64 v7; // r8
  _IMAGE_NT_HEADERS64 *v8; // rax

  if ( !OutHeaders )
    return -1073741811;
  v5 = 0;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
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
    v7 = *((unsigned int *)BaseOfImage + 15);
    if ( !v6 || v7 < Size && (unsigned int)v7 < 0xFFFFFFE7 && v7 + 24 < Size )
    {
      v8 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v7);
      if ( (char *)BaseOfImage + v7 >= BaseOfImage
        && ((unsigned __int64)BaseOfImage > 0x7FFFFFFEFFFFLL
         || (_IMAGE_NT_HEADERS64 *)((char *)&v8->OptionalHeader.DataDirectory[15].Size + 3) >= v8
         && (unsigned __int64)&v8->OptionalHeader.DataDirectory[15].Size + 3 <= 0x7FFFFFFEFFFFLL)
        && v8->Signature == 17744 )
      {
        *OutHeaders = v8;
        return v5;
      }
    }
  }
  return -1073741701;
}
