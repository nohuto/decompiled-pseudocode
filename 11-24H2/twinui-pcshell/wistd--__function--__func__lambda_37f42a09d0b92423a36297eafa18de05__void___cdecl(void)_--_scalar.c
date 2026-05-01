/*
 * XREFs of wistd::__function::__func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x18045D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     wistd::__function::__func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl(void)_::___func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl(void)_ @ 0x18045CFD4 (wistd--__function--__func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl(void)_--___func.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl_void__::___func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl_void__(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
