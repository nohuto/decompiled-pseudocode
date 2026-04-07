/*
 * XREFs of ?SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z @ 0x1800214E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180051680 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetCornerStyle(CWindowList *a1, struct IDwmWindow *a2, int a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  CWindowData *v8; // rcx
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWindowData *v12; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(a1, a2, 1, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)SyncedWindowData,
      v10[0]);
  }
  else
  {
    v8 = v12;
    if ( v12 && *((_DWORD *)v12 + 46) != a3 )
    {
      *((_DWORD *)v12 + 46) = a3;
      CWindowData::OnColorizationUpdated(v8);
    }
    v7 = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v10);
  return v7;
}
