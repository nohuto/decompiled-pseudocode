/*
 * XREFs of wil::details::lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___::_lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___ @ 0x18012862C
 * Callers:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x1800839A8 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     _CEndpointCharacteristics::DetermineCurrentEffectPack_::_1_::dtor$1 @ 0x1801631A3 (_CEndpointCharacteristics--DetermineCurrentEffectPack_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_1d68eae0fd094447b2813f6c1dba66de_::operator() @ 0x180128FA4 (_lambda_1d68eae0fd094447b2813f6c1dba66de_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___::_lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_1d68eae0fd094447b2813f6c1dba66de_::operator()();
  }
  return result;
}
