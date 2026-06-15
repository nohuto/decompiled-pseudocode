/*
 * XREFs of ??_G?$TItem@VCKsNotificationsMonitor@@@@QEAAPEAXI@Z @ 0x1801166D8
 * Callers:
 *     ?KsNotifications_ServiceStop@@YAXXZ @ 0x18011731C (-KsNotifications_ServiceStop@@YAXXZ.c)
 *     ?RemoveAt@?$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z @ 0x180117650 (-RemoveAt@-$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall TItem<CKsNotificationsMonitor>::`scalar deleting destructor'(void *a1)
{
  operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
