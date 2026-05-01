/*
 * XREFs of wmemset @ 0x1801AE20C
 * Callers:
 *     ??$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@Z @ 0x1800AF8E8 (--$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@-$basic_string@GU-$char_traits@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1800B08A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1801F07F0 (-clear_name@reg_iterator_details@reg@wil@@YAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x1803918C4 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 *     ??R_lambda_a3050a43f3157934f354774ab3dd2e02_@@QEBA@QEA_WQEB_W_K2_W@Z @ 0x180763054 (--R_lambda_a3050a43f3157934f354774ab3dd2e02_@@QEBA@QEA_WQEB_W_K2_W@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18076723C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wmemset(wchar_t *S, wchar_t C, size_t N)
{
  wchar_t *v4; // rdi
  size_t i; // rcx

  if ( N )
  {
    v4 = S;
    for ( i = N; i; --i )
      *v4++ = C;
  }
  return S;
}
