/*
 * XREFs of ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x180046754
 * Callers:
 *     ??$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180046478 (--$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInpu.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180046530 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18004658C (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x1800466D8 (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046B2C (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180201658 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@PEAU12@_KAEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x180201758 (--$_Uninitialized_value_construct_n@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@s.c)
 *     ?_Change_array@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAXQEAUSubgraphOutput@CBrushRenderingGraphBuilder@@_K1@Z @ 0x180212D74 (-_Change_array@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutpu.c)
 * Callees:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180046500 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((CRenderingTechniqueFragment **)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
