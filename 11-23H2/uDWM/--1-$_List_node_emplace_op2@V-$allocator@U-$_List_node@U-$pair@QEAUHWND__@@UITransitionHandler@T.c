/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800FC7D4
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800FBE20 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Trans.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransitionHandler____0___::_Try_emplace_HWND_____const_&__::_1_::dtor$0 @ 0x1800FBF9E (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransitionHandler_ea_1800FBF9E.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  winrt::Windows::Foundation::IUnknown *v3; // rcx
  void *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (winrt::Windows::Foundation::IUnknown *)(v2 + 24);
    if ( *(_QWORD *)v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x20uLL);
}
