/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802D42B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x1801724C4 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1801EC320 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z @ 0x1802D48E8 (-IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z.c)
 *     ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802D4940 (-IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall CConversionSwapChain::CheckMultiplaneOverlaySupport(
        CConversionSwapChain *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  char v4; // di
  bool v8; // zf
  _DWORD *v9; // rcx
  __int64 i; // r9
  __int64 v11; // r8
  int v12; // r9d

  v4 = 0;
  *a4 = 0;
  if ( a3 == 1 )
  {
    if ( !CConversionSwapChain::IsDesktopRect(
            (CConversionSwapChain *)((char *)this - 24),
            (const struct tagRECT *)((char *)a2 + 44))
      || !operator==((_DWORD *)a2 + 7, (_DWORD *)a2 + 11)
      || !operator==(v9, (_DWORD *)a2 + 15) )
    {
      return v4;
    }
    v8 = *((_DWORD *)a2 + 19) == 1;
  }
  else
  {
    if ( a3 != 2
      || *(_DWORD *)a2
      || !IsDesktopOverlayPlaneResource(*((const struct IOverlayPlaneResource **)a2 + 1))
      || !CConversionSwapChain::IsDesktopRect(
            (CConversionSwapChain *)((char *)this - 24),
            (const struct tagRECT *)((char *)a2 + 44))
      || !operator==((_DWORD *)a2 + 7, (_DWORD *)a2 + 11)
      || *((_DWORD *)a2 + 19) != 1 )
    {
      return v4;
    }
    v8 = *((_DWORD *)a2 + 20) == 1;
  }
  if ( v8 )
  {
    v4 = 1;
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(v12 + 1) )
    {
      if ( *((_DWORD *)a2 + 36 * i + 6)
        || !CConversionSwapChain::IsSupportedFakeOverlayColorSpace(*((enum DXGI_COLOR_SPACE_TYPE *)a2 + 36 * i + 25))
        || *((_DWORD *)a2 + 2 * v11 + 26) )
      {
        return 0;
      }
    }
  }
  return v4;
}
