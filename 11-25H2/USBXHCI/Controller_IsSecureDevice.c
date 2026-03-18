/*
 * XREFs of Controller_IsSecureDevice @ 0x140034338
 * Callers:
 *     Command_CreateCommandWatchdogTimer @ 0x1400743DC (Command_CreateCommandWatchdogTimer.c)
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 *     Controller_TelemetryAddControllerData @ 0x140078F88 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x14007A3B0 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Interrupter_CreateInterrupter @ 0x14007BA50 (Interrupter_CreateInterrupter.c)
 *     Register_Create @ 0x14007CEE4 (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x14007D1BC (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x14007DAC8 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x14007E08C (RootHub_PrepareHardware.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x140080930 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_Create @ 0x140080B84 (Endpoint_Create.c)
 *     Control_Initialize @ 0x1400813D0 (Control_Initialize.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140081AFC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Bulk_GetConfiguration @ 0x14008212C (Bulk_GetConfiguration.c)
 *     CommonBuffer_Create @ 0x1400826C8 (CommonBuffer_Create.c)
 *     TR_Create @ 0x14008313C (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 1001);
}
