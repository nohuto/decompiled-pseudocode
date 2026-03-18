/*
 * XREFs of ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1400681E8
 * Callers:
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x1400681B0 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014BC38 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401AA4D8 (-OnTimer@CRapidHpdInfo@@SAXXZ.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1401CB20C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x1401CBA98 (-LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F2F30 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C2740 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1402C41EC (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C6544 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C68BC (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?Compare@CMonitorTopology@@QEBA?AW4CompareResult@1@PEBV1@W4CompareType@1@@Z @ 0x14014D1B0 (-Compare@CMonitorTopology@@QEBA-AW4CompareResult@1@PEBV1@W4CompareType@1@@Z.c)
 */

__int64 __fastcall CMonitorTopology::CompareToCurrent(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CMonitorTopology::Compare(a1, *(_QWORD *)(UserSessionState + 71480), v2);
}
