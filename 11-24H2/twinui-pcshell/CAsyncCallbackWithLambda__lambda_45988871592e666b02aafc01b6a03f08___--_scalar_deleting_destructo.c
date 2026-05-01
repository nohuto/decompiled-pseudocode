/*
 * XREFs of CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___::_scalar_deleting_destructor_ @ 0x1805B5C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___::_CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___ @ 0x1805B5BAC (CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___::_CAsyncCallbackWithLambda__lambda_45988871592e666b02aafc01b6a03f08___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
