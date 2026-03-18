/*
 * XREFs of ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402C2714
 * Callers:
 *     ?BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z @ 0x1402C2328 (-BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C5934 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C6F30 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 */

void __fastcall CRecalcProp::ClearLastInterceptedTopology(CRecalcProp *this)
{
  CMonitorTopology *v2; // rcx

  v2 = (CMonitorTopology *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CMonitorTopology::Release(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
}
