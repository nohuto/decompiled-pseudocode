/*
 * XREFs of ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800F33C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001B5C4 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetUseDarkModeColors(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  CWindowData *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-18h] BYREF
  CWindowData *v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v9);
  v6 = v9;
  if ( v9 && ((*((_BYTE *)v9 + 741) & 4) != 0) != a3 )
  {
    *((_BYTE *)v9 + 741) = (4 * a3) | *((_BYTE *)v9 + 741) & 0xFB;
    CWindowData::OnColorizationUpdated(v6);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
