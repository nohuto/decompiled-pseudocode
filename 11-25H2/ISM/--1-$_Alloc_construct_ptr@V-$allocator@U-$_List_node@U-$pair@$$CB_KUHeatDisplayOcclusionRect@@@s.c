/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180183F40
 * Callers:
 *     ??$emplace@AEA_KUHeatDisplayOcclusionRect@@@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUHeatDisplayOcclusionRect@@@Z @ 0x1801838C0 (--$emplace@AEA_KUHeatDisplayOcclusionRect@@@-$_Hash@V-$_Umap_traits@_KUHeatDisplayOcclusionRect@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180183FB8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__void________unsigned___int64_&_HeatDisplayOcclusionRect__::_1_::dtor$0 @ 0x1801D0C25 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned___int64_const__He.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0xB0);
}
