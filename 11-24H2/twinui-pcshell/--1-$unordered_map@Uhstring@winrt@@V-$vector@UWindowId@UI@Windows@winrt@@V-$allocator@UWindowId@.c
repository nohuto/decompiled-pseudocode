/*
 * XREFs of ??1?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@QEAA@XZ @ 0x1802D0E44
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows_::_1_::dtor$0 @ 0x1806DD6E3 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--G_ea_1806DD6E3.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RecoverRemoteSessionsData_::_1_::dtor$1 @ 0x180702103 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_180702103.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>>::~unordered_map<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>>(
        __int64 a1)
{
  std::_Hash<std::_Umap_traits<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>,0>>(a1);
}
