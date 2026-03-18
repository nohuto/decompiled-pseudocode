/*
 * XREFs of ImpRpcAsyncInit @ 0x1C00CA1F0
 * Callers:
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpAllocate @ 0x1C007B048 (ImpAllocate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledDeviceUsage @ 0x1C00D66E8 (Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledDeviceUsage.c)
 */

__int64 ImpRpcAsyncInit()
{
  struct _RPC_ASYNC_STATE *v0; // rax
  struct _RPC_ASYNC_STATE *v1; // rdi
  RPC_STATUS v2; // ebx
  struct _KEVENT *v4; // rax
  struct _KEVENT *v5; // rsi
  RPC_STATUS v6; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-38h] BYREF
  RPC_STATUS *v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  if ( (unsigned int)Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledDeviceUsage() )
  {
    if ( ImpRpcAsync )
      goto LABEL_5;
  }
  else if ( !ImpRpcAsync )
  {
LABEL_5:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  v0 = (struct _RPC_ASYNC_STATE *)ImpAllocate(88LL, 0, 0);
  v1 = v0;
  if ( !v0 )
    goto LABEL_7;
  v2 = RpcAsyncInitializeHandle(v0, 0x58u);
  if ( v2 < 0 )
    goto LABEL_8;
  v4 = (struct _KEVENT *)ImpAllocate(24LL, 0, 0);
  v5 = v4;
  if ( !v4 )
  {
LABEL_7:
    v2 = -1073741670;
LABEL_8:
    if ( (unsigned int)dword_1C0288780 > 2 )
    {
      v10 = 0;
      v8 = &v6;
      v6 = v2;
      v9 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288780,
        (unsigned __int8 *)dword_1C0261921,
        0LL,
        0LL,
        3u,
        &v7);
    }
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    return (unsigned int)v2;
  }
  KeInitializeEvent(v4, SynchronizationEvent, 0);
  v1->UserInfo = 0LL;
  v1->NotificationType = RpcNotificationTypeEvent;
  v1->u.Event = v5;
  ImpRpcAsync = v1;
  if ( (unsigned int)dword_1C0288780 > 5 )
  {
    v10 = 0;
    v8 = &v6;
    v6 = v2;
    v9 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0288780, (unsigned __int8 *)dword_1C0261A13, 0LL, 0LL, 3u, &v7);
  }
  return (unsigned int)v2;
}
