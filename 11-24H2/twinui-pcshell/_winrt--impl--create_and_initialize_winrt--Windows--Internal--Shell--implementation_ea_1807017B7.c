/*
 * XREFs of _winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::implementation::RegistrationData_winrt::hstring_winrt::hstring_&_unsigned_short_const_(&)[1]__::_1_::dtor$1 @ 0x1807017B7
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::implementation::RegistrationData_winrt::hstring_winrt::hstring___unsigned_short_const_____1___::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 32));
  }
}
