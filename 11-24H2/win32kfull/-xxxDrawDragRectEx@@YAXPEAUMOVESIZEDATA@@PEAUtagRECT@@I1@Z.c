/*
 * XREFs of ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840
 * Callers:
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x140211824 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14024C350 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x140032130 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _SetSystemTimer @ 0x140094830 (_SetSystemTimer.c)
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401D3C2C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     bSetDevPreviewRect @ 0x1401D713C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     _ScreenToClient @ 0x1401D7BAC (_ScreenToClient.c)
 *     GetPhysicalScreenRect @ 0x1401DA3D0 (GetPhysicalScreenRect.c)
 *     GreWindowResizeComplete @ 0x1401DA938 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401DAAE0 (GreWindowResizeStarted.c)
 *     bMoveDevPreviewRect @ 0x1401E09F0 (bMoveDevPreviewRect.c)
 *     bMoveDevDragRect @ 0x1401E7398 (bMoveDevDragRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140203708 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x140221B50 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x140227060 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x140280D7C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402A8A84 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402A8B68 (-xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402A8C4C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     FindSpb @ 0x1402AF418 (FindSpb.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxDrawDragRectEx(struct MOVESIZEDATA *a1, struct tagRECT *a2, int a3, struct tagRECT *a4)
{
  struct tagRECT *v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r13d
  unsigned int v11; // r12d
  struct tagRECT *v12; // rax
  BOOL v13; // edi
  __int64 v14; // rcx
  char v15; // al
  __int64 UserSessionState; // rax
  const char *v17; // rcx
  struct tagRECT v18; // xmm0
  char v19; // al
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r11
  __m128i v24; // xmm6
  __int64 v25; // r10
  __int64 v26; // r10
  __int64 v27; // r10
  __int64 v28; // r10
  int left; // ebx
  LONG right; // esi
  char *Spb; // rdi
  __int64 RectRgnIndirect; // rax
  HRGN v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r8
  struct tagWND *v36; // r13
  _DWORD *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  HWND v41; // rbx
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r8
  struct tagWND *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  HWND v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rdx
  struct _RECTL *v64; // rax
  struct tagTHREADINFO *v65; // rax
  struct tagRECT *v66; // rdx
  struct tagRECT v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  char v72; // si
  __int64 v73; // rbx
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // ebx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // rax
  char v88; // r8
  struct _RECTL *v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rcx
  struct tagTHREADINFO *v92; // rax
  __int64 v93; // rdx
  int v94; // edi
  char v95; // si
  bool v96; // bl
  bool v97; // r14
  __int64 v98; // rax
  int v99; // r8d
  int v100; // edx
  char v101; // [rsp+80h] [rbp-80h]
  char v102; // [rsp+81h] [rbp-7Fh]
  int v103; // [rsp+84h] [rbp-7Ch] BYREF
  BOOL v104; // [rsp+88h] [rbp-78h]
  struct tagRECT *v105; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v106; // [rsp+98h] [rbp-68h] BYREF
  int v107; // [rsp+9Ch] [rbp-64h]
  int v108; // [rsp+A0h] [rbp-60h]
  struct tagTHREADINFO *v109; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v110; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL v111; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v113; // [rsp+E0h] [rbp-20h]
  __int128 v114; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v115; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v116; // [rsp+108h] [rbp+8h]
  struct tagRECT v117; // [rsp+110h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+120h] [rbp+20h] BYREF
  ULONG_PTR v119[2]; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v120; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v121; // [rsp+150h] [rbp+50h] BYREF

  v4 = a4;
  v105 = a4;
  if ( !*((_QWORD *)PtiCurrent((__int64)a1, (__int64)a2) + 62)
    || (v103 = 5, (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v9, v8) + 62) + 8LL) + 64LL) & 1) == 0) )
  {
    v103 = 4;
  }
  v10 = a3;
  v11 = a3 & 0xFFFFFFF;
  if ( (*((_DWORD *)a1 + 50) & 0x10) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 27LL) & 8) == 0 )
  {
    if ( a2 )
      *v4 = *a2;
    return;
  }
  if ( !a2 || *((_QWORD *)a1 + 3) != *(_QWORD *)&a2->left || *((_QWORD *)a1 + 4) != *(_QWORD *)&a2->right )
  {
    v104 = 0;
    v12 = a2;
    v13 = 0;
    if ( !a2 )
      v12 = v4;
    v121 = *v12;
    v14 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (LOBYTE(v8) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    v102 = v8;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v15 = 0;
    }
    v101 = v15;
    if ( (_BYTE)v8 || v15 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      v17 = "Preview";
      if ( v10 >= 0 )
        v17 = "Drag";
      WPP_RECORDER_AND_TRACE_SF_sdddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v102,
        v101,
        *(_QWORD *)(UserSessionState + 69416),
        5u,
        1u,
        0x10u,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v17,
        v121.left,
        v121.top,
        v121.right,
        v121.bottom,
        v121.right - v121.left,
        v121.bottom - v121.top);
      v4 = v105;
      v13 = v104;
    }
    if ( v10 >= 0 && v11 == 3 && (unsigned int)xxxDetectNewMonitor(a1, &v121) )
    {
      v18 = v121;
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL);
      v19 = *(_DWORD *)(v14 + 288) & 0xF;
      *v4 = v121;
      v13 = v19 != 2;
      v104 = v13;
      if ( a2 )
      {
        *a2 = v18;
        v104 = v19 != 2;
      }
      if ( v19 != 2 )
      {
        xxxMS_FlushWigglies();
        GenerateMouseMove(0LL);
      }
    }
    if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 && v11 >= 2 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v109 = PtiCurrent(v14, v8);
      v107 = 0;
      v115 = 0LL;
      v116 = 0LL;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      v108 = 0;
      v113 = -1LL;
      v103 = 0;
      if ( (struct tagTHREADINFO *)v20 != v109 )
        Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, v20);
      _InterlockedOr((volatile signed __int32 *)(v20 + 528), 0x8000u);
      if ( a2 )
        *v4 = *a2;
      v23 = *((_QWORD *)a1 + 2);
      v24 = *(__m128i *)v4;
      v25 = *(_QWORD *)(v23 + 104);
      v110 = *v4;
      if ( !v25 || IsTopLevelWindow(v23) )
      {
        right = _mm_cvtsi128_si32(v24);
        left = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8));
      }
      else
      {
        ScreenToClient(v26, &v110);
        ScreenToClient(v27, &v110.right);
        v21 = *(_QWORD *)(v28 + 40);
        if ( (*(_BYTE *)(v21 + 26) & 0x40) != 0 )
        {
          left = v110.left;
          right = v110.right;
          v110.left = v110.right;
          v110.right = left;
        }
        else
        {
          left = v110.right;
          right = v110.left;
        }
        v24 = (__m128i)v110;
      }
      if ( *(char *)(*(_QWORD *)(v23 + 40) + 16LL) < 0 )
      {
        Spb = (char *)FindSpb(v23);
        v21 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL);
        v114 = *(_OWORD *)(v21 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v114, (int *)&v114, &a2->left) )
            FreeSpb(Spb, v21);
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL, v21, v22);
      v33 = (HRGN)RectRgnIndirect;
      v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
      if ( v34 )
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v34, 1LL);
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *((_QWORD *)a1 + 2));
      v36 = (struct tagWND *)*((_QWORD *)a1 + 2);
      v37 = (_DWORD *)*((_QWORD *)v36 + 5);
      if ( v37[24] - v37[22] == left - right
        && (v38 = (unsigned int)(v37[25] - v37[23]),
            v39 = (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v24, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v24, 4))),
            (_DWORD)v38 == (_DWORD)v39)
        || !(unsigned int)DoesQualifyForResizeOptimization(a1) )
      {
        v47 = v103;
      }
      else
      {
        v106 = 0;
        v40 = DoesRequireResizeLayoutSynchronization(v36);
        v41 = *(HWND *)v36;
        v42 = v40;
        v108 = v40;
        v45 = W32GetUserSessionState(v44, v43);
        v46 = GreWindowResizeStarted(*(_QWORD *)(*(_QWORD *)(v45 + 57008) + 48LL), v41, v42, &v103, &v106);
        v47 = v103;
        if ( v46 && v103 )
          SetSystemTimer(*((_QWORD *)a1 + 2), 65522LL, v106, (__int64)ResizeTimerFunc, 1);
        v107 = 1;
      }
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v39, v38, v35) )
      {
        xxxMoveSizeSetWindowPos(a1, &v110);
      }
      else
      {
        v117 = (struct tagRECT)v24;
        xxxMoveSizeSetWindowPosOld(a1, &v117);
        if ( (*((_DWORD *)a1 + 50) & 0x200000) != 0 )
        {
          v49 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
          v50 = *((_QWORD *)a1 + 2);
          *((_QWORD *)a1 + 27) = v49;
          if ( IsTopLevelWindow(v50) )
          {
            v48 = *(_QWORD *)(v51 + 40);
            if ( (*(_DWORD *)(v48 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v51 + 16) + 688LL) & 0x2000000) == 0 )
            {
              if ( a2 )
              {
                *a2 = *(struct tagRECT *)(v48 + 88);
                v51 = *((_QWORD *)a1 + 2);
              }
              *v105 = *(struct tagRECT *)(*(_QWORD *)(v51 + 40) + 88LL);
              *(_OWORD *)((char *)a1 + 120) = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
            }
          }
          *((_DWORD *)a1 + 50) &= ~0x200000u;
        }
      }
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v48);
      if ( *(struct MOVESIZEDATA **)(v20 + 712) == a1 )
      {
        v54 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL, v52, v53);
        v55 = v54;
        v56 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
        if ( v56 )
          GreCombineRgn(v54, v54, v56, 1LL);
        if ( v33 )
        {
          if ( v55 )
          {
            GreCombineRgn(v33, v33, v55, 4LL);
          }
          else
          {
            GreDeleteObject(v33);
            v33 = 0LL;
          }
        }
        v57 = *(struct tagWND **)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 112);
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v119, (__int64)v57);
        xxxUpdateThreadsWindows(v109, v57, v33);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v119, v58);
        if ( v107 )
        {
          v61 = (HWND)**((_QWORD **)a1 + 2);
          v62 = W32GetUserSessionState(v60, v59);
          GreWindowResizeComplete(*(_QWORD *)(*(_QWORD *)(v62 + 57008) + 48LL), v61);
          if ( v47 )
          {
            if ( !v108 )
              FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v55);
      }
      GreDeleteObject(v33);
      _InterlockedAnd((volatile signed __int32 *)(v20 + 528), 0xFFFF7FFF);
      LOBYTE(v63) = 1;
      Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v63);
      goto LABEL_108;
    }
    v64 = (struct _RECTL *)a2;
    if ( !a2 )
      v64 = (struct _RECTL *)v4;
    v120 = (struct tagRECT)*v64;
    v111 = (struct _RECTL)*GetPhysicalScreenRect(&v111, v8);
    if ( v10 >= 0 )
      v65 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 27);
    else
      v65 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 30);
    v66 = (struct tagRECT *)*((_QWORD *)a1 + 2);
    v109 = v65;
    v67 = *WindowMargins::ReduceRect(
             (WindowMargins *)&v115,
             v66,
             (const struct tagWND *)&v120,
             (const struct tagRECT *)*(unsigned __int16 *)(*((_QWORD *)v65 + 5) + 60LL));
    v68 = *((_QWORD *)a1 + 2);
    v120 = v67;
    LogicalToPhysicalDPIRect(&v120, &v120, *(unsigned int *)(*(_QWORD *)(v68 + 40) + 288LL), &v109);
    if ( v13 )
    {
      v71 = W32GetUserSessionState(v70, v69);
      v72 = v103;
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v71 + 57008) + 48LL), (__int64)&v120, (__int64)&v111, v103);
    }
    else
    {
      v72 = v103;
    }
    if ( a2 )
    {
      if ( v10 < 0 && (*((_DWORD *)a1 + 50) & 0x20) != 0 )
      {
        v73 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v70, v69) + 19928) + 4960LL);
        v74 = **((_QWORD **)a1 + 2);
        v77 = W32GetUserSessionState(v76, v75);
        bMoveDevPreviewRect(
          *(Gre::Base **)(*(_QWORD *)(v77 + 57008) + 48LL),
          (const struct _RECTL *)&v120,
          v72,
          v74,
          v73);
      }
      else
      {
        v80 = 0;
        if ( *((_QWORD *)PtiCurrent(v70, v69) + 62) )
        {
          v79 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v79, v78) + 62) + 8LL);
          if ( (*(_DWORD *)(v79 + 64) & 1) != 0 )
            v80 = 1;
        }
        v81 = W32GetUserSessionState(v79, v78);
        bMoveDevDragRect(*(Gre::Base **)(*(_QWORD *)(v81 + 57008) + 48LL), &v120.left, &v111, v80);
      }
      *v105 = *a2;
      goto LABEL_108;
    }
    if ( v11 )
    {
      if ( v11 == 1 && v10 < 0 )
      {
        v85 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v70, v69) + 19928) + 4960LL);
        v86 = **((_QWORD **)a1 + 2);
        v87 = W32GetUserSessionState(v91, v90);
        v88 = 0;
        v89 = 0LL;
        goto LABEL_107;
      }
    }
    else
    {
      v82 = W32GetUserSessionState(v70, v69);
      if ( v10 < 0 )
      {
        v85 = *(_QWORD *)(*(_QWORD *)(v82 + 19928) + 4960LL);
        v86 = **((_QWORD **)a1 + 2);
        v87 = W32GetUserSessionState(v84, v83);
        v88 = v72;
        v89 = (struct _RECTL *)&v120;
LABEL_107:
        bSetDevPreviewRect(*(HDEV *)(*(_QWORD *)(v87 + 57008) + 48LL), (__int64)v89, v88, v86, v85);
        goto LABEL_108;
      }
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v82 + 57008) + 48LL), (__int64)&v120, (__int64)&v111, v72);
    }
LABEL_108:
    if ( v104 && *((_DWORD *)a1 + 44) == 9 )
    {
      v92 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 27);
      v105 = 0LL;
      v109 = v92;
      PhysicalToLogicalDPIPoint(
        &v105,
        (char *)a1 + 260,
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
        &v109);
      v94 = v121.left - (_DWORD)v105;
      v95 = LOBYTE(v121.top) - BYTE4(v105);
      *((_DWORD *)a1 + 43) = v121.top - HIDWORD(v105);
      *((_DWORD *)a1 + 42) = v94;
      v96 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v97 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v96 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v98 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v93);
        LOBYTE(v99) = v97;
        LOBYTE(v100) = v96;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v100,
          v99,
          *(_QWORD *)(v98 + 69416),
          4,
          1,
          17,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
          v94,
          v95);
      }
    }
  }
}
