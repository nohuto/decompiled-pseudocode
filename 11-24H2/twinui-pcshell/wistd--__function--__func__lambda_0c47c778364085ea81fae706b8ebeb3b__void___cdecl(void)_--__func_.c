/*
 * XREFs of wistd::__function::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl(void)_::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl(void)_ @ 0x1802E04F8
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_0c47c778364085ea81fae706b8ebeb3b__void_ @ 0x1802DFF94 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_0c47c778364085ea81fae7.c)
 *     wistd::__function::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl(void)_::__move @ 0x1802E1480 (wistd--__function--__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl_void__::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_18072C260;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
