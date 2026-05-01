/*
 * XREFs of CAsyncCallbackWithLambda__lambda_54981fe6d81686fb634cf26ccc6441d4___::_scalar_deleting_destructor_ @ 0x1804EC230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___::_CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___ @ 0x1804EBD30 (CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_54981fe6d81686fb634cf26ccc6441d4___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___::_CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
