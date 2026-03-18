/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140042720
 * Callers:
 *     HUBSM_LogUnhandledEvent @ 0x14000BCD8 (HUBSM_LogUnhandledEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x14000D440 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect @ 0x140012590 (HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect.c)
 *     TUNNEL_EvtInterfaceChange @ 0x140091960 (TUNNEL_EvtInterfaceChange.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140042754 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(__int64 a1, int a2, int a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 1, (unsigned int)"usbhub3.sys", a2, a3, a4);
}
