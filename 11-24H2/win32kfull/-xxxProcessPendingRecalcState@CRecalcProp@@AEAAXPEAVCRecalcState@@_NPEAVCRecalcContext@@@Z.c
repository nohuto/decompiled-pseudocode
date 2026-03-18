/*
 * XREFs of ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C68BC
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1400681E8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x140068654 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsImmersiveBand @ 0x14014E660 (IsImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x14019AC0C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x1401FFFC4 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x140206730 (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140210C38 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?GetResultString@CRecalcContext@@QEAAPEBDXZ @ 0x140252394 (-GetResultString@CRecalcContext@@QEAAPEBDXZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A505C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A68DC (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C2A38 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 *     ?SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@PEAUtagWND@@@Z @ 0x1402C4130 (-SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C4B90 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddd @ 0x1402C77B8 (WPP_RECORDER_AND_TRACE_SF_qdddd.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DB288 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall CRecalcProp::xxxProcessPendingRecalcState(
        CRecalcProp *this,
        struct CRecalcState *a2,
        bool a3,
        struct CRecalcContext *a4)
{
  __int64 v4; // rbx
  char v7; // si
  CRecalcContext *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // r8
  int v12; // r9d
  int v13; // r13d
  char v14; // di
  char v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  unsigned __int16 *v19; // rdi
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  struct tagMONITOR *MigrateMonitor; // r13
  __int64 v22; // rcx
  char v23; // r14
  char v24; // bl
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // ebx
  int v29; // ecx
  int v30; // r9d
  __int128 v31; // xmm0
  int v32; // eax
  __int64 v33; // r8
  int v34; // ecx
  int v35; // edx
  struct CHECKPOINT *IfValid; // rax
  struct tagRECT v37; // xmm0
  const struct tagWND *v38; // rdx
  CMonitorTopology *v39; // rcx
  const struct CMonitorTopology::MonitorData *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  bool v46; // r14
  bool v47; // r12
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  __int64 v51; // rax
  int v52; // ecx
  bool v53; // r14
  const char *ResultString; // rax
  __int64 *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  __int64 v62; // rdx
  char v63; // r14
  char v64; // di
  int v65; // ebx
  __int64 UserSessionState; // rax
  int v67; // r8d
  int v68; // edx
  _DWORD *v69; // r8
  int v70; // ecx
  int v71; // eax
  int v72; // ecx
  int v74; // [rsp+74h] [rbp-8Ch] BYREF
  int v75; // [rsp+78h] [rbp-88h]
  CRecalcContext *v76; // [rsp+80h] [rbp-80h]
  struct tagRECT v77; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v78; // [rsp+A0h] [rbp-60h]
  int v79; // [rsp+B0h] [rbp-50h] BYREF
  int v80; // [rsp+B4h] [rbp-4Ch]
  int v81; // [rsp+BCh] [rbp-44h]
  int v82; // [rsp+C0h] [rbp-40h]
  int v83; // [rsp+C4h] [rbp-3Ch]
  int v84; // [rsp+C8h] [rbp-38h]
  int v85; // [rsp+D8h] [rbp-28h]
  __int128 v86; // [rsp+DCh] [rbp-24h]
  int v87; // [rsp+110h] [rbp+10h]
  __int64 v88[5]; // [rsp+168h] [rbp+68h] BYREF

  v4 = *((_QWORD *)this + 4);
  v76 = a4;
  v7 = 1;
  v8 = a4;
  v75 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 12LL);
  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v79, 1);
  v9 = *((_QWORD *)this + 2);
  v79 |= 0x200u;
  if ( (unsigned int)IsImmersiveBand(v9) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v63 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v63 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v64 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v64 = 0;
    }
    if ( v63 || v64 )
    {
      v65 = *(_DWORD *)(*((_QWORD *)v11 + 5) + 236LL);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v67) = v64;
      LOBYTE(v68) = v63;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v68,
        v67,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        7,
        116,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v65);
      v12 = v79;
    }
    v28 = 9;
    v69 = *(_DWORD **)(*((_QWORD *)this + 2) + 40LL);
    v70 = v69[22];
    v71 = v69[23];
    v79 = v12 | 2;
    v81 = v70;
    v82 = v71;
    v72 = v69[25] - v69[23];
    v83 = v69[24] - v69[22];
    v79 = v12 | 6;
    v84 = v72;
  }
  else
  {
    v79 = v12 | 0x80;
    if ( a2 )
    {
      v13 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 12LL);
      v75 = v13;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v14 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v15 = 0;
      }
      if ( v14 || v15 )
      {
        v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v18,
          v17,
          *(_QWORD *)(v16 + 69416),
          5,
          7,
          117,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v13);
      }
      v19 = (unsigned __int16 *)*((_QWORD *)a2 + 9);
      CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                                   (const struct CMonitorTopology::MonitorId *)(v19 + 24),
                                   0LL);
      MigrateMonitor = (struct tagMONITOR *)ValidateHmonitor(*(_QWORD *)CurrentMonitorDataFromId);
      CRecalcProp::ClearAnchorPosition(this);
      if ( *((_BYTE *)a2 + 61) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (v22 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v22 & 0x40) == 0)
          || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v23 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v24 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v24 = 0;
        }
        if ( v23 || v24 )
        {
          v25 = W32GetUserSessionState(v22, *(_QWORD *)&WPP_GLOBAL_Control);
          LOBYTE(v26) = v24;
          LOBYTE(v27) = v23;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v27,
            v26,
            *(_QWORD *)(v25 + 69416),
            5,
            7,
            118,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
        }
        v28 = 8;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 31LL) & 0x20) != 0 )
        {
          v79 |= 0x20u;
          v85 = 0;
        }
      }
      else
      {
        v28 = 7;
        v29 = *((_DWORD *)a2 + 6);
        v30 = v79 | 0x60;
        v31 = *(_OWORD *)((char *)a2 + 44);
        v79 |= 0x60u;
        v85 = v29;
        v86 = v31;
        v32 = v19[20];
        v80 |= 0x100u;
        v87 = v32;
        if ( v29 == 3 )
        {
          v33 = HIDWORD(*(_QWORD *)((char *)a2 + 28));
          v34 = *(_QWORD *)((char *)a2 + 36) - *(_QWORD *)((char *)a2 + 28);
          v35 = HIDWORD(*(_QWORD *)((char *)a2 + 36)) - v33;
          v81 = *(_QWORD *)((char *)a2 + 28);
          v82 = v33;
          v79 = v30 | 6;
          v83 = v34;
          v84 = v35;
        }
      }
    }
    else
    {
      IfValid = CHECKPOINT::GetIfValid(v11);
      if ( IfValid )
        v37 = *(struct tagRECT *)((char *)IfValid + 20);
      else
        v37 = *(struct tagRECT *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
      v38 = (const struct tagWND *)*((_QWORD *)this + 2);
      v39 = *(CMonitorTopology **)(v4 + 16);
      v78 = v37;
      v77 = v37;
      v40 = CMonitorTopology::MonitorDataFromRect(v39, v38, &v77);
      *(_QWORD *)&v77.left = v40;
      v19 = (unsigned __int16 *)v40;
      if ( v40 )
      {
        MigrateMonitor = CRecalcState::GetMigrateMonitor((CRecalcState *)v4, *((struct tagWND **)this + 2), v8, v40);
        if ( MigrateMonitor )
        {
          v74 = 4;
          if ( (*(_DWORD *)(W32GetUserSessionState(v44, v43) + 67056) & 0x10000) != 0
            && !*(_DWORD *)(v4 + 64)
            && !*((_DWORD *)v76 + 8)
            && (unsigned int)CMonitorTopology::CompareToCurrent(*(_QWORD *)(v4 + 16), 0LL) == 16 )
          {
            v80 |= 0x1000u;
          }
        }
        else
        {
          v79 |= 0x20u;
          v74 = 3;
          v85 = 2;
          MigrateMonitor = *(struct tagMONITOR **)(GetDispInfo(v44, v43) + 104);
        }
        CRecalcProp::UpdateActionForAnchor(
          this,
          (struct AdvancedWindowPos::CWindowAction *)&v79,
          (const struct CMonitorTopology::MonitorData **)&v77,
          (enum CRecalcContext::Result *)&v74,
          (struct CRecalcState *)v4,
          a3);
        v19 = *(unsigned __int16 **)&v77.left;
        v28 = v74;
      }
      else
      {
        v28 = 5;
        MigrateMonitor = *(struct tagMONITOR **)(GetDispInfo(v42, v41) + 104);
        v46 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
          LOBYTE(v49) = v47;
          LOBYTE(v50) = v46;
          WPP_RECORDER_AND_TRACE_SF_qdddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v50,
            v49,
            *(_QWORD *)(v48 + 69416));
          v28 = 5;
        }
      }
    }
    if ( MigrateMonitor )
      AdvancedWindowPos::CWindowAction::SetMonitor(
        (AdvancedWindowPos::CWindowAction *)&v79,
        MigrateMonitor,
        1,
        *((const struct tagWND **)this + 2));
    if ( v19 )
      AdvancedWindowPos::CWindowAction::SetPreviousMonitorData(
        (AdvancedWindowPos::CWindowAction *)&v79,
        (const struct CMonitorTopology::MonitorData *)v19,
        *((struct tagWND **)this + 2));
    v8 = v76;
  }
  v51 = v88[0];
  *(_DWORD *)v8 = v28;
  v52 = *(_DWORD *)(v51 + 12);
  *((_DWORD *)v8 + 4) = v75;
  *((_DWORD *)v8 + 3) = v52;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v7 = 0;
  }
  v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ResultString = CRecalcContext::GetResultString(v8);
    v55 = (__int64 *)*((_QWORD *)this + 2);
    v56 = (__int64)ResultString;
    v57 = *v55;
    v59 = W32GetUserSessionState(v55, v58);
    LOBYTE(v60) = v53;
    LOBYTE(v61) = v7;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v61,
      v60,
      *(_QWORD *)(v59 + 69416),
      4,
      7,
      120,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v57,
      v56);
  }
  AdvancedWindowPos::xxxApplyWindowAction(*((_QWORD *)this + 2), &v79, 14LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v88,
    v62);
}
