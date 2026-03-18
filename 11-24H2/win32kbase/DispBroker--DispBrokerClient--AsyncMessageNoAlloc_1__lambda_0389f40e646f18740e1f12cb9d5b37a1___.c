/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___ @ 0x1400C84BC
 * Callers:
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400C7110 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__&DrvSampleDisplayState_ @ 0x1400C875C (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__-.c)
 *     DrvDxgkSendDisplayBrokerMessage @ 0x1400C99F4 (DrvDxgkSendDisplayBrokerMessage.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___(
        __int64 a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  int v4; // r8d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v6[96]; // [rsp+50h] [rbp-78h] BYREF

  v5 = a2;
  memset(v6, 0, sizeof(v6));
  result = InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1___DrvSampleDisplayState_(
             v6,
             a2);
  if ( (int)result >= 0 )
  {
    if ( v5 )
      DisplayScenarioContextHolding(&v5);
    return DrvDxgkSendDisplayBrokerMessage(0x10000, (unsigned int)v6, v4, 0, 0LL);
  }
  return result;
}
