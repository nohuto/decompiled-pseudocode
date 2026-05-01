/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$18 @ 0x1801FFC2E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 64) + 188LL;
  *(_DWORD *)(a2 + 128) = **(_DWORD **)(a2 + 120);
  if ( (*(_DWORD *)(a2 + 128) & 8) != 0 )
  {
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 64) + 188LL;
    *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 64) + 188LL;
    *(_DWORD *)(a2 + 128) = **(_DWORD **)(a2 + 144);
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 128) & 0xFFFFFFF7;
    **(_DWORD **)(a2 + 136) = *(_DWORD *)(a2 + 152);
    *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 64) + 64LL;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 160));
  }
}
