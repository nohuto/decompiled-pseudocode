/*
 * XREFs of ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x140280D7C
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400260CC (GetMonitorRectForWindow.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetInheritedMonitor @ 0x140048BE0 (GetInheritedMonitor.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x14019E09C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401AA454 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     TransformRectAroundPoint @ 0x1401ECD0C (TransformRectAroundPoint.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1401F2474 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140221584 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x1402DC468 (-RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1402DC5C4 (-RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDetectNewMonitor(struct MOVESIZEDATA *this, struct tagRECT *a2)
{
  struct tagRECT *v3; // r13
  __int64 InheritedMonitor; // rax
  struct tagRECT v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // r11
  char v8; // r15
  __int64 v9; // rbx
  char v10; // r12
  struct tagWND *v11; // rcx
  _DWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagTHREADINFO *v19; // rax
  struct tagTHREADINFO **v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // si
  char v28; // bl
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  INT v36; // esi
  INT v37; // r8d
  int v38; // ecx
  ULONG_PTR v39; // rbx
  INT v40; // esi
  INT v41; // r8d
  int v42; // ecx
  LONG v43; // ebx
  struct tagRECT *MonitorRectForWindow; // rax
  const struct tagWND *v45; // r8
  __int64 v46; // rdx
  char v48; // si
  char v49; // bl
  __int64 UserSessionState; // rax
  int v51; // r8d
  int v52; // edx
  __int64 v53; // rdx
  unsigned __int16 v54; // ax
  char v55; // si
  char v56; // bl
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  __int64 v60; // rdx
  LONG v61; // r12d
  __int64 v62; // rax
  __int64 v63; // r8
  int right; // ebx
  int bottom; // esi
  char v66; // r14
  char v67; // r15
  __int64 v68; // rax
  char v69; // al
  _DWORD *v70; // rax
  int v71; // r15d
  int v72; // r12d
  int v73; // r13d
  _DWORD *v74; // rcx
  int v75; // ebx
  int v76; // edi
  int v77; // esi
  int v78; // r14d
  __int64 v79; // rax
  LONG v80; // edi
  LONG top; // r14d
  LONG v82; // ebx
  LONG left; // esi
  __int64 v84; // rax
  __int64 v85; // [rsp+28h] [rbp-D8h]
  __int64 v86; // [rsp+40h] [rbp-C0h]
  LONG v87; // [rsp+40h] [rbp-C0h]
  __int64 v88; // [rsp+48h] [rbp-B8h]
  __int64 v89; // [rsp+50h] [rbp-B0h]
  __int64 v90; // [rsp+58h] [rbp-A8h]
  __int64 v91; // [rsp+60h] [rbp-A0h]
  int v92; // [rsp+60h] [rbp-A0h]
  __int64 v93; // [rsp+68h] [rbp-98h]
  int v94; // [rsp+70h] [rbp-90h]
  char v95; // [rsp+80h] [rbp-80h]
  __int64 v96; // [rsp+88h] [rbp-78h] BYREF
  char v97; // [rsp+90h] [rbp-70h]
  __int64 v98; // [rsp+98h] [rbp-68h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v101; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT *v102; // [rsp+D0h] [rbp-30h]
  struct tagRECT v103; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v104; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v105; // [rsp+100h] [rbp+0h] BYREF

  v102 = a2;
  v3 = a2;
  InheritedMonitor = GetInheritedMonitor(*((struct tagWND **)this + 2));
  v5 = *v3;
  v96 = InheritedMonitor;
  v98 = *((_QWORD *)this + 27);
  v6 = *((_QWORD *)this + 2);
  v105 = v5;
  v101 = v5;
  LogicalToPhysicalDPIRect(&v105, &v105, *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL), &v98);
  v7 = v96;
  v8 = 0;
  if ( !v96 )
  {
    v7 = MonitorFromRect(&v105.left, 0, 0x12u);
    v96 = v7;
  }
  v9 = v98;
  v10 = 1;
  if ( v98 && v7 && v98 != v7 )
  {
    v11 = (struct tagWND *)*((_QWORD *)this + 2);
    v104 = 0LL;
    v12 = 0LL;
    if ( IsWindowBroadcastingDpiToChildrenX(v11) )
    {
      v15 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 60LL);
      if ( *(_WORD *)(*(_QWORD *)(v9 + 40) + 60LL) != (_WORD)v15 )
      {
        v16 = PtiCurrent(v15, v13);
        Win32HM_LockIntoThread<1>((__int64)v16, v9, (__int64 *)&BugCheckParameter3);
        v19 = PtiCurrent(v18, v17);
        Win32HM_LockIntoThread<1>((__int64)v19, v96, (__int64 *)&v103.left);
        v20 = (struct tagTHREADINFO **)*((_QWORD *)this + 2);
        v104 = v105;
        v21 = xxxAppAdjustDpiCandidateRect(v20, *(_WORD *)(*(_QWORD *)(v96 + 40) + 60LL), &v104, &v104);
        v96 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&v103, v22);
        v24 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3, v23);
        v98 = v24;
        if ( !v96 || !v24 )
        {
          Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(&v103, v25);
          Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(&BugCheckParameter3, v46);
          return 0LL;
        }
        Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(&v103, v25);
        Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(&BugCheckParameter3, v26);
        v14 = v96;
        v12 = (_DWORD *)((unsigned __int64)&v104 & -(__int64)(v21 != 0));
      }
    }
    if ( (unsigned int)(*((_DWORD *)this + 44) - 9) <= 1 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v48 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v48 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v49 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v49 = 0;
      }
      if ( v48 || v49 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v51) = v49;
        LOBYTE(v52) = v48;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v52,
          v51,
          *(_QWORD *)(UserSessionState + 69416),
          5,
          1,
          25,
          (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids);
        v14 = v96;
      }
      v85 = *(_QWORD *)((char *)this + 260);
      v53 = *(_QWORD *)(v98 + 40);
      v54 = *(_WORD *)(*(_QWORD *)(v14 + 40) + 60LL);
      v103 = 0LL;
      TransformRectAroundPoint(&v105, *(_WORD *)(v53 + 60), v12, &v103, v54, v85);
      if ( IsNewMonitorRectMostOccupied(
             &v103,
             (const struct tagRECT *)(*(_QWORD *)(v96 + 40) + 28LL),
             (const struct tagRECT *)(*(_QWORD *)(v98 + 40) + 28LL)) )
      {
        v104 = v103;
        v99 = *(_QWORD *)&v103.left;
        PhysicalToLogicalDPIPoint(
          &v99,
          &v99,
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 288LL),
          &v96);
        v61 = v99;
        BugCheckParameter3 = *(_QWORD *)((char *)this + 260);
        v62 = *((_QWORD *)this + 2);
        *(_QWORD *)&v104.left = v99;
        v63 = *(unsigned int *)(*(_QWORD *)(v62 + 40) + 288LL);
        if ( (*(_DWORD *)(*(_QWORD *)(v62 + 40) + 288LL) & 0xF) == 2 )
        {
          bottom = v104.bottom;
          right = v104.right;
        }
        else
        {
          *(_QWORD *)&v103.left = v96;
          PhysicalToLogicalDPIPoint(&BugCheckParameter3, (char *)this + 260, v63, &v103);
          v61 = BugCheckParameter3 + *((_DWORD *)this + 42);
          v60 = (unsigned int)(HIDWORD(BugCheckParameter3) + *((_DWORD *)this + 43));
          right = v101.right + v61 - v101.left;
          bottom = v101.bottom + HIDWORD(BugCheckParameter3) + *((_DWORD *)this + 43) - v101.top;
          v104.bottom = bottom;
          v104.left = v61;
          v104.top = v60;
          v104.right = right;
        }
        *v3 = v104;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v66 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v66 = 0;
        }
        v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v66 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
          v10 = 1;
        }
        else
        {
          v68 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v60);
          v92 = right - v61;
          v87 = v61;
          v10 = 1;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v66,
            v67,
            *(_QWORD *)(v68 + 69416),
            4u,
            1u,
            0x1Bu,
            (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
            v87,
            v104.top,
            right,
            bottom,
            v92,
            bottom - v104.top);
        }
        v8 = 0;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
        {
          MOVESIZEDATA::RecomputeMouseOffset(this, v3, (const struct tagPOINT *)&BugCheckParameter3);
        }
        else if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 384LL) & 0x10) != 0 )
        {
          MOVESIZEDATA::RecomputeMouseOffsetOld(this, v3);
        }
        goto LABEL_75;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v55 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v56 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v56 = 0;
      }
      if ( v55 || v56 )
      {
        v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v58) = v56;
        LOBYTE(v59) = v55;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v59,
          v58,
          *(_QWORD *)(v57 + 69416),
          5,
          1,
          26,
          (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids);
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v27 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v28 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v28 = 0;
      }
      if ( v27 || v28 )
      {
        v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v31,
          v30,
          *(_QWORD *)(v29 + 69416),
          5,
          1,
          28,
          (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids);
      }
      v32 = *((_QWORD *)this + 2);
      v103 = v105;
      PhysicalToLogicalDPIRect(&v103, &v103, *(unsigned int *)(*(_QWORD *)(v32 + 40) + 288LL), &v96);
      v35 = W32GetUserSessionState(v34, v33);
      v36 = *((_DWORD *)this + 28);
      v37 = v103.right - v103.left;
      v38 = v103.right - v103.left;
      if ( v103.right - v103.left <= *((_DWORD *)this + 26) )
        v38 = *((_DWORD *)this + 26);
      v39 = *(_QWORD *)(*(_QWORD *)(v35 + 19928) + 4960LL);
      BugCheckParameter3 = v39;
      if ( v38 < v36 )
        v36 = v38;
      if ( v36 != v37 )
      {
        v103.left = v39 - EngMulDiv(v39 - v105.left, v36, v37);
        v103.right = v103.left + v36;
      }
      v40 = *((_DWORD *)this + 29);
      v41 = v103.bottom - v103.top;
      v42 = v103.bottom - v103.top;
      if ( v103.bottom - v103.top <= *((_DWORD *)this + 27) )
        v42 = *((_DWORD *)this + 27);
      if ( v42 < v40 )
        v40 = v42;
      if ( v40 != v41 )
      {
        v43 = HIDWORD(BugCheckParameter3);
        v103.top = v43 - EngMulDiv(HIDWORD(BugCheckParameter3) - v105.top, v40, v41);
        v103.bottom = v103.top + v40;
      }
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(
                                                 (__int64)&v101,
                                                 v96,
                                                 *((const struct tagWND **)this + 2));
      v45 = (const struct tagWND *)*((_QWORD *)this + 2);
      v104 = *MonitorRectForWindow;
      v101 = *(struct tagRECT *)GetMonitorRectForWindow((__int64)&v101, v98, v45);
      if ( IsNewMonitorRectMostOccupied(&v103, &v104, &v101) )
      {
        *v3 = v103;
LABEL_75:
        v7 = v96;
        goto LABEL_76;
      }
    }
    v7 = v98;
    v96 = v98;
  }
LABEL_76:
  if ( v7 == *((_QWORD *)this + 27) || !v7 )
    return 0LL;
  *((_QWORD *)this + 27) = v7;
  if ( v98 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v69 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v69 = 0;
    }
    v95 = v69;
    v97 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v69 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v70 = *(_DWORD **)(v7 + 40);
      v71 = v70[10];
      v72 = v70[9];
      v73 = v70[8];
      LODWORD(v99) = v70[7];
      v74 = *(_DWORD **)(v98 + 40);
      v75 = v74[10];
      v76 = v74[9];
      v77 = v74[8];
      v78 = v74[7];
      v79 = W32GetUserSessionState(v74, &WPP_RECORDER_INITIALIZED);
      v94 = v72;
      v10 = 1;
      LODWORD(v93) = v73;
      LODWORD(v91) = v99;
      LODWORD(v90) = v75;
      LODWORD(v89) = v76;
      LODWORD(v88) = v77;
      LODWORD(v86) = v78;
      WPP_RECORDER_AND_TRACE_SF_dddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v95,
        v97,
        *(_QWORD *)(v79 + 69416),
        4u,
        1u,
        0x1Du,
        (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
        v86,
        v88,
        v89,
        v90,
        v91,
        v93,
        v94,
        v71);
      v3 = v102;
      v8 = 0;
    }
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
    && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v8 = 1;
  }
  if ( v10 || v8 )
  {
    v80 = v3->bottom;
    top = v3->top;
    v82 = v3->right;
    left = v3->left;
    v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LODWORD(v93) = v80 - top;
    LODWORD(v91) = v82 - left;
    LODWORD(v90) = v80;
    LODWORD(v89) = v82;
    LODWORD(v88) = top;
    LODWORD(v86) = left;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v8,
      *(_QWORD *)(v84 + 69416),
      5u,
      1u,
      0x1Eu,
      (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
      v86,
      v88,
      v89,
      v90,
      v91,
      v93);
  }
  return 1LL;
}
