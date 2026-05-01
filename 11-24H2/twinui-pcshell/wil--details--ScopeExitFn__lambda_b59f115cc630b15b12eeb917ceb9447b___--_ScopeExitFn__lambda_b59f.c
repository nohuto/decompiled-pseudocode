/*
 * XREFs of wil::details::ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___::_ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___ @ 0x18069E970
 * Callers:
 *     _XamlGamingTaskViewHost::DisplayGamingTaskView_::_1_::dtor$0 @ 0x180704D4D (_XamlGamingTaskViewHost--DisplayGamingTaskView_--_1_--dtor$0.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1804B10C0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069EA9C (--1-$test_data_control@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x18069EE68 (--C-$tip_test@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@.c)
 *     ?Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1806A1320 (-Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___::_ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___(
        _BYTE *a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[8] )
  {
    a1[8] = 0;
    XamlSwitcherTelemetry::ShowGamingTaskView::Stop(
      (XamlSwitcherTelemetry::ShowGamingTaskView *)(*(_QWORD *)a1 + 528LL),
      0);
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>::operator->(
                            *(_QWORD *)a1 + 864LL,
                            &v2)
             + 273LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>>(&v2);
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(*(_QWORD *)a1);
  }
}
