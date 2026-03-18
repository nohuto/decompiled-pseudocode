/*
 * XREFs of ACPIUnregisterForDeviceNotifications @ 0x140052BB0
 * Callers:
 *     ACPIUnregisterForDeviceNotifications2 @ 0x140052B90 (ACPIUnregisterForDeviceNotifications2.c)
 *     ACPIFanStopDevice @ 0x1400603C0 (ACPIFanStopDevice.c)
 *     ACPIThermalStopZoneWorker @ 0x140069144 (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 */

void __fastcall ACPIUnregisterForDeviceNotifications(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  __int64 v2; // rbx
  KIRQL v3; // al

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension + 376;
  if ( DeviceExtension != -376 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    KeReleaseSpinLock(&NotifyHandlerLock, v3);
  }
}
