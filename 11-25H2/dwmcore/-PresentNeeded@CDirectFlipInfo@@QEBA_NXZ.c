/*
 * XREFs of ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1800C6B64
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801C07C0 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801E1148 (-PresentNeeded@COverlayContext@@QEBA_NXZ.c)
 * Callees:
 *     ?GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA?AW4IndependentFlipState@@XZ @ 0x1800C6650 (-GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA-AW4IndependentFlipState@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDirectFlipInfo::PresentNeeded(CDirectFlipInfo *this)
{
  char v1; // bl
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  int LastIndependentFlipState; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 105) )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 368LL);
    if ( (char *)v3 == (char *)CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState )
      LastIndependentFlipState = CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState(v2);
    else
      LastIndependentFlipState = v3();
    if ( LastIndependentFlipState <= 2 )
      return 1;
  }
  return v1;
}
