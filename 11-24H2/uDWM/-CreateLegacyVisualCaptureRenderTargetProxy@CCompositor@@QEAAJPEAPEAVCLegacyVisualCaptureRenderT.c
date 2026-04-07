/*
 * XREFs of ?CreateLegacyVisualCaptureRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x18009B40C
 * Callers:
 *     ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800EE470 (-CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateLegacyVisualCaptureRenderTargetProxy(__int64 this, CBaseRenderTargetProxy **a2)
{
  return CCompositor::CreateProxy<CLegacyVisualCaptureRenderTargetProxy>(this, a2);
}
