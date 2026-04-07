/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002FCE0
 * Callers:
 *     ??$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@@Z @ 0x18002FD5C (--$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Shell.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Udwm::Transitions::ShellTransition_winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_enum_winrt::Udwm::Transitions::ShellTransition_std::hash_enum_winrt::Udwm::Transitions::ShellTransition__std::equal_to_enum_winrt::Udwm::Transitions::ShellTransition____std::allocator_std::pair_enum_winrt::Udwm::Transitions::ShellTransition_const__winrt::Udwm::Transitions::ITransitionHandler____0___::_Try_emplace_enum_winrt::Udwm::Transitions::ShellTransition_const_&__::_1_::dtor$0 @ 0x180067C14 (_std--_Hash_std--_Umap_traits_enum_winrt--Udwm--Transitions--ShellTransition_winrt--Udwm--Transi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = (winrt::Windows::Foundation::IUnknown *)(v2 + 24);
    if ( *(_QWORD *)v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 0x20uLL);
}
