/*
 * XREFs of ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C
 * Callers:
 *     ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401BF258 (-s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401BF3DC (-s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1401BF578 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401BFD48 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC140 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x140252494 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 *     ?BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z @ 0x1402C2260 (-BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z.c)
 *     ?BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z @ 0x1402C2648 (-BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z.c)
 *     ?GetLastInterceptedTopology@DesktopRecalc@@YAPEAVCMonitorTopology@@PEAUtagWND@@@Z @ 0x1402C294C (-GetLastInterceptedTopology@DesktopRecalc@@YAPEAVCMonitorTopology@@PEAUtagWND@@@Z.c)
 *     ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C3EC4 (-SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C4FA8 (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402C50DC (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402C52E0 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C5CC4 (-xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402C93D4 (-ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

struct CRecalcProp *__fastcall CRecalcProp::GetRecalcProperty(const struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( (*((_DWORD *)a1 + 95) & 0x80u) == 0 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return (struct CRecalcProp *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 42314), 1u);
}
