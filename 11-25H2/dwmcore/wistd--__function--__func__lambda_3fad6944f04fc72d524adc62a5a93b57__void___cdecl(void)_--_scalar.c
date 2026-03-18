/*
 * XREFs of wistd::__function::__func__lambda_3fad6944f04fc72d524adc62a5a93b57__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x180265560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_3fad6944f04fc72d524adc62a5a93b57__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (void)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
