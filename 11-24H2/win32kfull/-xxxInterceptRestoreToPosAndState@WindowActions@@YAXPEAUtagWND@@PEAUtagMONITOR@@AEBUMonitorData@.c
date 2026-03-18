/*
 * XREFs of ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402CF954
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140269B3C (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402C9DA8 (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x1402C9DE4 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402CB0FC (-SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CB230 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D0DE8 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int64 __fastcall WindowActions::xxxInterceptRestoreToPosAndState(
        struct tagWND *a1,
        const struct tagMONITOR *a2,
        CMonitorTopology::MonitorData *a3,
        int a4,
        __int128 *a5,
        INT *a6,
        char a7,
        __int64 a8)
{
  CMonitorTopology::MonitorData *v8; // rbx
  int v9; // edi
  char v10; // r14
  char v11; // si
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int16 v16; // bx
  struct tagRECT *v17; // rax
  unsigned __int64 result; // rax
  char v19; // si
  char v20; // di
  const char *WindowActionStateString; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int128 v27; // xmm0
  char v28; // r14
  char v29; // si
  __int64 v30; // rax
  const struct tagMONITOR *v31; // rax
  char v32; // di
  char v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int128 v37; // xmm0
  char v38; // r14
  char v39; // si
  __int64 v40; // rax
  CMonitorTopology::MonitorData *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rdx
  char v44; // r14
  char v45; // si
  __int64 v46; // rax
  int v47; // eax
  char v48; // di
  char v49; // bl
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  int v53; // [rsp+20h] [rbp-E0h]
  int v54[2]; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+78h] [rbp-88h] BYREF
  CMonitorTopology::MonitorData *v62; // [rsp+80h] [rbp-80h]
  struct tagWND *v63; // [rsp+88h] [rbp-78h]
  __int128 v64; // [rsp+90h] [rbp-70h] BYREF
  int v65; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v66; // [rsp+A4h] [rbp-5Ch]
  unsigned int v67; // [rsp+C8h] [rbp-38h]
  __int128 v68; // [rsp+CCh] [rbp-34h]
  __int128 v69; // [rsp+DCh] [rbp-24h]
  int v70; // [rsp+ECh] [rbp-14h]
  struct tagRECT v71; // [rsp+100h] [rbp+0h] BYREF

  v8 = a3;
  v9 = a4;
  v62 = a3;
  v63 = a1;
  v61 = a4;
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
    v12 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a1);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      74,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v12);
    v8 = v62;
  }
  memset_0(&v65, 0, 0x60uLL);
  if ( v9 == 3 )
  {
    v16 = *((_WORD *)v8 + 20);
    v17 = CMonitorTopology::MonitorData::LogicalWorkArea(v62, &v71, v63);
    v64 = *a5;
    LOWORD(v53) = v16;
    result = xxxMigrateArrangedRect(v63, a2, v17, (char *)v62 + 24, v53, 0, &v64, &v61, a8, &v65);
    if ( !(_BYTE)result )
      return result;
    v9 = v61;
    if ( !v61 )
      *a5 = *(_OWORD *)a6;
  }
  v65 |= 0x20u;
  v67 = MaxStateFromAwpState(v9);
  SetDisplayChange((struct _WINDOW_ACTION *)&v65);
  if ( !v67 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v32 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v33 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v33 = 0;
    }
    if ( v32 || v33 )
    {
      v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v36,
        v35,
        *(_QWORD *)(v34 + 69416),
        5,
        4,
        75,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
    }
    v37 = *a5;
    v65 |= 0x40u;
    v68 = v37;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v38 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v39 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v39 = 0;
    }
    if ( v38 || v39 )
    {
      v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LODWORD(v55) = DWORD1(v68);
      v54[0] = v68;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v38,
        v39,
        *(_QWORD *)(v40 + 69416),
        5u,
        4u,
        0x4Cu,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        *(_QWORD *)v54,
        v55,
        DWORD2(v68),
        HIDWORD(v68),
        DWORD2(v68) - (_DWORD)v68,
        HIDWORD(v68) - DWORD1(v68));
    }
    goto LABEL_61;
  }
  if ( v67 != 1 && v67 != 3 )
    goto LABEL_61;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v19 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v20 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v20 = 0;
  }
  if ( v19 || v20 )
  {
    WindowActionStateString = GetWindowActionStateString(v67);
    v24 = W32GetUserSessionState(v23, v22);
    LOBYTE(v25) = v20;
    LOBYTE(v26) = v19;
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v26,
      v25,
      *(_QWORD *)(v24 + 69416),
      5,
      4,
      77,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      (__int64)WindowActionStateString);
  }
  if ( (a7 & 8) != 0 )
  {
    v27 = *(_OWORD *)a6;
    v65 |= 0x40u;
    v68 = v27;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v28 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v29 = 0;
    }
    if ( v28 || v29 )
    {
      v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LODWORD(v55) = DWORD1(v68);
      v54[0] = v68;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v28,
        v29,
        *(_QWORD *)(v30 + 69416),
        5u,
        4u,
        0x4Eu,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        *(_QWORD *)v54,
        v55,
        DWORD2(v68),
        HIDWORD(v68),
        DWORD2(v68) - (_DWORD)v68,
        HIDWORD(v68) - DWORD1(v68));
    }
    goto LABEL_61;
  }
  if ( (a7 & 4) == 0 )
  {
LABEL_61:
    v31 = a2;
    goto LABEL_62;
  }
  v31 = (const struct tagMONITOR *)MonitorFromRect(a6, 2u, 0x12u);
LABEL_62:
  if ( v67 <= 1 )
    SetMonitorMovePoint((struct _WINDOW_ACTION *)&v65, v31);
  v42 = v66;
  v41 = v62;
  LODWORD(v42) = v66 | 0x100;
  v66 |= 0x100u;
  v69 = *(_OWORD *)((char *)v62 + 24);
  v43 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v44 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v44 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v45 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v45 = 0;
  }
  if ( v44 || v45 )
  {
    v46 = W32GetUserSessionState(v42, *(_QWORD *)&WPP_GLOBAL_Control);
    LODWORD(v59) = HIDWORD(v69) - DWORD1(v69);
    LODWORD(v58) = DWORD2(v69) - v69;
    LODWORD(v57) = HIDWORD(v69);
    LODWORD(v56) = DWORD2(v69);
    LODWORD(v55) = DWORD1(v69);
    v54[0] = v69;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v44,
      v45,
      *(_QWORD *)(v46 + 69416),
      5u,
      4u,
      0x4Fu,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      *(_QWORD *)v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    LODWORD(v42) = v66;
  }
  v47 = *((unsigned __int16 *)v41 + 20);
  v66 = v42 | 0x200;
  v70 = v47;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
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
    v50 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
    LOBYTE(v51) = v49;
    LOBYTE(v52) = v48;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v52,
      v51,
      *(_QWORD *)(v50 + 69416),
      5,
      4,
      80,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v70);
  }
  v65 |= 0x100u;
  return xxxSendTransformableMessageTimeout(
           (struct tagTHREADINFO **)v63,
           838LL,
           0LL,
           (struct tagDRAWITEMSTRUCT *)&v65,
           0,
           0,
           0LL,
           1,
           1);
}
