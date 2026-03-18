/*
 * XREFs of ?GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x180073AA0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073524 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800737D0 (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 * Callees:
 *     <none>
 */

struct CCompositionSurfaceBitmap *__fastcall CWindowNode::GetCurrentFlipExSurface(CWindowNode *this)
{
  struct CCompositionSurfaceBitmap *result; // rax
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 888) & 0x10) == 0 )
    return 0LL;
  v2 = *((_QWORD *)this + 104);
  if ( (v2 & 2) != 0 )
  {
    result = (struct CCompositionSurfaceBitmap *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v3 = *(_QWORD *)result;
  }
  else
  {
    v3 = *((_QWORD *)this + 104) & 1LL;
    result = (struct CCompositionSurfaceBitmap *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( !v3 )
    return 0LL;
  if ( v3 != 1 )
    return (struct CCompositionSurfaceBitmap *)*((_QWORD *)result + 2);
  return result;
}
