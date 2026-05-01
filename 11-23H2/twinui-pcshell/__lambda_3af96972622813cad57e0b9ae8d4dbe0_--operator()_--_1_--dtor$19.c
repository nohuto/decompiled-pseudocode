/*
 * XREFs of __lambda_3af96972622813cad57e0b9ae8d4dbe0_::operator()_::_1_::dtor$19 @ 0x18025C79F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall _lambda_3af96972622813cad57e0b9ae8d4dbe0_::operator()_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 400) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 400) &= ~4u;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a2 + 64));
  }
}
