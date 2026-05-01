/*
 * XREFs of ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18033C398
 * Callers:
 *     ??$get_value_with_type@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Uerr_returncode_policy@wil@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x180339EEC (--$get_value_with_type@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@Uerr_return.c)
 *     ?enumerate_current_index@?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1803C29E8 (-enumerate_current_index@-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?enumerate_current_index@?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1806746C0 (-enumerate_current_index@-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1801837A0 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x180339D30 (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 */

__int64 __fastcall wil::reg::reg_view_details::reg_value_type_info::trim_buffer(wchar_t *a1)
{
  wchar_t *v1; // rbx
  unsigned __int64 v2; // rax

  v1 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(wchar_t **)a1;
  v2 = std::_Traits_find_ch<std::char_traits<unsigned short>>((__int64)a1, *((_QWORD *)v1 + 2), 0LL, 0);
  if ( v2 != -1LL )
    std::wstring::resize(v1, v2);
  return *((_QWORD *)v1 + 2);
}
