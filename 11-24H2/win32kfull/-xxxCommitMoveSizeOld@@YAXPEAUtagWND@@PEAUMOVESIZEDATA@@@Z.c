/*
 * XREFs of ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401D3670 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14021F87C (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026C4B0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x1402A5138 (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402A6100 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddD @ 0x1402AABF8 (WPP_RECORDER_AND_TRACE_SF_ddddddD.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CE108 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D3344 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxCommitMoveSizeOld(struct tagWND *a1, struct MOVESIZEDATA *a2)
{
  struct MOVESIZEDATA *v4; // rdx
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // ebx
  __int64 DesktopWindow; // rax
  const struct tagWND *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Prop; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // bl
  __int64 v22; // rax
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rcx
  struct tagWND *v27; // rbx
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rax
  struct tagTHREADINFO *v31; // rax
  struct tagMONITOR *v32; // r8
  __int64 v33; // rdx
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rcx
  char v37; // bl
  bool v38; // di
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // r8d
  bool v43; // zf
  struct tagWND *v44; // rdx
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rcx
  char v52; // al
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rcx
  const struct tagWND *v57; // rdx
  int v58; // ecx
  int v59; // eax
  char v60; // al
  int v61; // edi
  int v62; // r14d
  int v63; // ebx
  int v64; // esi
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  __int64 v68; // rdx
  char v69; // al
  _DWORD *v70; // rcx
  int v71; // edi
  int v72; // r14d
  int v73; // ebx
  int v74; // esi
  __int64 v75; // rax
  int v76; // [rsp+20h] [rbp-A9h]
  int v77; // [rsp+28h] [rbp-A1h]
  int v78; // [rsp+30h] [rbp-99h]
  int v79; // [rsp+38h] [rbp-91h]
  __int64 v80; // [rsp+40h] [rbp-89h]
  __int64 v81; // [rsp+48h] [rbp-81h]
  __int64 v82; // [rsp+50h] [rbp-79h]
  __int64 v83; // [rsp+58h] [rbp-71h]
  __int64 v84; // [rsp+60h] [rbp-69h]
  __int64 v85; // [rsp+68h] [rbp-61h]
  char v86; // [rsp+80h] [rbp-49h]
  char v87; // [rsp+80h] [rbp-49h]
  char v88; // [rsp+80h] [rbp-49h]
  char v89; // [rsp+80h] [rbp-49h]
  char v90; // [rsp+80h] [rbp-49h]
  char v91; // [rsp+80h] [rbp-49h]
  char v92; // [rsp+81h] [rbp-48h]
  bool v93; // [rsp+81h] [rbp-48h]
  char v94; // [rsp+81h] [rbp-48h]
  bool v95; // [rsp+81h] [rbp-48h]
  bool v96; // [rsp+81h] [rbp-48h]
  char v97; // [rsp+81h] [rbp-48h]
  char v98; // [rsp+81h] [rbp-48h]
  int v99; // [rsp+84h] [rbp-45h]
  int v100; // [rsp+84h] [rbp-45h]
  int v101; // [rsp+88h] [rbp-41h]
  CHECKPOINT *v102; // [rsp+88h] [rbp-41h]
  CHECKPOINT *v103; // [rsp+88h] [rbp-41h]
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-39h] BYREF
  __int16 v105; // [rsp+98h] [rbp-31h]
  struct tagRECT v106; // [rsp+A0h] [rbp-29h] BYREF
  struct tagMONITOR *v107; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v108; // [rsp+B8h] [rbp-11h]
  int v109; // [rsp+C8h] [rbp-1h]
  char v110; // [rsp+CCh] [rbp+3h]
  __int128 v111; // [rsp+D0h] [rbp+7h]

  v4 = (struct MOVESIZEDATA *)*((unsigned int *)a2 + 50);
  *((_DWORD *)a2 + 50) = (unsigned int)v4 | 0x1000000;
  if ( (char)v4 < 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v5 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        1,
        59,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
    return;
  }
  if ( (*((_DWORD *)a1 + 96) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptCommitMoveSize(a2, v4);
    return;
  }
  v99 = 0;
  v10 = 0;
  v101 = 0;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( *(_QWORD *)(v13 + 104) == DesktopWindow )
  {
    if ( *((_DWORD *)a2 + 44) != 9
      || *((_DWORD *)a2 + 62)
      || ((unsigned int)v12 & 0x10000000) != 0
      || (v99 = 1, v13 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL), (*(_BYTE *)(v13 + 30) & 1) == 0) )
    {
      v99 = 0;
    }
    v14 = W32GetUserSessionState(v13, v12);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v14 + 41398), 1u);
    v102 = (CHECKPOINT *)Prop;
    if ( Prop )
    {
      v106 = *(struct tagRECT *)(Prop + 20);
      if ( *(_QWORD *)&v106.left != *((_QWORD *)a2 + 19) || *(_QWORD *)&v106.right != *((_QWORD *)a2 + 20) )
      {
        v106 = *(struct tagRECT *)((char *)a2 + 152);
        v17 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v18 = 0;
        }
        v86 = v18;
        v92 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v19 = W32GetUserSessionState(v17, v16);
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v86,
            v92,
            *(_QWORD *)(v19 + 69416),
            4u,
            1u,
            0x3Cu,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
        }
      }
      if ( KeepCheckpointLeftRightAligned(a2) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v21 = 0;
        }
        v93 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
          LOBYTE(v23) = v21;
          LOBYTE(v24) = v93;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v23,
            v24,
            *(_QWORD *)(v22 + 69416),
            4,
            1,
            61,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
        }
        v106.left = *((_DWORD *)a2 + 6);
        v106.right = *((_DWORD *)a2 + 8);
      }
      CHECKPOINT::SetNormalRect(v102, a1, &v106, 0);
      v25 = MonitorFromRect(&v106.left, 2u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
      *(_QWORD *)&v106.left = v25;
      if ( v99 )
      {
        v27 = (struct tagWND *)*((_QWORD *)a2 + 30);
        v103 = v27;
      }
      else
      {
        v27 = (struct tagWND *)MonitorFromRect((INT *)a2 + 6, 2u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
        v103 = v27;
        v25 = *(_QWORD *)&v106.left;
      }
      if ( (struct tagWND *)v25 != v27 )
      {
        v28 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (v26 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v26 & 1) == 0)
          || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v29 = 0;
        }
        v87 = v29;
        LOBYTE(v26) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v94 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState(v26, *(_QWORD *)&WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_dddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v87,
            v94,
            *(_QWORD *)(v30 + 69416),
            4u,
            1u,
            0x3Eu,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
          v27 = v103;
        }
        v31 = PtiCurrent(v26, v28);
        Win32HM_LockIntoThread<1>((__int64)v31, (__int64)v27, (__int64 *)&BugCheckParameter3);
        AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)a1, v27, v32);
        Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(&BugCheckParameter3, v33);
      }
    }
    v34 = *((_DWORD *)a2 + 50);
    if ( (((v34 >> 28) ^ (v34 >> 29)) & 1) != 0 || (v34 & 0x4000) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v35 = *((_QWORD *)a1 + 5);
      v10 = 0;
      if ( *((_QWORD *)a2 + 3) != *(_QWORD *)(v35 + 88) || *((_QWORD *)a2 + 4) != *(_QWORD *)(v35 + 96) )
      {
        v101 = 1;
        goto LABEL_56;
      }
    }
    v101 = 0;
LABEL_56:
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      MakeArrangedStateObservable(a2, v12);
  }
  if ( v99 )
  {
    v36 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v37 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v37 = 0;
    }
    v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v41,
        v40,
        *(_QWORD *)(v39 + 69416),
        4,
        1,
        63,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
    v42 = *(_DWORD *)(W32GetUserSessionState(v36, v12) + 67056) & 0x10000 | 6;
    v107 = (struct tagMONITOR *)*((_QWORD *)a2 + 30);
    v108 = 0LL;
    v109 = 0;
    v110 = 0;
    v111 = 0LL;
    xxxMinMaximizeEx((__int64)a1, 3u, v42, &v107);
    *((_DWORD *)a2 + 50) |= 0x800000u;
  }
  else
  {
    v43 = (*((_DWORD *)a2 + 50) & 0x10000000) == 0;
    v44 = (struct tagWND *)*((_QWORD *)a2 + 2);
    *(_QWORD *)&v106.left = v44;
    BugCheckParameter3 = (ULONG_PTR)v44;
    v105 = 0;
    if ( !v43 )
    {
      v45 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v46 = 0;
      }
      v88 = v46;
      v95 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v45) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v47 = W32GetUserSessionState(v45, v44);
        LOBYTE(v48) = v95;
        LOBYTE(v49) = v88;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v49,
          v48,
          *(_QWORD *)(v47 + 69416),
          4,
          1,
          64,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
        v44 = *(struct tagWND **)&v106.left;
      }
      *((_DWORD *)v44 + 95) |= 0x200000u;
      LOBYTE(v105) = 1;
      AdvancedWindowPos::MarkWindowAsArranged(a1, v44);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    {
      v50 = W32GetUserSessionState(v13, v44);
      if ( GetProp((__int64)a1, *(unsigned __int16 *)(v50 + 41398), 1u) )
      {
        v51 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v52 = 0;
        }
        v89 = v52;
        v96 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v52 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v51) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v53 = W32GetUserSessionState(v51, v44);
          LOBYTE(v54) = v96;
          LOBYTE(v55) = v89;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v55,
            v54,
            *(_QWORD *)(v53 + 69416),
            4,
            1,
            65,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
        }
        *(_DWORD *)(*((_QWORD *)a2 + 2) + 380LL) &= ~0x4000000u;
        v56 = *((_QWORD *)a2 + 2);
        v108 = (unsigned __int64)a2 + 24;
        v107 = 0LL;
        v109 = 0;
        v110 = 0;
        v111 = 0LL;
        xxxMinMaximizeEx(v56, 9u, 12, &v107);
        MakeArrangedStateObservable(a2, v57);
      }
    }
    v58 = *((_DWORD *)a2 + 44);
    v59 = 516;
    v100 = 516;
    if ( v58 == 9 && !v101 || v58 == 10 )
    {
      if ( !v10 )
        v59 = 517;
      v100 = v59;
    }
    *((_DWORD *)a2 + 50) |= 0x800000u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (LOBYTE(v44) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      LOBYTE(v44) = 0;
    }
    v97 = (char)v44;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v60 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v60 = 0;
    }
    v90 = v60;
    if ( (_BYTE)v44 || v60 )
    {
      v61 = *((_DWORD *)a2 + 9);
      v62 = *((_DWORD *)a2 + 7);
      v63 = *((_DWORD *)a2 + 8);
      v64 = *((_DWORD *)a2 + 6);
      v65 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
      LOBYTE(v66) = v90;
      LOBYTE(v67) = v97;
      WPP_RECORDER_AND_TRACE_SF_ddddddD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v67,
        v66,
        *(_QWORD *)(v65 + 69416),
        v76,
        v77,
        v78,
        v79,
        v64,
        v62,
        v63,
        v61,
        v63 - v64,
        v61 - v62,
        v100);
    }
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7),
      v100);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v69 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v69 = 0;
    }
    v98 = v69;
    v91 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v69 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v70 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 40LL);
      v71 = v70[25];
      v72 = v70[23];
      v73 = v70[24];
      v74 = v70[22];
      v75 = W32GetUserSessionState(v70, v68);
      LODWORD(v85) = v71 - v72;
      LODWORD(v84) = v73 - v74;
      LODWORD(v83) = v71;
      LODWORD(v82) = v73;
      LODWORD(v81) = v72;
      LODWORD(v80) = v74;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v98,
        v91,
        *(_QWORD *)(v75 + 69416),
        4u,
        1u,
        0x43u,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      CHECKPOINT::Restore(a1, (const struct tagRECT *)((char *)a2 + 24));
    DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&BugCheckParameter3);
  }
}
