/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800F2734
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@QEAV21@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800EF064 (--$_Emplace_reallocate@AEAV-$basic_string_view@DU-$char_traits@D@std@@@std@@@-$vector@V-$basic_s.c)
 *     ??$_UIntegral_to_string@DI@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@I@Z @ 0x1800EF7B8 (--$_UIntegral_to_string@DI@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@I.c)
 *     ??$emplace_back@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA?A_TAEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800EF9DC (--$emplace_back@AEAV-$basic_string_view@DU-$char_traits@D@std@@@std@@@-$vector@V-$basic_string@D.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800F0700 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2794 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     memmove_0 @ 0x180066224 (memmove_0.c)
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x1800EF518 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 */

void **__fastcall std::string::assign(void **a1, const void *a2, size_t a3)
{
  void *v5; // rsi
  void **result; // rax

  if ( a3 > (unsigned __int64)a1[3] )
    return (void **)std::string::_Reallocate_for<_lambda_66f57f934f28d61049862f64df852ff0_,char const *>(
                      (__int64)a1,
                      a3,
                      a3,
                      a2);
  v5 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v5 = *a1;
  a1[2] = (void *)a3;
  memmove_0(v5, a2, a3);
  result = a1;
  *((_BYTE *)v5 + a3) = 0;
  return result;
}
