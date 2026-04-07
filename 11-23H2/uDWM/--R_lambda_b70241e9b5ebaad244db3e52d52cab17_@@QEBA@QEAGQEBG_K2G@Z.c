/*
 * XREFs of ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x18003086C
 * Callers:
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x180031DF8 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 * Callees:
 *     memcpy_0 @ 0x180066218 (memcpy_0.c)
 */

__int64 __fastcall _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  char *v8; // rdi
  __int64 i; // rcx
  __int64 result; // rax

  v5 = 2 * a4;
  memcpy_0(a2, a3, 2 * a4);
  v8 = &a2[v5];
  if ( a5 )
  {
    for ( i = a5; i; --i )
    {
      *(_WORD *)v8 = 0;
      v8 += 2;
    }
  }
  result = a4 + a5;
  *(_WORD *)&a2[2 * a4 + 2 * a5] = 0;
  return result;
}
