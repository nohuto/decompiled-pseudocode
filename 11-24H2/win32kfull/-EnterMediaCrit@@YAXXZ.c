/*
 * XREFs of ?EnterMediaCrit@@YAXXZ @ 0x1401DFFE4
 * Callers:
 *     UnregisterDeviceClassNotifications @ 0x1401DFF30 (UnregisterDeviceClassNotifications.c)
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x140278C80 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x140278EF8 (-DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x140279D9C (xxxGetDeviceChangeInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall EnterMediaCrit(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 70184));
}
