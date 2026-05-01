/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::CommitSwipe_::_1_::catch$14 @ 0x1806959E2
 * Callers:
 *     <none>
 * Callees:
 *     ?complete@?$test_watcher@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18021E658 (-complete@-$test_watcher@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180230B6C (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235824 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235954 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@1@XZ @ 0x180235CCC (--C-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA-.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::CommitSwipe_::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)(a2 + 56));
  *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                a2 + 56,
                (_QWORD *)(a2 + 32))
           + 270LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)(a2 + 32));
  tip2::test_watcher<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::complete(a2 + 56);
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(a2 + 56);
  return 0LL;
}
