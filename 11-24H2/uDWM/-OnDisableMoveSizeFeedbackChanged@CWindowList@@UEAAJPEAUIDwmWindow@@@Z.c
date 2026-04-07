/*
 * XREFs of ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F11B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0910 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0B80 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnDisableMoveSizeFeedbackChanged(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // al
  struct CWindowData *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v4 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 408LL))(a2);
  v5 = v11;
  if ( !v11 )
    goto LABEL_11;
  if ( ((*((_BYTE *)v11 + 742) & 4) != 0) == v4 )
    goto LABEL_11;
  *((_BYTE *)v11 + 742) ^= (*((_BYTE *)v11 + 742) ^ (4 * v4)) & 4;
  if ( !v4 )
    goto LABEL_11;
  if ( (*((_BYTE *)v5 + 741) & 0x10) == 0
    || (v6 = CWindowList::IsInWindowMoveChange(this, *((struct IDwmWindow **)v5 + 3), 0, IMDT_TOUCH), v7 = v6, v6 >= 0) )
  {
    if ( (*((_BYTE *)v5 + 741) & 0x20) != 0 )
    {
      v6 = CWindowList::IsInWindowResizeChange(
             (struct CWindowData **)this,
             *((struct IDwmWindow **)v5 + 3),
             0,
             0,
             IMDT_TOUCH);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 3197LL;
        goto LABEL_10;
      }
    }
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  v8 = 3192LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v6);
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}
