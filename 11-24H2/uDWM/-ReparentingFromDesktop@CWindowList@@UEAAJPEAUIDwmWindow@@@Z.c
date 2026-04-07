/*
 * XREFs of ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180084010
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A8C0 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ReparentingFromDesktop(CWindowList *this, struct IDwmWindow *a2)
{
  CWindowList *v4; // rcx
  struct CWindowData *v5; // rdx
  char v6; // al
  struct CWindowData *v8; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+20h]

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v8);
  v5 = v8;
  if ( v8 )
  {
    v6 = *((_BYTE *)v8 + 737);
    if ( (v6 & 0x20) != 0 )
    {
      *((_BYTE *)v8 + 737) = v6 & 0xDF;
      CWindowList::OnGDISurfaceChange(v4, v5);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
