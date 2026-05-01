/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1806450F8
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A92E4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180664384 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$vector@UWindowId@UI@Windo.c)
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x180649E10 (--1-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@winrt@@V-$allocator@UWindowId@UI@Wi.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>>>(
        __int64 a1,
        char *a2)
{
  std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>::~pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>(a2 + 16);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x30);
}
