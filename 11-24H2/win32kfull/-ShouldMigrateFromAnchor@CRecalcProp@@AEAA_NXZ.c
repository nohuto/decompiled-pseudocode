/*
 * XREFs of ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x1402C4478
 * Callers:
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C4B90 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C6F30 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14014E7C0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402BFB0C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall CRecalcProp::ShouldMigrateFromAnchor(const struct tagWND **this)
{
  char v2; // r14
  char v3; // bp
  char v4; // di
  const struct tagWND *v5; // r15
  const struct tagWND *v6; // r12
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  char v10; // r15
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-A8h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  struct tagRECT v18; // [rsp+80h] [rbp-48h] BYREF

  if ( this[10] )
  {
    v18 = *CRecalcState::GetRestoreRect(&v18, this[2]);
    v2 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v3 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v3 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v4 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v4 = 0;
    }
    v5 = *(const struct tagWND **)&v18.right;
    v6 = *(const struct tagWND **)&v18.left;
    if ( v3 || v4 )
    {
      v7 = *(_QWORD *)this[2];
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      HIDWORD(v17) = HIDWORD(v7);
      WPP_RECORDER_AND_TRACE_SF_qdddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v3,
        v4,
        *(_QWORD *)(UserSessionState + 69416),
        v16,
        7u,
        0x6Du,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
    if ( v6 == this[11] && v5 == this[12] )
      return 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v2 = 0;
    }
    if ( v10 || v2 )
    {
      v11 = *((_DWORD *)this + 25);
      v12 = *((_DWORD *)this + 23);
      v13 = *((_DWORD *)this + 24);
      v14 = *((_DWORD *)this + 22);
      v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LODWORD(v17) = v14;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v2,
        *(_QWORD *)(v15 + 69416),
        5u,
        7u,
        0x6Eu,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v17,
        v12,
        v13,
        v11,
        v13 - v14,
        v11 - v12);
    }
  }
  return 0;
}
