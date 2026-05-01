/*
 * XREFs of CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::_scalar_deleting_destructor_ @ 0x1801D8E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::_CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___ @ 0x1801D8900 (CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::_CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
