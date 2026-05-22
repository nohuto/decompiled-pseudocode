/*
 * XREFs of ??1?$list@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180196E84
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ShellGesturesProcessor::ActiveContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ShellGesturesProcessor::ActiveContactData____0___::_Hash_std::_Umap_traits_unsigned_int_ShellGesturesProcessor::ActiveContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ShellGesturesProcessor::ActiveContactData____0____::_1_::dtor$0 @ 0x1801CC960 (_std--_Hash_std--_Umap_traits_unsigned_int_ShellGesturesProcessor--ActiveContactDat_ea_1801CC960.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180156D3C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUActiveContactData@ShellGesturesProces.c)
 */

void __fastcall std::list<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>::~list<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x80);
}
