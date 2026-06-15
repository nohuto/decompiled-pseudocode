/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001F374
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession________0___::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession________0____::_1_::dtor$0 @ 0x180049EDC (_std--_Hash_std--_Umap_traits_unsigned_long_std--unique_ptr_TSSession_std--default_delete_TSSess.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003CBA8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>::~list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  operator delete(*a1, (const struct std::nothrow_t *)0x20);
}
