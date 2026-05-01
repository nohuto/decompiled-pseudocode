/*
 * XREFs of _UndockedSearchAppExperienceManager::Show_::_1_::dtor$40 @ 0x1806E6A60
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::Show_::_1_::dtor_40(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 232) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 232) &= ~1u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 72));
  }
}
