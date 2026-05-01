/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1801E52D4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_winrt::com_ptr_IVirtualDesktop__std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__winrt::com_ptr_IVirtualDesktop______0___::_Hash_std::_Umap_traits_winrt::hstring_winrt::com_ptr_IVirtualDesktop__std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__winrt::com_ptr_IVirtualDesktop______0____std::allocator_std::_List_node_std::pair_winrt::hstring_const__winrt::com_ptr_IVirtualDesktop____void________::_1_::dtor$0 @ 0x1806D8396 (_std--_Hash_std--_Umap_traits_winrt--hstring_winrt--com_ptr_IVirtualDesktop__std--_Uhash_compare.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::RemoteDesktopCollection_::_1_::dtor$2 @ 0x1806DE5F3 (_winrt--Windows--Internal--Shell--implementation--RemoteDesktopCollection--RemoteDesktopCollecti.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801E5354 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDes.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>::~list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>(
        void **a1)
{
  std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
