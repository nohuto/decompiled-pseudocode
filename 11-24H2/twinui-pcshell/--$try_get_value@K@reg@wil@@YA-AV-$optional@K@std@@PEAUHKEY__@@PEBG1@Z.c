/*
 * XREFs of ??$try_get_value@K@reg@wil@@YA?AV?$optional@K@std@@PEAUHKEY__@@PEBG1@Z @ 0x18033A1B8
 * Callers:
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180338AB8 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 * Callees:
 *     ??$try_get_value@K@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@K@std@@PEBG0K@Z @ 0x18033A0F8 (--$try_get_value@K@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA-AV-$o.c)
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x18033C17C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 */

__int64 __fastcall wil::reg::try_get_value<unsigned long>(__int64 a1, __int64 a2)
{
  const WCHAR *v3; // r8
  __int64 v4; // r9
  wil::reg::reg_view_details *v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  LODWORD(v6) = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)4, a2);
  wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::try_get_value<unsigned long>(
    (__int64)&v7,
    a1,
    v3,
    v4,
    v6);
  return a1;
}
