/*
 * XREFs of ?MonitorQuerySkippedRemovalState@@YAJPEAXIPEAE@Z @ 0x14026EDDC
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z @ 0x140274F6C (-_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z.c)
 */

__int64 __fastcall MonitorQuerySkippedRemovalState(PERESOURCE *a1, unsigned int a2, unsigned __int8 *a3)
{
  PERESOURCE v6; // rax
  MONITOR_MGR *Blink; // rcx

  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 830;
  }
  v6 = a1[390];
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 834;
    return 3221225485LL;
  }
  Blink = (MONITOR_MGR *)v6[1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 847;
    return 3221225485LL;
  }
  return MONITOR_MGR::_QuerySkippedRemovalState(Blink, a2, a3);
}
