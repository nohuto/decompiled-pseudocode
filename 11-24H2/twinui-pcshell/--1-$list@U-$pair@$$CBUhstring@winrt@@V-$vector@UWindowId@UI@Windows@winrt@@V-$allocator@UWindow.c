/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1802A92B8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows_::_1_::dtor$6 @ 0x1806DD749 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--G_ea_1806DD749.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A92E4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::~list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>(
        void **a1)
{
  std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
