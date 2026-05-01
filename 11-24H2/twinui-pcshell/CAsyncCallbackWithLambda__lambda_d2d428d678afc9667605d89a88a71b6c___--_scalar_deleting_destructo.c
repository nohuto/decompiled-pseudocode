/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___::_scalar_deleting_destructor_ @ 0x18023B060
 * Callers:
 *     <none>
 * Callees:
 *     CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___::_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___ @ 0x1802CBEB0 (CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___--_CAsyncCallbackWithLambda_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___::_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
