/*
 * XREFs of _lambda_c6ba9d0e3b7f29cae293d336d79dd692_::operator() @ 0x180258638
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___::Run @ 0x180258850 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___--Run.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1806E3674 (-SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_EduThemeInstalled@@@tip@@QEAA?AV?$test_watcher@U_tip_EduThemeInstalled@@@2@XZ @ 0x1806E4D20 (-start_and_watch_errors@-$tip_test@U_tip_EduThemeInstalled@@@tip@@QEAA-AV-$test_watcher@U_tip_Ed.c)
 */

// Hidden C++ exception states: #wind=1
void lambda_c6ba9d0e3b7f29cae293d336d79dd692_::operator()()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v4[48]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v5[3]; // [rsp+60h] [rbp-18h] BYREF

  v3 = 0LL;
  tip::tip_test<_tip_EduThemeInstalled>::start_and_watch_errors(&v3, v4);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v3);
  CallInstallNewAppxThemes();
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v3,
    v5);
  v0 = v3;
  tip::details::test_common_data<1>::begin_update(v3 + 8);
  v1 = v0 + 184;
  if ( !v0 )
    v1 = 8LL;
  *(_BYTE *)v1 = 1;
  tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(&v3);
  tip::details::test_common_data<1>::complete(v5[0] + 8LL);
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::SetHaileyTheme(v2);
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v4);
}
