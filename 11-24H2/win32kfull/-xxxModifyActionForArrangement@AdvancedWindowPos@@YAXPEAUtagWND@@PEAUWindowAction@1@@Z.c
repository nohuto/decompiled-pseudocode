/*
 * XREFs of ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x1400688D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014A0D8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014AC60 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401D3670 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402AB630 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?NormalizeArrangeRect@AdvancedWindowPos@@YA?AUtagRECT@@AEBU2@00@Z @ 0x1402D352C (-NormalizeArrangeRect@AdvancedWindowPos@@YA-AUtagRECT@@AEBU2@00@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DB288 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxModifyActionForArrangement(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  char v5; // si
  bool v6; // r15
  bool v7; // r12
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct CHECKPOINT *IfValid; // rax
  struct CHECKPOINT *v13; // r15
  struct tagRECT v14; // xmm0
  CMonitorTopology *v15; // rcx
  __int64 v16; // rax
  const struct CMonitorTopology::MonitorData *v17; // r13
  char v18; // r12
  char v19; // bl
  struct tagRECT v20; // xmm0
  unsigned int WindowDpiLastNotify; // r12d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  INT *v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // r13
  struct tagTHREADINFO *v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  char v31; // bl
  int v32; // eax
  struct tagRECT v33; // xmm6
  int v34; // eax
  LONG v35; // ecx
  int v36; // r13d
  bool v37; // bl
  bool v38; // r12
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // edx
  unsigned int v43; // r12d
  __int64 v44; // rdx
  __int64 v45; // rdx
  char v46; // bl
  bool v47; // r14
  __m128i v48; // xmm1
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  bool v52; // cl
  char v53; // r14
  bool v54; // r12
  char v55; // bl
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  int v59; // eax
  char v60; // al
  bool v61; // bl
  bool v62; // r15
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  struct tagRECT *v66; // rax
  const struct tagRECT *v67; // r9
  __m128i *v68; // rax
  __int64 v69; // xmm0_8
  int v70; // eax
  char v71; // r15
  char v72; // r14
  const char *StateString; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  char v79; // di
  const char *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  __int64 v86; // kr08_8
  int v87; // eax
  unsigned int v88; // eax
  char v89; // r14
  __int64 v90; // rax
  __int16 v91; // [rsp+38h] [rbp-D0h]
  __int64 v92; // [rsp+48h] [rbp-C0h]
  __int64 v93; // [rsp+50h] [rbp-B8h]
  bool v94; // [rsp+78h] [rbp-90h]
  char v95; // [rsp+79h] [rbp-8Fh]
  char v96; // [rsp+7Ah] [rbp-8Eh]
  int v97; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v98; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v99[5]; // [rsp+84h] [rbp-84h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v101; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v102; // [rsp+B8h] [rbp-50h] BYREF
  struct tagRECT v103; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v104; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v105; // [rsp+E8h] [rbp-20h] BYREF

  v5 = 1;
  v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      4,
      131,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v8);
  }
  IfValid = CHECKPOINT::GetIfValid(this);
  v13 = IfValid;
  if ( IfValid )
    v14 = *(struct tagRECT *)((char *)IfValid + 20);
  else
    v14 = *(struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
  v101 = v14;
  v15 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
  v16 = *((_QWORD *)this + 5);
  v103 = v14;
  v101 = v14;
  v17 = CMonitorTopology::MonitorDataFromRect(v15, &v101, 2, *(_DWORD *)(v16 + 288));
  if ( (*((_DWORD *)a2 + 1) & 0x40000) != 0 )
  {
    v18 = 1;
LABEL_17:
    v19 = 1;
    goto LABEL_19;
  }
  v18 = 0;
  if ( (*(_DWORD *)a2 & 6) == 0 && IsArranged(this) && (*(_DWORD *)a2 & 0x40) != 0 )
    goto LABEL_17;
  v19 = 0;
LABEL_19:
  v104 = *(struct tagRECT *)((char *)v17 + 24);
  if ( v18 )
  {
    v20 = *(struct tagRECT *)((char *)a2 + 152);
LABEL_24:
    v104 = v20;
    goto LABEL_25;
  }
  if ( (*((_DWORD *)a2 + 1) & 0x80u) != 0 && !v19 )
  {
    v20 = *(struct tagRECT *)((char *)a2 + 60);
    goto LABEL_24;
  }
LABEL_25:
  CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
    v17,
    &v105,
    (__m128i *)&v104,
    *(_DWORD *)(*((_QWORD *)this + 5) + 288LL));
  if ( !_bittest((const signed __int32 *)a2 + 1, 8u) || v19 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)this);
    v99[0] = WindowDpiLastNotify;
  }
  else
  {
    WindowDpiLastNotify = *((_DWORD *)a2 + 24);
    v99[0] = WindowDpiLastNotify;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    v22 = MonitorFromPoint(*(_QWORD *)((char *)a2 + 100), 2u, 0x12u);
  }
  else
  {
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      v25 = (INT *)((char *)a2 + 44);
      v26 = 18;
    }
    else
    {
      v25 = (INT *)&v103;
      v26 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
    }
    v22 = MonitorFromRect(v25, 2u, v26);
  }
  v27 = v22;
  *(_QWORD *)&v103.left = v22;
  v28 = PtiCurrent(v24, v23);
  Win32HM_LockIntoThread<1>((__int64)v28, v27, (__int64 *)BugCheckParameter3);
  v30 = *(_DWORD *)a2;
  v31 = *(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20;
  v32 = *(_DWORD *)a2 & 0x20;
  if ( v32 )
    v94 = *((_DWORD *)a2 + 10) == 2;
  else
    v94 = v31 != 0;
  v96 = 1;
  v33 = 0LL;
  v101 = 0LL;
  if ( (v30 & 6) == 0 )
  {
    if ( !v32 && v31 && v13 && (*((_DWORD *)v13 + 4) & 8) != 0 )
    {
      v33 = *(struct tagRECT *)((char *)v13 + 36);
    }
    else
    {
      if ( !IsArranged(this) )
      {
        v96 = 0;
        goto LABEL_51;
      }
      v33 = *(struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
    }
    goto LABEL_49;
  }
  v29 = *((unsigned int *)a2 + 4);
  v34 = *((_DWORD *)a2 + 1);
  v101.left = *((_DWORD *)a2 + 3);
  v101.right = *((_DWORD *)a2 + 5) + v101.left;
  v35 = v29 + *((_DWORD *)a2 + 6);
  v101.top = v29;
  v101.bottom = v35;
  if ( (v34 & 1) != 0 )
  {
    v33 = *WindowMargins::ExtendRect(
             (struct tagRECT *)&v99[1],
             (struct tagRECT *)this,
             (const struct tagWND *)&v101,
             (const struct tagRECT *)WindowDpiLastNotify);
LABEL_49:
    v101 = v33;
    goto LABEL_51;
  }
  v33 = v101;
LABEL_51:
  v98 = 0;
  LOBYTE(v29) = v94;
  v95 = 0;
  v97 = 3;
  v102 = 0LL;
  if ( v31 && !v94 && v13 && *((_BYTE *)v13 + 54) )
  {
    v36 = *((_DWORD *)v13 + 14);
    v37 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v41,
        v40,
        *(_QWORD *)(v39 + 69416),
        4,
        4,
        132,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v36,
        0);
      LOBYTE(v29) = 0;
    }
    v98 = v36;
    v27 = *(_QWORD *)&v103.left;
    *((_BYTE *)v13 + 54) = 0;
    v95 = 1;
  }
  else if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    v98 = *((_DWORD *)a2 + 33);
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
    v42 = 2 * (unsigned __int8)v29;
  else
    v42 = 1;
  v43 = v99[0];
  v103 = v33;
  if ( !CallShell::xxxMigrateWindowHandler(
          (struct tagRECT *)this,
          v42,
          (__int64 *)&v105.left,
          (__int64 *)&v104.left,
          v99[0],
          (struct tagWND *)&v103,
          v27,
          &v102,
          &v97,
          &v98) )
  {
    v61 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v61 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v63 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
      LOBYTE(v64) = v62;
      LOBYTE(v65) = v61;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v65,
        v64,
        *(_QWORD *)(v63 + 69416),
        4,
        4,
        135,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( v96 )
    {
      v66 = WindowMargins::ReduceRect(
              (WindowMargins *)&v99[1],
              (struct tagRECT *)this,
              (const struct tagWND *)&v101,
              (const struct tagRECT *)v43);
      v67 = (const struct tagRECT *)(*(_QWORD *)(v27 + 40) + 44LL);
      v101 = *v66;
      v68 = (__m128i *)AdvancedWindowPos::NormalizeArrangeRect((struct tagRECT *)&v99[1], &v101, &v104, v67);
      v48 = *v68;
      v69 = _mm_srli_si128(*v68, 8).m128i_u64[0];
      v102.m128i_i64[0] = v68->m128i_i64[0];
      v102.m128i_i64[1] = v69;
LABEL_111:
      v45 = v48.m128i_i64[0];
      goto LABEL_112;
    }
    v97 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v46 = 0;
    }
    v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v46 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_110:
      v48 = v102;
      goto LABEL_111;
    }
    v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
    v91 = 136;
LABEL_109:
    LOBYTE(v51) = v47;
    LOBYTE(v50) = v46;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v50,
      v51,
      *(_QWORD *)(v49 + 69416),
      4,
      4,
      v91,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    goto LABEL_110;
  }
  v45 = v102.m128i_i64[0];
  if ( v96 || *(_OWORD *)&v101 != *(_OWORD *)&v102 )
  {
    v52 = v94;
    if ( !v94 )
    {
      v48 = v102;
      v60 = 1;
      goto LABEL_113;
    }
    if ( v13 || (v13 = CHECKPOINT::Restore(this, (const struct tagRECT *)(*((_QWORD *)this + 5) + 88LL))) != 0LL )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v53 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v53 = 0;
      }
      v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v53 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v55 = v98;
        v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
        LOBYTE(v57) = v54;
        LOBYTE(v58) = v53;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v58,
          v57,
          *(_QWORD *)(v56 + 69416),
          4,
          4,
          134,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v55);
      }
      v59 = v98;
      *((_BYTE *)v13 + 54) = 1;
      *((_DWORD *)v13 + 14) = v59;
    }
    goto LABEL_110;
  }
  v97 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v46 = 0;
  }
  v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v102.m128i_i64[0]);
    v91 = 133;
    goto LABEL_109;
  }
  v48 = v102;
LABEL_112:
  v60 = v95;
  v52 = v94;
LABEL_113:
  if ( v60 )
  {
    *(_DWORD *)a2 |= 0x400u;
    *((_DWORD *)a2 + 27) |= 2u;
    v70 = v98;
    *((__m128i *)a2 + 7) = v48;
    *((_DWORD *)a2 + 32) = 3;
    *((_DWORD *)a2 + 33) = v70;
  }
  *(_DWORD *)a2 |= 0x20u;
  if ( v52 )
  {
    *((_DWORD *)a2 + 10) = 2;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v71 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v71 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v72 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v72 = 0;
    }
    if ( v71 || v72 )
    {
      StateString = AdvancedWindowPos::GetStateString(v97);
      v76 = W32GetUserSessionState(v75, v74);
      LOBYTE(v77) = v72;
      LOBYTE(v78) = v71;
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v78,
        v77,
        *(_QWORD *)(v76 + 69416),
        5,
        4,
        137,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        (__int64)StateString);
      v45 = v102.m128i_i64[0];
    }
    if ( v97 == 3 )
    {
      *((_DWORD *)a2 + 1) |= 0x40u;
      goto LABEL_144;
    }
    if ( v97 == 1 )
    {
      *((_DWORD *)a2 + 1) |= 0x20u;
      goto LABEL_130;
    }
    *((_DWORD *)a2 + 1) |= 0x10u;
  }
  else
  {
    *((_DWORD *)a2 + 10) = v97;
  }
  if ( v97 == 3 )
  {
LABEL_144:
    v86 = *(__int64 *)((char *)v102.m128i_i64 + 4);
    *((_DWORD *)a2 + 1) |= 1u;
    *((_DWORD *)a2 + 5) = HIDWORD(v86) - v45;
    v87 = v102.m128i_i32[3] - v86;
    *((_DWORD *)a2 + 3) = v45;
    *((_DWORD *)a2 + 6) = v87;
    v88 = *(_DWORD *)a2 & 0xFFFFFEFF;
    *((_DWORD *)a2 + 4) = v86;
    *(_DWORD *)a2 = v88 | 6;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v89 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v89 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v5 = 0;
    }
    if ( v89 || v5 )
    {
      v90 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
      LODWORD(v93) = v102.m128i_i32[1];
      LODWORD(v92) = v102.m128i_i32[0];
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v89,
        v5,
        *(_QWORD *)(v90 + 69416),
        5u,
        4u,
        0x8Au,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v92,
        v93,
        v102.m128i_i32[2],
        v102.m128i_i32[3],
        v102.m128i_i32[2] - v102.m128i_i32[0],
        v102.m128i_i32[3] - v102.m128i_i32[1]);
    }
    goto LABEL_140;
  }
LABEL_130:
  *(_DWORD *)a2 &= 0xFFFFFFF9;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v79 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v79 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v5 = 0;
  }
  if ( v79 || v5 )
  {
    v80 = AdvancedWindowPos::GetStateString(v97);
    v83 = W32GetUserSessionState(v82, v81);
    LOBYTE(v84) = v5;
    LOBYTE(v85) = v79;
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v85,
      v84,
      *(_QWORD *)(v83 + 69416),
      5,
      4,
      139,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (__int64)v80);
  }
LABEL_140:
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v45);
}
