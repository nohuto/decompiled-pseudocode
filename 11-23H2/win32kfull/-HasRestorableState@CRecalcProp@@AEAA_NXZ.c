/*
 * XREFs of ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x1C005E854
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C005D284 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 * Callees:
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x1C005E6C8 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x1C013525C (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 */

char __fastcall CRecalcProp::HasRestorableState(const struct tagWND **this)
{
  char v2; // bl

  v2 = 0;
  if ( !CRecalcState::IsPendingAndEquivalentMonitorSet(this[4], this[2]) )
    return CRecalcProp::FindRestorableRecalcState((CRecalcProp *)this) != 0LL;
  return v2;
}
