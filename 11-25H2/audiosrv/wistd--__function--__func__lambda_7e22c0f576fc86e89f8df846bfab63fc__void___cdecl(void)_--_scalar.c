/*
 * XREFs of wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x180147B90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_::___func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_ @ 0x180147018 (wistd--__function--__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_--___func.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__::___func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
