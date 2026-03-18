/*
 * XREFs of ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18015948C
 * Callers:
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1801593D0 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801594EC (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18015957C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryTargetNextBuffer(CCaptureRenderTarget *this)
{
  unsigned int v2; // ebx
  int NextBufferIndexAvailable; // eax
  int RenderTargetForFrameBuffer; // eax

  v2 = 0;
  NextBufferIndexAvailable = CCaptureRenderTarget::GetNextBufferIndexAvailable(this);
  if ( NextBufferIndexAvailable >= 0 )
  {
    *((_DWORD *)this + 748) = NextBufferIndexAvailable;
    RenderTargetForFrameBuffer = CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(this);
    v2 = RenderTargetForFrameBuffer;
    if ( RenderTargetForFrameBuffer < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderTargetForFrameBuffer, 0x460u, 0LL);
  }
  return v2;
}
