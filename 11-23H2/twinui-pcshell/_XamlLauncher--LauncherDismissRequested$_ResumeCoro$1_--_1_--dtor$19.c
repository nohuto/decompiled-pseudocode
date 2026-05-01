/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$19 @ 0x1801FFCCD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 64) + 188LL;
  *(_DWORD *)(a2 + 128) = **(_DWORD **)(a2 + 168);
  if ( (*(_DWORD *)(a2 + 128) & 0x10) != 0 )
  {
    *(_QWORD *)(a2 + 176) = *(_QWORD *)(a2 + 64) + 188LL;
    *(_QWORD *)(a2 + 184) = *(_QWORD *)(a2 + 64) + 188LL;
    *(_DWORD *)(a2 + 128) = **(_DWORD **)(a2 + 184);
    *(_DWORD *)(a2 + 192) = *(_DWORD *)(a2 + 128) & 0xFFFFFFEF;
    **(_DWORD **)(a2 + 176) = *(_DWORD *)(a2 + 192);
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(a2 + 64) + 72LL;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 200));
  }
}
