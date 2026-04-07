/*
 * XREFs of ?GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GhostChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v5; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 0, &v5);
  *((_BYTE *)v5 + 736) |= 0x40u;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return 0LL;
}
