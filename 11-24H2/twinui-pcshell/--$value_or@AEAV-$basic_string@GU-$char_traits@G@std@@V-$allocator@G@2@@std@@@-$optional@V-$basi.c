/*
 * XREFs of ??$value_or@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEGBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV21@@Z @ 0x18033A314
 * Callers:
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x180338CF0 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::optional<std::wstring>::value_or<std::wstring &>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  v4 = a1;
  if ( !*(_BYTE *)(a1 + 32) )
    v4 = a3;
  std::wstring::wstring(a2, v4);
  return a2;
}
