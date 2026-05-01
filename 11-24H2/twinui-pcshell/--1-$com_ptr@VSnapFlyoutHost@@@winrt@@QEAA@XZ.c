/*
 * XREFs of ??1?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ @ 0x18023A1C0
 * Callers:
 *     __lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator()_::_1_::dtor$0 @ 0x1806D75C8 (__lambda_1e80c37ddcde987ca8d07444e2bbbfce_--operator()_--_1_--dtor$0.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$28 @ 0x1806F67AB (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$28.c)
 *     __lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x1806F72E4 (__lambda_b826e61a9471a58a2220c80ea84bd06a_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806F74B5 (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_--_1_--dtor$5.c)
 *     _SnapFlyoutHost::HideAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F818F (_SnapFlyoutHost--HideAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806F832F (_SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     __lambda_8b5f1623488306f7e465df1f94f78972_::operator()_::_1_::dtor$0 @ 0x1806F84EC (__lambda_8b5f1623488306f7e465df1f94f78972_--operator()_--_1_--dtor$0.c)
 *     _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_89d43c20f0f7bb0e860cd8602b20fbb7___::Invoke_::_1_::dtor$0 @ 0x1806F84FE (_winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_89d43c20f0.c)
 *     _SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F858A (_SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F8606 (_SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806F8685 (_SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806F8851 (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _SnapFlyoutHost::StartXamlExplorerHostThread_::_1_::dtor$2 @ 0x1806F899B (_SnapFlyoutHost--StartXamlExplorerHostThread_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId_::_1_::dtor$0 @ 0x1806FF1AC (_winrt--Windows--Internal--UI--Themes--implementation--ThemeCoordinator--GetBackgroundHostForId_.c)
 *     _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType_::_1_::dtor$0 @ 0x1806FF1D9 (_winrt--Windows--Internal--UI--Themes--implementation--ThemeCoordinator--GetBackgroundHostForTyp.c)
 *     _SharedDesktopBackgroundVisualHost::StartXamlHostThread_::_1_::dtor$2 @ 0x1806FF561 (_SharedDesktopBackgroundVisualHost--StartXamlHostThread_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::com_ptr<SnapFlyoutHost>::~com_ptr<SnapFlyoutHost>(_QWORD *a1)
{
  return winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(a1);
}
