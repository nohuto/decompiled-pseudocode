/*
 * XREFs of ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800655AC
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x1800654A0 (-OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z.c)
 *     ??1?$unique_ptr@UNotificationListEntry@PnpDeviceWatcher@@U?$default_delete@UNotificationListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x18006558C (--1-$unique_ptr@UNotificationListEntry@PnpDeviceWatcher@@U-$default_delete@UNotificationListEntr.c)
 *     ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800E05B4 (-Clear@-$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HSTRING *__fastcall PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(HSTRING *this)
{
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
