/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E47A0
 * Callers:
 *     PowerOnMonitor @ 0x1400906D0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1400E4300 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerStateCallout @ 0x1401B0310 (UserPowerStateCallout.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E486C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void UserSessionSwitchBlock_End(void)
{
  __int64 v0; // rcx
  __int64 UserSessionState; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v3);
  UserSessionState = W32GetUserSessionState(v0);
  if ( (*(_DWORD *)(UserSessionState + 69112))-- == 1 )
    *(_DWORD *)(UserSessionState + 69108) = 0;
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v3);
}
