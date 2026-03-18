/*
 * XREFs of ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1400390E0
 * Callers:
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140186D9C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     _lambda_f7629139d0209e148fddfe9121e39862_::operator() @ 0x140269354 (_lambda_f7629139d0209e148fddfe9121e39862_--operator().c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1402694B8 (BmlDoesTargetModeObeyConstraint.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402DC488 (_BmlGetPathModeListForPathTargetModes.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x140342580 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDPN_TARGET_MODE@@AEBU_D3DKMDT_MONITOR_SOURCE_MODE@@EPEAE@Z @ 0x1403E2E10 (-IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDPN_.c)
 *     ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1403E3BE8 (-IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
        const struct _D3DDDI_RATIONAL *a1,
        const struct _D3DDDI_RATIONAL *a2,
        int a3)
{
  unsigned __int64 Denominator; // r10
  unsigned __int64 v4; // r9
  __int64 Numerator; // r11
  unsigned __int64 v6; // r10
  bool result; // al

  Denominator = a1->Denominator;
  result = 0;
  if ( (_DWORD)Denominator )
  {
    v4 = a2->Denominator;
    if ( (_DWORD)v4 )
    {
      Numerator = a2->Numerator;
      v6 = 100000 * (unsigned __int64)a1->Numerator / Denominator;
      if ( v6 >= Numerator * (unsigned __int64)(unsigned int)(100000 - a3) / v4
        && v6 <= Numerator * (unsigned __int64)(unsigned int)(a3 + 100000) / v4 )
      {
        return 1;
      }
    }
  }
  return result;
}
