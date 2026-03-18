/*
 * XREFs of ?CheckMultiplaneOverlaySupport@COverlayContext@@AEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180172060
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18002CF40 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 * Callees:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1801720D0 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::CheckMultiplaneOverlaySupport(
        COverlayContext *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  CLegacySwapChain *v7; // rcx
  bool (*v8)(CLegacySwapChain *__hidden, const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *, unsigned int, bool *); // rax

  v7 = (CLegacySwapChain *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
  v8 = *(bool (**)(CLegacySwapChain *__hidden, const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *, unsigned int, bool *))(*(_QWORD *)v7 + 360LL);
  if ( v8 == CLegacySwapChain::CheckMultiplaneOverlaySupport )
    return CLegacySwapChain::CheckMultiplaneOverlaySupport(v7, a2, a3, a4);
  else
    return ((__int64 (__fastcall *)(CLegacySwapChain *, const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *, _QWORD, bool *))v8)(
             v7,
             a2,
             a3,
             a4);
}
