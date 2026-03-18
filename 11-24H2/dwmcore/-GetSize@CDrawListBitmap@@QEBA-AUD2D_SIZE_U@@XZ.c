/*
 * XREFs of ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800638E0
 * Callers:
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800498DC (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x18004A12C (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18006238C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801B2824 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ?DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect@@@Z @ 0x180244058 (-DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180292780 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802A2CB0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CDrawListBitmap::GetSize(CDrawListBitmap *this, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v4)(__int64, char *); // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  *a2 = 0LL;
  if ( !v2 )
    return (struct D2D_SIZE_U)a2;
  v4 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 32LL);
  if ( (char *)v4 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
  {
    *a2 = *(_QWORD *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v2, &v6);
    return (struct D2D_SIZE_U)a2;
  }
  else
  {
    if ( (char *)v4 != (char *)CDxHandleBitmapRealization::GetSize )
    {
      *a2 = *(_QWORD *)v4(v2, &v6);
      return (struct D2D_SIZE_U)a2;
    }
    *a2 = *(_QWORD *)CDxHandleBitmapRealization::GetSize(v2, &v6);
    return (struct D2D_SIZE_U)a2;
  }
}
