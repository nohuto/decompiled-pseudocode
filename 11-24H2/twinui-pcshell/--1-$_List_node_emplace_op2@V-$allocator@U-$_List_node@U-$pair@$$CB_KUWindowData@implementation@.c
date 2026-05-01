/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802CC774
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::Windows::Internal::Shell::implementation::WindowData_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData____0___::_Try_emplace_unsigned___int64_const_&_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory__&_winrt::Windows::Internal::UI::Shell::WindowTabDataModel_&_winrt::event_token_&_winrt::event_token_&__::_1_::dtor$0 @ 0x1806DD199 (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--Windows--Internal--Shell--implementation--.c)
 * Callees:
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18015EADC (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::Windows::Internal::Shell::implementation::WindowData::~WindowData((winrt::Windows::Internal::Shell::implementation::WindowData *)(v2 + 24));
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(a1);
}
