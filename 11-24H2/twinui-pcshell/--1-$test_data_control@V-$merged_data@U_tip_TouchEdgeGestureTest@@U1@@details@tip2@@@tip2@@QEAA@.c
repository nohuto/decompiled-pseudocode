/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C8950
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801ED1D0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x1805930D8 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::dtor$14 @ 0x1806D94FB (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--dtor$14.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::dtor$15 @ 0x1806D950D (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--dtor$15.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::dtor$17 @ 0x1806D9531 (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--dtor$17.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$46 @ 0x1806D9555 (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--catch$46.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028A6E4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18059467C (-reset@-$com_ptr_t@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>,wil::err_returncode_policy>(a1);
}
