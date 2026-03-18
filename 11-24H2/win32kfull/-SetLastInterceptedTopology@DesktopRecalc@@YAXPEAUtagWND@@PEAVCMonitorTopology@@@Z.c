/*
 * XREFs of ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C3EC4
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C6F30 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CCB4C (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 */

void __fastcall DesktopRecalc::SetLastInterceptedTopology(
        DesktopRecalc *this,
        struct tagWND *a2,
        struct CMonitorTopology *a3)
{
  struct CRecalcProp *RecalcProperty; // rax
  __int64 v6; // rdx
  struct CRecalcProp *v7; // rdi
  CMonitorTopology *v8; // rcx
  bool v9; // di
  bool v10; // si
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  RecalcProperty = CRecalcProp::GetRecalcProperty(this, (__int64)a2);
  v7 = RecalcProperty;
  if ( RecalcProperty )
  {
    v8 = (CMonitorTopology *)*((_QWORD *)RecalcProperty + 6);
    if ( v8 )
      CMonitorTopology::Release(v8);
    *((_QWORD *)v7 + 6) = a2;
    _InterlockedAdd((volatile signed __int32 *)a2, 1u);
  }
  else
  {
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = *(_QWORD *)this;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
      LOBYTE(v13) = v10;
      LOBYTE(v14) = v9;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        7,
        156,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v11);
    }
  }
}
