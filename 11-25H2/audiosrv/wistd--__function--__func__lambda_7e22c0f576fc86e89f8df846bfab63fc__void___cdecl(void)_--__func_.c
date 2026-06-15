/*
 * XREFs of wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_ @ 0x180146E60
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_7e22c0f576fc86e89f8df846bfab63fc__void_ @ 0x180146468 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_7e22c0f576fc86e89f8df8.c)
 *     wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_::__move @ 0x180156B20 (wistd--__function--__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_180176C28;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
