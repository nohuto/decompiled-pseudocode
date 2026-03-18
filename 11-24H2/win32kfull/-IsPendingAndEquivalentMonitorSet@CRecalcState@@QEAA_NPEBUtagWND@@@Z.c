/*
 * XREFs of ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x1400681B0
 * Callers:
 *     ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x140068144 (-HasRestorableState@CRecalcProp@@AEAA_NXZ.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1400681E8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 */

bool __fastcall CRecalcState::IsPendingAndEquivalentMonitorSet(CRecalcState *this, const struct tagWND *a2)
{
  return ((*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) == 0 || *((_DWORD *)this + 6) == 2)
      && (unsigned int)CMonitorTopology::CompareToCurrent(*((_QWORD *)this + 2), 1LL) == 0;
}
