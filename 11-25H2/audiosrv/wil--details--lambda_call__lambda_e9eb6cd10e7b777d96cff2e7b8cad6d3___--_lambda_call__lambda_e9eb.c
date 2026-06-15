/*
 * XREFs of wil::details::lambda_call__lambda_e9eb6cd10e7b777d96cff2e7b8cad6d3___::_lambda_call__lambda_e9eb6cd10e7b777d96cff2e7b8cad6d3___ @ 0x180081958
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$7 @ 0x18016320F (_BuildDeviceGraphForStream_--_1_--dtor$7.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$33 @ 0x1801644A2 (_CAudioResourceManager--CreateStream_--_1_--dtor$33.c)
 *     _CMonitorManager::CreateStreamConnection_::_1_::dtor$1 @ 0x1801677E5 (_CMonitorManager--CreateStreamConnection_--_1_--dtor$1.c)
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
