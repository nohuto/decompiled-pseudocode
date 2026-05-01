/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1_::_1_::dtor$16 @ 0x1802439E1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__ResumeCoro_1_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 424) = *(_QWORD *)(a2 + 136) + 360LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 424));
}
