/*
 * XREFs of PopUmpoProcessMessage @ 0x140A23CC8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x140A23B90 (PopUmpoProcessMessages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1406A7330 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1406A7350 (ZwAlpcCancelMessage.c)
 *     ZwAlpcOpenSenderProcess @ 0x1406A7530 (ZwAlpcOpenSenderProcess.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     PopUmpoProcessPowerMessage @ 0x140A23DB4 (PopUmpoProcessPowerMessage.c)
 *     PopAcquireUmpoPushLock @ 0x140A4F1FC (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140A517F8 (PopReleaseUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // r8
  int v5; // ebx
  PVOID v7; // rcx
  NTSTATUS v8; // eax
  HANDLE v9; // rbx
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  int v12; // [rsp+60h] [rbp-49h]
  int v13; // [rsp+64h] [rbp-45h]
  __int64 v14; // [rsp+68h] [rbp-41h]
  __int64 v15; // [rsp+70h] [rbp-39h]
  int v16; // [rsp+78h] [rbp-31h]
  int v17; // [rsp+7Ch] [rbp-2Dh]
  __int128 v18; // [rsp+80h] [rbp-29h]
  _BYTE v19[16]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-9h]

  v13 = 0;
  v4 = *(_WORD *)(a1 + 4);
  v17 = 0;
  if ( (unsigned __int8)v4 == 1 )
    goto LABEL_11;
  if ( (unsigned __int8)v4 != 2 && (unsigned __int8)v4 != 3 )
  {
    if ( (unsigned __int8)v4 == 5 || (unsigned __int8)v4 == 6 )
    {
      PopUmpoAlpcClientConnected = 0;
      PopUmpoSyncEventInProgress = 0;
      v7 = PopConnectedUmpoProcess;
      if ( PopConnectedUmpoProcess )
      {
        ObfDereferenceObjectWithTag(PopConnectedUmpoProcess, 0x746C6644u);
        PopConnectedUmpoProcess = 0LL;
      }
      LOBYTE(v7) = 1;
      PopAcquireUmpoPushLock(v7);
      v9 = PopAlpcClientPort;
      PopAlpcClientPort = 0LL;
      PopReleaseUmpoPushLock();
      ZwClose(v9);
      return (unsigned int)-1073740032;
    }
    else
    {
      if ( (unsigned __int8)v4 != 10 )
        return 0;
      v12 = 48;
      v14 = 0LL;
      v16 = 512;
      v15 = 0LL;
      v18 = 0LL;
      memset_0(v19, 0, 0x48uLL);
      v20 = 4096LL;
      v5 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort);
      if ( v5 < 0 )
      {
        ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort);
        return (unsigned int)v5;
      }
      PopUmpoAlpcClientConnected = 1;
      v12 = 48;
      v14 = 0LL;
      v16 = 512;
      v15 = 0LL;
      v18 = 0LL;
      Handle = 0LL;
      v5 = ZwAlpcOpenSenderProcess((__int64)&Handle, PopAlpcServerPort);
      if ( v5 >= 0 && Handle )
      {
        Object = 0LL;
        v8 = ObReferenceObjectByHandle(Handle, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PopConnectedUmpoProcess = Object;
        if ( v8 < 0 )
          PopConnectedUmpoProcess = 0LL;
        ZwClose(Handle);
        return 0;
      }
    }
    return (unsigned int)v5;
  }
  if ( (v4 & 0x2000) != 0 )
  {
LABEL_11:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0LL);
    return 0;
  }
  v5 = PopUmpoProcessPowerMessage(a1 + 40, a3);
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
