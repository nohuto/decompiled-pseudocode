/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801A2D34
 * Callers:
 *     ??$_Try_emplace@PEAUIInputTarget@@$$V@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAUIInputTarget@@@Z @ 0x1801A2A1C (--$_Try_emplace@PEAUIInputTarget@@$$V@-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set.c)
 *     _std::_Hash_std::_Umap_traits_IInputTarget___std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long____std::_Uhash_compare_IInputTarget___std::hash_IInputTarget____std::equal_to_IInputTarget______std::allocator_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long________0___::_Try_emplace_IInputTarget____::_1_::dtor$0 @ 0x1801D9061 (_std--_Hash_std--_Umap_traits_IInputTarget___std--unordered_set_unsigned_long_std--_ea_1801D9061.c)
 * Callees:
 *     ??1?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800228D4 (--1-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v2 + 24);
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>,void *>>>(a1);
}
