/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402A905C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _GetMessagePos @ 0x14004A3B8 (_GetMessagePos.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x140093938 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x140110890 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140204128 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x140220E20 (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140248C08 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14024C350 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026C4B0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A6EA8 (-UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A7BD4 (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z @ 0x1402DC3D4 (-PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxMS_TrackMove(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, MOVESIZEDATA *a5)
{
  int v6; // ebx
  __int64 v8; // rdx
  int v9; // r12d
  char v10; // si
  char v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  int v26; // edi
  int v27; // r14d
  int v28; // ebx
  int v29; // esi
  __int64 v30; // rax
  __int128 v31; // xmm1
  char v32; // al
  int v33; // edi
  int v34; // r14d
  int v35; // ebx
  int v36; // esi
  __int64 v37; // rax
  char v38; // bl
  bool v39; // di
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  unsigned int v43; // edx
  int v44; // edi
  int v45; // r14d
  __int64 v46; // rdx
  __int64 KeyState; // rcx
  __int64 v48; // rdx
  bool v49; // zf
  unsigned int v50; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  unsigned int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // eax
  unsigned int v58; // eax
  int v59; // eax
  int v60; // r9d
  unsigned __int64 v61; // rbx
  unsigned int MessagePos; // eax
  __int64 v63; // r8
  __int64 v64; // rdx
  int v65; // eax
  struct tagTHREADINFO *v66; // r8
  __int64 v67; // rcx
  char v68; // si
  bool v69; // r13
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 x; // rcx
  __int64 y; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // r8d
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // eax
  __int64 DesktopWindow; // rax
  __int64 v89; // rdx
  int v90; // ebx
  int v91; // edi
  __int64 v92; // rax
  char v93; // cl
  struct CHECKPOINT *v94; // rax
  __int128 v95; // xmm0
  __int64 v96; // rdx
  int v97; // edx
  int v98; // ecx
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // [rsp+40h] [rbp-51h]
  __int64 v104; // [rsp+48h] [rbp-49h]
  __int64 v105; // [rsp+50h] [rbp-41h]
  __int64 v106; // [rsp+58h] [rbp-39h]
  __int64 v107; // [rsp+60h] [rbp-31h]
  __int64 v108; // [rsp+68h] [rbp-29h]
  char v109; // [rsp+70h] [rbp-21h]
  char v110; // [rsp+70h] [rbp-21h]
  char v111; // [rsp+71h] [rbp-20h]
  char v112; // [rsp+71h] [rbp-20h]
  struct tagPOINT v113; // [rsp+78h] [rbp-19h] BYREF
  struct tagPOINT v114; // [rsp+80h] [rbp-11h] BYREF
  struct tagTHREADINFO *x_low; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT v116; // [rsp+90h] [rbp-1h] BYREF

  *(_QWORD *)&v116.left = a3;
  v6 = a2;
  v114.x = (__int16)a4;
  v114.y = SHIWORD(a4);
  x_low = PtiCurrent(a1, a2);
  v8 = 0LL;
  v9 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_Ddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      1,
      69,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v6,
      v114.x,
      v114.y);
  }
  v15 = v6 - 256;
  if ( v15 )
  {
    v16 = v15 - 4;
    if ( v16 )
    {
      v17 = v16 - 252;
      if ( v17 )
      {
        if ( v17 != 2 )
          return;
        v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
          LOBYTE(v21) = v19;
          LOBYTE(v22) = v18;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v22,
            v21,
            *(_QWORD *)(v20 + 69416),
            4,
            1,
            70,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
        }
        xxxTM_MoveDragRect(a5, a4);
        v24 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v25 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v25 = 0;
        }
        v109 = v25;
        LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v111 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v26 = *((_DWORD *)a5 + 9);
          v27 = *((_DWORD *)a5 + 7);
          v28 = *((_DWORD *)a5 + 8);
          v29 = *((_DWORD *)a5 + 6);
          v30 = W32GetUserSessionState(v24, v23);
          LODWORD(v105) = v28;
          LODWORD(v104) = v27;
          LODWORD(v103) = v29;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v109,
            v111,
            *(_QWORD *)(v30 + 69416),
            4u,
            1u,
            0x47u,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
            v103,
            v104,
            v105,
            v26,
            v28 - v29,
            v26 - v27);
        }
        if ( (*((_DWORD *)a5 + 50) & 0x80000) != 0 )
        {
          v31 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v31;
          v24 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v32 = 0;
          }
          v110 = v32;
          LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v112 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v33 = *((_DWORD *)a5 + 9);
            v34 = *((_DWORD *)a5 + 7);
            v35 = *((_DWORD *)a5 + 8);
            v36 = *((_DWORD *)a5 + 6);
            v37 = W32GetUserSessionState(v24, v23);
            LODWORD(v108) = v33 - v34;
            LODWORD(v107) = v35 - v36;
            LODWORD(v106) = v33;
            LODWORD(v105) = v35;
            LODWORD(v104) = v34;
            LODWORD(v103) = v36;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v110,
              v112,
              *(_QWORD *)(v37 + 69416),
              4u,
              1u,
              0x48u,
              (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
              v103,
              v104,
              v105,
              v106,
              v107,
              v108);
          }
        }
        else if ( *((_DWORD *)a5 + 88) == 2 )
        {
          UpdateMoveSizeDataForCancelation(a5);
          v24 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v38 = 0;
          }
          v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
            LOBYTE(v41) = v39;
            LOBYTE(v42) = v38;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v42,
              v41,
              *(_QWORD *)(v40 + 69416),
              4,
              1,
              73,
              (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
          }
        }
        *((_DWORD *)a5 + 50) &= ~2u;
        goto LABEL_112;
      }
      v43 = a4;
