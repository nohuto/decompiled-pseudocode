/*
 * XREFs of wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_ @ 0x1801FE3E8
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_2d53174db5bd530b0639d771bd9cbda1__void_ @ 0x1801FB354 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_2d53174db5bd530b0639d7.c)
 *     wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_::__move @ 0x1802015D0 (wistd--__function--__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl_void__::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_1807C62A0;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
