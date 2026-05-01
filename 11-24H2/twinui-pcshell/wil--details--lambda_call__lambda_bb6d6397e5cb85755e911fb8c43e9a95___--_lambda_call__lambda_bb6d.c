/*
 * XREFs of wil::details::lambda_call__lambda_bb6d6397e5cb85755e911fb8c43e9a95___::_lambda_call__lambda_bb6d6397e5cb85755e911fb8c43e9a95___ @ 0x1803A8A84
 * Callers:
 *     __lambda_39011a0525b85c0c4a9a6636d6d62842_::operator()_::_1_::dtor$0 @ 0x1806E5FFD (__lambda_39011a0525b85c0c4a9a6636d6d62842_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_bb6d6397e5cb85755e911fb8c43e9a95___::_lambda_call__lambda_bb6d6397e5cb85755e911fb8c43e9a95___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 340) = 0;
  }
  return result;
}
