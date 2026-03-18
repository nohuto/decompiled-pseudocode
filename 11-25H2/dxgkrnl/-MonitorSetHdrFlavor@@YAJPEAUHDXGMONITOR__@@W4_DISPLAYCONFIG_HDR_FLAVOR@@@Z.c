/*
 * XREFs of ?MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x1402684A0
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140032B1C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline @ 0x14008FD38 (Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetHdrFlavor@MonitorColorState@DxgMonitor@@QEAAJW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x1402751A4 (-SetHdrFlavor@MonitorColorState@DxgMonitor@@QEAAJW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 */

__int64 __fastcall MonitorSetHdrFlavor(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h] BYREF
  __int64 v7; // [rsp+4Ch] [rbp-2Ch]
  int v8; // [rsp+54h] [rbp-24h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorExclusive(v5, a1);
    if ( v5[0] )
    {
      v3 = DxgMonitor::MonitorColorState::SetHdrFlavor(*(_QWORD *)(v5[0] + 224LL), a2);
      if ( (unsigned int)Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline() )
      {
        v7 = 0LL;
        v8 = 0;
        v10 = 0LL;
        v6 = 17;
        v9 = 1LL;
        SMgrGdiCallout(&v6, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 5692;
    }
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v5);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5689;
  }
  return v3;
}
