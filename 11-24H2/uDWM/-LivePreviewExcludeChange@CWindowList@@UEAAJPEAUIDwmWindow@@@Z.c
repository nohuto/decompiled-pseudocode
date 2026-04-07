/*
 * XREFs of ?LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::LivePreviewExcludeChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  struct CWindowData *v6; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v6);
  v4 = v6;
  if ( v6 )
    *((_BYTE *)v4 + 738) ^= (*((_BYTE *)v4 + 738) ^ ((*(unsigned __int8 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2) << 6)) & 0x40;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return 0LL;
}
