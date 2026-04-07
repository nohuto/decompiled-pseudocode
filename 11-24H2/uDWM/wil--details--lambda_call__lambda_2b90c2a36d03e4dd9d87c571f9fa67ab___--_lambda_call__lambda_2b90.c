/*
 * XREFs of wil::details::lambda_call__lambda_2b90c2a36d03e4dd9d87c571f9fa67ab___::_lambda_call__lambda_2b90c2a36d03e4dd9d87c571f9fa67ab___ @ 0x180006F28
 * Callers:
 *     _CWindowSnapshot::Create_::_1_::dtor$0 @ 0x1800F6412 (_CWindowSnapshot--Create_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_::operator() @ 0x18000720C (_lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_2b90c2a36d03e4dd9d87c571f9fa67ab___::_lambda_call__lambda_2b90c2a36d03e4dd9d87c571f9fa67ab___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_::operator()();
  }
  return result;
}
