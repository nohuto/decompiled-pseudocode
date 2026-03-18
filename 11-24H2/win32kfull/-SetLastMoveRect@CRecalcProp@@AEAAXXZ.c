/*
 * XREFs of ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x1402C3FC0
 * Callers:
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C2740 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1402C41EC (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C5934 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14014E7C0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402BFB0C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

void __fastcall CRecalcProp::SetLastMoveRect(CRecalcProp *this)
{
  __int64 v1; // rdx
  char v2; // r15
  char v3; // r12
  __int64 UserSessionState; // rax
  __int64 v5; // [rsp+20h] [rbp-88h]
  struct tagRECT v6; // [rsp+80h] [rbp-28h] BYREF

  *(struct tagRECT *)((char *)this + 88) = *CRecalcState::GetRestoreRect(&v6, *((const struct tagWND **)this + 2));
  v2 = 1;
  v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v2 = 0;
  }
  if ( v3 || v2 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v1);
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v3,
      v2,
      *(_QWORD *)(UserSessionState + 69416),
      v5,
      7u,
      0x6Bu,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
}
