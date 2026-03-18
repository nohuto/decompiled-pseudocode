/*
 * XREFs of ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z @ 0x1801EF9A0
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     gsl::final_action__lambda_1069039fee6473a405e5e4b65285ddf4___::_final_action__lambda_1069039fee6473a405e5e4b65285ddf4___ @ 0x1801EF980 (gsl--final_action__lambda_1069039fee6473a405e5e4b65285ddf4___--_final_action__lambda_1069039fee6.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrushRenderingGraph::CleanupEffectStage(struct EffectStage *a1)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  CSurfaceDrawListBrush *v4; // rcx
  CSurfaceDrawListBrush *(__fastcall *v5)(CSurfaceDrawListBrush *, char); // rax

  for ( i = 0; i < *((_DWORD *)a1 + 1); ++i )
  {
    v3 = 112LL * i;
    if ( !*((_BYTE *)a1 + v3 + 52) )
    {
      v4 = *(CSurfaceDrawListBrush **)((char *)a1 + v3 + 64);
      if ( v4 )
      {
        v5 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))v4;
        if ( v5 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v4, 1);
        else
          v5(v4, 1);
      }
      *(_QWORD *)((char *)a1 + v3 + 64) = 0LL;
    }
  }
  *((_DWORD *)a1 + 1) = 0;
}
