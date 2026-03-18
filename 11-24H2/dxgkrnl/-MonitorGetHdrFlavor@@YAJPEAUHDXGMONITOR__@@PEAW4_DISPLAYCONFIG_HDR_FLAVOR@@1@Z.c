/*
 * XREFs of ?MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z @ 0x14026E5B8
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA?AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ @ 0x14027B0DC (-EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA-AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ.c)
 */

__int64 __fastcall MonitorGetHdrFlavor(
        struct HDXGMONITOR__ *a1,
        enum _DISPLAYCONFIG_HDR_FLAVOR *a2,
        enum _DISPLAYCONFIG_HDR_FLAVOR *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v8, (__int64)a1);
    v6 = v8[0];
    if ( v8[0] )
    {
      if ( a2 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v8[0] + 224LL) + 464LL);
        if ( a3 )
          *(_DWORD *)a3 = DxgMonitor::MonitorColorState::EvaluateDefaultHdrFlavor(*(_QWORD *)(v6 + 224));
        v5 = 0;
      }
      else
      {
        v5 = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 5728;
      }
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 5727;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v8);
  }
  else
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5724;
  }
  return v5;
}
