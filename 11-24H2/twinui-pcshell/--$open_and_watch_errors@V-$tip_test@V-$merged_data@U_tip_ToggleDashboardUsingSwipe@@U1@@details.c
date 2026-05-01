/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805C4F90
 * Callers:
 *     ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805CDAC0 (-CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805CDCD0 (-CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805CE140 (-ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe_::_1_::catch$22 @ 0x1806F9BF6 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CancelSwipe_--_1_--catch$22.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CommitSwipe_::_1_::catch$22 @ 0x1806F9C79 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CommitSwipe_--_1_--catch$22.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe_::_1_::catch$22 @ 0x1806F9CFC (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ContinueSwipe_--_1_--catch$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch$41 @ 0x1806FB606 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--catch$41.c)
 * Callees:
 *     ??0?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180295748 (--0-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@IEAA@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CAF48 (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805DBCA0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x1805DCD4C (-open_helper@-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>(
        struct wil::details::IFailureCallback *a1)
{
  __int64 *v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::open_helper(&v4);
  v2 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::ensure_data(&v4);
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(
    a1,
    v2);
  wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>(&v4);
  return a1;
}
