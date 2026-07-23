/*
 * XREFs of PnpPowerStateTransitionWatchdogPushRecord @ 0x140A78B64
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A78A28 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B6AFFC (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     ZwPowerInformation @ 0x1406A7F90 (ZwPowerInformation.c)
 */

NTSTATUS PnpPowerStateTransitionWatchdogPushRecord()
{
  _QWORD v1[5]; // [rsp+30h] [rbp-48h] BYREF
  int v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+5Ch] [rbp-1Ch]
  void (__fastcall __noreturn *v4)(ULONG_PTR); // [rsp+60h] [rbp-18h]

  v1[0] = 88LL;
  v1[1] = 0LL;
  v3 = 0;
  v1[3] = KeGetCurrentThread();
  v1[2] = PsInitialSystemProcess;
  v2 = 2;
  v1[4] = 0LL;
  v4 = PnpPowerStateTransitionWatchdogCallback;
  return ZwPowerInformation(PowerInformationInternal, v1, 0x38u, 0LL, 0);
}
