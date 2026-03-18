/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0010BBC
 * Callers:
 *     UserPowerStateCallout @ 0x1C0010460 (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1C0133C20 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C0133F40 (PowerOnMonitor.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 */

void UserSessionSwitchBlock_End(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v0);
  if ( !--gnPoSessionSwitchBlockCount )
    gfSessionSwitchBlock = 0;
  if ( !v0 )
    UserSessionSwitchLeaveCrit();
}
