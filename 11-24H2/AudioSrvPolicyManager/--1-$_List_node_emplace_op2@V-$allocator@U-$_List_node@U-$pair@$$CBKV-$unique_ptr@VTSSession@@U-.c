/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003D3B0
 * Callers:
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18003CC00 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession________0___::emplace_unsigned_long_&_std::unique_ptr_TSSession_std::default_delete_TSSession______::_1_::dtor$0 @ 0x18004B234 (_std--_Hash_std--_Umap_traits_unsigned_long_std--unique_ptr_TSSession_std--default__ea_18004B234.c)
 * Callees:
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18003D560 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::unique_ptr<TSSession>::~unique_ptr<TSSession>(v2 + 24);
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>(a1);
}
