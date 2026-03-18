/*
 * XREFs of ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x180098DF4
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801D4F48 (-PresentNeeded@COverlayContext@@QEBA_NXZ.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801F0F1C (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     ?GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA?AW4IndependentFlipState@@XZ @ 0x1800988E0 (-GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA-AW4IndependentFlipState@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
