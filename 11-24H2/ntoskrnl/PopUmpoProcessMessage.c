/*
 * XREFs of PopUmpoProcessMessage @ 0x140A180D8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x140A17FA0 (PopUmpoProcessMessages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1406A82D0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1406A82F0 (ZwAlpcCancelMessage.c)
 *     ZwAlpcOpenSenderProcess @ 0x1406A84D0 (ZwAlpcOpenSenderProcess.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PopUmpoProcessPowerMessage @ 0x140A181C4 (PopUmpoProcessPowerMessage.c)
 *     PopAcquireUmpoPushLock @ 0x140A45FAC (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140A488C8 (PopReleaseUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(PPORT_MESSAGE PortMessage, PALPC_CONTEXT_ATTR MessageContext, __int64 a3)
{
  __int16 Type; // r8
  NTSTATUS v6; // ebx
  PVOID v8; // rcx
  NTSTATUS v9; // eax
  HANDLE v10; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+90h] [rbp-19h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  Type = PortMessage->u2.s2.Type;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (unsigned __int8)Type == 1 )
    goto LABEL_11;
  if ( (unsigned __int8)Type != 2 && (unsigned __int8)Type != 3 )
  {
    if ( (unsigned __int8)Type == 5 || (unsigned __int8)Type == 6 )
    {
      PopUmpoAlpcClientConnected = 0;
      PopUmpoSyncEventInProgress = 0;
      v8 = PopConnectedUmpoProcess;
      if ( PopConnectedUmpoProcess )
      {
        ObfDereferenceObjectWithTag(PopConnectedUmpoProcess, 0x746C6644u);
        PopConnectedUmpoProcess = 0LL;
      }
      LOBYTE(v8) = 1;
      PopAcquireUmpoPushLock(v8);
      v10 = PopAlpcClientPort;
      PopAlpcClientPort = 0LL;
      PopReleaseUmpoPushLock();
      ZwClose(v10);
      return (unsigned int)-1073740032;
    }
    else
    {
      if ( (unsigned __int8)Type != 10 )
        return 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      memset_0(&PortAttributes, 0, sizeof(PortAttributes));
      PortAttributes.MaxMessageLength = 4096LL;
      v6 = ZwAlpcAcceptConnectPort(
             &PopAlpcClientPort,
             PopAlpcServerPort,
             0,
             &ObjectAttributes,
             &PortAttributes,
             0LL,
             PortMessage,
             0LL,
             PopUmpoAlpcClientConnected == 0);
      if ( v6 < 0 )
      {
        ZwAlpcAcceptConnectPort(
          &PopAlpcClientPort,
          PopAlpcServerPort,
          0,
          &ObjectAttributes,
          &PortAttributes,
          0LL,
          PortMessage,
          0LL,
          0);
        return (unsigned int)v6;
      }
      PopUmpoAlpcClientConnected = 1;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ProcessHandle = 0LL;
      v6 = ZwAlpcOpenSenderProcess(&ProcessHandle, PopAlpcServerPort, PortMessage, 0, 0x400u, &ObjectAttributes);
      if ( v6 >= 0 && ProcessHandle )
      {
        Object = 0LL;
        v9 = ObReferenceObjectByHandle(ProcessHandle, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PopConnectedUmpoProcess = Object;
        if ( v9 < 0 )
          PopConnectedUmpoProcess = 0LL;
        ZwClose(ProcessHandle);
        return 0;
      }
    }
    return (unsigned int)v6;
  }
  if ( (Type & 0x2000) != 0 )
  {
LABEL_11:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0, MessageContext);
    return 0;
  }
  v6 = PopUmpoProcessPowerMessage(&PortMessage[1], a3);
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
