/*
 * XREFs of GetPathsModality @ 0x14008E088
 * Callers:
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14008CA1C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14015C734 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140178A48 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1401C81E4 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401C9DD0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14008D940 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x14008EE9C (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetPathsModality(__int64 a1, char **a2, unsigned int a3, unsigned __int16 a4)
{
  int v4; // esi
  unsigned __int16 i; // ax
  bool v8; // zf
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  __int64 result; // rax
  __int64 DxgkWin32kInterface; // rax
  int v12; // edi
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  if ( a3 == 32 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12833;
  }
  for ( i = v4 + 8; ; i = v4 + v13 )
  {
    v8 = *a2 == 0LL;
    v14 = i;
    if ( v8 )
    {
      v9 = AllocPathsModality(i);
      *a2 = (char *)v9;
      if ( !v9 )
      {
        WdLogSingleEntry1(2LL, v14);
        result = 3221225495LL;
        WdLogGlobalForLineNumber = 12848;
        return result;
      }
    }
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    v12 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int16 *))(DxgkWin32kInterface + 144))(a3, *a2, &v14);
    if ( v12 == -1073741789 )
      goto LABEL_12;
    if ( v12 < 0 )
      break;
    if ( v4 + (unsigned int)*((unsigned __int16 *)*a2 + 10) <= *((unsigned __int16 *)*a2 + 11) )
      return (unsigned int)v12;
LABEL_12:
    FreePathsModality(*a2);
    v13 = v14;
    *a2 = 0LL;
  }
  FreePathsModality(*a2);
  *a2 = 0LL;
  return (unsigned int)v12;
}
