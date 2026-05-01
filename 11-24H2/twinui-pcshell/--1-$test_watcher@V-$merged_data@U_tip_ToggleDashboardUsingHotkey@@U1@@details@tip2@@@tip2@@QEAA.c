/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB430
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D8510 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1805D8510.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806FB9A8 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardVisibilityAsy.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CAF28 (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_returncod.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
