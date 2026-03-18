/*
 * XREFs of ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026DFB0
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140032A4C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14027C538 (-SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorEnableDisableWcg(struct HDXGMONITOR__ *a1, char a2)
{
  unsigned int v3; // ebx
  DxgMonitor::MonitorColorState *v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5839;
    return v3;
  }
  MONITOR_MGR::AcquireMonitorExclusive(v6, (__int64)a1);
  if ( !v6[0] )
  {
    v3 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 5842;
LABEL_6:
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v6);
    return v3;
  }
  v5 = *(DxgMonitor::MonitorColorState **)(v6[0] + 224LL);
  if ( *((_BYTE *)v5 + 457) != a2 )
  {
    v3 = DxgMonitor::MonitorColorState::SetWcgEnabled(v5, a2);
    goto LABEL_6;
  }
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v6);
  return 255LL;
}
