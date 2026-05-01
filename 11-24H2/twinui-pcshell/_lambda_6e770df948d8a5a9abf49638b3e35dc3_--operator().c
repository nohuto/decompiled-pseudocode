/*
 * XREFs of _lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator() @ 0x18069EEFC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___::_ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___ @ 0x18069E950 (wil--details--ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___--_ScopeExitFn__lambda_6e77.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A0C10 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069EA9C (--1-$test_data_control@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x18069EE68 (--C-$tip_test@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@.c)
 *     ?Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1806A1320 (-Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator()(XamlSwitcherTelemetry::ShowGamingTaskView **a1)
{
  void *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)*a1 + 22);
  XamlSwitcherTelemetry::ShowGamingTaskView::Stop(a1[1], 0);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>::operator->(
                (__int64)*a1 + 864,
                (__int64 *)&v3)
           + 273) = 1;
  tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>(&v3);
  return CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)*a1);
}
