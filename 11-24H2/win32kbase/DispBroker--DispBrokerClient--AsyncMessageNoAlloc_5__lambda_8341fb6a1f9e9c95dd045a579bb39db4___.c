/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___ @ 0x1401A871C
 * Callers:
 *     ?DispBrokerAsyncRefreshOrientation@@YAJIKW4ORIENTATION_PREFERENCE@@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401A8A30 (-DispBrokerAsyncRefreshOrientation@@YAJIKW4ORIENTATION_PREFERENCE@@QEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 * Callees:
 *     DrvDxgkSendDisplayBrokerMessage @ 0x1400C99F4 (DrvDxgkSendDisplayBrokerMessage.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__&DrvSampleDisplayState_ @ 0x1401A87C8 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__-.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___(
        __int64 a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // [rsp+28h] [rbp-A0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v9[96]; // [rsp+50h] [rbp-78h] BYREF

  v8 = a2;
  memset(v9, 0, sizeof(v9));
  result = InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4___DrvSampleDisplayState_(
             v9,
             a2,
             a3);
  if ( (int)result >= 0 )
  {
    if ( v8 )
      DisplayScenarioContextHolding(&v8);
    return DrvDxgkSendDisplayBrokerMessage(0x10000LL, (__int64)v9, v6, 0LL, 0LL, v7, 0LL);
  }
  return result;
}
