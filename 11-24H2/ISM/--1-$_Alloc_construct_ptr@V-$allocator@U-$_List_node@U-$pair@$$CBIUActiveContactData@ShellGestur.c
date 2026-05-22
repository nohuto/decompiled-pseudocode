/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009BF70
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009C5A4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIUActiveContactData@ShellGest.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ShellGesturesProcessor::ActiveContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ShellGesturesProcessor::ActiveContactData____0___::_Try_emplace_unsigned_int_const_&__::_1_::dtor$1 @ 0x1801D2C1A (_std--_Hash_std--_Umap_traits_unsigned_int_ShellGesturesProcessor--ActiveContactDat_ea_1801D2C1A.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x80);
}
