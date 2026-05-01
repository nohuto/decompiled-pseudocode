/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB3E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282D70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ??1?$_Optional_destruct_base@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@$0A@@std@@QEAA@XZ @ 0x1805CAE6C (--1-$_Optional_destruct_base@V-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2.c)
 *     ?reset@?$_Optional_destruct_base@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@$0A@@std@@QEAAXXZ @ 0x1805DCF84 (-reset@-$_Optional_destruct_base@V-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CAE88 (--1-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::~test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
