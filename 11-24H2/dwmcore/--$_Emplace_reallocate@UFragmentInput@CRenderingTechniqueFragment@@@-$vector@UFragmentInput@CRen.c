/*
 * XREFs of ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18004658C
 * Callers:
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x180046288 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAA?A_T$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x180046FFC (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ?AddNamedInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800476C0 (-AddNamedInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1801FE5EC (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180046478 (--$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInpu.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x1800466D8 (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x180046754 (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 */

char *__fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // rbp
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v21; // rax

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v15 = v13;
  v16 = v13;
  *(_QWORD *)v14 = *a3;
  v17 = a3[1];
  a3[1] = 0LL;
  *((_QWORD *)v14 + 1) = v17;
  v18 = *(__int64 **)(a1 + 8);
  v19 = *(__int64 **)a1;
  if ( a2 == v18 )
  {
    while ( v19 != v18 )
    {
      *v16 = *v19;
      v21 = v19[1];
      v19[1] = 0LL;
      v16[1] = v21;
      v16 += 2;
      v19 += 2;
    }
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v16, v16);
  }
  else
  {
    std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *>(v19, a2, v13);
    std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *>(a2, *(__int64 **)(a1 + 8), v14 + 16);
  }
  std::vector<CRenderingTechniqueFragment::FragmentInput>::_Change_array(a1, v15, v9, v3);
  return v14;
}
