/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$16 @ 0x1806FACAE
 * Callers:
 *     <none>
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB294 (--1-$test_data_control@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch_16(
        wil *a1,
        __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx

  v3 = wil::ResultFromCaughtException(a1);
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 216),
    (void *)0x91A,
    (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)v3);
  v4 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a2 + 40) = v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 312));
    v4 = *(_QWORD *)(a2 + 40);
  }
  tip2::details::shared_data<0,0,1>::begin_update(v4 + 8);
  *(_DWORD *)(v4 + 272) = v3;
  tip2::test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>((void **)(a2 + 40));
  return 0LL;
}
