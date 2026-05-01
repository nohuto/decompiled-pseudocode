/*
 * XREFs of _winrt::impl::create_and_initialize_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::hstring_const_&_enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode_&_winrt::Windows::Foundation::Rect_&_winrt::Windows::Foundation::DeferralCompletedHandler_&_bool_&_winrt::hstring_&_winrt::WindowsUdk::UI::Shell::SearchAppHost_&__::_1_::dtor$1 @ 0x1806D7261
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::create_and_initialize_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::hstring_const___enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode___winrt::Windows::Foundation::Rect___winrt::Windows::Foundation::DeferralCompletedHandler___bool___winrt::hstring___winrt::WindowsUdk::UI::Shell::SearchAppHost____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 40));
  }
}
