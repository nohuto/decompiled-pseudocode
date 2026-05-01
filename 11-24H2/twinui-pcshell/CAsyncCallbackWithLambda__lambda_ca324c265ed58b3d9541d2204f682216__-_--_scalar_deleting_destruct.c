/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::_scalar_deleting_destructor_ @ 0x180218410
 * Callers:
 *     <none>
 * Callees:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x1802CC284 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--_CAsyncCallbackWithLambda.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216____::_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216____();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
