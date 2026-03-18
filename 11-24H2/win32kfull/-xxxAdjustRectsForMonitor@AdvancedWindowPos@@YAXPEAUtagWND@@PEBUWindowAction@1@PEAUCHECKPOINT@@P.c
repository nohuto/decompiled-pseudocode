/*
 * XREFs of ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D5304
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x1400688D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402AB630 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D7FA8 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall AdvancedWindowPos::xxxAdjustRectsForMonitor(
        struct tagRECT *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WindowAction *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  CMonitorTopology *v6; // rcx
  const struct CMonitorTopology::MonitorData *v7; // rax
  __int64 v8; // rcx
  char v9; // r15
  char v10; // r14
  char v11; // si
  int v12; // ebx
  int v13; // edi
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  LONG v17; // eax
  CMonitorTopology *v18; // rcx
  const struct CMonitorTopology::MonitorData *v19; // r9
  int v20; // ebx
  int v21; // edi
  __int64 v22; // r9
  int v23; // ebx
  int v24; // edi
  struct tagWND *v25; // rsi
  __int128 v26; // xmm7
  char v27; // di
  char v28; // bl
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int128 v32; // xmm6
  bool v33; // di
  char v34; // bl
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  struct tagRECT *v38; // r14
  unsigned int WindowDpiLastNotify; // esi
  char v40; // di
  char v41; // bl
  __int64 v42; // rax
  int v43; // edx
  int v44; // r8d
  bool v45; // di
  char v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rcx
  __int16 v51; // r8
  bool v52; // di
  char v53; // bl
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  unsigned int v57; // eax
  unsigned int v58; // ebx
  struct tagRECT *v59; // rsi
  char v60; // r13
  char v61; // r12
  __int64 v62; // rax
  struct tagRECT *v63; // rsi
  char v64; // r13
  char v65; // r12
  __int64 v66; // rax
  int v67; // edi
  bool v68; // si
  char v69; // bl
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  __int64 v73; // r9
  const char *v74; // rax
  __int64 v75; // rbx
  struct tagRECT *v76; // rdi
  struct tagRECT v77; // xmm0
  struct tagRECT *v78; // rax
  struct CMonitorTopology::MonitorData *v79; // [rsp+28h] [rbp-D8h]
  bool v80; // [rsp+30h] [rbp-D0h]
  __int16 v81; // [rsp+30h] [rbp-D0h]
  __int16 v82; // [rsp+30h] [rbp-D0h]
  char v83; // [rsp+40h] [rbp-C0h]
  char v84; // [rsp+40h] [rbp-C0h]
  char v85; // [rsp+48h] [rbp-B8h]
  struct tagRECT v86; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v87; // [rsp+80h] [rbp-80h]
  const struct AdvancedWindowPos::WindowAction *v88; // [rsp+88h] [rbp-78h]
  struct tagWND *v89; // [rsp+90h] [rbp-70h]
  struct tagRECT *v90; // [rsp+98h] [rbp-68h]
  struct tagRECT *v91; // [rsp+A0h] [rbp-60h]
  struct tagRECT *v92; // [rsp+A8h] [rbp-58h]
  struct tagRECT v93; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v94[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v95; // [rsp+C8h] [rbp-38h]
  __int128 v96; // [rsp+D8h] [rbp-28h]
  __int16 v97; // [rsp+E8h] [rbp-18h]
  unsigned int v98; // [rsp+100h] [rbp+0h]

  v90 = this;
  v88 = a3;
  v92 = a4;
  v89 = a2;
  v91 = a5;
  v87 = a6;
  if ( a4 )
  {
    v6 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
    v86 = *a4;
    v7 = CMonitorTopology::MonitorDataFromRect(v6, &v86, 2, 0x12u);
    *(_QWORD *)&v86.left = v7;
    a2 = *(struct tagWND **)&WPP_GLOBAL_Control;
    v9 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v8 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v8 & 8) == 0)
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
      v12 = *((_DWORD *)v7 + 7);
      v13 = *((_DWORD *)v7 + 6);
      UserSessionState = W32GetUserSessionState(v8, *(_QWORD *)&WPP_GLOBAL_Control);
      v85 = v12;
      v83 = v13;
      v81 = 94;
LABEL_33:
      LOBYTE(v16) = v11;
      LOBYTE(v15) = v10;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v16,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        4,
        v81,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v83,
        v85);
    }
  }
  else if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    v17 = *((_DWORD *)a2 + 25);
    v18 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
    v86.top = *((_DWORD *)a2 + 26);
    v86.bottom = v86.top;
    v86.left = v17;
    v86.right = v17;
    v19 = CMonitorTopology::MonitorDataFromRect(v18, &v86, 2, 0x12u);
    *(_QWORD *)&v86.left = v19;
    v9 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
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
      v20 = *((_DWORD *)v19 + 7);
      v21 = *((_DWORD *)v19 + 6);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v85 = v20;
      v83 = v21;
      v81 = 95;
      goto LABEL_33;
    }
  }
  else
  {
    v22 = *(_QWORD *)&a6->left;
    *(_QWORD *)&v86.left = *(_QWORD *)&a6->left;
    v9 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
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
      v23 = *(_DWORD *)(v22 + 28);
      v24 = *(_DWORD *)(v22 + 24);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v85 = v23;
      v83 = v24;
      v81 = 96;
      goto LABEL_33;
    }
  }
  v25 = v89;
  if ( (*((_DWORD *)v89 + 1) & 0x80u) == 0 )
  {
    v38 = v87;
    v26 = *(_OWORD *)(*(_QWORD *)&v87->left + 24LL);
    v32 = *(_OWORD *)(*(_QWORD *)&v87->left + 8LL);
    v45 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v46 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v46 = 0;
    }
    if ( v45 || v46 )
    {
      v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v48) = v46;
      LOBYTE(v49) = v45;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v49,
        v48,
        *(_QWORD *)(v47 + 69416),
        5,
        4,
        99,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  else
  {
    v26 = *(_OWORD *)((char *)v89 + 60);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
    {
      a2 = 0LL;
      v27 = 0;
    }
    else
    {
      v27 = 1;
      a2 = 0LL;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v28 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v28 = 0;
    }
    if ( v27 || v28 )
    {
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69416),
        5,
        4,
        97,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( (*((_DWORD *)v25 + 1) & 0x4000) != 0 )
    {
      v32 = *(_OWORD *)((char *)v25 + 76);
      v33 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v34 = 0;
      }
      if ( v33 || v34 )
      {
        v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v33;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v37,
          v36,
          *(_QWORD *)(v35 + 69416),
          5,
          4,
          98,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
    else
    {
      v32 = v26;
    }
    v38 = v87;
  }
  if ( (*((_DWORD *)v25 + 1) & 0x100) != 0 )
  {
    WindowDpiLastNotify = *((_DWORD *)v25 + 24);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v40 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v41 = 0;
    }
    if ( v40 || v41 )
    {
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v84 = WindowDpiLastNotify;
      v82 = 100;
LABEL_115:
      LOBYTE(v44) = v41;
      LOBYTE(v43) = v40;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v43,
        v44,
        *(_QWORD *)(v42 + 69416),
        5,
        4,
        v82,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v84);
    }
  }
  else if ( (*(_DWORD *)v25 & 0x40) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)&v38->left + 40LL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v40 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v41 = 0;
    }
    if ( v40 || v41 )
    {
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v84 = WindowDpiLastNotify;
      v82 = 101;
      goto LABEL_115;
    }
  }
  else if ( v88 && *((_WORD *)v88 + 26) )
  {
    WindowDpiLastNotify = *((unsigned __int16 *)v88 + 26);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v40 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v41 = 0;
    }
    if ( v40 || v41 )
    {
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v84 = WindowDpiLastNotify;
      v82 = 102;
      goto LABEL_115;
    }
  }
  else
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v90);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v50 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v50 & 8) == 0)
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v40 = v51;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v41 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == v51) )
    {
      v41 = v51;
    }
    if ( v40 || v41 )
    {
      v42 = W32GetUserSessionState(v50, *(_QWORD *)&WPP_GLOBAL_Control);
      v84 = WindowDpiLastNotify;
      v82 = 103;
      goto LABEL_115;
    }
  }
  memset_0(v94, 0, 0x48uLL);
  v95 = v32;
  v97 = WindowDpiLastNotify;
  v96 = v26;
  if ( (*((_DWORD *)v89 + 1) & 0x8000) != 0 )
  {
    v98 = *((_DWORD *)v89 + 23);
    v52 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v53 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v53 = 0;
    }
    if ( v52 || v53 )
    {
      v54 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v55) = v53;
      LOBYTE(v56) = v52;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v56,
        v55,
        *(_QWORD *)(v54 + 69416),
        5,
        4,
        104,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  else
  {
    v57 = *(_DWORD *)(*(_QWORD *)&v86.left + 64LL);
    if ( WindowDpiLastNotify < v57 )
      v57 = WindowDpiLastNotify;
    v98 = v57;
  }
  v58 = *(_DWORD *)(*(_QWORD *)&v90[2].right + 288LL);
  LODWORD(v88) = v58;
  if ( (v58 & 0xF) != 2 )
  {
    v59 = v91;
    *v59 = *CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
              (CMonitorTopology::MonitorData *)v94,
              &v93,
              (__m128i *)v91,
              v58);
    v60 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v61 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v61 = 0;
    }
    if ( v60 || v61 )
    {
      v62 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v60,
        v61,
        *(_QWORD *)(v62 + 69416),
        5u,
        4u,
        0x69u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      v58 = (unsigned int)v88;
    }
    v63 = v92;
    if ( v92 )
    {
      *v63 = *CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
                *(CMonitorTopology::MonitorData **)&v86.left,
                &v93,
                (__m128i *)v92,
                v58);
      v64 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v65 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v65 = 0;
      }
      if ( v64 || v65 )
      {
        v66 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v64,
          v65,
          *(_QWORD *)(v66 + 69416),
          5u,
          4u,
          0x6Au,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
  }
  v67 = *(_DWORD *)v89 & 0x80;
  v68 = v67 != 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v69 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v69 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v9 = 0;
  }
  if ( v69 || v9 )
  {
    v70 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v71) = v9;
    LOBYTE(v72) = v69;
    v73 = *(_QWORD *)(v70 + 69416);
    v74 = "true";
    if ( !v67 )
      v74 = "false";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v72,
      v71,
      v73,
      5,
      4,
      107,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (__int64)v74);
  }
  v75 = *(_QWORD *)&v86.left;
  v76 = v91;
  LOBYTE(v79) = v68;
  v77 = *AdvancedWindowPos::xxxTransformRectToMonitor(
           (AdvancedWindowPos *)&v93,
           v90,
           (struct tagWND *)v91,
           *(const struct tagRECT **)&v86.left,
           (const struct CMonitorTopology::MonitorData *)v94,
           v79,
           v80);
  v78 = v87;
  *v76 = v77;
  *(_QWORD *)&v78->left = v75;
}