LABEL_48:
      xxxTM_MoveDragRect(a5, v43);
      return;
    }
  }
  v44 = 0;
  v45 = 0;
  KeyState = (unsigned __int16)_GetKeyState(17LL);
  if ( *(_QWORD *)&v116.left != 13LL )
  {
    if ( *(_QWORD *)&v116.left == 27LL )
    {
      v79 = W32GetUserSessionState(KeyState, v46);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v79 + 57008) + 48LL), 0LL, 0LL, 0);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)x_low + 132, 0, 0) & 0x10) != 0 )
      {
        xxxDrawDragRectEx(a5, 0LL, 2, (struct tagRECT *)((char *)a5 + 24));
        _InterlockedAnd((volatile signed __int32 *)x_low + 132, 0xFFFFFFEF);
      }
      UpdateMoveSizeDataForCancelation(a5);
      goto LABEL_118;
    }
    v48 = 0x140000000uLL;
    if ( *(_QWORD *)&v116.left != 37LL )
    {
      if ( *(_QWORD *)&v116.left == 38LL )
      {
LABEL_55:
        if ( *((_DWORD *)a5 + 46) )
        {
          if ( (unsigned int)KeyState >= 0x8000
            || (v50 = GetDpiForSystem(KeyState), (int)GetDpiDependentMetric(13, v50) < 4) )
          {
            v44 = 1;
          }
          else
          {
            DpiForSystem = GetDpiForSystem(KeyState);
            DpiDependentMetric = GetDpiDependentMetric(13, DpiForSystem);
            v48 = (unsigned int)(DpiDependentMetric >> 31);
            v44 = DpiDependentMetric / 2;
          }
          if ( *(_QWORD *)&v116.left == 38LL )
            v44 = -v44;
          goto LABEL_75;
        }
        v49 = *((_DWORD *)a5 + 45) == 0;
        *((_DWORD *)a5 + 46) = *(_DWORD *)&aNotTopLevel[4 * *(_QWORD *)&v116.left + 4];
LABEL_65:
        if ( !v49 )
        {
          v53 = *((_DWORD *)a5 + 50) & 0xFFFFFEFF;
          *((_DWORD *)a5 + 62) = 4;
          *((_DWORD *)a5 + 50) = v53 & 0xEFFFFFFF;
          MOVESIZEDATA::SHData_ResetRuntimeState(a5, 0x140000000LL);
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v55, v54, v56) )
            MakeArrangedStateObservable(a5);
        }
        *((_QWORD *)a5 + 21) = 0LL;
