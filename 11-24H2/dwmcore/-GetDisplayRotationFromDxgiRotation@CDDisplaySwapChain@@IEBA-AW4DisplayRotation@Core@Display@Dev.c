/*
 * XREFs of ?GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA?AW4DisplayRotation@Core@Display@Devices@Windows@@W4DXGI_MODE_ROTATION@@@Z @ 0x18021BFA8
 * Callers:
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180067A4C (-CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySc.c)
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18023F060 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2LL;
  if ( v4 != 1 )
    return 0LL;
  return 3LL;
}
