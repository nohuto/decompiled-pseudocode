/*
 * XREFs of ImpRpcAsyncResponseHandler @ 0x14023D4A0
 * Callers:
 *     ImpWorkerRoutine @ 0x140011DF0 (ImpWorkerRoutine.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpCompleteRpc @ 0x140146100 (ImpCompleteRpc.c)
 *     ImpRpcQueryEnabledStateAsync @ 0x140147804 (ImpRpcQueryEnabledStateAsync.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 ImpRpcAsyncResponseHandler()
{
  __int64 InputMonitorSessionState; // rdi
  int v1; // eax
  int EnabledStateAsync; // ebx
  int v3; // ecx
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8[2]; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  int *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  int *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (unsigned int)ImpCompleteRpc() == -1073610734 )
  {
    if ( (unsigned int)dword_14029B1B0 > 5 )
    {
      v1 = *(_DWORD *)InputMonitorSessionState;
      v11 = 0;
      v14 = 0;
      v5 = v1;
      v9 = &v5;
      v12 = &v6;
      v10 = 4;
      v6 = -1073610734;
      v13 = 4;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029B1B0, byte_1402816C8, 0LL, 0LL, 4u, v8);
    }
    return 0;
  }
  else
  {
    EnabledStateAsync = ImpRpcQueryEnabledStateAsync();
    if ( EnabledStateAsync < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( (unsigned int)dword_14029B1B0 > 5 )
    {
      v3 = *(_DWORD *)InputMonitorSessionState;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v9 = &v6;
      v5 = *(unsigned __int8 *)(InputMonitorSessionState + 561);
      v12 = &v5;
      v6 = v3;
      v15 = &v7;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v7 = EnabledStateAsync;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029B1B0, byte_1402817CC, 0LL, 0LL, 5u, v8);
    }
  }
  return (unsigned int)EnabledStateAsync;
}
