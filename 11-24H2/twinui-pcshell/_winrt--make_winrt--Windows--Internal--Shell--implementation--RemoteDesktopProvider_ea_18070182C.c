/*
 * XREFs of _winrt::make_winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo_winrt::hstring_unsigned_short_const_(&)[1]__::_1_::dtor$2 @ 0x18070182C
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::make_winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo_winrt::hstring_unsigned_short_const_____1___::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 80));
  }
}
