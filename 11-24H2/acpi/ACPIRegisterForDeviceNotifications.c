/*
 * XREFs of ACPIRegisterForDeviceNotifications @ 0x14004FA40
 * Callers:
 *     ACPICMButtonStartWorker @ 0x14005BB60 (ACPICMButtonStartWorker.c)
 *     ACPIFanStartDevice @ 0x140096820 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1400C7AE0 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x140053618 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotifications(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = ACPIInternalGetDeviceExtension(a1) + 376;
  if ( v5 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v5, a2, a3);
  else
    return 3221225486LL;
}
