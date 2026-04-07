/*
 * XREFs of ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800939B0
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z @ 0x180070624 (-SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::SetPassiveUpdateMode(CWindowList *this, struct IDwmWindow *a2, bool a3)
{
  unsigned int v6; // esi
  CTopLevelWindow *v7; // rcx
  int updated; // eax
  struct CWindowData *v10; // [rsp+78h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v10 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  if ( v10 )
  {
    v7 = (CTopLevelWindow *)*((_QWORD *)v10 + 55);
    if ( v7 )
    {
      updated = CTopLevelWindow::SetPassiveUpdateMode(v7, a3);
      v6 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xBF0u, 0LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
