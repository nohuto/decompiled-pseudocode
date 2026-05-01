/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649F58
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180652544 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x180658F4C (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806549B0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@ti.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::~test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>(a1);
}
