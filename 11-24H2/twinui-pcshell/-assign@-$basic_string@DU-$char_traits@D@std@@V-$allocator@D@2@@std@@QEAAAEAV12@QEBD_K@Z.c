/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180508A60
 * Callers:
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18050939C (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x1804F7E58 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
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
  if ( (unsigned __int64)a1[3] > 0xF )
    v5 = *a1;
  a1[2] = (void *)a3;
  memmove_0(v5, a2, a3);
  result = a1;
  *((_BYTE *)v5 + a3) = 0;
  return result;
}
