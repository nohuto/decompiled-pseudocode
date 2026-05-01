/*
 * XREFs of _winrt::impl::make_scoped_input_iterable_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring__std::pair_winrt::hstring_const__winrt::hstring__const____::_1_::dtor$0 @ 0x18041CE49
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall winrt::impl::make_scoped_input_iterable_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring__std::pair_winrt::hstring_const__winrt::hstring__const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 80));
  }
}
