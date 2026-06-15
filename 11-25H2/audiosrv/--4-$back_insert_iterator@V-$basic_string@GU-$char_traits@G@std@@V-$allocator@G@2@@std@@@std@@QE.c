/*
 * XREFs of ??4?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAAAEAV01@$$QEAG@Z @ 0x18013BAB4
 * Callers:
 *     ??$_Format_default@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x18013A210 (--$_Format_default@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@PEBGV-$back_insert_iterator@V-$.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180131BD0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

__int64 *__fastcall std::back_insert_iterator<std::wstring>::operator=(__int64 *a1, unsigned __int16 *a2)
{
  std::wstring::push_back(*a1, *a2);
  return a1;
}
