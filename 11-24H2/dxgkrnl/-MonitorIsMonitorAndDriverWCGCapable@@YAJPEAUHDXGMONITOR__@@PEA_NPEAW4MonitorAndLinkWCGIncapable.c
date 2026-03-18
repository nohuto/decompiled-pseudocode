/*
 * XREFs of ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403AF234
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403AF300 (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLI_ea_1403AF300.c)
 */

__int64 __fastcall MonitorIsMonitorAndDriverWCGCapable(
        struct HDXGMONITOR__ *a1,
        bool *a2,
        enum MonitorAndLinkWCGIncapableReason *a3)
{
  unsigned int v5; // ebx
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v6; // eax
  DxgMonitor::MonitorColorState *v7; // rcx
  struct _DXGK_MONITORLINKINFO v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  *a2 = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  MONITOR_MGR::AcquireMonitorShared(v10, (__int64)a1);
  if ( v10[0] )
  {
    if ( (*(_BYTE *)(v10[0] + 177LL) & 2) != 0 )
    {
      v6.0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v10[0] + 340LL);
      v7 = *(DxgMonitor::MonitorColorState **)(v10[0] + 224LL);
      *(_QWORD *)&v9.UsageHints.0 = *(_QWORD *)(v10[0] + 332LL);
      v9.DitheringSupport = v6;
      DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(v7, &v9, a2, a3);
    }
    v5 = 0;
  }
  else
  {
    v5 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 5984;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v10);
  return v5;
}
