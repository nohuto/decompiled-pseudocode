/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@QEAA@XZ @ 0x1802CE93C
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________::_1_::dtor$0 @ 0x1806D4689 (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1802A60C8 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 */

void __fastcall std::_Tidy_guard<std::vector<std::wstring>>::~_Tidy_guard<std::vector<std::wstring>>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::wstring>::_Tidy(v1);
}
