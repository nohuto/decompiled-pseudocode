/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_scalar_deleting_destructor_ @ 0x180512080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___ @ 0x180511678 (CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
