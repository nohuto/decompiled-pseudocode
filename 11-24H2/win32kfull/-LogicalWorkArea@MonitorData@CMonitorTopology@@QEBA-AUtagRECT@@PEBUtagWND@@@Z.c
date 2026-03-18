/*
 * XREFs of ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140269B3C
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x14021FA10 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@PEAUtagWND@@@Z @ 0x1402C4130 (-SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C4B90 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402CF4B8 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402CF954 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402D2B94 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D7FA8 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x14014DA2C (CalculateLogicalMonitorRect.c)
 */

struct tagRECT *__fastcall CMonitorTopology::MonitorData::LogicalWorkArea(
        CMonitorTopology::MonitorData *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  __m128i v4; // xmm0
  struct tagRECT *result; // rax
  __m128i v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = *CalculateLogicalMonitorRect(
          &v6,
          (__m128i *)((char *)this + 24),
          *((_WORD *)this + 20),
          (*(_DWORD *)(*((_QWORD *)a3 + 5) + 288LL) >> 8) & 0x1FF,
          *((_WORD *)this + 32));
  result = retstr;
  *retstr = (struct tagRECT)v4;
  return result;
}
