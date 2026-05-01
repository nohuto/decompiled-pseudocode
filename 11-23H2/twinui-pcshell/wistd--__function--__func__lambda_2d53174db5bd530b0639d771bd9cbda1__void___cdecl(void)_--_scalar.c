/*
 * XREFs of wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1801FED90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_::___func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_ @ 0x1801FE528 (wistd--__function--__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_--___func.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl_void__::___func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl_void__(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
