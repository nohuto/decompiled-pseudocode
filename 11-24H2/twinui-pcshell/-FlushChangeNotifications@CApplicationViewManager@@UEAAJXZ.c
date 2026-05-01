/*
 * XREFs of ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x18030D710
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x180087264 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::FlushChangeNotifications(NotificationDispatcher **this)
{
  NotificationDispatcher::DispatchNotifications(this[66]);
  return 0LL;
}
