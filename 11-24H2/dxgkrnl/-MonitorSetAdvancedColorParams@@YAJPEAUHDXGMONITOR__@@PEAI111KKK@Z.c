/*
 * XREFs of ?MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z @ 0x1403ED728
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140032A4C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x14027C1B0 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 */

__int64 __fastcall MonitorSetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  int v11; // r8d
  unsigned int v12; // ebx
  DxgMonitor::MonitorColorState *v14; // rcx
  _QWORD v15[3]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v16[10]; // [rsp+48h] [rbp-28h] BYREF

  if ( !a1 || !a7 || !a8 || a8 > a7 || a6 >= a7 || a6 >= a8 || !*a2 && !a2[1] )
    return 3221225485LL;
  v11 = *a3;
  if ( !v11 && !a3[1] )
    return 3221225485LL;
  if ( !*a4 && !a4[1]
    || !*a5 && !a5[1]
    || (float)(int)(*a2 + a2[1]) > 1048576.0
    || (float)(int)(v11 + a3[1]) > 1048576.0
    || (float)(int)(*a4 + a4[1]) > 1048576.0
    || (float)(int)(*a5 + a5[1]) > 1048576.0 )
  {
    return 3221225485LL;
  }
  MONITOR_MGR::AcquireMonitorExclusive(v15, (__int64)a1);
  if ( v15[0] )
  {
    v14 = *(DxgMonitor::MonitorColorState **)(v15[0] + 224LL);
    v16[0] = *a2;
    v16[1] = a2[1];
    v16[2] = *a3;
    v16[3] = a3[1];
    v16[4] = *a4;
    v16[5] = a4[1];
    v16[6] = *a5;
    v16[7] = a5[1];
    v12 = DxgMonitor::MonitorColorState::SetColorProfile(v14, (const struct DISPLAY_COLOR_DATA_RAW *)v16, a6, a7, a8);
  }
  else
  {
    v12 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 4030;
  }
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v15);
  return v12;
}
