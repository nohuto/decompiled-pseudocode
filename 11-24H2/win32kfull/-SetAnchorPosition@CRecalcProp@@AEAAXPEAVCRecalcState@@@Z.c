/*
 * XREFs of ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C3D98
 * Callers:
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C4B90 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C6F30 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14014E7C0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x1401FFFC4 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 */

void __fastcall CRecalcProp::SetAnchorPosition(CRecalcProp *this, volatile signed __int32 **a2)
{
  char v4; // r14
  const struct tagWND *v5; // rdx
  __int64 v6; // rdx
  char v7; // r15
  int v8; // edi
  int v9; // ebp
  int v10; // ebx
  int v11; // esi
  __int64 UserSessionState; // rax
  struct tagRECT v13; // [rsp+70h] [rbp-28h] BYREF

  CRecalcProp::ClearAnchorPosition(this);
  v4 = 1;
  _InterlockedAdd(a2[2], 1u);
  v5 = (const struct tagWND *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 10) = a2[2];
  *(struct tagRECT *)((char *)this + 60) = *CRecalcState::GetRestoreRect(&v13, v5);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v4 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = *((_DWORD *)this + 18);
    v9 = *((_DWORD *)this + 16);
    v10 = *((_DWORD *)this + 17);
    v11 = *((_DWORD *)this + 15);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v4,
      v7,
      *(_QWORD *)(UserSessionState + 69416),
      4u,
      7u,
      0x6Fu,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v11,
      v9,
      v10,
      v8,
      v10 - v11,
      v8 - v9);
  }
}
