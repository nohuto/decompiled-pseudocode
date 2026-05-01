/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180604B28
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___::Run @ 0x1806060A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___--Run.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180606CDC (-reset@-$com_ptr_t@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_pol.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>::~test_data_control<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>,wil::err_returncode_policy>(a1);
}
