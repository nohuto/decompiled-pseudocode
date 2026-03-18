/*
 * XREFs of ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14014E360
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14014DB80 (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x140068654 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14014E7C0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x14014E8D8 (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdsddddddds @ 0x14014EC58 (WPP_RECORDER_AND_TRACE_SF_qdsddddddds.c)
 */

__int64 __fastcall CRecalcState::CRecalcState(__int64 a1, __int64 a2, volatile signed __int32 *a3, int a4)
{
  __int64 v4; // rdi
  __int128 v8; // xmm0
  const struct tagWND *v9; // rdx
  bool HasFullscreenState; // al
  char v11; // bl
  unsigned int WindowState; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  struct tagRECT v19; // [rsp+A0h] [rbp-58h] BYREF
  char v21; // [rsp+108h] [rbp+10h]
  bool v22; // [rsp+118h] [rbp+20h]

  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = &CRecalcState::`vftable';
  v4 = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 24) = AdvancedWindowPos::GetWindowState(a2);
  *(_OWORD *)(v4 + 28) = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 88LL);
  v8 = (__int128)*CRecalcState::GetRestoreRect(&v19, (const struct tagWND *)a2);
  *(_BYTE *)(v4 + 60) = 0;
  *(_OWORD *)(v4 + 44) = v8;
  HasFullscreenState = AdvancedWindowPos::HasFullscreenState((AdvancedWindowPos *)a2, v9);
  *(_DWORD *)(v4 + 64) = a4;
  v11 = 1;
  v21 = 1;
  *(_BYTE *)(v4 + 61) = HasFullscreenState;
  *(_QWORD *)(v4 + 72) = 0LL;
  _InterlockedAdd(a3, 1u);
  v19 = *(struct tagRECT *)(((*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0x20) != 0 ? 0x10 : 0) + v4 + 28);
  *(_QWORD *)(v4 + 72) = CMonitorTopology::MonitorDataFromRect((CMonitorTopology *)a3, (const struct tagWND *)a2, &v19);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v11 = 0;
    v21 = 0;
  }
  v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WindowState = AdvancedWindowPos::GetWindowState(a2);
    AdvancedWindowPos::GetStateString(WindowState);
    PsGetThreadId(**(PETHREAD **)(a2 + 16));
    UserSessionState = W32GetUserSessionState(v14, v13);
    LOBYTE(v16) = v22;
    LOBYTE(v17) = v21;
    WPP_RECORDER_AND_TRACE_SF_qdsddddddds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 69416));
    return a1;
  }
  return v4;
}
