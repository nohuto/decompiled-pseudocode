/*
 * XREFs of ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180285788
 * Callers:
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800DBF30 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExternalLayer::RestoreRenderTarget(CExternalLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  if ( *((_BYTE *)this + 33) )
  {
    v4 = CDrawingContext::PopRenderTargetInternal(a2, 0LL, a3);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x9Bu, 0LL);
  }
  return v3;
}
