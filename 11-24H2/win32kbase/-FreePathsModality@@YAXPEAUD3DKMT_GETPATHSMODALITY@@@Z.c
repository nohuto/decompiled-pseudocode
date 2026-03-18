/*
 * XREFs of ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14008D940
 * Callers:
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14008CA1C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x14008D8CC (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     GetPathsModality @ 0x14008E088 (GetPathsModality.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401C651C (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401C94F0 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401C9DD0 (DrvDisplayConfigSetDeviceInfo.c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401CB3F0 (DrvSetActualPathModalityToDisplayJournal.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall FreePathsModality(char *Buffer)
{
  __int64 DxgkWin32kInterface; // rax

  if ( Buffer )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    (*(void (__fastcall **)(char *))(DxgkWin32kInterface + 184))(Buffer);
    GreDeleteFastMutex(Buffer);
  }
}
