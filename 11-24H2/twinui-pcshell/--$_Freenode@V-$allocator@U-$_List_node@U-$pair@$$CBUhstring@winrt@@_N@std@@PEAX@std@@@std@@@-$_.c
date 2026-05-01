/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180610594
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A9230 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@.c)
 *     ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x1806104BC (--$_Erase@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180615AD8 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,bool>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
        __int64 a1,
        volatile signed __int32 **a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2 + 2);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x20);
}
