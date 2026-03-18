/*
 * XREFs of ?RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180097A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CDDARenderTarget@@IEAAJXZ @ 0x180097A78 (-Present@CDDARenderTarget@@IEAAJXZ.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDDARenderTarget::RenderAndPresent(CDDARenderTarget *this, struct CDrawingContext *a2)
{
  CDDARenderTarget *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v2 = (CDDARenderTarget *)((char *)this - 96);
  v3 = CDDARenderTarget::Render((CDDARenderTarget *)((char *)this - 96), a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x77u, 0LL);
  CDDARenderTarget::Present(v2);
  return v4;
}
