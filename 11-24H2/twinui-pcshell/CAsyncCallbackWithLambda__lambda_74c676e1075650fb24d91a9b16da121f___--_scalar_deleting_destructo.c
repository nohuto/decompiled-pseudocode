/*
 * XREFs of CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___::_scalar_deleting_destructor_ @ 0x18055D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___::_CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___ @ 0x18055CA3C (CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___::_CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x90);
  return a1;
}
