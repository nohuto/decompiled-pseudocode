/*
 * XREFs of PopUmpoProcessMessage @ 0x140A1899C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x140A18864 (PopUmpoProcessMessages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14069C060 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x14069C080 (ZwAlpcCancelMessage.c)
 *     ZwAlpcOpenSenderProcess @ 0x14069C260 (ZwAlpcOpenSenderProcess.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     PopUmpoProcessPowerMessage @ 0x140A18A88 (PopUmpoProcessPowerMessage.c)
 *     PopAcquireUmpoPushLock @ 0x140A4C844 (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140A4E6E0 (PopReleaseUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // r8
  int v5; // ebx
  PVOID v7; // rcx
  NTSTATUS v8; // eax
  HANDLE v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  int v16; // [rsp+60h] [rbp-49h]
  int v17; // [rsp+64h] [rbp-45h]
  __int64 v18; // [rsp+68h] [rbp-41h]
  __int64 v19; // [rsp+70h] [rbp-39h]
  int v20; // [rsp+78h] [rbp-31h]
  int v21; // [rsp+7Ch] [rbp-2Dh]
  __int128 v22; // [rsp+80h] [rbp-29h]
  _BYTE v23[16]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-9h]

  v17 = 0;
  v4 = *(_WORD *)(a1 + 4);
  v21 = 0;
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
      PopReleaseUmpoPushLock(v11, v10, v12, v13);
      ZwClose(v9);
      return (unsigned int)-1073740032;
    }
    else
    {
      if ( (unsigned __int8)v4 != 10 )
        return 0;
      v16 = 48;
      v18 = 0LL;
      v20 = 512;
      v19 = 0LL;
      v22 = 0LL;
      memset_0(v23, 0, 0x48uLL);
      v24 = 4096LL;
      v5 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort);
      if ( v5 < 0 )
      {
        ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort);
        return (unsigned int)v5;
      }
      PopUmpoAlpcClientConnected = 1;
      v16 = 48;
      v18 = 0LL;
      v20 = 512;
      v19 = 0LL;
      v22 = 0LL;
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
