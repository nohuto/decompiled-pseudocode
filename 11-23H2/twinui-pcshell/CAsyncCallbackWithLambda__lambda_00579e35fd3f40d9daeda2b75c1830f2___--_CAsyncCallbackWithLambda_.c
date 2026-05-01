/*
 * XREFs of CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::_CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___ @ 0x1801D8900
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::_scalar_deleting_destructor_ @ 0x1801D8E70 (CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___--_scalar_deleting_destructo.c)
 * Callees:
 *     _lambda_00579e35fd3f40d9daeda2b75c1830f2_::__lambda_00579e35fd3f40d9daeda2b75c1830f2_ @ 0x1801D88A8 (_lambda_00579e35fd3f40d9daeda2b75c1830f2_--__lambda_00579e35fd3f40d9daeda2b75c1830f2_.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::_CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___(
        __int64 a1)
{
  lambda_00579e35fd3f40d9daeda2b75c1830f2_::__lambda_00579e35fd3f40d9daeda2b75c1830f2_((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 32));
}
