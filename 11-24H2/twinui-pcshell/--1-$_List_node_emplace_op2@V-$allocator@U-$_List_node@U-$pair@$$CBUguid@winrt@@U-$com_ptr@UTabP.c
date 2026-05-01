/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18021DDEC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::guid_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow__std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow______0___::emplace_winrt::guid_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow__&__::_1_::dtor$0 @ 0x1806D050E (_std--_Hash_std--_Umap_traits_winrt--guid_winrt--com_ptr_winrt--Windows--Internal--Shell--implem.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (__int64 *)(v2 + 32);
    if ( *v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3);
  }
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(a1);
}
