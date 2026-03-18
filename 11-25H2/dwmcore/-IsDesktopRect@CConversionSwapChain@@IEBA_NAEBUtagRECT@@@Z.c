/*
 * XREFs of ?IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z @ 0x1802D48E8
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802D42B0 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPP.c)
 * Callees:
 *     ?GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180218F50 (-GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CConversionSwapChain::IsDesktopRect(CConversionSwapChain *this, const struct tagRECT *a2)
{
  struct IDeviceTarget *BackBuffer; // rax
  char v4; // cl
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  BackBuffer = CConversionSwapChain::GetBackBuffer((CConversionSwapChain *)((char *)this + 24));
  (*(void (__fastcall **)(struct IDeviceTarget *, int *))(*(_QWORD *)BackBuffer + 88LL))(BackBuffer, &v6);
  v4 = 0;
  if ( !*(_QWORD *)&a2->left && a2->right == v6 )
    return a2->bottom == v7;
  return v4;
}
