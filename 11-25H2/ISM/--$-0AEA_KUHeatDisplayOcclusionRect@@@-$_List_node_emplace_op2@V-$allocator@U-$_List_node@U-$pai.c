/*
 * XREFs of ??$?0AEA_KUHeatDisplayOcclusionRect@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@1@AEA_K$$QEAUHeatDisplayOcclusionRect@@@Z @ 0x180183030
 * Callers:
 *     ??$emplace@AEA_KUHeatDisplayOcclusionRect@@@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUHeatDisplayOcclusionRect@@@Z @ 0x1801838C0 (--$emplace@AEA_KUHeatDisplayOcclusionRect@@@-$_Hash@V-$_Umap_traits@_KUHeatDisplayOcclusionRect@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  char *v7; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0xB0uLL);
  a1[1] = v7;
  *((_QWORD *)v7 + 2) = *a3;
  *(_OWORD *)(v7 + 24) = *(_OWORD *)a4;
  *(_OWORD *)(v7 + 40) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v7 + 56) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v7 + 72) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v7 + 88) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(v7 + 104) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(v7 + 120) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(v7 + 136) = *(_OWORD *)(a4 + 112);
  *(_OWORD *)(v7 + 152) = *(_OWORD *)(a4 + 128);
  *((_DWORD *)v7 + 42) = *(_DWORD *)(a4 + 144);
  return a1;
}
