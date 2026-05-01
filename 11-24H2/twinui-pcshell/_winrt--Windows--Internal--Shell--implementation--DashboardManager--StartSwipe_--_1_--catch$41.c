/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch$41 @ 0x1806FB606
 * Callers:
 *     <none>
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805C4F90 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB3A8 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB458 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch_41(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)(a2 + 224));
  v3 = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a2 + 40) = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 320));
    v3 = *(_QWORD *)(a2 + 40);
  }
  tip2::details::shared_data<1,0,0>::begin_update(v3 + 8);
  *(_BYTE *)(v3 + 276) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)(a2 + 40));
  tip2::details::shared_data<1,0,0>::complete_without_lock(*(_QWORD *)(a2 + 280) + 8LL);
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(a2 + 224);
  return 0LL;
}
