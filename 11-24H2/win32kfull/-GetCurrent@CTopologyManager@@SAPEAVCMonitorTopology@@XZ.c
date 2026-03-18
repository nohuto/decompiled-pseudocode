/*
 * XREFs of ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x140068874
 * Callers:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x14014D534 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     EditionGetCurrentMonitorTopology @ 0x14021E950 (EditionGetCurrentMonitorTopology.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14021FFE4 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C4FA8 (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402C9518 (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     <none>
 */

struct CMonitorTopology *__fastcall CTopologyManager::GetCurrent(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  _InterlockedIncrement(*(volatile signed __int32 **)(UserSessionState + 71480));
  return *(struct CMonitorTopology **)(UserSessionState + 71480);
}
