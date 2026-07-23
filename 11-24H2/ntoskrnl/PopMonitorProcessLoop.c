/*
 * XREFs of PopMonitorProcessLoop @ 0x140A7A858
 * Callers:
 *     PopMonitorAlpcCallback @ 0x140A7A840 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C347F4 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1406A82D0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A8570 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7A970 (PopMonitorProcessBrightnessAction.c)
 */

NTSTATUS PopMonitorProcessLoop()
{
  NTSTATUS result; // eax
  ULONG_PTR BufferLength; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+90h] [rbp-70h] BYREF
  _PORT_MESSAGE ConnectionRequest; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v5; // [rsp+108h] [rbp+8h]
  unsigned int v6; // [rsp+10Ch] [rbp+Ch]

  memset(&ObjectAttributes, 0, 44);
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  while ( 1 )
  {
    BufferLength = 48LL;
    result = ZwAlpcSendWaitReceivePort(
               PopAlpcMonitorServerPort,
               0,
               0LL,
               0LL,
               &ConnectionRequest,
               &BufferLength,
               0LL,
               0LL);
    if ( result )
      break;
    switch ( LOBYTE(ConnectionRequest.u2.ZeroInit) )
    {
      case 3u:
        PopMonitorProcessBrightnessAction(v5, v6);
        break;
      case 5u:
      case 6u:
        ZwClose(PopAlpcMonitorClientPort);
        PopAlpcMonitorClientPort = 0LL;
        break;
      case 0xAu:
        if ( PopAlpcMonitorClientPort )
        {
          ZwClose(PopAlpcMonitorClientPort);
          PopAlpcMonitorClientPort = 0LL;
        }
        memset_0(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.Flags = 0x100000;
        PortAttributes.MaxMessageLength = 256LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwAlpcAcceptConnectPort(
               &PopAlpcMonitorClientPort,
               PopAlpcMonitorServerPort,
               0,
               &ObjectAttributes,
               &PortAttributes,
               0LL,
               &ConnectionRequest,
               0LL,
               1u) < 0 )
          ZwAlpcAcceptConnectPort(
            &PopAlpcMonitorClientPort,
            PopAlpcMonitorServerPort,
            0,
            &ObjectAttributes,
            &PortAttributes,
            0LL,
            &ConnectionRequest,
            0LL,
            0);
        break;
    }
  }
  return result;
}
