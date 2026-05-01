/*
 * XREFs of CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_::_scalar_deleting_destructor_ @ 0x1803019B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_::_CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_ @ 0x1803014B0 (CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__-_--_CAsyncCallbackWithLambda.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____::_CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
