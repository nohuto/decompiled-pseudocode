/*
 * XREFs of ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18010AF80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010A900 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010ABC0 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnDisableMoveSizeFeedbackChanged(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  struct CWindowData *v8; // rbx
  int v9; // eax
  int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v13; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v6 = 2805LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)SyncedWindowData);
    goto LABEL_14;
  }
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 416LL))(a2);
  v8 = v13;
  if ( !v13
    || ((*((_BYTE *)v13 + 678) & 4) != 0) == v7
    || (*((_BYTE *)v13 + 678) ^= (*((_BYTE *)v13 + 678) ^ (4 * v7)) & 4, !v7) )
  {
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  if ( (*((_BYTE *)v8 + 677) & 0x10) == 0
    || (v9 = CWindowList::IsInWindowMoveChange(this, *((struct IDwmWindow **)v8 + 3), 0, IMDT_TOUCH), v10 = v9, v9 >= 0) )
  {
    if ( (*((_BYTE *)v8 + 677) & 0x20) != 0 )
    {
      SyncedWindowData = CWindowList::IsInWindowResizeChange(this, *((struct IDwmWindow **)v8 + 3), 0, 0, IMDT_TOUCH);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v6 = 2825LL;
        goto LABEL_12;
      }
    }
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB04,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v9);
  v5 = v10;
LABEL_14:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
