/*
 * XREFs of ?MonitorIsUsingSimulatedMonitor@@YAJPEAXPEAE@Z @ 0x14030F1CC
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x140310544 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x14030F2A0 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  MONITOR_MGR *v8; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 433;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 453;
  }
  v6 = *((_QWORD *)this + 390);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 457;
    return 3221225485LL;
  }
  v8 = *(MONITOR_MGR **)(v6 + 112);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 470;
    return 3221225485LL;
  }
  *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v8);
  return 0LL;
}
