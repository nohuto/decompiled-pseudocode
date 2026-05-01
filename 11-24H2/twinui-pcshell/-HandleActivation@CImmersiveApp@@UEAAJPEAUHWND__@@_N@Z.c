/*
 * XREFs of ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x18009D610
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800353D8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18003693C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180037C8C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180038538 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18006979C (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18009C27C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x180304064 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::HandleActivation(CImmersiveApp *this, HWND a2)
{
  bool v3; // bp
  __int64 v4; // rcx
  int v6; // esi
  int v7; // r15d
  bool v8; // r8
  CImmersiveApp::CImmersiveWindowCollection *v9; // r14
  int v10; // eax
  _DWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  HWND v13; // [rsp+28h] [rbp-30h]
  bool v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 40);
  v6 = 0;
  v14 = 0;
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4) )
  {
    v9 = (CImmersiveApp *)((char *)this + 176);
  }
  else
  {
    v6 = CImmersiveApp::CImmersiveWindowCollection::ProcessActivation(
           (CImmersiveApp *)((char *)this + 176),
           a2,
           v8,
           &v14);
    v9 = (CImmersiveApp *)((char *)this + 176);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v3 = v14;
  }
  v10 = *((_DWORD *)this + 114);
  if ( (v10 & 2) == 0 )
  {
    *((_DWORD *)this + 114) = v10 | 2;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 564));
    v7 = 2;
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v9) )
  {
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this + 176, 1);
    if ( (*((_BYTE *)this + 380) & 2) == 0 )
      CImmersiveApp::CImmersiveWindowCollection::_OnDeferredGhostBitsClear((CImmersiveApp *)((char *)this + 176));
    *((_BYTE *)this + 680) = 1;
    *((_DWORD *)this + 171) = 1;
  }
  if ( v3 )
  {
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp *)((char *)this + 176));
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 176)) )
  {
    CImmersiveApp::_SetApplicationForegroundPriority((__int64)this - 112, 0);
  }
  if ( v7 )
  {
    v12[0] = v7;
    v12[1] = 0;
    v13 = a2;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)((char *)this - 112),
      (const struct APP_CHANGE_INFO *const)v12,
      1uLL);
  }
  return (unsigned int)v6;
}
