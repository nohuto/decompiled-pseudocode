/*
 * XREFs of ??_G?$TItem@VCKsNotificationsMonitor@@@@QEAAPEAXI@Z @ 0x18011E518
 * Callers:
 *     ?KsNotifications_ServiceStop@@YAXXZ @ 0x18011EFCC (-KsNotifications_ServiceStop@@YAXXZ.c)
 *     ?RemoveAt@?$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z @ 0x18011F300 (-RemoveAt@-$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall TItem<CKsNotificationsMonitor>::`scalar deleting destructor'(void *a1)
{
  operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
