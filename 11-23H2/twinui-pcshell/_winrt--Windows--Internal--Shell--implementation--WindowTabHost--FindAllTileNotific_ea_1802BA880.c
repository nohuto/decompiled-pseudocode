/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications_::_1_::dtor$18 @ 0x1802BA880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications_::_1_::dtor_18(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 168) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 168) &= ~4u;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a2 + 176));
  }
}
