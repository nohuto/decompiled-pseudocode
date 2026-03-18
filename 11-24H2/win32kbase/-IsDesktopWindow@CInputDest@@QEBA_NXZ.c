/*
 * XREFs of ?IsDesktopWindow@CInputDest@@QEBA_NXZ @ 0x1400946B8
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x14018FBDC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 */

char __fastcall CInputDest::IsDesktopWindow(CInputDest *this)
{
  char v1; // bl
  __int64 v2; // rcx
  struct tagWND *UserWindow; // rdi
  __int64 v4; // rcx

  v1 = 0;
  UserWindow = CInputDest::GetUserWindow(this);
  if ( UserWindow && *(_QWORD *)(W32GetUserSessionState(v2) + 19200) )
    return UserWindow == *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4) + 19200) + 8LL) + 24LL);
  return v1;
}
