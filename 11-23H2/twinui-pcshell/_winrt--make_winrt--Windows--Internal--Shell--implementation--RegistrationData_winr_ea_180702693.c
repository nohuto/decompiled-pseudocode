/*
 * XREFs of _winrt::make_winrt::Windows::Internal::Shell::implementation::RegistrationData_winrt::hstring_const_&_winrt::hstring_const_&_unsigned_short_const_(&)[1]__::_1_::dtor$1 @ 0x180702693
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::make_winrt::Windows::Internal::Shell::implementation::RegistrationData_winrt::hstring_const___winrt::hstring_const___unsigned_short_const_____1___::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::hstring::~hstring((void **)(a2 + 104));
  }
}
