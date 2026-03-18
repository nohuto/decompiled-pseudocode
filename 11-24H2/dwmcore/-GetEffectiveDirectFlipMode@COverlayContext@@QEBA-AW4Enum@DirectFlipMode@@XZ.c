/*
 * XREFs of ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18009B4A0
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x180220900 (-IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     ?IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ @ 0x180227A40 (-IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18003A2A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::GetEffectiveDirectFlipMode(__int64 a1)
{
  CDirectFlipInfo *v1; // rcx
  unsigned int v3; // ebx

  v1 = *(CDirectFlipInfo **)(a1 + 19512);
  if ( !v1 )
    return 0LL;
  v3 = *((_DWORD *)v1 + 13);
  if ( v3 == 4 && !CDirectFlipInfo::RenderingRealizationChanged(v1) )
    return 2;
  return v3;
}
