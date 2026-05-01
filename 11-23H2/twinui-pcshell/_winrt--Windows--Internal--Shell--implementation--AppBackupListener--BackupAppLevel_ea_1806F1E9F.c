/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::dtor$8 @ 0x1806F1E9F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 304) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 304) &= ~8u;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a2 + 96));
  }
}
