/*
 * XREFs of ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D6EA4 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x140068654 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::TestFeature @ 0x1401494EC (_anonymous_namespace_--TestFeature.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x14014ACD0 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140203708 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140269B3C (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402C9DA8 (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x1402C9DE4 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402CB0FC (-SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CB230 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     ?SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402CB394 (-SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D15D4 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned int *__fastcall WindowActions::xxxInterceptMigrateWindow(
        struct tagWND *a1,
        const struct tagMONITOR *a2,
        CMonitorTopology *a3,
        struct tagRECT *a4,
        CMonitorTopology *a5,
        char a6,
        __int64 a7)
{
  struct tagRECT *v7; // rsi
  char v10; // r15
  char v11; // r14
  char v12; // di
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  char valid; // di
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 Prop; // rax
  __int64 v22; // rbx
  struct tagRECT v23; // xmm0
  __int64 v24; // rdx
  const struct CMonitorTopology::MonitorData *v25; // r13
  unsigned int *result; // rax
  bool v27; // di
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  struct tagRECT v35; // xmm6
  int v36; // edi
  __int16 v37; // bx
  struct tagRECT *v38; // rax
  const struct tagMONITOR *v39; // rbx
  struct tagRECT v40; // xmm0
  int WindowState; // eax
  int v42; // eax
  __int64 top; // rdx
  bool v44; // r14
  char v45; // di
  const char *WindowActionStateString; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  LONG left; // ecx
  LONG right; // eax
  int v54; // eax
  char v55; // al
  char v56; // r13
  LONG bottom; // edi
  LONG v58; // r14d
  LONG v59; // ebx
  LONG v60; // esi
  __int64 v61; // rax
  const char *v62; // r10
  const struct CMonitorTopology::MonitorData *v63; // rax
  __int64 v64; // rcx
  bool v65; // di
  char v66; // bl
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  char v70; // r14
  char v71; // si
  __int64 v72; // rax
  int v73; // [rsp+20h] [rbp-E0h]
  int v74[2]; // [rsp+40h] [rbp-C0h]
  __int64 v75; // [rsp+48h] [rbp-B8h]
  __int64 v76; // [rsp+50h] [rbp-B0h]
  __int64 v77; // [rsp+58h] [rbp-A8h]
  __int64 v78; // [rsp+60h] [rbp-A0h]
  __int64 v79; // [rsp+68h] [rbp-98h]
  char v80; // [rsp+80h] [rbp-80h]
  char v81; // [rsp+81h] [rbp-7Fh]
  int v84; // [rsp+B0h] [rbp-50h] BYREF
  int v85; // [rsp+B4h] [rbp-4Ch]
  LONG v86; // [rsp+BCh] [rbp-44h]
  int v87; // [rsp+C0h] [rbp-40h]
  int v88; // [rsp+C4h] [rbp-3Ch]
  int v89; // [rsp+C8h] [rbp-38h]
  int v90; // [rsp+D8h] [rbp-28h]
  struct tagRECT v91; // [rsp+DCh] [rbp-24h]
  __int128 v92; // [rsp+ECh] [rbp-14h]
  int v93; // [rsp+FCh] [rbp-4h]
  struct tagRECT v94; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v95; // [rsp+120h] [rbp+20h] BYREF

  v7 = a4;
  v10 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v11 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
  {
    v13 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      68,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v13);
  }
  valid = HasValidCheckpointPosition(a1);
  v80 = valid;
  v20 = W32GetUserSessionState(v19, v18);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v20 + 41398), 1u);
  v22 = Prop;
  if ( Prop && valid )
    v23 = *(struct tagRECT *)(Prop + 20);
  else
    v23 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v94 = v23;
  v25 = CMonitorTopology::MonitorDataFromRect(a3, a1, &v94);
  if ( v25 )
  {
    memset_0(&v84, 0, 0x60uLL);
    if ( anonymous_namespace_::TestFeature(1LL, v32) && (IsArranged(a1) || v22 && (*(_DWORD *)(v22 + 16) & 8) != 0) )
    {
      v34 = *((_QWORD *)a1 + 5);
      v35 = *(struct tagRECT *)(v34 + 88);
      if ( (*(_BYTE *)(v34 + 31) & 0x20) != 0 )
      {
        v35 = *(struct tagRECT *)(v22 + 36);
        v36 = 2;
      }
      else
      {
        v36 = ((unsigned __int8)~a6 >> 1) & 1;
      }
      v37 = *((_WORD *)v25 + 20);
      v38 = CMonitorTopology::MonitorData::LogicalWorkArea(v25, &v95, a1);
      v94 = v35;
      LOWORD(v73) = v37;
      v39 = a2;
      result = (unsigned int *)xxxUpdateActionForArrangeMigrate(a1, a2, v38, (char *)v25 + 24, v73, v36, &v94, a7, &v84);
      if ( !(_BYTE)result )
        return result;
    }
    else
    {
      v39 = a2;
    }
    if ( (a6 & 2) != 0 )
    {
      SetDisplayChange((struct _WINDOW_ACTION *)&v84);
      if ( (a6 & 8) != 0 )
        CInterceptWindowProp::SetPendingWorkAreaMove(a1);
    }
    if ( (v85 & 0x80u) == 0 && v90 != 3 )
      SetMonitorMovePoint((struct _WINDOW_ACTION *)&v84, v39);
    if ( v7 )
    {
      if ( v80 )
      {
        v40 = *v7;
        v84 |= 0x60u;
        v91 = v40;
        WindowState = AdvancedWindowPos::GetWindowState(a1);
        v42 = MaxStateFromAwpState(WindowState);
        v90 = v42;
        top = *(_QWORD *)&WPP_GLOBAL_Control;
        v44 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v45 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v45 = 0;
        }
        if ( v44 || v45 )
        {
          WindowActionStateString = GetWindowActionStateString(v42);
          v49 = W32GetUserSessionState(v48, v47);
          LOBYTE(v50) = v45;
          LOBYTE(v51) = v44;
          WPP_RECORDER_AND_TRACE_SF_s(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v51,
            v50,
            *(_QWORD *)(v49 + 69416),
            5,
            4,
            70,
            (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
            (__int64)WindowActionStateString);
        }
      }
      else
      {
        left = v7->left;
        top = (unsigned int)v7->top;
        right = v7->right;
        v84 |= 6u;
        v88 = right - left;
        v54 = v7->bottom - top;
        v86 = left;
        v89 = v54;
        v87 = top;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v55 = 0;
      }
      v81 = v55;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v56 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v56 = 0;
      }
      if ( v55 || v56 )
      {
        bottom = v7->bottom;
        v58 = v7->top;
        v59 = v7->right;
        v60 = v7->left;
        v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, top);
        v62 = "WAK_NORMAL_RECT";
        if ( !v80 )
          v62 = "WAK_SIZE | WAK_POSITION";
        WPP_RECORDER_AND_TRACE_SF_sdddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v81,
          v56,
          *(_QWORD *)(v61 + 69416),
          5u,
          4u,
          0x47u,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v62,
          v60,
          v58,
          v59,
          bottom,
          v59 - v60,
          bottom - v58);
        v7 = a4;
      }
      v94 = *v7;
      v63 = CMonitorTopology::MonitorDataFromRect(a5, a1, &v94);
      v85 |= 0x200u;
      v25 = v63;
      v64 = *((unsigned __int16 *)v63 + 20);
      v93 = *((unsigned __int16 *)v63 + 20);
      v33 = *(_QWORD *)&WPP_GLOBAL_Control;
      v65 = 0;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
      {
        v64 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
        if ( (v64 & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
          v65 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v66 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v66 = 0;
      }
      if ( v65 || v66 )
      {
        v67 = W32GetUserSessionState(v64, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v68) = v66;
        LOBYTE(v69) = v65;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v69,
          v68,
          *(_QWORD *)(v67 + 69416),
          5,
          4,
          72,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v93);
      }
    }
    v85 |= 0x100u;
    v92 = *(_OWORD *)((char *)v25 + 24);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v70 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v70 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v71 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v71 = 0;
    }
    if ( v70 || v71 )
    {
      v72 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
      LODWORD(v79) = HIDWORD(v92) - DWORD1(v92);
      LODWORD(v78) = DWORD2(v92) - v92;
      LODWORD(v77) = HIDWORD(v92);
      LODWORD(v76) = DWORD2(v92);
      LODWORD(v75) = DWORD1(v92);
      v74[0] = v92;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v70,
        v71,
        *(_QWORD *)(v72 + 69416),
        5u,
        4u,
        0x49u,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        *(_QWORD *)v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    v84 |= 0x100u;
    return (unsigned int *)xxxSendTransformableMessageTimeout(
                             (struct tagTHREADINFO **)a1,
                             838LL,
                             0LL,
                             (struct tagDRAWITEMSTRUCT *)&v84,
                             0,
                             0,
                             0LL,
                             1,
                             1);
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v10 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = *(_QWORD *)a1;
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
      LOBYTE(v30) = v27;
      LOBYTE(v31) = v10;
      return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                               v31,
                               v30,
                               *(_QWORD *)(v29 + 69416),
                               3,
                               4,
                               69,
                               (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
                               v28);
    }
  }
  return result;
}
