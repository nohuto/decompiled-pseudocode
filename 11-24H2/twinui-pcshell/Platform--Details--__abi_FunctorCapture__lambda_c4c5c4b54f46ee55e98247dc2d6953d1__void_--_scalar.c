/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::_scalar_deleting_destructor_ @ 0x1806BA670
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::___abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_ @ 0x1806BA100 (Platform--Details--__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_--___abi_.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::___abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
