/*
 * XREFs of ?MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E9D4
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274AFC (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(
        PERESOURCE *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  MONITOR_MGR *v7; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 364;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 382;
  }
  result = (__int64)this[390];
  if ( result )
  {
    v7 = *(MONITOR_MGR **)(result + 112);
    if ( !v7 )
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 402;
      return 3221225485LL;
    }
    return MONITOR_MGR::_OnAdapterInitializationDone(v7, a2);
  }
  return result;
}
