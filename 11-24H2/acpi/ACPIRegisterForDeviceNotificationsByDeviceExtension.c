/*
 * XREFs of ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x14004AA38
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x14003B890 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIRegisterForDeviceNotifications2 @ 0x14004AA20 (ACPIRegisterForDeviceNotifications2.c)
 * Callees:
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x140053618 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotificationsByDeviceExtension(__int64 a1)
{
  if ( !a1 || a1 == -376 )
    return 3221225486LL;
  else
    return ACPIRegisterForDeviceNotificationsByPowerInfo();
}
