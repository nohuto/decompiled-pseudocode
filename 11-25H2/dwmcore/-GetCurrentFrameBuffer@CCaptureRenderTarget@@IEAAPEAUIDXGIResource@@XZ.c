/*
 * XREFs of ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1800C2C64
 * Callers:
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1800C28E0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1800C4520 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4784 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct IDXGIResource *__fastcall CCaptureRenderTarget::GetCurrentFrameBuffer(CCaptureRenderTarget *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 748);
  if ( v1 == -1 )
    return 0LL;
  else
    return *(struct IDXGIResource **)(*((_QWORD *)this + 381) + 8LL * v1);
}
