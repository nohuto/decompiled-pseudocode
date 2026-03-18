/*
 * XREFs of ?MonitorGetPseudoSpecializedState@@YAJPEAUHDXGMONITOR__@@PEA_N11@Z @ 0x1403DD5BC
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z @ 0x1403DD678 (-GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z.c)
 */

__int64 __fastcall MonitorGetPseudoSpecializedState(struct HDXGMONITOR__ *a1, bool *a2, bool *a3, bool *a4)
{
  unsigned int v7; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v9, (__int64)a1);
    if ( v9[0] )
    {
      DxgMonitor::MonitorUsageState::GetPseudoSpecializedState(
        *(DxgMonitor::MonitorUsageState **)(v9[0] + 240LL),
        a2,
        a3,
        a4);
      v7 = 0;
    }
    else
    {
      v7 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 6428;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v9);
  }
  else
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6425;
  }
  return v7;
}
