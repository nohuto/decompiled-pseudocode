/*
 * XREFs of ??1?$unique_ptr@UNotificationListEntry@PnpDeviceWatcher@@U?$default_delete@UNotificationListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x18006558C
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800655AC (--_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<PnpDeviceWatcher::NotificationListEntry>::~unique_ptr<PnpDeviceWatcher::NotificationListEntry>(
        PnpDeviceWatcher::NotificationListEntry **a1,
        unsigned int a2)
{
  PnpDeviceWatcher::NotificationListEntry *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(v2, a2);
  return result;
}
