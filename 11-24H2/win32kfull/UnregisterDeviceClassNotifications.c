/*
 * XREFs of UnregisterDeviceClassNotifications @ 0x1401DFF30
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 * Callees:
 *     ?EnterMediaCrit@@YAXXZ @ 0x1401DFFE4 (-EnterMediaCrit@@YAXXZ.c)
 *     ?LeaveMediaCrit@@YAXXZ @ 0x14026CF28 (-LeaveMediaCrit@@YAXXZ.c)
 */

void UnregisterDeviceClassNotifications()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rdi
  void *v4; // rbx
  PVOID **v5; // rdi
  PVOID *v6; // rbx
  PVOID *v7; // rax

  EnterMediaCrit();
  UserSessionState = W32GetUserSessionState(v1, v0);
  v3 = UserSessionState;
  v4 = *(void **)(UserSessionState + 70136);
  if ( v4 )
  {
    *(_QWORD *)(UserSessionState + 70136) = 0LL;
    LeaveMediaCrit();
    IoUnregisterPlugPlayNotification(v4);
    EnterMediaCrit();
  }
  v5 = (PVOID **)(v3 + 70144);
  while ( 1 )
  {
    v6 = *v5;
    if ( (*v5)[1] != v5 || (v7 = (PVOID *)*v6, *((PVOID **)*v6 + 1) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    LeaveMediaCrit();
    if ( v6 == (PVOID *)v5 )
      break;
    IoUnregisterPlugPlayNotification(v6[3]);
    Win32FreePool(v6);
    EnterMediaCrit();
  }
}
