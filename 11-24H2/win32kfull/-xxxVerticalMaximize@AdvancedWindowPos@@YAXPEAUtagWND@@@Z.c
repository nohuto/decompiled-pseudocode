/*
 * XREFs of ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D93AC
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x140025C9C (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x140068654 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014ACFC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401D3670 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140210C38 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14021FFE4 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A505C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z @ 0x1402C0978 (-SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxVerticalMaximize(struct tagRECT *retstr, struct tagWND *a2)
{
  __int64 v3; // r8
  struct tagRECT v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  char v14; // bl
  char v15; // di
  __int64 v16; // rax
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  const struct CMonitorTopology::MonitorData *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  struct tagRECT *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  char v25; // bl
  char v26; // si
  __int64 UserSessionState; // rax
  struct tagRECT v28; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-90h] BYREF
  CMonitorTopology *v30[4]; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v31; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v32[46]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v33[40]; // [rsp+170h] [rbp+68h] BYREF

  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v32, 1);
    v3 = *(_QWORD *)&retstr[2].right;
    v32[0] |= 0x30u;
    v32[10] = 3;
    v4 = *WindowMargins::ReduceRect((WindowMargins *)BugCheckParameter3, retstr, (const struct tagWND *)(v3 + 88), 0LL);
    v5 = *(_QWORD *)&retstr[2].right;
    v28 = v4;
    v6 = ValidateHmonitor(*(_QWORD *)(v5 + 256));
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(
                                            (__int64)BugCheckParameter3,
                                            v6,
                                            (const struct tagWND *)retstr);
    v8 = _mm_srli_si128(*MonitorWorkRectForWindow, 8);
    v28.top = HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]);
    v28.bottom = v8.m128i_i32[1];
    AdvancedWindowPos::CWindowAction::SetFrameBounds((AdvancedWindowPos::CWindowAction *)v32, &v28);
    v32[0] |= 0x80u;
    AdvancedWindowPos::xxxApplyWindowAction((__int64)retstr, (__int64)v32, 5);
    CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
      (CThreadLockedCurrentMonitorTopologyPtr *)v33,
      v9);
  }
  else
  {
    v10 = *(_QWORD *)&retstr[2].right;
    v31 = *(struct tagRECT *)(v10 + 88);
    v13 = MonitorFromRect(&v31.left, 0, *(_DWORD *)(v10 + 288));
    if ( v13 )
    {
      v17 = PtiCurrent(v12, v11);
      Win32HM_LockIntoThread<1>((__int64)v17, v13, (__int64 *)BugCheckParameter3);
      CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
        (CThreadLockedCurrentMonitorTopologyPtr *)v30,
        v18);
      v28 = v31;
      v19 = CMonitorTopology::MonitorDataFromRect(v30[0], (const struct tagWND *)retstr, &v28);
      v31 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                                 (__int64)&v28,
                                 (const struct tagWND *)retstr,
                                 (__int64)&v31,
                                 v13,
                                 (__int64)v19,
                                 21);
      CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
        (CThreadLockedCurrentMonitorTopologyPtr *)v30,
        v20);
      Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v21);
      v22 = WindowMargins::ReduceRect((WindowMargins *)BugCheckParameter3, retstr, (const struct tagWND *)&v31, 0LL);
      v23 = *(_QWORD *)&retstr[2].right;
      v31 = *v22;
      LogicalToPhysicalDPIRect(&v31, &v31, *(unsigned int *)(v23 + 288), 0LL);
      v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v25,
          v26,
          *(_QWORD *)(UserSessionState + 69416),
          4u,
          4u,
          0x2Cu,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v31.left,
          v31.top,
          v31.right,
          v31.bottom);
      }
      WindowArrangement::xxxSetSnapArrangementPos((__int64)retstr, &v31.left, 0, 0);
    }
    else
    {
      v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v15,
          *(_QWORD *)(v16 + 69416),
          3u,
          4u,
          0x2Bu,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v31.left,
          v31.top,
          v31.right,
          v31.bottom);
      }
    }
  }
}
