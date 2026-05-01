/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$9 @ 0x18069764D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802356B0 (--1-$test_data_control@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@.c)
 *     ??C?$test_watcher@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@1@XZ @ 0x180235C5C (--C-$test_watcher@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch_9(
        wil *a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx

  v3 = wil::ResultFromCaughtException(a1);
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x82F,
    (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)v3);
  *(_DWORD *)(*tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::operator->(
                 a2 + 32,
                 (_QWORD *)(a2 + 120))
            + 264LL) = v3;
  tip2::test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>(
    (void **)(a2 + 120),
    v4);
  return 0LL;
}
