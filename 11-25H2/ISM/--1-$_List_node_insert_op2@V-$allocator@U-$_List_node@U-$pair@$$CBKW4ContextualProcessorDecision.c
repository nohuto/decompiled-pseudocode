/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180065AD0
 * Callers:
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$7 @ 0x1801C9180 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$7.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_enum_ContextualProcessorDecision_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__enum_ContextualProcessorDecision____0___::operator__::_1_::dtor$1 @ 0x1801C92F8 (_std--_Hash_std--_Umap_traits_unsigned_long_enum_ContextualProcessorDecision_std--__ea_1801C92F8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorDecision>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorDecision>,void *>>>(
        __int64 a1)
{
  char *v1; // rbx
  char *v2; // rcx

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(char **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = *(char **)v1;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x18);
    }
  }
}
