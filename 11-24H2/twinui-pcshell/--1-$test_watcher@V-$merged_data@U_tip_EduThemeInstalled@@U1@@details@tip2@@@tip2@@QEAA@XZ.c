/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180604B88
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___::Run @ 0x1806060A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___--Run.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___::Run_::_1_::dtor$0 @ 0x1806FF221 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___--Run_-.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180604A04 (--1-$com_ptr_t@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>::~test_watcher<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
