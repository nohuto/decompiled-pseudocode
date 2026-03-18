/*
 * XREFs of ImpRpcDisconnect @ 0x140145ED8
 * Callers:
 *     ImSessionStop @ 0x14023D1C0 (ImSessionStop.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpCompleteRpc @ 0x140146100 (ImpCompleteRpc.c)
 *     ImpRpcAsyncUnInit @ 0x140149504 (ImpRpcAsyncUnInit.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 ImpRpcDisconnect()
{
  __int64 InputMonitorSessionState; // rdi
  RPC_BINDING_HANDLE *v1; // rsi
  RPC_STATUS v2; // eax
  bool v3; // zf
  int v4; // eax
  RPC_STATUS v5; // r14d
  __int64 v7; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-88h] BYREF
  RPC_BINDING_HANDLE *Binding; // [rsp+58h] [rbp-70h]
  _QWORD *v10; // [rsp+60h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+70h] [rbp-58h] BYREF
  __int64 *v12; // [rsp+90h] [rbp-38h]
  __int64 v13; // [rsp+98h] [rbp-30h]
  _QWORD *v14; // [rsp+A0h] [rbp-28h]
  __int64 v15; // [rsp+A8h] [rbp-20h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  v8[0] = InputMonitorSessionState;
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v10 = (_QWORD *)(InputMonitorSessionState + 8);
  v8[2] = InputMonitorSessionState + 8;
  if ( !*(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v1 = (RPC_BINDING_HANDLE *)(InputMonitorSessionState + 16);
  v7 = InputMonitorSessionState + 16;
  Binding = (RPC_BINDING_HANDLE *)(InputMonitorSessionState + 16);
  if ( !*(_QWORD *)(InputMonitorSessionState + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_BYTE *)(InputMonitorSessionState + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_BYTE *)(InputMonitorSessionState + 560) )
    goto LABEL_18;
  v2 = RpcAsyncGetCallStatus((PRPC_ASYNC_STATE)(InputMonitorSessionState + 472));
  if ( v2 == 259 || (v3 = v2 == 0, v4 = 1, v3) )
    v4 = 0;
  if ( v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  RpcAsyncCancelCall((PRPC_ASYNC_STATE)(InputMonitorSessionState + 472), 1);
  v5 = ImpCompleteRpc();
  if ( v5 == -1073610672 )
    v5 = 0;
  if ( v5 >= 0 )
  {
LABEL_18:
    ImpRpcAsyncUnInit();
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, InputMonitorSessionState + 8);
    RpcBindingUnbind(*v1);
    v5 = RpcBindingFree(Binding);
    *v10 = 0LL;
    *v1 = 0LL;
  }
  if ( v5 < 0 && (unsigned int)dword_14029B1B0 > 2 )
  {
    LODWORD(v7) = v5;
    v12 = &v7;
    v13 = 4LL;
    LODWORD(v8[0]) = *(_DWORD *)InputMonitorSessionState;
    v14 = v8;
    v15 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029B1B0, byte_140281817, 0LL, 0LL, 4u, &v11);
  }
  return (unsigned int)v5;
}
