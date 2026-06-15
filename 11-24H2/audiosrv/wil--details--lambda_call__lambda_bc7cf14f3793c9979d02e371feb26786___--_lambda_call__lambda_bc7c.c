/*
 * XREFs of wil::details::lambda_call__lambda_bc7cf14f3793c9979d02e371feb26786___::_lambda_call__lambda_bc7cf14f3793c9979d02e371feb26786___ @ 0x180130808
 * Callers:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x180136580 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     _CEndpointCharacteristics::RemoveEffectPack_::_1_::dtor$2 @ 0x1801719A6 (_CEndpointCharacteristics--RemoveEffectPack_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_bc7cf14f3793c9979d02e371feb26786_::operator() @ 0x1801326A4 (_lambda_bc7cf14f3793c9979d02e371feb26786_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_bc7cf14f3793c9979d02e371feb26786___::_lambda_call__lambda_bc7cf14f3793c9979d02e371feb26786___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_bc7cf14f3793c9979d02e371feb26786_::operator()();
  }
  return result;
}
