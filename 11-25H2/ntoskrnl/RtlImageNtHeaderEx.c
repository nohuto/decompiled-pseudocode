/*
 * XREFs of RtlImageNtHeaderEx @ 0x140420FB0
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F40C0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1402F4268 (LdrpGetMappingFromCacheEntry.c)
 *     PnpTraceStartDevice @ 0x140463CF8 (PnpTraceStartDevice.c)
 *     IopLoadCrashdumpDriver @ 0x1404D9844 (IopLoadCrashdumpDriver.c)
 *     IoGetDumpHiberRanges @ 0x14058E17C (IoGetDumpHiberRanges.c)
 *     IopAddCodeRegion @ 0x14058FA6C (IopAddCodeRegion.c)
 *     KiDumpParameterImages @ 0x1405B02A8 (KiDumpParameterImages.c)
 *     KiShadowKernelSectionByAddress @ 0x1405BF9C0 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405BFA34 (KiUnshadowKernelSectionByAddress.c)
 *     LdrpMapResourceFile @ 0x1405DB9FC (LdrpMapResourceFile.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405E2240 (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405E7760 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     PrExtExtractDataRecordTable @ 0x140657E0C (PrExtExtractDataRecordTable.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140778A40 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407E084C (MiCaptureBootDriverRetpolineInfo.c)
 *     RtlFindHotPatchInformation @ 0x14081F384 (RtlFindHotPatchInformation.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140898054 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1409442DC (LdrCaptureDynamicRelocationTableHeader.c)
 *     LdrpResGetResourceDirectory @ 0x1409F373C (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x140A54258 (LdrpResGetMappingSize.c)
 *     LdrInitSecurityCookie @ 0x140A63204 (LdrInitSecurityCookie.c)
 *     MiOpenHotPatchFile @ 0x140A992CC (MiOpenHotPatchFile.c)
 *     VfDriverEnableVerifierForAll @ 0x140B7A3D4 (VfDriverEnableVerifierForAll.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C25084 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 *     MiProtectKernelCfgData @ 0x140C3D8A0 (MiProtectKernelCfgData.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C43F7C (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C44324 (MiApplyRetpolineToBootDriver.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140C447F4 (MiPrepareScpFixupsForNtAndHal.c)
 *     MiCheckLargePageOk @ 0x140C448A4 (MiCheckLargePageOk.c)
 *     MiVerifyLargeSectionLayout @ 0x140C4505C (MiVerifyLargeSectionLayout.c)
 *     MiInitializeKernelCfgImages @ 0x140C486E0 (MiInitializeKernelCfgImages.c)
 *     MiFreeKernelPadSections @ 0x140C4987C (MiFreeKernelPadSections.c)
 *     MiHandleBootImage @ 0x140C49B04 (MiHandleBootImage.c)
 *     MiLocateKernelSections @ 0x140C4A550 (MiLocateKernelSections.c)
 *     MiLockPagableSections @ 0x140C4A60C (MiLockPagableSections.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
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
