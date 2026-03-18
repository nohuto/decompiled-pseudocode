/*
 * XREFs of _lambda_fcb4a4e7e214dab34917ad6111ff8639_::_lambda_invoker_cdecl_ @ 0x1401495A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fcb4a4e7e214dab34917ad6111ff8639_::operator() @ 0x1401495BC (_lambda_fcb4a4e7e214dab34917ad6111ff8639_--operator().c)
 */

__int64 __fastcall lambda_fcb4a4e7e214dab34917ad6111ff8639_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_fcb4a4e7e214dab34917ad6111ff8639_::operator()(a1, a2, v2);
}
