/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18021DC6C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________0___::_Try_emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x1806D0932 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--basic_string_unsigned_short_std--char_traits.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::wstring::_Tidy_deallocate((void **)(v2 + 24));
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>(a1);
}