LABEL_75:
        if ( *((_DWORD *)a5 + 44) == 9 )
        {
          v60 = 9;
          v61 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
        }
        else
        {
          MessagePos = GetMessagePos(KeyState, v48);
          v60 = *((_DWORD *)a5 + 44);
          v61 = MessagePos;
        }
        v63 = *((int *)a5 + 45);
        v113 = (struct tagPOINT)v61;
        if ( (_DWORD)v63 )
        {
          LOWORD(v113.x) = *((_WORD *)a5 + 2 * dword_14035A6C0[v63] + 20) + v45;
          LODWORD(v61) = v113.x;
          x_low = (struct tagTHREADINFO *)LOWORD(v113.x);
        }
        else
        {
          x_low = (struct tagTHREADINFO *)v61;
        }
        v64 = *((int *)a5 + 46);
        if ( (_DWORD)v64 )
        {
          HIWORD(v113.x) = *((_WORD *)a5 + 2 * dword_14035A690[v64] + 20) + v44;
          LODWORD(v61) = v113.x;
        }
        if ( v60 != 9 )
        {
          v65 = v63 + v64;
          v66 = 0LL;
          *((_DWORD *)a5 + 44) = v65;
          if ( a1 )
            v66 = *(struct tagTHREADINFO **)a1;
          xxxSendTransformableMessageTimeout(
            (struct tagTHREADINFO **)a1,
            32LL,
            (unsigned __int64)v66,
            (struct tagDRAWITEMSTRUCT *)((unsigned __int16)(v65 + 9) | 0x2000000LL),
            0,
            0,
            0LL,
            1,
            1);
        }
        v114.x = (__int16)x_low - *((_DWORD *)a5 + 42);
        v114.y = SWORD1(v61) - *((_DWORD *)a5 + 43);
        if ( MOVESIZEDATA::PtInClipRegion(a5, &v114) )
        {
          v67 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v68 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v68 = 0;
          }
          v69 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v68 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v70 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
            LOBYTE(v71) = v69;
            LOBYTE(v72) = v68;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v72,
              v71,
              *(_QWORD *)(v70 + 69416),
              4,
              1,
              74,
              (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
              v114.x,
              v114.y);
          }
          x_low = (struct tagTHREADINFO *)*((_QWORD *)a5 + 27);
          v113 = v114;
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v67);
          LogicalToPhysicalDPIPoint(&v113, &v114, CurrentThreadDpiAwarenessContext, &x_low);
          v76 = W32GetUserSessionState(v75, v74);
          if ( ((*(_QWORD *)&v116.left - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
          {
            x = (unsigned int)v113.x;
            if ( ((*(_QWORD *)&v116.left - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              y = (unsigned int)v113.y;
            }
            else
            {
              y = *(unsigned int *)(v76 + 19244);
              v113.y = *(_DWORD *)(v76 + 19244);
              if ( v113.x == *(_DWORD *)(v76 + 19240) )
              {
                if ( v45 <= 0 )
                  v9 = -1;
                x = (unsigned int)(v9 + v113.x);
                v113.x += v9;
              }
            }
          }
          else
          {
            x = *(unsigned int *)(v76 + 19240);
            y = (unsigned int)v113.y;
            v113.x = *(_DWORD *)(v76 + 19240);
            if ( v113.y == *(_DWORD *)(v76 + 19244) )
            {
              if ( v44 <= 0 )
                v9 = -1;
              y = (unsigned int)(v9 + v113.y);
              v113.y += v9;
            }
          }
          zzzInternalSetCursorPos(x, y, 2, 0);
        }
        v43 = v61;
        goto LABEL_48;
      }
      if ( *(_QWORD *)&v116.left != 39LL )
      {
        if ( *(_QWORD *)&v116.left != 40LL )
          return;
        goto LABEL_55;
      }
    }
    if ( *((_DWORD *)a5 + 45) )
    {
      if ( (unsigned int)KeyState >= 0x8000
        || (v57 = GetDpiForSystem(KeyState), (int)GetDpiDependentMetric(12, v57) < 4) )
      {
        v45 = 1;
      }
      else
      {
        v58 = GetDpiForSystem(KeyState);
        v59 = GetDpiDependentMetric(12, v58);
        v48 = (unsigned int)(v59 >> 31);
        v45 = v59 / 2;
      }
      if ( *(_QWORD *)&v116.left == 37LL )
        v45 = -v45;
      goto LABEL_75;
    }
    v49 = *((_DWORD *)a5 + 46) == 0;
    *((_DWORD *)a5 + 45) = *(_DWORD *)&aNotTopLevel[4 * *(_QWORD *)&v116.left + 4];
    goto LABEL_65;
  }
  GetMessagePos(KeyState, v46);
LABEL_112:
  v82 = W32GetUserSessionState(v24, v23);
  bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v82 + 57008) + 48LL), 0LL, 0LL, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)x_low + 132, 0, 0) & 0x10) != 0 )
  {
    v83 = *((_DWORD *)a5 + 50);
    if ( (v83 & 0x200) == 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) == 0 || (v83 & 0x20) == 0 )
      xxxDrawDragRectEx(a5, 0LL, ((v83 & 0xFFF80000) << 12) | 1, (struct tagRECT *)((char *)a5 + 24));
    _InterlockedAnd((volatile signed __int32 *)x_low + 132, 0xFFFFFFEF);
  }
