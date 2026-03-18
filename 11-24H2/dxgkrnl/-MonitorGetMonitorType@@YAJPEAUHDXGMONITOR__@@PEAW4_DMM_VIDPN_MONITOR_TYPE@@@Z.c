/*
 * XREFs of ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403A9710
 * Callers:
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401C21B0 (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401C2A10 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C6560 (DxgkHandleForceProjectionMonitor.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403A9514 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403AEC30 (DxgkQueryMonitorTypeLockHeld.c)
 * Callees:
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall MonitorGetMonitorType(
        struct HDXGMONITOR__ *a1,
        enum _DMM_VIDPN_MONITOR_TYPE *a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // [rsp+20h] [rbp-18h] BYREF
  struct HDXGMONITOR__ *v8; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  WdLogGlobalForLineNumber = 2504;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v8 = 0LL;
  v7 = retaddr;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v7);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v7);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v7);
  v8 = a1;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v7);
  *(_DWORD *)a2 = *((_DWORD *)a1 + 70);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v7);
  return 0LL;
}
