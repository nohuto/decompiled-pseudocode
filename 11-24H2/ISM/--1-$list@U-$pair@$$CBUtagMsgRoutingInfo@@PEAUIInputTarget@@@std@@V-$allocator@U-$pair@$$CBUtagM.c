/*
 * XREFs of ??1?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA@XZ @ 0x1800DBD2C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::array_unsigned_short_20__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::array_unsigned_short_20______0___::_Hash_std::_Umap_traits_unsigned_long_std::array_unsigned_short_20__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::array_unsigned_short_20______0____::_1_::dtor$0 @ 0x1801D1DC9 (_std--_Hash_std--_Umap_traits_unsigned_long_std--array_unsigned_short_20__std--_Uhash_compare_un.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$22 @ 0x1801D267F (_DWMInputRouter--DWMInputRouter_--_1_--dtor$22.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DBC00 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@PEAX@std@@@.c)
 */

void __fastcall std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::~list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x40);
}
