/*
 * XREFs of ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180076980
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800765A0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DAB4C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802227E0 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUD2D_RECT_F@@.c)
 *     gsl::final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___::_final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___ @ 0x18023B310 (gsl--final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___--_final_action__lambda_e470b0f999b.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028A624 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::PopGpuClipRectInternal(CDrawingContext *this, char a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 )
  {
    v2 = *((_DWORD *)this + 68);
    if ( v2 )
      *((_DWORD *)this + 68) = v2 - 1;
  }
  v3 = *((_DWORD *)this + 780);
  if ( v3 )
    *((_DWORD *)this + 780) = v3 - 1;
  --*(_QWORD *)(*((_QWORD *)this + 94) - 184LL);
  *((_BYTE *)this + 8065) = 1;
}
