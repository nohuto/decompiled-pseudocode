/*
 * XREFs of xxxInheritWindowMonitor @ 0x14008C114
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxAddShadow @ 0x14015CF84 (xxxAddShadow.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     NtUserInheritWindowMonitor @ 0x1401E6690 (NtUserInheritWindowMonitor.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140048130 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateCatHandleNoSecure @ 0x14008C510 (HMValidateCatHandleNoSecure.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14008C5F8 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x14008D07C (GetNewMonitor.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14008D5F0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14008D624 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ScaleDPIRect @ 0x140098C18 (ScaleDPIRect.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x14014EAA8 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, struct tagWND *a2, int a3)
{
  __int64 v4; // rcx
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 TopLevelWindow; // r14
  unsigned __int16 v11; // r15
  struct tagWND *v12; // rdx
  __int64 NewMonitor; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct tagBWL *v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  struct tagWLDBI *v36; // r14
  _QWORD *i; // r12
  struct tagWND *v38; // rax
  struct tagTHREADINFO *v39; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 UserSessionState; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct tagTHREADINFO *v47; // rax
  __int64 v48; // rbx
  unsigned int v49; // [rsp+30h] [rbp-30h]
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-28h] BYREF
  __int64 v51; // [rsp+40h] [rbp-20h]
  struct tagRECT v52; // [rsp+48h] [rbp-18h] BYREF

  v49 = 1;
  v4 = *((_QWORD *)a1 + 5);
  v52 = *(struct tagRECT *)(v4 + 88);
  v7 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
  TopLevelWindow = GetTopLevelWindow((__int64)a2);
  if ( v7 )
    v11 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 60LL);
  else
    v11 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v42 = *(_QWORD *)a2;
      UserSessionState = W32GetUserSessionState(v9, v8);
      v49 = InternalSetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41426), v42, 1u);
    }
    else
    {
      v44 = W32GetUserSessionState(v9, v8);
      InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v44 + 41426), 1u);
    }
  }
  v51 = 0LL;
  v12 = 0LL;
  if ( a2 != a1 )
    v12 = a2;
  BugCheckParameter3 = -1LL;
  if ( !v12
    || TopLevelWindow && (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 20LL) & 0x20) != 0
    || (NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v12 + 5) + 256LL))) == 0 )
  {
    NewMonitor = GetNewMonitor(a1);
    v16 = PtiCurrent(v15, v14);
    BugCheckParameter3 = *((_QWORD *)v16 + 57);
    *((_QWORD *)v16 + 57) = &BugCheckParameter3;
    v51 = NewMonitor;
    HMLockObject(NewMonitor);
    v18 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
    if ( (_WORD)v18 != v11 )
      xxxAppAdjustDpiCandidateRect(a1);
  }
  else
  {
    v47 = PtiCurrent(v46, v45);
    Win32HM_LockIntoThread<0>((__int64)v47, NewMonitor, &BugCheckParameter3);
    if ( !HasMaximizedState(a1) )
    {
      v18 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v18 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 688LL) & 0x2000000) == 0 )
      {
        if ( v7 )
        {
          v48 = *(_QWORD *)(v18 + 88);
          v18 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
          if ( (_WORD)v18 != v11 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1) )
            ScaleDPIRect(
              (unsigned int)&v52,
              *((_QWORD *)a1 + 5) + 88,
              *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL),
              v11,
              v48,
              v48);
        }
      }
    }
  }
  v19 = PtiCurrent(v17, v18);
  v20 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v19, &BugCheckParameter3);
  BugCheckParameter3 = -1LL;
  v51 = 0LL;
  if ( v20 )
  {
    v25 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 63480);
    if ( v25 )
    {
      *(_QWORD *)(W32GetUserSessionState(v24, v23) + 63480) = 0LL;
    }
    else
    {
      v41 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v25 = v41;
      if ( !v41 )
        goto LABEL_19;
      *(_QWORD *)(v41 + 16) = v41 + 280;
    }
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 8) = v25 + 32;
    v28 = InternalBuildHwndList((struct tagBWL *)v25, a1, 1);
    v29 = (_QWORD *)*((_QWORD *)v28 + 1);
    if ( (unsigned __int64)v29 >= *((_QWORD *)v28 + 2) )
    {
      Win32FreePool(v28);
    }
    else
    {
      *v29 = 1LL;
      *((_QWORD *)v28 + 3) = PtiCurrent(v27, v26);
      *((_QWORD *)v28 + 3) = PtiCurrent(v31, v30);
      v34 = *(_QWORD *)(W32GetUserSessionState(v33, v32) + 63288);
      *(_QWORD *)v28 = v34;
      *(_QWORD *)(W32GetUserSessionState(v34, v35) + 63288) = v28;
      v36 = BuildWindowListWithDpiBoundaryInfo(a1, *((struct tagWND **)a1 + 13), v28, 0LL);
      for ( i = (_QWORD *)((char *)v28 + 32); *i != 1LL; ++i )
      {
        v38 = (struct tagWND *)HMValidateCatHandleNoSecure(*i);
        UpdateWindowMonitor(v38, (struct tagMONITOR *)NewMonitor);
      }
      if ( v36 )
      {
        UpdateWindowPositionsForDpiBoundaryChange(v36);
        FreeListFree(v36);
      }
      xxxNotifyMonitorChanged(a1, &v52, v28);
    }
  }
LABEL_19:
  if ( BugCheckParameter3 != -1LL )
  {
    v39 = PtiCurrent(v22, v21);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v39, &BugCheckParameter3);
  }
  return v49;
}
