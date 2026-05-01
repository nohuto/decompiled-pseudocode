/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18048E37C
 * Callers:
 *     _lambda_24ba1d0144fdbdb30bf1c64e70acfff3_::operator() @ 0x18048E7CC (_lambda_24ba1d0144fdbdb30bf1c64e70acfff3_--operator().c)
 *     _lambda_f117f3ffe7121185524fa0618ecb49dc_::operator() @ 0x18048EBD4 (_lambda_f117f3ffe7121185524fa0618ecb49dc_--operator().c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1804904A8 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180490A58 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028A6E4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180491794 (-reset@-$com_ptr_t@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_retur.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>(a1);
}
