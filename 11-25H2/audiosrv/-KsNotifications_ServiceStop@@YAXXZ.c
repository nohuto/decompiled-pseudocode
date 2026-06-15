/*
 * XREFs of ?KsNotifications_ServiceStop@@YAXXZ @ 0x18011731C
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800CEA40 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180066318 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ??_G?$TItem@VCKsNotificationsMonitor@@@@QEAAPEAXI@Z @ 0x1801166D8 (--_G-$TItem@VCKsNotificationsMonitor@@@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void KsNotifications_ServiceStop(void)
{
  void *v0; // rcx
  __int64 v1; // rax
  CKsNotificationsMonitor *v2; // rbx

  while ( 1 )
  {
    v0 = (void *)g_lstKsNotificationMonitors;
    if ( !g_lstKsNotificationMonitors )
      break;
    v1 = *(_QWORD *)g_lstKsNotificationMonitors;
    v2 = *(CKsNotificationsMonitor **)(g_lstKsNotificationMonitors + 16);
    g_lstKsNotificationMonitors = v1;
    if ( v1 )
      *(_QWORD *)(v1 + 8) = 0LL;
    else
      qword_1801CF618 = 0LL;
    TItem<CKsNotificationsMonitor>::`scalar deleting destructor'(v0);
    --dword_1801CF620;
    CKsNotificationsMonitor::Dispose(v2);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
