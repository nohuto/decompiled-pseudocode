/*
 * XREFs of ?open_helper@?$tip_test@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065D974
 * Callers:
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x180658F4C (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x18028A320 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CDF64 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806499C0 (--1-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18064A4A0 (--4-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180657E08 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@de.c)
 */

char __fastcall tip2::tip_test<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::open_helper(
        void **a1,
        void *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  void **updated; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v7[0] = 0LL;
  if ( !*a1 || tip2::details::shared_data<1,0,0>::has_ever_started((__int64)*a1 + 8) )
  {
    updated = (void **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,_GUID * &>(
                         &v8,
                         v7);
    wil::com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>::operator=(
      a1,
      updated);
    wil::com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>(&v8);
  }
  else
  {
    tip2::details::shared_data<1,0,0>::open_without_lock(v3, 0LL, v4);
  }
  return tip2::details::shared_data<1,0,0>::has_ever_started((__int64)*a1 + 8);
}
