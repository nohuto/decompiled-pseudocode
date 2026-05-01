/*
 * XREFs of _wil::str_concat_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____unsigned_short_const___&_unsigned_short_const_(&)[21]_unsigned_short_const___&__::_1_::dtor$0 @ 0x180489B94
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall wil::str_concat_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____unsigned_short_const_____unsigned_short_const_____21__unsigned_short_const______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 40), a2);
  }
}
