/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18022C9C4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_HWND_____HWINEVENTHOOK_____std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_HWINEVENTHOOK________0___::emplace_std::pair_HWND_____const_HWINEVENTHOOK________::_1_::dtor$0 @ 0x1806D0717 (_std--_Hash_std--_Umap_traits_HWND_____HWINEVENTHOOK_____std--_Uhash_compare_HWND_____std--hash_.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$13 @ 0x1806D078F (_winrt--Windows--Internal--Shell--implementation--WindowData--SyncWindowTabDataMode_ea_1806D078F.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$10 @ 0x1806D0871 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetAllAppTabAllotm_ea_1806D0871.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$15 @ 0x1806D0895 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetAllAppTabAllotm_ea_1806D0895.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<winrt::guid,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<winrt::guid,void *>>>(
        __int64 a1)
{
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(a1);
}