LABEL_118:
  v84 = W32GetUserSessionState(v81, v80);
  CCursorClip::ClearClip(*(CCursorClip **)(v84 + 36296));
  zzzLockWindowUpdate2(0LL, 1LL);
  xxxReleaseCapture(v86, v85);
  v87 = *((_DWORD *)a5 + 50) | 8;
  *((_DWORD *)a5 + 50) = v87;
  if ( (v87 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v89 == DesktopWindow )
  {
    v90 = 0;
    v91 = 0;
  }
  else
  {
    v92 = *(_QWORD *)(v89 + 40);
    v91 = *(_DWORD *)(v92 + 104);
    v90 = *(_DWORD *)(v92 + 108);
  }
  if ( *((_QWORD *)a5 + 3) != *((_QWORD *)a5 + 17) || *((_QWORD *)a5 + 4) != *((_QWORD *)a5 + 18) )
  {
    if ( (unsigned int)xxxCallHook(0LL, *(_QWORD *)a1, (__int64)a5 + 24, 5) )
    {
      v95 = *(_OWORD *)((char *)a5 + 136);
      *((_QWORD *)a5 + 27) = *((_QWORD *)a5 + 28);
      *(_OWORD *)((char *)a5 + 24) = v95;
    }
    else
    {
      v93 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( (v93 & 0x20) != 0 )
        {
          v116.left = *((_DWORD *)a5 + 34) - v91;
          v116.right = *((_DWORD *)a5 + 36) - v91;
          v116.top = *((_DWORD *)a5 + 35) - v90;
          v116.bottom = *((_DWORD *)a5 + 37) - v90;
          v94 = CHECKPOINT::Restore((struct tagWND *)a1, &v116);
          if ( v94 )
            *((_DWORD *)v94 + 4) |= 1u;
        }
      }
      else if ( (v93 & 0x20) != 0 )
      {
        v116.left = *((_DWORD *)a5 + 34) - v91;
        v116.right = *((_DWORD *)a5 + 36) - v91;
        v116.top = *((_DWORD *)a5 + 35) - v90;
        v116.bottom = *((_DWORD *)a5 + 37) - v90;
        CHECKPOINT::Restore((struct tagWND *)a1, &v116);
        SetMinimize((struct tagWND *)a1, 0);
      }
      else if ( (v93 & 1) != 0 )
      {
        SetOrClrWF(0, (struct tagWND *)a1, 0xF01u, 1);
      }
    }
  }
  v96 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
  if ( (*(_BYTE *)(v96 + 26) & 0x40) != 0 )
  {
    v97 = *(_DWORD *)(v96 + 112);
    *((_DWORD *)a5 + 8) -= v97;
    v98 = *((_DWORD *)a5 + 6);
    v99 = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 9) -= v90;
    *((_DWORD *)a5 + 7) -= v90;
    *((_DWORD *)a5 + 6) = v99;
    *((_DWORD *)a5 + 8) = v97 - v98;
  }
  else
  {
    *((_DWORD *)a5 + 6) -= v91;
    *((_DWORD *)a5 + 8) -= v91;
    *((_DWORD *)a5 + 9) -= v90;
    *((_DWORD *)a5 + 7) -= v90;
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
    AdjustFinalDragRectToKeepCaptionOnScreen(*((struct tagRECT **)a5 + 2), (struct tagRECT *)((char *)a5 + 24));
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v101, v100, v102) )
    xxxCommitMoveSize(a5);
  else
    xxxCommitMoveSizeOld((struct tagWND *)a1, a5);
}
