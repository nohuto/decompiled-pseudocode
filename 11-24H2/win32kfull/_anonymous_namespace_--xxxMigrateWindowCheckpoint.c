/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x14021FA10
 * Callers:
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14021F87C (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D6EA4 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x140068654 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014A0D8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014AC60 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014ACFC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x14014EB1C (-SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140269B3C (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402D2B94 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::xxxMigrateWindowCheckpoint(
        struct tagRECT *retstr,
        CHECKPOINT *this,
        __int64 a3,
        CMonitorTopology *a4,
        struct tagRECT *a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v9; // r9
  struct tagRECT *v11; // rdx
  unsigned int v12; // r14d
  char v14; // r12
  _DWORD *v15; // rax
  int v16; // edi
  int v17; // r14d
  int v18; // ebx
  int v19; // esi
  __int64 UserSessionState; // rax
  struct tagRECT v21; // xmm0
  CMonitorTopology *v22; // rcx
  const struct CMonitorTopology::MonitorData *v23; // rax
  __int64 v24; // rdx
  const struct CMonitorTopology::MonitorData *v25; // rbx
  char v26; // si
  char v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rdx
  struct tagRECT v33; // xmm0
  char v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  char v40; // bl
  bool v41; // di
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  char v45; // bl
  bool v46; // di
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  int ArrangedOptions; // eax
  char v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v54; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  CMonitorTopology *v57; // [rsp+A0h] [rbp-60h]
  struct tagRECT v58; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v59; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v60; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v61; // [rsp+E0h] [rbp-20h] BYREF

  v9 = a6;
  v11 = a5;
  v12 = 0;
  v56 = (__int64)a5;
  *(_QWORD *)&v54.left = a6;
  v57 = a4;
  v53 = a3;
  *(_QWORD *)&v58.left = a8;
  v55 = 0;
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = *(_DWORD **)(a3 + 40);
    v16 = v15[10];
    v17 = v15[8];
    v18 = v15[9];
    v19 = v15[7];
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a5);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v51,
      *(_QWORD *)(UserSessionState + 69416),
      4u,
      4u,
      0x1Du,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v19,
      v17,
      v18,
      v16,
      v18 - v19,
      v16 - v17);
    v11 = (struct tagRECT *)v56;
    v9 = *(_QWORD *)&v54.left;
    a4 = v57;
    v12 = v55;
  }
  *((_DWORD *)this + 4) &= ~0x10u;
  if ( v11 )
  {
    v21 = *v11;
    v22 = (CMonitorTopology *)v9;
  }
  else
  {
    v21 = *(struct tagRECT *)((char *)this + 20);
    v22 = a4;
  }
  v60 = v21;
  v54 = v21;
  v23 = CMonitorTopology::MonitorDataFromRect(v22, (const struct tagWND *)retstr, &v54);
  if ( v23 )
  {
    v60 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                               (__int64)&v54,
                               (const struct tagWND *)retstr,
                               (__int64)&v60,
                               v53,
                               (__int64)v23,
                               1);
    CHECKPOINT::SetNormalRect(this, (const struct tagWND *)retstr, &v60, 0);
  }
  if ( (*(_BYTE *)(*(_QWORD *)&retstr[2].right + 31LL) & 0x20) == 0 )
    return 0LL;
  if ( (*((_DWORD *)this + 4) & 8) == 0 )
    return 0LL;
  v59 = *(struct tagRECT *)((char *)this + 36);
  v54 = v59;
  v25 = CMonitorTopology::MonitorDataFromRect(a4, (const struct tagWND *)retstr, &v54);
  if ( !v25 )
    return 0LL;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v26 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v27 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v27 = 0;
  }
  if ( v26 || v27 )
  {
    v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
    LOBYTE(v29) = v27;
    LOBYTE(v30) = v26;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v30,
      v29,
      *(_QWORD *)(v28 + 69416),
      5,
      4,
      30,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
  }
  v52 = 0;
  CMonitorTopology::MonitorData::LogicalWorkArea(v25, &v61, (const struct tagWND *)retstr);
  if ( (a7 & 1) != 0 )
  {
    v54 = v59;
    if ( CallShell::xxxMigrateWindowHandler(
           retstr,
           2,
           (__int64 *)v25 + 3,
           (__int64 *)&v61.left,
           *((_WORD *)v25 + 20),
           (struct tagWND *)&v54,
           v53,
           (__m128i *)&v59,
           &v52,
           *(int **)&v58.left) )
    {
      v12 = 1;
      switch ( v52 )
      {
        case 0:
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v45 = 0;
          }
          v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
            LOBYTE(v48) = v46;
            LOBYTE(v49) = v45;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v49,
              v48,
              *(_QWORD *)(v47 + 69416),
              4,
              4,
              33,
              (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
          }
          *((_DWORD *)this + 4) &= 0xFFFFFFF5;
          return 1LL;
        case 1:
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v40 = 0;
          }
          v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
            LOBYTE(v43) = v41;
            LOBYTE(v44) = v40;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v44,
              v43,
              *(_QWORD *)(v42 + 69416),
              4,
              4,
              32,
              (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
          }
          *((_DWORD *)this + 4) = *((_DWORD *)this + 4) & 0xFFFFFFF5 | 2;
          return 1LL;
        case 3:
          PhysicalToLogicalDPIRect(&v59, &v59, *(unsigned int *)(*(_QWORD *)&retstr[2].right + 288LL), &v53);
          v33 = *WindowMargins::ExtendRect(
                   &v58,
                   retstr,
                   (const struct tagWND *)&v59,
                   (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v53 + 40) + 60LL));
          *((_DWORD *)this + 4) |= 8u;
          v59 = v33;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v34 = 0;
          }
          v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32);
            LOBYTE(v37) = v35;
            LOBYTE(v38) = v34;
            WPP_RECORDER_AND_TRACE_SF_dddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v38,
              v37,
              *(_QWORD *)(v36 + 69416),
              4,
              4,
              31,
              (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
              v59.left,
              v59.top,
              v59.right,
              v59.bottom);
          }
          CHECKPOINT::SetRestoreToArrangeRect(this, (const struct tagWND *)retstr, &v59);
          return 1LL;
      }
    }
  }
  ArrangedOptions = anonymous_namespace_::GetArrangedOptions((struct tagWND *)&v59, (struct tagWND *)retstr, v25);
  v59 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                             (__int64)&v58,
                             (const struct tagWND *)retstr,
                             (__int64)&v59,
                             v53,
                             (__int64)v25,
                             ArrangedOptions | 1u);
  CHECKPOINT::SetRestoreToArrangeRect(this, (const struct tagWND *)retstr, &v59);
  return v12;
}
