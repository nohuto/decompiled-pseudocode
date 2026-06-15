/*
 * XREFs of wil::details::lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___::_lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___ @ 0x1801307E8
 * Callers:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180070C98 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     _CEndpointCharacteristics::DetermineCurrentEffectPack_::_1_::dtor$1 @ 0x18016C4C7 (_CEndpointCharacteristics--DetermineCurrentEffectPack_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_9cb6783083bf386d1787fbe42aaa9de5_::operator() @ 0x180131E6C (_lambda_9cb6783083bf386d1787fbe42aaa9de5_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___::_lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_9cb6783083bf386d1787fbe42aaa9de5_::operator()();
  }
  return result;
}
