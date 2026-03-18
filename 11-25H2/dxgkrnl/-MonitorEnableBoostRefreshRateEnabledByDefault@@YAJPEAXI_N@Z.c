/*
 * XREFs of ?MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z @ 0x140266F20
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032A20 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x14026F0C4 (-_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorEnableBoostRefreshRateEnabledByDefault(__int64 a1, unsigned int a2, bool a3)
{
  unsigned int v3; // ebx
  DXGMONITOR *v5; // rdi
  int refreshed; // eax
  DXGMONITOR *v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(v8, a1, a2, 1u);
  v5 = v8[0];
  if ( v8[0] )
  {
    if ( *((_DWORD *)v8[0] + 70) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5461;
    }
    if ( (*((_DWORD *)v5 + 82) != 0) != a3 )
    {
      refreshed = DXGMONITOR::_EnableBoostRefreshRateEnabled(v5, a3);
      if ( refreshed >= 0 )
        refreshed = -1073741802;
      v3 = refreshed;
    }
  }
  else
  {
    v3 = -1073741632;
    WdLogSingleEntry1(2LL, -1073741632LL);
    WdLogGlobalForLineNumber = 5455;
  }
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v8);
  return v3;
}
