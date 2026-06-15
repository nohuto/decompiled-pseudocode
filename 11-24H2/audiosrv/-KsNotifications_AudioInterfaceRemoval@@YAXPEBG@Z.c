/*
 * XREFs of ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180059BC0
 * Callers:
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180059B70 (-DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180059C78 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?RemoveAt@?$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z @ 0x18011F300 (-RemoveAt@-$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KsNotifications_AudioInterfaceRemoval(const unsigned __int16 *a1)
{
  _QWORD *v2; // rbx
  CKsNotificationsMonitor *v3; // rdi
  const unsigned __int16 *v4; // rax
  int v5; // r9d
  int v6; // r8d

  EnterCriticalSection(&g_csKsNotificationMonitors);
  v2 = (_QWORD *)g_lstKsNotificationMonitors;
  while ( v2 )
  {
    v3 = (CKsNotificationsMonitor *)v2[2];
    v2 = (_QWORD *)*v2;
    v4 = a1;
    do
    {
      v5 = *(const unsigned __int16 *)((char *)v4 + *((_QWORD *)v3 + 2) - (_QWORD)a1);
      v6 = *v4 - v5;
      if ( v6 )
        break;
      ++v4;
    }
    while ( v5 );
    if ( !v6 )
    {
      TList<CKsNotificationsMonitor>::RemoveAt();
      CKsNotificationsMonitor::Dispose(v3);
      (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  LeaveCriticalSection(&g_csKsNotificationMonitors);
}
