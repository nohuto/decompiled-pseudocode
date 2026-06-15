/*
 * XREFs of wistd::__function::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_ @ 0x18014F948
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_383ae521043a10c2e2d9282b6295b11b__void_ @ 0x18014ECA8 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_383ae521043a10c2e2d928.c)
 *     wistd::__function::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_::__move @ 0x18015F890 (wistd--__function--__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl_void__::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_180181028;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
