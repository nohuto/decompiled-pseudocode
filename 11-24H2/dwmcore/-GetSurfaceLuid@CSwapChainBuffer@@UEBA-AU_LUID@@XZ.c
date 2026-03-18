/*
 * XREFs of ?GetSurfaceLuid@CSwapChainBuffer@@UEBA?AU_LUID@@XZ @ 0x180067370
 * Callers:
 *     ?DXGIPlaneFromDwmPlane@@YA?AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x18006724C (-DXGIPlaneFromDwmPlane@@YA-AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTI.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180067324 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CSwapChainBuffer::GetSurfaceLuid(CSwapChainBuffer *this, _QWORD *a2)
{
  *a2 = 0LL;
  return (struct _LUID)a2;
}
