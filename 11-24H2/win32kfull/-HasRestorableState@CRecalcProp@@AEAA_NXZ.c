/*
 * XREFs of ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x140068144
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC36C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 * Callees:
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x1400681B0 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14014AB1C (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 */

char __fastcall CRecalcProp::HasRestorableState(CRecalcProp *this)
{
  char v2; // bl
  char ShouldDeferRecalc; // si

  v2 = 1;
  ShouldDeferRecalc = CRecalcState::ShouldDeferRecalc(*((_QWORD *)this + 4), *((_QWORD *)this + 2), 1LL);
  if ( CRecalcState::IsPendingAndEquivalentMonitorSet(*((CRecalcState **)this + 4), *((const struct tagWND **)this + 2))
    || ShouldDeferRecalc
    || !CRecalcProp::FindRestorableRecalcState(this) )
  {
    return 0;
  }
  return v2;
}
