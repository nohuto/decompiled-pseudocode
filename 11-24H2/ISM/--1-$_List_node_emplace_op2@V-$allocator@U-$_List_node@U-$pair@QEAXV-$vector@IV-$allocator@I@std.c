/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180084E64
 * Callers:
 *     ??$_Try_emplace@PEAX$$V@?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAX@Z @ 0x1800312C4 (--$_Try_emplace@PEAX$$V@-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uha.c)
 *     _std::_Hash_std::_Umap_traits_void___std::vector_unsigned_int_std::allocator_unsigned_int____std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_std::vector_unsigned_int_std::allocator_unsigned_int________0___::_Try_emplace_void____::_1_::dtor$0 @ 0x1801D14C2 (_std--_Hash_std--_Umap_traits_void___std--vector_unsigned_int_std--allocator_unsigned_int____std.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180016078 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::vector<Windows::UI::Color>::_Tidy(v2 + 24);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>(a1);
}
