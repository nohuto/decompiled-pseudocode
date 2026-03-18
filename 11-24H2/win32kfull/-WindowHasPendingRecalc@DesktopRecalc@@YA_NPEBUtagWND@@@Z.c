/*
 * XREFs of ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x140252494
 * Callers:
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402C9518 (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?HasPendingRecalc@CRecalcProp@@QEAA_NPEBUtagWND@@@Z @ 0x140252424 (-HasPendingRecalc@CRecalcProp@@QEAA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall DesktopRecalc::WindowHasPendingRecalc(DesktopRecalc *this, const struct tagWND *a2)
{
  __int64 v3; // rdx
  struct CRecalcState **RecalcProperty; // rax
  __int64 v5; // r8

  if ( (unsigned int)UserIsDisconnectConnection(this, a2) )
  {
    LOBYTE(RecalcProperty) = 1;
  }
  else
  {
    RecalcProperty = (struct CRecalcState **)CRecalcProp::GetRecalcProperty(this, v3);
    if ( RecalcProperty )
      LOBYTE(RecalcProperty) = CRecalcProp::HasPendingRecalc(RecalcProperty, this, v5) != 0;
  }
  return (char)RecalcProperty;
}
