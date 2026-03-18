/*
 * XREFs of ?MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z @ 0x140268254
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140032B1C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?ClearColorProfile@MonitorColorState@DxgMonitor@@QEAAJXZ @ 0x140273B28 (-ClearColorProfile@MonitorColorState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorSetDefaultAdvancedColorParams(struct HDXGMONITOR__ *a1)
{
  unsigned int v2; // ebx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(v3, (__int64)a1);
  if ( v3[0] )
  {
    v2 = DxgMonitor::MonitorColorState::ClearColorProfile(*(DxgMonitor::MonitorColorState **)(v3[0] + 224LL));
  }
  else
  {
    v2 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 4087;
  }
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v3);
  return v2;
}
