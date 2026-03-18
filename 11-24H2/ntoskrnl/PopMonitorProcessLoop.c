/*
 * XREFs of PopMonitorProcessLoop @ 0x140A7FDF8
 * Callers:
 *     PopMonitorAlpcCallback @ 0x140A7FDE0 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C326B4 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1406A7330 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A75D0 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7FF10 (PopMonitorProcessBrightnessAction.c)
 */

__int64 PopMonitorProcessLoop()
{
  __int64 result; // rax
  _DWORD v1[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v2; // [rsp+A0h] [rbp-60h]
  __int16 v3; // [rsp+E4h] [rbp-1Ch]
  unsigned int v4; // [rsp+108h] [rbp+8h]
  unsigned int v5; // [rsp+10Ch] [rbp+Ch]

  memset_0(v1, 0, 0x48uLL);
  while ( 1 )
  {
    result = ZwAlpcSendWaitReceivePort((__int64)PopAlpcMonitorServerPort, 0LL);
    if ( (_DWORD)result )
      break;
    switch ( (unsigned __int8)v3 )
    {
      case 3u:
        PopMonitorProcessBrightnessAction(v4, v5);
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
        memset_0(v1, 0, 0x48uLL);
        v1[0] = 0x100000;
        v2 = 256LL;
        if ( (int)ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort) < 0 )
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort);
        break;
    }
  }
  return result;
}
