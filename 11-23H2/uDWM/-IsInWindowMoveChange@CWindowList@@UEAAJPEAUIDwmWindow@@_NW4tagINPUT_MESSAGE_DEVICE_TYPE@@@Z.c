/*
 * XREFs of ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010A900
 * Callers:
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18010AF80 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180025CB4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A330C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x1800E61EC (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800E7240 (-OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x180109EAC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C02C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IsInWindowMoveChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a4)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // r15
  const struct tagRECT **v11; // rdi
  const struct tagRECT *v12; // rcx
  int SyncedWindowData; // eax
  unsigned int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  char v17; // cl
  int v18; // eax
  CAcrylicSheet *v19; // rcx
  int started; // eax
  int v21; // eax
  CTopLevelWindow3D *v22; // rcx
  int v23; // eax
  CTopLevelWindow *v24; // rcx
  int v25; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+58h] [rbp+10h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = v8;
  if ( v8 && (*(_BYTE *)(v8 + 678) & 0x14) != 0 )
    a3 = 0;
  if ( ((a4 - 4) & 0xFFFFFFFB) != 0 || !a3 && (!v8 || (*(_BYTE *)(v8 + 677) & 0x10) == 0) )
    goto LABEL_38;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
    || (v10 = 1, (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u)) )
  {
    v10 = 0;
  }
  v11 = (const struct tagRECT **)((char *)this + 704);
  v12 = (const struct tagRECT *)*((_QWORD *)this + 88);
  if ( v12 )
  {
LABEL_17:
    if ( ((v12[42].top & 0x1000) != 0) != a3 || !v9 )
    {
      BYTE1(v12[42].top) = (16 * a3) | BYTE1(v12[42].top) & 0xEF;
      (*(void (__fastcall **)(struct IDwmWindow *, LONG *))(*(_QWORD *)a2 + 88LL))(a2, &(*v11)[13].right);
      v17 = BYTE1((*v11)[42].top);
      if ( (v17 & 0x40) == 0 )
      {
        if ( (v17 & 0x10) != 0 )
        {
          v18 = CWindowList::EnsureAcrylicSheet(this);
          v14 = v18;
          if ( v18 < 0 )
          {
            v15 = (unsigned int)v18;
            v16 = 3106LL;
            goto LABEL_16;
          }
        }
        if ( v10 )
        {
          v19 = (CAcrylicSheet *)*((_QWORD *)this + 68);
          if ( v19 )
          {
            if ( ((*v11)[42].top & 0x1000) != 0 )
            {
              started = CAcrylicSheet::StartAlphaAnimation(v19, 0.0, 1.0, 0.1);
              v14 = started;
              if ( started < 0 )
              {
                v15 = (unsigned int)started;
                v16 = 3114LL;
                goto LABEL_16;
              }
            }
            else
            {
              v21 = CAcrylicSheet::StartAlphaAnimation(v19, 1.0, 0.0, 0.1);
              v14 = v21;
              if ( v21 < 0 )
              {
                v15 = (unsigned int)v21;
                v16 = 3118LL;
                goto LABEL_16;
              }
            }
          }
        }
        v22 = *(CTopLevelWindow3D **)&(*v11)[28].left;
        if ( v22 )
        {
          if ( v10 )
          {
            v23 = CTopLevelWindow3D::OnIsInWindowMoveUpdated(v22, ((*v11)[42].top & 0x1000) != 0);
            v14 = v23;
            if ( v23 < 0 )
            {
              v15 = (unsigned int)v23;
              v16 = 3124LL;
              goto LABEL_16;
            }
          }
        }
        v24 = *(CTopLevelWindow **)&(*v11)[27].right;
        if ( v24 )
          CTopLevelWindow::OnIsInWindowMove(v24, ((*v11)[42].top & 0x1000) != 0, *v11 + 3);
      }
    }
    v25 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 0);
    v14 = v25;
    if ( v25 < 0 )
    {
      v15 = (unsigned int)v25;
      v16 = 3134LL;
      goto LABEL_16;
    }
LABEL_38:
    v14 = 0;
    goto LABEL_39;
  }
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, (struct CWindowData **)this + 88);
  v14 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v12 = *v11;
    if ( !*v11 )
    {
      v14 = -2147024882;
      v15 = 2147942414LL;
      v16 = 3087LL;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  v15 = (unsigned int)SyncedWindowData;
  v16 = 3086LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v15);
LABEL_39:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v14;
}
