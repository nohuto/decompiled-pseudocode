/*
 * XREFs of ??$insert@PEBE$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1@Z @ 0x140056A50
 * Callers:
 *     ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@PEAUIPropertyStore@@@Z @ 0x14004B7F8 (-GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x140056AA8 (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 */

_QWORD *__fastcall std::vector<unsigned char>::insert<unsigned char const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = a3 - *a1;
  std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(a1, a3, a4, a5 - a4);
  result = a2;
  *a2 = v5 + *a1;
  return result;
}
