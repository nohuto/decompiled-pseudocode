/*
 * XREFs of ??$?4VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@1@@Z @ 0x1802108E0
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800CE56C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 */

CMultiPrimitiveDrawListBrush **__fastcall std::unique_ptr<CDrawListBrush>::operator=<CSurfaceDrawListBrush,std::default_delete<CSurfaceDrawListBrush>,0>(
        CMultiPrimitiveDrawListBrush **a1,
        CMultiPrimitiveDrawListBrush **a2)
{
  CMultiPrimitiveDrawListBrush *v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  std::unique_ptr<CDrawListBrush>::reset(a1, v4);
  return a1;
}
