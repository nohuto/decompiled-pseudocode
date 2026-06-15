/*
 * XREFs of wil::details::lambda_call__lambda_e9eb6cd10e7b777d96cff2e7b8cad6d3___::_lambda_call__lambda_e9eb6cd10e7b777d96cff2e7b8cad6d3___ @ 0x1800B673C
 * Callers:
 *     _CMonitorManager::CreateStreamConnection_::_1_::dtor$1 @ 0x18016D52C (_CMonitorManager--CreateStreamConnection_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$34 @ 0x18016D8B0 (_CAudioResourceManager--CreateStream_--_1_--dtor$34.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::lambda_call__lambda_e9eb6cd10e7b777d96cff2e7b8cad6d3___::_lambda_call__lambda_e9eb6cd10e7b777d96cff2e7b8cad6d3___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
