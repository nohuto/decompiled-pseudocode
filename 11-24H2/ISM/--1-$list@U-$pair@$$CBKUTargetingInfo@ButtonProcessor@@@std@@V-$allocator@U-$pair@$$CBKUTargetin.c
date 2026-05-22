/*
 * XREFs of ??1?$list@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18008FF94
 * Callers:
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$6 @ 0x1801D3A26 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$6.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo____0___::_Hash_std::_Umap_traits_unsigned_long_Win32kInterop::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo____0____::_1_::dtor$0 @ 0x1801D3C99 (_std--_Hash_std--_Umap_traits_unsigned_long_Win32kInterop--TargetingInfo_std--_Uhash_compare_uns.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008FFC0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PE.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>::~list<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>(
        char **a1)
{
  std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
