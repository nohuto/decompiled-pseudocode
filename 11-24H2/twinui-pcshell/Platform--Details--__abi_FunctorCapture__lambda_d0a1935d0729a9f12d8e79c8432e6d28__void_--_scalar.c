/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::_scalar_deleting_destructor_ @ 0x18069EF60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::___abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_ @ 0x18069E9D4 (Platform--Details--__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_--___abi_.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::___abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
