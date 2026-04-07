/*
 * XREFs of ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18010CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180051680 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetUseDarkModeColors(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  CWindowData *v8; // rcx
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWindowData *v12; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v8 = v12;
    if ( v12 && ((*((_BYTE *)v12 + 677) & 4) != 0) != a3 )
    {
      *((_BYTE *)v12 + 677) = (4 * a3) | *((_BYTE *)v12 + 677) & 0xFB;
      CWindowData::OnColorizationUpdated(v8);
    }
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA1,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)SyncedWindowData);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v10);
  return v7;
}
