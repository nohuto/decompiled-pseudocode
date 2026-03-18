/*
 * XREFs of ?MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402BCA3C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402BCB18 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorAdapterPowerChange(
        PERESOURCE *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx

  if ( (_BYTE)a2 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    WdLogGlobalForLineNumber = 1350;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    WdLogGlobalForLineNumber = 1354;
  }
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1373;
  }
  result = (__int64)this[390];
  if ( result )
  {
    v8 = *(_QWORD *)(result + 112);
    if ( v8 )
    {
      LOBYTE(v6) = 1;
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v8, 3LL, v6, a3);
    }
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 1393;
    return 3221225485LL;
  }
  return result;
}
