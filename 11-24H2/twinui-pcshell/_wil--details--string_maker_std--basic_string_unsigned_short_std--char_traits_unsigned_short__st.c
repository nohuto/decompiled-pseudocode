/*
 * XREFs of _wil::details::string_maker_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____::make_::_1_::dtor$0 @ 0x1806CFC88
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall wil::details::string_maker_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____::make_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::wstring::_Tidy_deallocate((void **)(a2 + 40));
  }
}
