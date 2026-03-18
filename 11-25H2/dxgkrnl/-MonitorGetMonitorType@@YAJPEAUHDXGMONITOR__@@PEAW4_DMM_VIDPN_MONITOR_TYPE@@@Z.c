/*
 * XREFs of ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D24C8
 * Callers:
 *     _lambda_f44fa2b0187a36f67bd7075047dd61ad_::operator() @ 0x1401BF5A4 (_lambda_f44fa2b0187a36f67bd7075047dd61ad_--operator().c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C1F40 (DxgkHandleForceProjectionMonitor.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D22CC (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403BA4F0 (DxgkQueryMonitorTypeLockHeld.c)
 * Callees:
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
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
