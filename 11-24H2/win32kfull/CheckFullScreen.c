/*
 * XREFs of CheckFullScreen @ 0x14022E334
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x140025C9C (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1400260CC (GetMonitorRectForWindow.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140072D0C (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RECTFromSIZERECT @ 0x14019F7D0 (RECTFromSIZERECT.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1401B86E8 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetScreenRectForWindow @ 0x1401D3188 (GetScreenRectForWindow.c)
 *     ?AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z @ 0x140202514 (-AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z.c)
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x140252494 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x14026FF20 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall CheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2, char a3, char a4)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r15
  __int64 v11; // rdx
  _DWORD **v12; // rcx
  char *v13; // rbx
  _DWORD *v14; // rdx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdx
  struct tagRECT v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // r10
  int v20; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v22; // rax
  int DpiDependentMetric; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rcx
  char v31; // al
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // r9
  const char *v36; // rax
  char v37; // al
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  char v41; // al
  int v42; // ebx
  int v43; // edi
  int v44; // esi
  int v45; // r14d
  __int64 v46; // rax
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  bool v52; // al
  __int64 v53; // rbx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  char v57; // al
  char v58; // r12
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  char v62; // al
  char v63; // r12
  int v64; // ebx
  int v65; // edi
  int v66; // esi
  int v67; // r14d
  __int64 v68; // rax
  int v69; // ecx
  int v70; // r12d
  int v71; // eax
  char v72; // di
  __int64 v73; // rax
  __int64 v74; // r10
  char v75; // si
  bool v76; // r14
  __int64 v77; // rbx
  __int64 v78; // rax
  int v79; // r8d
  int v80; // edx
  char v81; // r8
  char v82; // al
  int v83; // ebx
  int v84; // edi
  int v85; // esi
  int v86; // r14d
  __int64 v87; // rax
  char v88; // di
  __int64 v89; // rax
  char v90; // si
  bool v91; // r14
  __int64 v92; // rbx
  __int64 UserSessionState; // rax
  int v94; // r8d
  int v95; // edx
  char v96; // r8
  char v97; // al
  int v98; // ebx
  int v99; // edi
  int v100; // esi
  int v101; // r14d
  __int64 v102; // rax
  char v103; // di
  __int64 v104; // rax
  __int64 v106; // [rsp+40h] [rbp-59h]
  __int64 v107; // [rsp+48h] [rbp-51h]
  __int64 v108; // [rsp+50h] [rbp-49h]
  __int64 v109; // [rsp+58h] [rbp-41h]
  __int64 v110; // [rsp+60h] [rbp-39h]
  __int64 v111; // [rsp+68h] [rbp-31h]
  bool v112; // [rsp+70h] [rbp-29h]
  char v113; // [rsp+70h] [rbp-29h]
  char v114; // [rsp+70h] [rbp-29h]
  char v115; // [rsp+70h] [rbp-29h]
  bool v116; // [rsp+70h] [rbp-29h]
  char v117; // [rsp+70h] [rbp-29h]
  char v118; // [rsp+70h] [rbp-29h]
  char v119; // [rsp+70h] [rbp-29h]
  char v120; // [rsp+70h] [rbp-29h]
  unsigned __int8 v121; // [rsp+71h] [rbp-28h]
  char v122; // [rsp+71h] [rbp-28h]
  char v123; // [rsp+71h] [rbp-28h]
  char v124; // [rsp+71h] [rbp-28h]
  char v125; // [rsp+71h] [rbp-28h]
  char v126; // [rsp+71h] [rbp-28h]
  char v127; // [rsp+72h] [rbp-27h]
  bool v129; // [rsp+73h] [rbp-26h]
  int WindowBordersWithDpiAwareness; // [rsp+74h] [rbp-25h]
  int v131; // [rsp+74h] [rbp-25h]
  struct tagRECT v132; // [rsp+78h] [rbp-21h] BYREF
  int v133; // [rsp+88h] [rbp-11h]
  int v134; // [rsp+8Ch] [rbp-Dh]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v136; // [rsp+A0h] [rbp+7h] BYREF

  v136 = 0LL;
  if ( (a3 & 0x23) != 0x23 || (LOBYTE(v6) = DesktopRecalc::WindowHasPendingRecalc(a1, a2), !(_BYTE)v6) )
  {
    v7 = *(_QWORD *)(GetDispInfo(a1, a2) + 104);
    v10 = 1;
    v12 = *(_DWORD ***)(W32GetUserSessionState(v9, v8) + 57008);
    if ( **v12 <= 1u )
    {
      v13 = (char *)a1 + 40;
      goto LABEL_7;
    }
    v132 = (struct tagRECT)*GetScreenRectForWindow((__m128i *)&v132, a1);
    v6 = IsMaxedRect(&v132, a2);
    if ( !v6 )
    {
      RECTFromSIZERECT(&v136, v14);
      v13 = (char *)a1 + 40;
      v7 = MonitorFromRect(&v136.left, 1u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
LABEL_7:
      v15 = PtiCurrent((__int64)v12, v11);
      Win32HM_LockIntoThread<0>((__int64)v15, v7, BugCheckParameter3);
      v136 = *(struct tagRECT *)GetMonitorWorkRectForWindow((__int64)&v136, v7, a1);
      if ( !IsMaxedRect(&v136, a2) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)v13 + 31LL) & 1) != 0 )
          SetOrClrWF(0, a1, 0x340u, 1);
        if ( (*(_BYTE *)(*(_QWORD *)v13 + 20LL) & 0x40) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v90 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v90 = 0;
          }
          v91 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v90 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v92 = *(_QWORD *)a1;
            UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16);
            LOBYTE(v94) = v91;
            LOBYTE(v95) = v90;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v95,
              v94,
              *(_QWORD *)(UserSessionState + 69416),
              4,
              4,
              31,
              (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
              v92);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v96 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v96 = 0;
          }
          v126 = v96;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v97 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v97 = 0;
          }
          v120 = v97;
          if ( v96 || v97 )
          {
            v98 = *((_DWORD *)a2 + 3);
            v99 = *((_DWORD *)a2 + 2);
            v100 = *((_DWORD *)a2 + 1);
            v101 = *(_DWORD *)a2;
            v102 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            LODWORD(v106) = v101;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v126,
              v120,
              *(_QWORD *)(v102 + 69416),
              5u,
              4u,
              0x20u,
              (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
              v106,
              v100,
              v101 + v99,
              v100 + v98,
              v99,
              v98);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v103 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v103 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v10 = 0;
          }
          if ( v103 || v10 )
          {
            v104 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            LODWORD(v111) = v136.bottom - v136.top;
            LODWORD(v110) = v136.right - v136.left;
            LODWORD(v109) = v136.bottom;
            LODWORD(v108) = v136.right;
            LODWORD(v107) = v136.top;
            LODWORD(v106) = v136.left;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v103,
              v10,
              *(_QWORD *)(v104 + 69416),
              5u,
              4u,
              0x21u,
              (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
              v106,
              v107,
              v108,
              v109,
              v110,
              v111);
          }
        }
        SetOrClrWF(0, a1, 0x440u, 0);
        goto LABEL_174;
      }
      v17 = *(struct tagRECT *)GetMonitorRectForWindow((__int64)&v132, v7, a1);
      v18 = *(_QWORD *)v13;
      v132 = v17;
      if ( (*(_BYTE *)(v18 + 31) & 1) != 0 )
        SetOrClrWF(1, a1, 0x340u, 1);
      v19 = *(_QWORD *)v13;
      if ( (*(_BYTE *)(*(_QWORD *)v13 + 31LL) & 1) == 0
        || (((*(_BYTE *)(v19 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v19 + 30)) == 0 )
      {
        if ( !IsMaxedRect(&v132, a2) )
        {
LABEL_174:
          LOBYTE(v6) = Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v49);
          return v6;
        }
        if ( (*(_BYTE *)(v74 + 20) & 0x40) == 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v75 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v75 = 0;
          }
          v76 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v75 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v77 = *(_QWORD *)a1;
            v78 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v49);
            LOBYTE(v79) = v76;
            LOBYTE(v80) = v75;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v80,
              v79,
              *(_QWORD *)(v78 + 69416),
              4,
              4,
              28,
              (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
              v77);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v81 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v81 = 0;
          }
          v125 = v81;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v82 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v82 = 0;
          }
          v119 = v82;
          if ( v81 || v82 )
          {
            v83 = *((_DWORD *)a2 + 3);
            v84 = *((_DWORD *)a2 + 2);
            v85 = *((_DWORD *)a2 + 1);
            v86 = *(_DWORD *)a2;
            v87 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            LODWORD(v106) = v86;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v125,
              v119,
              *(_QWORD *)(v87 + 69416),
              5u,
              4u,
              0x1Du,
              (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
              v106,
              v85,
              v86 + v84,
              v85 + v83,
              v84,
              v83);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v88 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v88 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v10 = 0;
          }
          if ( v88 || v10 )
          {
            v89 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            LODWORD(v111) = v132.bottom - v132.top;
            LODWORD(v110) = v132.right - v132.left;
            LODWORD(v109) = v132.bottom;
            LODWORD(v108) = v132.right;
            LODWORD(v107) = v132.top;
            LODWORD(v106) = v132.left;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v88,
              v10,
              *(_QWORD *)(v89 + 69416),
              5u,
              4u,
              0x1Eu,
              (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
              v106,
              v107,
              v108,
              v109,
              v110,
              v111);
          }
        }
LABEL_142:
        AddWFFULLSCREEN(a1);
        goto LABEL_174;
      }
      v20 = *(_DWORD *)(v19 + 288) & 0xF;
      if ( v20 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v19 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v19 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v20
             && (v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
      }
      DpiDependentMetric = GetDpiDependentMetric(2, WindowDpiLastNotify);
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v25, v24, v26) )
      {
        if ( *(_DWORD *)a2 <= v132.left && *((_DWORD *)a2 + 2) + *(_DWORD *)a2 >= v132.right )
        {
          v29 = *((_DWORD *)a2 + 1);
          if ( v29 + DpiDependentMetric <= v132.top )
          {
            LOBYTE(v27) = 1;
            if ( *((_DWORD *)a2 + 3) + v29 >= v132.bottom )
            {
LABEL_32:
              v127 = v27;
              if ( (_BYTE)v27 == ((~*(_BYTE *)(*(_QWORD *)v13 + 20LL) & 0x40) != 0) )
              {
                v30 = *(_QWORD *)&WPP_GLOBAL_Control;
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
                {
                  v31 = 0;
                }
                v121 = v31;
                v112 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v32 = *(_QWORD *)a1;
                  LOBYTE(v30) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  v33 = W32GetUserSessionState(v30, v27);
                  LOBYTE(v34) = v112;
                  v35 = *(_QWORD *)(v33 + 69416);
                  v36 = "Setting";
                  if ( !v127 )
                    v36 = "Clearing";
                  WPP_RECORDER_AND_TRACE_SF_sq(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v121,
                    v34,
                    v35,
                    4,
                    4,
                    20,
                    (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                    (__int64)v36,
                    v32);
                }
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (LOBYTE(v27) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  LOBYTE(v27) = 0;
                }
                v113 = v27;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v37 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v37 = 0;
                }
                v122 = v37;
                if ( (_BYTE)v27 || v37 )
                {
                  v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
                  LOBYTE(v39) = v122;
                  LOBYTE(v40) = v113;
                  WPP_RECORDER_AND_TRACE_SF_d(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v40,
                    v39,
                    *(_QWORD *)(v38 + 69416),
                    5,
                    4,
                    21,
                    (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                    DpiDependentMetric);
                }
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (LOBYTE(v27) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  LOBYTE(v27) = 0;
                }
                v123 = v27;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v41 = 0;
                }
                v114 = v41;
                if ( (_BYTE)v27 || v41 )
                {
                  v42 = *((_DWORD *)a2 + 3);
                  v43 = *((_DWORD *)a2 + 2);
                  v44 = *((_DWORD *)a2 + 1);
                  v45 = *(_DWORD *)a2;
                  v46 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
                  LODWORD(v107) = v44;
                  LODWORD(v106) = v45;
                  WPP_RECORDER_AND_TRACE_SF_dddddd(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v123,
                    v114,
                    *(_QWORD *)(v46 + 69416),
                    5u,
                    4u,
                    0x16u,
                    (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                    v106,
                    v107,
                    v43 + v45,
                    v42 + v44,
                    v43,
                    v42);
                }
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (LOBYTE(v27) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  LOBYTE(v27) = 0;
                }
                v124 = v27;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v47 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v47 = 0;
                }
                v115 = v47;
                if ( (_BYTE)v27 || v47 )
                {
                  v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
                  LODWORD(v111) = v132.bottom - v132.top;
                  LODWORD(v110) = v132.right - v132.left;
                  LODWORD(v109) = v132.bottom;
                  LODWORD(v108) = v132.right;
                  LODWORD(v107) = v132.top;
                  LODWORD(v106) = v132.left;
                  WPP_RECORDER_AND_TRACE_SF_dddddd(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v124,
                    v115,
                    *(_QWORD *)(v48 + 69416),
                    5u,
                    4u,
                    0x17u,
                    (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                    v106,
                    v107,
                    v108,
                    v109,
                    v110,
                    v111);
                }
                LOBYTE(v27) = v127;
              }
              if ( !(_BYTE)v27 )
              {
                SetOrClrWF(0, a1, 0x440u, 0);
                v49 = 0LL;
                if ( a4 )
                {
                  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, 0LL, 0, 0);
                  v51 = *(_QWORD *)&WPP_GLOBAL_Control;
                  v52 = 0;
                  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
                  {
                    v50 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
                    if ( (v50 & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
                      v52 = 1;
                  }
                  v116 = v52;
                  v129 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v52 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v53 = *(_QWORD *)a1;
                    LOBYTE(v50) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    v54 = W32GetUserSessionState(v50, *(_QWORD *)&WPP_GLOBAL_Control);
                    LOBYTE(v55) = v129;
                    LOBYTE(v56) = v116;
                    WPP_RECORDER_AND_TRACE_SF_q(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v56,
                      v55,
                      *(_QWORD *)(v54 + 69416),
                      4,
                      4,
                      24,
                      (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                      v53);
                  }
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                    || (v57 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v57 = 0;
                  }
                  v117 = v57;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || (v58 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                  {
                    v58 = 0;
                  }
                  if ( v57 || v58 )
                  {
                    v59 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v51);
                    LOBYTE(v60) = v58;
                    LOBYTE(v61) = v117;
                    WPP_RECORDER_AND_TRACE_SF_d(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v61,
                      v60,
                      *(_QWORD *)(v59 + 69416),
                      5,
                      4,
                      25,
                      (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                      WindowBordersWithDpiAwareness);
                  }
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                    || (v62 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v62 = 0;
                  }
                  v118 = v62;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || (v63 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                  {
                    v63 = 0;
                  }
                  if ( v62 || v63 )
                  {
                    v64 = *((_DWORD *)a2 + 3);
                    v65 = *((_DWORD *)a2 + 2);
                    v66 = *((_DWORD *)a2 + 1);
                    v67 = *(_DWORD *)a2;
                    v68 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v51);
                    LODWORD(v111) = v64;
                    LODWORD(v110) = v65;
                    LODWORD(v109) = v66 + v64;
                    LODWORD(v108) = v67 + v65;
                    LODWORD(v107) = v66;
                    LODWORD(v106) = v67;
                    WPP_RECORDER_AND_TRACE_SF_dddddd(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v118,
                      v63,
                      *(_QWORD *)(v68 + 69416),
                      5u,
                      4u,
                      0x1Au,
                      (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                      v106,
                      v107,
                      v108,
                      v109,
                      v110,
                      v111);
                  }
                  v69 = WindowBordersWithDpiAwareness;
                  v70 = v136.left - WindowBordersWithDpiAwareness;
                  v71 = v136.top - WindowBordersWithDpiAwareness;
                  *(_DWORD *)a2 = v136.left - WindowBordersWithDpiAwareness;
                  v131 = v71;
                  *((_DWORD *)a2 + 1) = v71;
                  v49 = (unsigned int)(2 * v69 - v136.top);
                  v134 = 2 * v69 - v136.left + v136.right;
                  *((_DWORD *)a2 + 2) = v134;
                  v133 = v49 + v136.bottom;
                  *((_DWORD *)a2 + 3) = v49 + v136.bottom;
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                    || (v72 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v72 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                  {
                    v10 = 0;
                  }
                  if ( v72 || v10 )
                  {
                    v73 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
                    LODWORD(v111) = v133;
                    LODWORD(v110) = v134;
                    LODWORD(v109) = v131 + v133;
                    LODWORD(v108) = v70 + v134;
                    LODWORD(v107) = v131;
                    LODWORD(v106) = v70;
                    WPP_RECORDER_AND_TRACE_SF_dddddd(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v72,
                      v10,
                      *(_QWORD *)(v73 + 69416),
                      5u,
                      4u,
                      0x1Bu,
                      (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                      v106,
                      v107,
                      v108,
                      v109,
                      v110,
                      v111);
                  }
                }
                goto LABEL_174;
              }
              goto LABEL_142;
            }
          }
        }
      }
      else
      {
        v27 = *(unsigned int *)a2;
        if ( (int)v27 + DpiDependentMetric <= v132.right && (int)v27 + *((_DWORD *)a2 + 2) >= v132.right )
        {
          v28 = *((_DWORD *)a2 + 1);
          if ( v28 + DpiDependentMetric <= v132.top && *((_DWORD *)a2 + 3) + v28 >= v132.bottom )
          {
            LOBYTE(v27) = 1;
            goto LABEL_32;
          }
        }
      }
      LOBYTE(v27) = 0;
      goto LABEL_32;
    }
  }
  return v6;
}
