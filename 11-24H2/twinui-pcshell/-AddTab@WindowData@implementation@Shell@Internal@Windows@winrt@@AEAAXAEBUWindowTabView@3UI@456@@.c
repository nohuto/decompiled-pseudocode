/*
 * XREFs of ?AddTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@Z @ 0x180134424
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800C2984 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x1800C0E64 (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabVi.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C2740 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ??$_Emplace_front_internal@AEBUguid@winrt@@@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXAEBUguid@winrt@@@Z @ 0x1801344A8 (--$_Emplace_front_internal@AEBUguid@winrt@@@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@.c)
 *     ??$emplace@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@std@@_N@1@$$QEAUguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@4@@Z @ 0x180134544 (--$emplace@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@-$_Hash@V-$_Umap_traits@U.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::AddTab(
        winrt::Windows::Internal::Shell::implementation::WindowData *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  if ( winrt::Windows::Internal::Shell::implementation::WindowData::AddTabProxyWindow(this, a2) )
  {
    v4 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
           (__int64 *)a2,
           &v7);
    std::deque<winrt::guid>::_Emplace_front_internal<winrt::guid const &>((char *)this + 152, v4);
    v5 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
           (__int64 *)a2,
           &v7);
    std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::emplace<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView const &>(
      (char *)this + 88,
      v6,
      v5,
      a2);
  }
}
