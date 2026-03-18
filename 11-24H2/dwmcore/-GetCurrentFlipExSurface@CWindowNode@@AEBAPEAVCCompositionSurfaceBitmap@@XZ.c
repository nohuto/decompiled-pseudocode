/*
 * XREFs of ?GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800696C0
 * Callers:
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800693EC (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180100D00 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     <none>
 */

struct CCompositionSurfaceBitmap *__fastcall CWindowNode::GetCurrentFlipExSurface(CWindowNode *this)
{
  struct CCompositionSurfaceBitmap *result; // rax
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 896) & 0x10) == 0 )
    return 0LL;
  v2 = *((_QWORD *)this + 105);
  if ( (v2 & 2) != 0 )
  {
    result = (struct CCompositionSurfaceBitmap *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v3 = *(_QWORD *)result;
  }
  else
  {
    v3 = *((_QWORD *)this + 105) & 1LL;
    result = (struct CCompositionSurfaceBitmap *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( !v3 )
    return 0LL;
  if ( v3 != 1 )
    return (struct CCompositionSurfaceBitmap *)*((_QWORD *)result + 2);
  return result;
}
