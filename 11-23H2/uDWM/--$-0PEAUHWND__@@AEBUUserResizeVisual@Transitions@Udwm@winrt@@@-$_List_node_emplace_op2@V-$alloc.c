/*
 * XREFs of ??$?0PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@$$QEAPEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800F84F0
 * Callers:
 *     ??$emplace@PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800F8858 (--$emplace@PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$_Hash@V-$_Umap_traits@PEA.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180020494 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  a1[1] = v7;
  *(_QWORD *)(v7 + 16) = *a3;
  *(_QWORD *)(v7 + 24) = *a4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(v7 + 24));
  return a1;
}
