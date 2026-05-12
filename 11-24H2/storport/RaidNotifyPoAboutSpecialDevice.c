/*
 * XREFs of RaidNotifyPoAboutSpecialDevice @ 0x1400BE2BC
 * Callers:
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x14001695C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4 (RaUnitDeviceUsageNotificationIrp.c)
 *     NvmeAdapterDeviceUsageNotificationIrp @ 0x1400CF37C (NvmeAdapterDeviceUsageNotificationIrp.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1400FDD98 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidNotifyPoAboutSpecialDevice(__int64 a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3[1] = 0;
  v5 = 16LL;
  v3[0] = 59 - (a2 != 0);
  return ZwPowerInformation(SystemPowerStateLogging|0x40, v3, 0x18u, 0LL, 0);
}
