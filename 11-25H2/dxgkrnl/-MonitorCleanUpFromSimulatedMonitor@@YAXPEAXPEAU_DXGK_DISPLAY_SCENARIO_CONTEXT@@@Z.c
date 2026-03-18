/*
 * XREFs of ?MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140324358
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140325B10 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14035409C (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

void __fastcall MonitorCleanUpFromSimulatedMonitor(PERESOURCE *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  PERESOURCE v4; // rax
  MONITOR_MGR *Blink; // rcx

  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5127;
    }
    v4 = a1[390];
    if ( v4 )
    {
      Blink = (MONITOR_MGR *)v4[1].SystemResourcesList.Blink;
      if ( Blink )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(Blink, a2);
      }
      else
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 5143;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 5131;
    }
  }
}
