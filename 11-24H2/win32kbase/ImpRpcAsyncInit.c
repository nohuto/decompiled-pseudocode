/*
 * XREFs of ImpRpcAsyncInit @ 0x1401344E0
 * Callers:
 *     ImpInitializeWork @ 0x1401341E0 (ImpInitializeWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpAllocate @ 0x140131414 (ImpAllocate.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 ImpRpcAsyncInit()
{
  __int64 InputMonitorSessionState; // rbx
  RPC_STATUS v1; // edi
  struct _KEVENT *v2; // rax
  struct _KEVENT *v3; // rsi
  unsigned __int8 *v4; // rdx
  RPC_STATUS v6; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-38h] BYREF
  RPC_STATUS *v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v1 = RpcAsyncInitializeHandle((PRPC_ASYNC_STATE)(InputMonitorSessionState + 472), 0x58u);
  if ( v1 >= 0 )
  {
    v2 = (struct _KEVENT *)ImpAllocate(24LL, 0);
    v3 = v2;
    if ( v2 )
    {
      KeInitializeEvent(v2, SynchronizationEvent, 0);
      *(_QWORD *)(InputMonitorSessionState + 496) = 0LL;
      *(_DWORD *)(InputMonitorSessionState + 516) = 1;
      *(_QWORD *)(InputMonitorSessionState + 520) = v3;
      if ( (unsigned int)dword_14029B1B0 <= 5 )
        return (unsigned int)v1;
      v4 = (unsigned __int8 *)&unk_1402817A4;
      goto LABEL_8;
    }
    v1 = -1073741670;
  }
  if ( (unsigned int)dword_14029B1B0 > 2 )
  {
    v4 = (unsigned __int8 *)&unk_14028188D;
LABEL_8:
    v8 = &v6;
    v10 = 0;
    v6 = v1;
    v9 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029B1B0, v4, 0LL, 0LL, 3u, &v7);
  }
  return (unsigned int)v1;
}
