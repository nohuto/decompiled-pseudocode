/*
 * XREFs of PnpPowerStateTransitionWatchdogPopRecord @ 0x140AB44B8
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7BD60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B59AAC (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     ZwPowerInformation @ 0x14069BD20 (ZwPowerInformation.c)
 */

NTSTATUS PnpPowerStateTransitionWatchdogPopRecord()
{
  _OWORD InputBuffer[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+60h] [rbp-18h]

  memset(InputBuffer, 0, sizeof(InputBuffer));
  v2 = 0LL;
  LODWORD(InputBuffer[0]) = 88;
  DWORD2(InputBuffer[0]) = 1;
  return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x38u, 0LL, 0);
}
