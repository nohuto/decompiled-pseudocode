/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IIterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::ApplicationModel::Package__winrt::Windows::ApplicationModel::Package_::Current_::_1_::dtor$0 @ 0x18046701A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::ApplicationModel::Package__winrt::Windows::ApplicationModel::Package_::Current_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 72));
  }
}
