/*
 * XREFs of ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z @ 0x1801E5C84
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B3BC (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     gsl::final_action__lambda_1069039fee6473a405e5e4b65285ddf4___::_final_action__lambda_1069039fee6473a405e5e4b65285ddf4___ @ 0x1801E5C64 (gsl--final_action__lambda_1069039fee6473a405e5e4b65285ddf4___--_final_action__lambda_1069039fee6.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrushRenderingGraph::CleanupEffectStage(struct EffectStage *a1, __int64 a2, __int64 a3)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  CSurfaceDrawListBrush *v6; // rcx
  CSurfaceDrawListBrush *(__fastcall *v7)(CSurfaceDrawListBrush *, char, __int64); // rax

  for ( i = 0; i < *((_DWORD *)a1 + 1); ++i )
  {
    v5 = 112LL * i;
    if ( !*((_BYTE *)a1 + v5 + 52) )
    {
      v6 = *(CSurfaceDrawListBrush **)((char *)a1 + v5 + 64);
      if ( v6 )
      {
        v7 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char, __int64))v6;
        if ( v7 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v6, 1, a3);
        else
          ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64))v7)(v6, 1LL);
      }
      *(_QWORD *)((char *)a1 + v5 + 64) = 0LL;
    }
  }
  *((_DWORD *)a1 + 1) = 0;
}
