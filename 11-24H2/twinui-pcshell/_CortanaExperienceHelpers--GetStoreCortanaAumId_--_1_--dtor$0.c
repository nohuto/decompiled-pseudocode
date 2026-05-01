/*
 * XREFs of _CortanaExperienceHelpers::GetStoreCortanaAumId_::_1_::dtor$0 @ 0x1806E608A
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall CortanaExperienceHelpers::GetStoreCortanaAumId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 152));
  }
}
