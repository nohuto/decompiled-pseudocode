/*
 * XREFs of ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402D78FC
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401A92D0 (DxgkAdjustFullscreenGamma.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkSetGammaRamp @ 0x140402BB0 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1402D87C0 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorNotifyDXGIGammaRampChange(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rdi
  MONITOR_MGR *v4; // rsi
  int MonitorInstance; // ebx
  void *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3002;
  }
  if ( !*((_QWORD *)a1 + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3003;
  }
  v4 = *(MONITOR_MGR **)(*((_QWORD *)a1 + 390) + 112LL);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 3013;
    return 3221225485LL;
  }
  v8 = 0LL;
  v7 = retaddr;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v7);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v4, v2, 1, (struct MONITOR_REF_ACCESSOR *)&v7);
  if ( MonitorInstance >= 0 )
  {
    DxgMonitor::MonitorGammaState::OnDxgiGammaRampChange(*(DxgMonitor::MonitorGammaState **)(v8 + 248));
  }
  else
  {
    WdLogSingleEntry2(7LL, v2, v4);
    WdLogGlobalForLineNumber = 3031;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v7);
  return (unsigned int)MonitorInstance;
}
