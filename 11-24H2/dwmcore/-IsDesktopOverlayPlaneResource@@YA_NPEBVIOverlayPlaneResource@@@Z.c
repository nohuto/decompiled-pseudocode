/*
 * XREFs of ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180067324
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800662F0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800668C0 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180066B38 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 *     ?DXGIPlaneFromDwmPlane@@YA?AU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180066E04 (-DXGIPlaneFromDwmPlane@@YA-AU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_NAEBUDWM_PRESENT_MULTIPLANE_OVER.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x180068270 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801C6F50 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1802338C4 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1802CAB20 (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802CB040 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPP.c)
 * Callees:
 *     ?GetSurfaceLuid@CSwapChainBuffer@@UEBA?AU_LUID@@XZ @ 0x180067370 (-GetSurfaceLuid@CSwapChainBuffer@@UEBA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall IsDesktopOverlayPlaneResource(const struct IOverlayPlaneResource *a1)
{
  char v1; // bl
  struct _LUID (__fastcall *v2)(CSwapChainBuffer *__hidden); // rax
  __int64 SurfaceLuid; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 )
    return 1;
  v2 = *(struct _LUID (__fastcall **)(CSwapChainBuffer *__hidden))(*(_QWORD *)a1 + 24LL);
  if ( v2 == CSwapChainBuffer::GetSurfaceLuid )
    SurfaceLuid = (__int64)CSwapChainBuffer::GetSurfaceLuid(a1);
  else
    SurfaceLuid = ((__int64 (__fastcall *)(const struct IOverlayPlaneResource *, char *))v2)(a1, &v5);
  if ( !*(_DWORD *)SurfaceLuid && !*(_DWORD *)(SurfaceLuid + 4) )
    return 1;
  return v1;
}
