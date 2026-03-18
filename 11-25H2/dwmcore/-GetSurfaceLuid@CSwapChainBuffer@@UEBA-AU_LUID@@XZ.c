/*
 * XREFs of ?GetSurfaceLuid@CSwapChainBuffer@@UEBA?AU_LUID@@XZ @ 0x180172510
 * Callers:
 *     ?DXGIPlaneFromDwmPlane@@YA?AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1801723EC (-DXGIPlaneFromDwmPlane@@YA-AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTI.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x1801724C4 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CSwapChainBuffer::GetSurfaceLuid(CSwapChainBuffer *this, _QWORD *a2)
{
  *a2 = 0LL;
  return (struct _LUID)a2;
}
