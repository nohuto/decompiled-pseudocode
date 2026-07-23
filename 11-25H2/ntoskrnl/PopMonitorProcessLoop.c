/*
 * XREFs of PopMonitorProcessLoop @ 0x140A7C7B8
 * Callers:
 *     PopMonitorAlpcCallback @ 0x140A7C7A0 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C215B0 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14069C060 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7C8D0 (PopMonitorProcessBrightnessAction.c)
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
