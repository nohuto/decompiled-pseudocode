/*
 * XREFs of ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003931C
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A3A0 (-CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryPr.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A524 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180048910 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18006D878 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18009743C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateRectangleGeometryProxy(CCompositor *this, struct CRectangleGeometryProxy **a2)
{
  return CCompositor::CreateProxy<CRectangleGeometryProxy>(this, a2);
}
