/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805726A0
 * Callers:
 *     ??$_Emplace@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@_N@1@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@1@@Z @ 0x180572124 (--$_Emplace@AEAPEAUIWinRTApplicationView@@AEAV-$shared_ptr@VUwpAppViewInfo@@@std@@@-$_Tree@V-$_T.c)
 *     _std::_Tree_std::_Tmap_traits_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::shared_ptr_UwpAppViewInfo__std::less_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy____std::allocator_std::pair_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const__std::shared_ptr_UwpAppViewInfo______0___::_Emplace_IWinRTApplicationView___&_std::shared_ptr_UwpAppViewInfo__&__::_1_::dtor$0 @ 0x1806F3713 (_std--_Tree_std--_Tmap_traits_wil--com_ptr_t_IWinRTApplicationView_wil--err_exception_policy__st.c)
 * Callees:
 *     ??1?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@QEAA@XZ @ 0x1805726DC (--1-$pair@$$CBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$shared_pt.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>::~pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>((void *)(v2 + 32));
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>(a1);
}
