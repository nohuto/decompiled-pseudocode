/*
 * XREFs of ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801E3454
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800A0970 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1B60 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1E00 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E2D20 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801E3070 (-HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x1801E3418 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?HasSwapChainContent@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x1802B07C0 (-HasSwapChainContent@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z.c)
 * Callees:
 *     ?HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801E34A0 (-HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSurfaceBitmap::HasSwapChainAttributes(CCompositionSurfaceBitmap *this)
{
  CGlobalCompositionSurfaceInfo *v1; // rcx
  char v2; // bl
  __int64 (*v3)(void); // rax
  char HasSwapChainAttributes; // al

  v1 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 304LL);
    if ( (char *)v3 == (char *)CGlobalCompositionSurfaceInfo::HasSwapChainAttributes )
      HasSwapChainAttributes = CGlobalCompositionSurfaceInfo::HasSwapChainAttributes(v1);
    else
      HasSwapChainAttributes = v3();
    if ( HasSwapChainAttributes )
      return 1;
  }
  return v2;
}
