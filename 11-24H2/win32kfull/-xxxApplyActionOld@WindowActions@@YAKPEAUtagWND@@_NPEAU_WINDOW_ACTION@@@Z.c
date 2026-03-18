/*
 * XREFs of ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CCFF0
 * Callers:
 *     NtUserApplyWindowAction @ 0x140292770 (NtUserApplyWindowAction.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140088668 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140148CA4 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401A51F8 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ??0Win32RawThreadLock@CMonitorTopology@@QEAA@PEAV1@@Z @ 0x14026A4CC (--0Win32RawThreadLock@CMonitorTopology@@QEAA@PEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z @ 0x1402C2648 (-BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z.c)
 *     ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C5CC4 (-xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402C91A0 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402C9518 (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402C9E14 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402CA098 (-PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 *     ?RestorePendingDisplayChangeInfoOld@CInterceptWindowProp@@SAXPEAUtagWND@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CAD28 (-RestorePendingDisplayChangeInfoOld@CInterceptWindowProp@@SAXPEAUtagWND@@PEAUWindowAction@Advanc.c)
 *     ?Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CBA08 (-Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D1294 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z @ 0x1402D1E6C (-OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall WindowActions::xxxApplyActionOld(
        WindowActions *this,
        struct tagWND *a2,
        const struct _WINDOW_ACTION *a3,
        struct _WINDOW_ACTION *a4)
{
  char v5; // di
  unsigned int v7; // r14d
  char v8; // r13
  char v9; // al
  unsigned int *v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  unsigned int *v15; // rbx
  __int64 v16; // rdx
  int v17; // edx
  int v18; // eax
  __int16 v19; // ax
  int v20; // edi
  unsigned int v21; // esi
  bool v22; // di
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rdx
  struct CMonitorTopology *v28; // r8
  char v29; // [rsp+60h] [rbp-A0h]
  bool v30; // [rsp+61h] [rbp-9Fh]
  char v31; // [rsp+62h] [rbp-9Eh]
  struct CMonitorTopology *v32; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v33[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[40]; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+B0h] [rbp-50h] BYREF
  int v36; // [rsp+B4h] [rbp-4Ch]
  _BYTE v37[60]; // [rsp+11Ch] [rbp+1Ch] BYREF
  unsigned int *v38; // [rsp+158h] [rbp+58h]

  v31 = (char)a2;
  v5 = (char)a2;
  v7 = 0;
  v8 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v9 = 0;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  v29 = v9;
  v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    UserSessionState = W32GetUserSessionState(v10, a2);
    LOBYTE(v12) = v30;
    LOBYTE(v13) = v29;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69416));
    v5 = v31;
  }
  v32 = 0LL;
  LOBYTE(a2) = v5;
  if ( GetActionTopology(a3, a2, this, &v32) )
  {
    v15 = (unsigned int *)v32;
    CMonitorTopology::Win32RawThreadLock::Win32RawThreadLock((CMonitorTopology::Win32RawThreadLock *)v33, v32);
    if ( !v5 || xxxResolveArrangePosition(this, (const struct CMonitorTopology *)v15, a3) )
    {
      v17 = *(_DWORD *)a3;
      v18 = *((_DWORD *)a3 + 1) & 0xE0;
      if ( (*(_DWORD *)a3 & 0x20) != 0 )
      {
        if ( !v18 && !*((_DWORD *)a3 + 10) && ((v17 & 6) == 6 || (v17 & 0x40) != 0) )
          *((_DWORD *)a3 + 1) |= 0x20u;
      }
      else if ( v18 )
      {
        *((_DWORD *)a3 + 10) = 2;
        *(_DWORD *)a3 = v17 | 0x20;
      }
      memset_0(&v35, 0, 0xB8uLL);
      if ( !Validateaction(a3, (struct AdvancedWindowPos::WindowAction *)&v35) )
      {
        v7 = 87;
LABEL_48:
        PopAndFreeW32ThreadLock((__int64)v33, v16);
        return v7;
      }
      if ( v5 )
      {
        v19 = v35;
        v36 |= 0x2000u;
        v20 = v35 & 0x200;
        if ( (v35 & 0x200) != 0 )
        {
          if ( v15 )
          {
            v21 = v15[3];
          }
          else
          {
            v21 = 0;
            CInterceptWindowProp::ClearPendingDisplayChangeInfo(this);
          }
          if ( !DesktopRecalc::BeginApplyWindowActionOld(this, (struct tagWND *)v21) )
          {
LABEL_40:
            v7 = 5023;
            goto LABEL_48;
          }
          if ( !v21 )
            goto LABEL_48;
          CInterceptWindowProp::RestorePendingDisplayChangeInfoOld(this, (struct AdvancedWindowPos::WindowAction *)&v35);
          v19 = v35 & 0xFDFF;
          v35 &= ~0x200u;
        }
        if ( (v19 & 0x400) == 0
          || PopFrontSystemOperationData(this, (struct AdvancedWindowPos::SystemOperationData *)v37) )
        {
          v38 = v15;
          CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v34, this);
          if ( v35 )
            AdvancedWindowPos::xxxApplyWindowAction(this, &v35, 1LL);
          if ( v20 )
          {
            CDwmWindowNotifyBatch::OnRecalcActionApplied((CDwmWindowNotifyBatch *)v34, v15[3], 1);
            DesktopRecalc::xxxEndApplyWindowActionOld(this, (struct tagWND *)v15, v28);
          }
          CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v34, v27);
          goto LABEL_48;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v8 = 0;
        }
        v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v23 = *(_QWORD *)this;
          v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
          LOBYTE(v25) = v22;
          LOBYTE(v26) = v8;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v26,
            v25,
            *(_QWORD *)(v24 + 69416),
            3,
            4,
            130,
            (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
            v23);
        }
        goto LABEL_40;
      }
      if ( PostWindowAction((PETHREAD **)this, a3, (struct CMonitorTopology *)v15) )
        goto LABEL_48;
    }
    v7 = 8;
    goto LABEL_48;
  }
  if ( v32 )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3881);
  }
  return 5023LL;
}
