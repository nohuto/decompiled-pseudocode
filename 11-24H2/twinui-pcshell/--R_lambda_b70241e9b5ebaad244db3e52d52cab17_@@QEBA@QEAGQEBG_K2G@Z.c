/*
 * XREFs of ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x1800BC454
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800BBE6C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int16 a6)
{
  __int64 v6; // rdi
  char *v9; // rdi
  __int64 result; // rax
  __int64 i; // rcx

  v6 = 2 * a4;
  memcpy_0(a2, a3, 2 * a4);
  v9 = &a2[v6];
  if ( a5 )
  {
    for ( i = a5; i; --i )
    {
      *(_WORD *)v9 = a6;
      v9 += 2;
    }
  }
  result = a4 + a5;
  *(_WORD *)&a2[2 * a4 + 2 * a5] = 0;
  return result;
}
