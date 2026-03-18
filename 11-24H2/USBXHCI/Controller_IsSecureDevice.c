/*
 * XREFs of Controller_IsSecureDevice @ 0x1400328B8
 * Callers:
 *     Command_CreateCommandWatchdogTimer @ 0x1400743DC (Command_CreateCommandWatchdogTimer.c)
 *     Controller_PopulateDeviceFlags @ 0x140076BD8 (Controller_PopulateDeviceFlags.c)
 *     Controller_TelemetryAddControllerData @ 0x140078C9C (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079BE0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x14007A0C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Interrupter_CreateInterrupter @ 0x14007BA04 (Interrupter_CreateInterrupter.c)
 *     Register_Create @ 0x14007CE80 (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x14007D158 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x14007DABC (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x14007E080 (RootHub_PrepareHardware.c)
 *     Control_Initialize @ 0x140080740 (Control_Initialize.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x140080D10 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1400817D0 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Bulk_GetConfiguration @ 0x140081E04 (Bulk_GetConfiguration.c)
 *     CommonBuffer_Create @ 0x1400823EC (CommonBuffer_Create.c)
 *     TR_Create @ 0x140082E54 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 1001);
}
