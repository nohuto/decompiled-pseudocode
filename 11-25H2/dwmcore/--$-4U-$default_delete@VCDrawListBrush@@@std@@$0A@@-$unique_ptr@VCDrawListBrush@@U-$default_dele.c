/*
 * XREFs of ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DEBCC
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119350 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A3E0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18012707C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18016E0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E3100 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMultiPrimitiveDrawListBrush **__fastcall std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(
        CMultiPrimitiveDrawListBrush **a1,
        CMultiPrimitiveDrawListBrush **a2)
{
  CMultiPrimitiveDrawListBrush *v2; // rax
  CMultiPrimitiveDrawListBrush *v4; // rcx
  CSurfaceDrawListBrush *(__fastcall *v5)(CSurfaceDrawListBrush *, char); // rax

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
  {
    v5 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))v4;
    if ( v5 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v4, 1);
    }
    else if ( v5 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v4, 1);
    }
    else if ( (char *)v5 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v4, 1u);
    }
    else
    {
      v5(v4, 1);
    }
  }
  return a1;
}
