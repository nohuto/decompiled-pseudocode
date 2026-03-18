/*
 * XREFs of PnpPowerStateTransitionWatchdogPopRecord @ 0x140AB8880
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7F278 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B698EC (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     ZwPowerInformation @ 0x1406A6FF0 (ZwPowerInformation.c)
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
