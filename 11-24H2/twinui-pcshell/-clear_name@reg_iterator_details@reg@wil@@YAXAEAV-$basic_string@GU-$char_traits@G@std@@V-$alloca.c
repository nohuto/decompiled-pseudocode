/*
 * XREFs of ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1803C22F4
 * Callers:
 *     ??$resize_name_cch@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg_iterator_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K1@Z @ 0x1803B3A5C (--$resize_name_cch@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg_iterator_d.c)
 *     ?enumerate_current_index@?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1803C29E8 (-enumerate_current_index@-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?enumerate_current_index@?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1806746C0 (-enumerate_current_index@-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     wmemset @ 0x1801C9614 (wmemset.c)
 *     ??$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@Z @ 0x1803AFFAC (--$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@-$basic_string@GU-$char_traits@.c)
 */

wchar_t *__fastcall wil::reg::reg_iterator_details::clear_name(wchar_t *S)
{
  wchar_t *v1; // r10
  size_t v2; // r8
  wchar_t *result; // rax
  __int16 v4; // dx
  __int64 v5; // r8
  __int64 v6; // r10

  v1 = S;
  v2 = *((_QWORD *)S + 2);
  if ( v2 > *((_QWORD *)S + 3) )
    return (wchar_t *)std::wstring::_Reallocate_for<_lambda_8317d86ccc4fc543e8e6132f798c706e_,unsigned short>(
                        (__int64)S,
                        *((_QWORD *)S + 2));
  if ( *((_QWORD *)S + 3) > 7uLL )
    v1 = *(wchar_t **)S;
  *((_QWORD *)S + 2) = v2;
  result = wmemset(v1, 0, v2);
  *(_WORD *)(v6 + 2 * v5) = v4;
  return result;
}
