/*
 * XREFs of ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800DAE40 (-DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroyWindowTarget(CWindowList *this, struct IDwmWindow *a2)
{
  CTopLevelWindow *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  struct CWindowData *v8; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v8);
  if ( v8 && (v4 = (CTopLevelWindow *)*((_QWORD *)v8 + 55)) != 0LL )
  {
    v5 = CTopLevelWindow::DestroyWindowTarget(v4);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xBA6u, 0LL);
  }
  else
  {
    v6 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467261, 0xBA3u, 0LL);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v6;
}
