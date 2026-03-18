/*
 * XREFs of ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EBD4C
 * Callers:
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C01EBD30 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F0D1C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F2250 (xxxCancelTrackingForThread.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006474 (_SetSystemTimer.c)
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C005AE1C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C005E8D8 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x1C0060344 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     _ScreenToClient @ 0x1C008DF74 (_ScreenToClient.c)
 *     bSetDevDragRect @ 0x1C00910D0 (bSetDevDragRect.c)
 *     LockW32Thread @ 0x1C00ACAAC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01568F6 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A5C10 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B8228 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x1C01E8AE8 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C01E8B44 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01EE0D0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddD @ 0x1C01F1BA0 (WPP_RECORDER_AND_TRACE_SF_ddddddD.c)
 *     FindSpb @ 0x1C01F8AAC (FindSpb.c)
 *     GreWindowResizeComplete @ 0x1C0267BC4 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0267E20 (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C0283510 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C02837EC (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C02839D0 (bSetDevPreviewRect.c)
 */

void __fastcall xxxDrawDragRectEx(struct MOVESIZEDATA *a1, struct tagRECT *a2, __int64 a3, struct tagRECT *a4)
{
  int v5; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  signed int v12; // r12d
  unsigned int v13; // r13d
  char v14; // r11
  __int64 v15; // rcx
  struct tagRECT *v16; // rbx
  BOOL v17; // edi
  char v18; // dl
  char v19; // r8
  const char *v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  struct tagRECT v24; // xmm0
  __int64 *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rbx
  struct tagRECT *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r10
  __int64 v31; // r10
  __int64 v32; // r10
  __int64 v33; // r10
  LONG left; // edi
  LONG right; // r13d
  __int64 v36; // rax
  char *Spb; // rax
  __int64 RectRgnIndirect; // rax
  HRGN v39; // r12
  __int64 v40; // r8
  int v41; // r8d
  __int64 v42; // r10
  LONG v43; // edi
  LONG bottom; // ebx
  _DWORD *v45; // rdx
  struct tagWND *v46; // r10
  unsigned int v47; // eax
  __int64 *v48; // r10
  __int64 v49; // rdx
  _DWORD *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  _DWORD *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int128 v57; // xmm0
  struct tagTHREADINFO *v58; // r15
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // r8
  struct tagWND *v62; // rbx
  struct tagWND *v63; // rdx
  struct tagTHREADINFO *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  struct tagRECT v68; // xmm0
  _QWORD **v69; // rbx
  struct tagRECT *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  struct tagTHREADINFO *v80; // rax
  __int64 v81; // r9
  __int64 v82; // rax
  int v83; // r8d
  int v84; // r9d
  char v85; // dl
  int *v86; // [rsp+20h] [rbp-E0h]
  int v87; // [rsp+28h] [rbp-D8h]
  int v88; // [rsp+38h] [rbp-C8h]
  __int64 v89; // [rsp+40h] [rbp-C0h]
  __int64 v90; // [rsp+48h] [rbp-B8h]
  __int64 v91; // [rsp+50h] [rbp-B0h]
  __int64 v92; // [rsp+58h] [rbp-A8h]
  __int64 v93; // [rsp+60h] [rbp-A0h]
  __int64 v94; // [rsp+68h] [rbp-98h]
  __int64 v95; // [rsp+70h] [rbp-90h]
  unsigned int v96; // [rsp+80h] [rbp-80h] BYREF
  BOOL v97; // [rsp+84h] [rbp-7Ch]
  int v98; // [rsp+88h] [rbp-78h] BYREF
  int v99; // [rsp+8Ch] [rbp-74h]
  struct tagRECT *v100; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v101; // [rsp+98h] [rbp-68h]
  __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  struct tagTHREADINFO *v103[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v104; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v105; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-28h]
  __int128 v107; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v108; // [rsp+F0h] [rbp-10h]
  struct tagRECT v109; // [rsp+F8h] [rbp-8h] BYREF
  struct tagRECT v110; // [rsp+108h] [rbp+8h] BYREF

  v100 = a4;
  v5 = a3;
  if ( !*((_QWORD *)PtiCurrentShared((__int64)a1, (__int64)a2, a3, (__int64)a4) + 57)
    || (v96 = 5, (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v9, v8, v10, v11) + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    v96 = 4;
  }
  v12 = v5 & 0xF0000000;
  v13 = v5 & 0xFFFFFFF;
  if ( (*((_DWORD *)a1 + 50) & 0x10) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 27LL) & 8) == 0 )
  {
    if ( a2 )
      *a4 = *a2;
    return;
  }
  v14 = 0;
  if ( !a2 )
    goto LABEL_12;
  v15 = *((_QWORD *)a1 + 3) - *(_QWORD *)&a2->left;
  if ( !v15 )
    v15 = *((_QWORD *)a1 + 4) - *(_QWORD *)&a2->right;
  if ( v15 )
  {
LABEL_12:
    v97 = 0;
    v16 = a2;
    if ( !a2 )
      v16 = a4;
    v17 = 0;
    *(_QWORD *)&v104.left = v16;
    v110 = *v16;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v18 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v19 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v19 = 0;
    }
    if ( v18 || v19 )
    {
      v103[0] = (struct tagTHREADINFO *)"Drag";
      v99 = 11;
      v20 = "Preview";
      LODWORD(v95) = v110.bottom - v110.top;
      if ( v12 >= 0 )
        v20 = (const char *)v103[0];
      WPP_RECORDER_AND_TRACE_SF_sdddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v19,
        (__int64)gFullLog,
        5u,
        1u,
        v99,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
        v20);
      v16 = *(struct tagRECT **)&v104.left;
      v14 = 0;
      v17 = v97;
    }
    if ( v12 >= 0 && v13 == 3 )
    {
      v21 = DetectNewMonitor((struct tagWND **)a1, &v110);
      v14 = 0;
      if ( v21 )
      {
        v22 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
        v17 = v22 != 2;
        v97 = v17;
        if ( a2 )
        {
          if ( v22 != 2 || (v23 = *((_DWORD *)a1 + 50), v97 = v17, (v23 & 0x20) == 0) )
          {
            v24 = v110;
            v97 = v17;
            *v100 = v110;
            *a2 = v24;
          }
        }
        if ( v17 )
        {
          xxxMS_FlushWigglies();
          GenerateMouseMove(0LL);
          v14 = 0;
        }
      }
    }
    if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 && v13 >= 2 )
    {
      v98 = 0;
      v25 = (__int64 *)((char *)a1 + 16);
      v99 = 0;
      v26 = *((_QWORD *)a1 + 2);
      v96 = 0;
      v27 = *(_QWORD *)(v26 + 16);
      v102 = v27;
      v105 = 0LL;
      v106 = 0LL;
      v103[0] = (struct tagTHREADINFO *)gptiCurrent;
      v108 = 0LL;
      v107 = 0LL;
      if ( v27 != gptiCurrent )
      {
        LockW32Thread(v27, &v107);
        v14 = 0;
      }
      *(_DWORD *)(v27 + 488) |= 0x8000u;
      v28 = v100;
      if ( a2 )
        *v100 = *a2;
      v29 = *v25;
      v30 = *(_QWORD *)(*v25 + 104);
      v109 = *v28;
      if ( v30
        && !IsTopLevelWindow(v29)
        && (ScreenToClient(v31, &v109),
            ScreenToClient(v32, &v109.right),
            (*(_BYTE *)(*(_QWORD *)(v33 + 40) + 26LL) & 0x40) != 0) )
      {
        left = v109.left;
        right = v109.right;
      }
      else
      {
        left = v109.right;
        right = v109.left;
      }
      v36 = *(_QWORD *)(v29 + 40);
      v101 = right;
      if ( *(char *)(v36 + 16) < v14 )
      {
        v104 = *(struct tagRECT *)(v36 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v104, &v104.left, &a2->left) )
          {
            Spb = (char *)FindSpb(v29);
            FreeSpb(Spb);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(*v25 + 40) + 88LL);
      v39 = (HRGN)RectRgnIndirect;
      v40 = *(_QWORD *)(*(_QWORD *)(*v25 + 40) + 168LL);
      if ( v40 )
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v40, 1LL);
      ThreadLock(*v25, &v105);
      v42 = *v25;
      v43 = left - right;
      bottom = v109.bottom;
      v104.left = v43;
      v45 = *(_DWORD **)(v42 + 40);
      if ( (v45[24] - v45[22] != v43 || v45[25] - v45[23] != v109.bottom - v109.top)
        && (unsigned int)DoesQualifyForResizeOptimization(a1) )
      {
        v98 = 0;
        v47 = DoesRequireResizeLayoutSynchronization(v46);
        v49 = *v48;
        v86 = &v98;
        v99 = v47;
        if ( (unsigned int)GreWindowResizeStarted(&v98, v49, v47, &v96) && v96 )
          SetSystemTimer(*v25, 65522, v98, (int)ResizeTimerFunc, 1);
        v98 = 1;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v45) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v41) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v41) = 0;
      }
      if ( (_BYTE)v45 || (_BYTE)v41 )
      {
        v50 = *(_DWORD **)(*v25 + 40);
        WPP_RECORDER_AND_TRACE_SF_ddddddD(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v45,
          v41,
          (_DWORD)gFullLog,
          (_DWORD)v86,
          v87,
          12,
          v88,
          v50[22],
          v50[23],
          v50[24],
          v50[25],
          v50[24] - v50[22],
          *((_BYTE *)v50 + 100) - v50[23],
          20);
        v43 = v104.left;
        bottom = v109.bottom;
      }
      xxxSetWindowPos((struct tagWND *)*v25, 0LL, v101, (unsigned int)v109.top, v43, bottom - v109.top, 532);
      LOBYTE(v51) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v53) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v53) = 0;
      }
      if ( (_BYTE)v51 || (_BYTE)v53 )
      {
        v54 = *(_DWORD **)(*v25 + 40);
        LODWORD(v94) = v54[25] - v54[23];
        LODWORD(v93) = v54[24] - v54[22];
        LODWORD(v92) = v54[25];
        LODWORD(v91) = v54[24];
        LODWORD(v90) = v54[23];
        LODWORD(v89) = v54[22];
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v51,
          v53,
          (__int64)gFullLog,
          5u,
          1u,
          0xDu,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95);
      }
      if ( (*((_DWORD *)a1 + 50) & 0x8000000) != 0 )
      {
        v55 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*v25 + 40) + 256LL));
        v56 = *v25;
        *((_QWORD *)a1 + 26) = v55;
        if ( IsTopLevelWindow(v56) )
        {
          v51 = *(_QWORD *)(v53 + 40);
          if ( (*(_DWORD *)(v51 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v53 + 16) + 648LL) & 0x2000000) == 0 )
          {
            if ( a2 )
            {
              *a2 = *(struct tagRECT *)(v51 + 88);
              v53 = *v25;
            }
            *v100 = *(struct tagRECT *)(*(_QWORD *)(v53 + 40) + 88LL);
            v52 = *(_QWORD *)(*v25 + 40);
            v57 = *(_OWORD *)(v52 + 88);
            *(_QWORD *)((char *)a1 + 252) = *(_QWORD *)((char *)a1 + 260);
            *(_OWORD *)((char *)a1 + 120) = v57;
            *((_DWORD *)a1 + 63) -= *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 64) -= *((_DWORD *)a1 + 31);
          }
        }
        *((_DWORD *)a1 + 50) &= ~0x8000000u;
      }
      ThreadUnlock1(v52, v51, v53);
      v58 = (struct tagTHREADINFO *)v102;
      if ( *(struct MOVESIZEDATA **)(v102 + 672) == a1 )
      {
        v59 = GreCreateRectRgnIndirect(*(_QWORD *)(*v25 + 40) + 88LL);
        v60 = v59;
        v61 = *(_QWORD *)(*(_QWORD *)(*v25 + 40) + 168LL);
        if ( v61 )
          GreCombineRgn(v59, v59, v61, 1LL);
        if ( v39 )
        {
          if ( v60 )
          {
            GreCombineRgn(v39, v39, v60, 4LL);
          }
          else
          {
            GreDeleteObject(v39);
            v39 = 0LL;
          }
        }
        v62 = *(struct tagWND **)(GetDesktopWindow(*v25) + 112);
        ThreadLock(v62, &v105);
        v63 = v62;
        v64 = v103[0];
        xxxUpdateThreadsWindows(v103[0], v63, v39);
        ThreadUnlock1(v66, v65, v67);
        if ( v98 )
        {
          GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), *(_QWORD *)*v25);
          if ( v96 )
          {
            if ( !v99 )
              FindTimer(*v25, 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v60);
      }
      else
      {
        v64 = v103[0];
      }
      GreDeleteObject(v39);
      *((_DWORD *)v58 + 122) &= ~0x8000u;
      if ( v58 != v64 )
        PopAndFreeW32ThreadLock((__int64)&v107);
    }
    else
    {
      v68 = *v16;
      v69 = (_QWORD **)((char *)a1 + 16);
      v70 = (struct tagRECT *)*((_QWORD *)a1 + 2);
      v109 = v68;
      *(_OWORD *)v103 = *(_OWORD *)(*gpDispInfo + 24LL);
      v109 = *WindowMargins::ReduceRect(&v104, v70, (const struct tagWND *)&v109, 0LL);
      if ( v12 >= 0 )
        v71 = *((_QWORD *)a1 + 26);
      else
        v71 = *((_QWORD *)a1 + 29);
      v102 = v71;
      LogicalToPhysicalDPIRect(&v109, &v109, *(unsigned int *)((*v69)[5] + 288LL), &v102);
      if ( v17 )
        bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), (__int64)&v109, (__int64)v103, v96);
      if ( a2 )
      {
        if ( v12 < 0 && (*((_BYTE *)a1 + 200) & 0x20) != 0 )
        {
          bMoveDevPreviewRect(*(_QWORD *)(gpDispInfo + 40LL), &v109, v96, **v69, *(_QWORD *)(gpsi + 4960LL));
        }
        else
        {
          LOBYTE(v73) = v12 < 0;
          if ( !*((_QWORD *)PtiCurrentShared(v73, v72, v74, v75) + 57)
            || (v80 = PtiCurrentShared(v77, v76, v78, v79),
                v81 = 1LL,
                (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)v80 + 57) + 8LL) + 64LL) & 1) == 0) )
          {
            v81 = 0LL;
          }
          bMoveDevDragRect(*(_QWORD *)(gpDispInfo + 40LL), &v109, v103, v81);
        }
        *v100 = *a2;
      }
      else
      {
        if ( v13 )
        {
          v25 = (__int64 *)((char *)a1 + 16);
          if ( v13 == 1 && v12 < 0 )
            bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 40LL), *(_QWORD *)(gpsi + 4960LL));
          goto LABEL_124;
        }
        if ( v12 >= 0 )
          bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), (__int64)&v109, (__int64)v103, v96);
        else
          bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 40LL), *(_QWORD *)(gpsi + 4960LL));
      }
      v25 = (__int64 *)((char *)a1 + 16);
    }
LABEL_124:
    if ( v97 && *((_DWORD *)a1 + 44) == 9 )
    {
      v102 = *((_QWORD *)a1 + 26);
      v82 = *v25;
      v100 = 0LL;
      PhysicalToLogicalDPIPoint(&v100, (char *)a1 + 268, *(unsigned int *)(*(_QWORD *)(v82 + 40) + 288LL), &v102);
      v83 = v110.left - (_DWORD)v100;
      v84 = v110.top - HIDWORD(v100);
      *((_DWORD *)a1 + 43) = v110.top - HIDWORD(v100);
      *((_DWORD *)a1 + 42) = v83;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v85 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v85 = 0;
      }
      if ( v85 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v90) = v84;
        LODWORD(v89) = v83;
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v85,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          1u,
          0xEu,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          v89,
          v90);
      }
    }
  }
}
