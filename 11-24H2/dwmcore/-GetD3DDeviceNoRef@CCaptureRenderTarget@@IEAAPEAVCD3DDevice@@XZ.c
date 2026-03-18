/*
 * XREFs of ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x180158D0C
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180158BE0 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1801593D0 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1802361B0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x180282D80 (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CCaptureRenderTarget::GetD3DDeviceNoRef(CCaptureRenderTarget *this)
{
  return CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
           (struct CD3DDevice **)this + 343,
           (const struct _LUID *)this + 344,
           *((struct IFlipProducer **)this + 378));
}
