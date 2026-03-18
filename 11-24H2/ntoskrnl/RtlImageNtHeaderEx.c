/*
 * XREFs of RtlImageNtHeaderEx @ 0x14041E7E0
 * Callers:
 *     PnpTraceStartDevice @ 0x14043B570 (PnpTraceStartDevice.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14044E92C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x14044F3D8 (LdrpGetMappingFromCacheEntry.c)
 *     IopLoadCrashdumpDriver @ 0x1404D88C4 (IopLoadCrashdumpDriver.c)
 *     IoGetDumpHiberRanges @ 0x1405919AC (IoGetDumpHiberRanges.c)
 *     IopAddCodeRegion @ 0x140593264 (IopAddCodeRegion.c)
 *     KiDumpParameterImages @ 0x1405B3C54 (KiDumpParameterImages.c)
 *     KiShadowKernelSectionByAddress @ 0x1405C3AA0 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405C3B14 (KiUnshadowKernelSectionByAddress.c)
 *     LdrpMapResourceFile @ 0x1405E7AAC (LdrpMapResourceFile.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405EE580 (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405F3AA8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     PrExtExtractDataRecordTable @ 0x1406640CC (PrExtExtractDataRecordTable.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787C90 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F06EC (MiCaptureBootDriverRetpolineInfo.c)
 *     RtlFindHotPatchInformation @ 0x14082F0C4 (RtlFindHotPatchInformation.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1408375D4 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1408F40C4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     LdrpResGetMappingSize @ 0x140906C80 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1409E7A38 (LdrpResGetResourceDirectory.c)
 *     LdrInitSecurityCookie @ 0x140A658DC (LdrInitSecurityCookie.c)
 *     MiOpenHotPatchFile @ 0x140A9FE3C (MiOpenHotPatchFile.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8A3B4 (VfDriverEnableVerifierForAll.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C36350 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 *     MiProtectKernelCfgData @ 0x140C4EAD0 (MiProtectKernelCfgData.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C55264 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5560C (MiApplyRetpolineToBootDriver.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140C55AD4 (MiPrepareScpFixupsForNtAndHal.c)
 *     MiCheckLargePageOk @ 0x140C55B84 (MiCheckLargePageOk.c)
 *     MiVerifyLargeSectionLayout @ 0x140C5633C (MiVerifyLargeSectionLayout.c)
 *     MiInitializeKernelCfgImages @ 0x140C59A10 (MiInitializeKernelCfgImages.c)
 *     MiFreeKernelPadSections @ 0x140C5AC08 (MiFreeKernelPadSections.c)
 *     MiHandleBootImage @ 0x140C5AE90 (MiHandleBootImage.c)
 *     MiLocateKernelSections @ 0x140C5B8DC (MiLocateKernelSections.c)
 *     MiLockPagableSections @ 0x140C5B998 (MiLockPagableSections.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v5; // r10d
  char v6; // al
  unsigned __int64 v7; // r8
  _DWORD *v8; // rax

  if ( !a4 )
    return (unsigned int)-1073741811;
  v5 = 0;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFE) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
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
    v7 = *(unsigned int *)(a2 + 60);
    if ( !v6 || v7 < a3 && (unsigned int)v7 < 0xFFFFFFE7 && v7 + 24 < a3 )
    {
      v8 = (_DWORD *)(v7 + a2);
      if ( v7 + a2 >= a2
        && (a2 > 0x7FFFFFFEFFFFLL || (_DWORD *)((char *)v8 + 263) >= v8
                                  && (unsigned __int64)v8 + 263 <= 0x7FFFFFFEFFFFLL)
        && *v8 == 17744 )
      {
        *a4 = v8;
        return v5;
      }
    }
  }
  return 3221225595LL;
}
