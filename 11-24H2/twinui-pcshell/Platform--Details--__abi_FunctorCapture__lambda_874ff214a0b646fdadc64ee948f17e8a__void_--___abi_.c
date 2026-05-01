/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::___abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_ @ 0x1806A6C14
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::_scalar_deleting_destructor_ @ 0x1806A6D10 (Platform--Details--__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_--_scalar.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18003FC58 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::___abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_(
        _QWORD *a1)
{
  void **result; // rax

  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 1));
  result = &Platform::Details::__abi_CaptureBase::`vftable';
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  return result;
}
