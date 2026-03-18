/*
 * XREFs of ?MonitorUnregisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOREVENT__@@@Z @ 0x14018BD78
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x14008E23C (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x14027512C (-_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z.c)
 */

int __fastcall MonitorUnregisterMonitorEventCallback(struct ADAPTER_DISPLAY *a1, struct HDXGMONITOREVENT__ *a2)
{
  if ( !a1 || !a2 )
    return -1073741811;
  if ( !*((_QWORD *)a1 + 14) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)a1 + 2));
    WdLogGlobalForLineNumber = 4406;
    return -1073741811;
  }
  return MONITOR_MGR::_RemoveMonitorEventHandler(*((MONITOR_MGR **)a1 + 14), a2);
}
