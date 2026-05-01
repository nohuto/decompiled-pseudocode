/*
 * XREFs of wistd::__function::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_ @ 0x18036BC90
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_f6af0f73b13b7001ec4227e21c1beaab__void_ @ 0x18036B28C (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_f6af0f73b13b7001ec4227.c)
 *     wistd::__function::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_::__move @ 0x1803720E0 (wistd--__function--__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl_void__::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl_void__(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  *a1 = &off_180731E40;
  v2 = *a2;
  v3 = a2 + 1;
  a1[1] = v2;
  a1[2] = 0LL;
  if ( a1 + 2 != v3 )
  {
    a1[2] = *v3;
    *v3 = 0LL;
  }
  return a1;
}
