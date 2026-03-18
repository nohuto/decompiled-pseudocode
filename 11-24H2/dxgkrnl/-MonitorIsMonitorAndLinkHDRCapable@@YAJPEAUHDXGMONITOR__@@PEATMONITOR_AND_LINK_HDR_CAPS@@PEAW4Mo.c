/*
 * XREFs of ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F81C
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x14025ABEC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F900 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 */

__int64 __fastcall MonitorIsMonitorAndLinkHDRCapable(
        struct HDXGMONITOR__ *a1,
        union MONITOR_AND_LINK_HDR_CAPS *a2,
        enum MonitorAndLinkHDRIncapableReason *a3)
{
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v5; // eax
  DxgMonitor::MonitorColorState *v6; // rcx
  unsigned int v8; // ebx
  struct _DXGK_MONITORLINKINFO v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  *(_DWORD *)a2 = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  MONITOR_MGR::AcquireMonitorShared(v10, (__int64)a1);
  if ( v10[0] )
  {
    if ( (*(_BYTE *)(v10[0] + 177LL) & 2) != 0 )
    {
      v5.0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v10[0] + 340LL);
      v6 = *(DxgMonitor::MonitorColorState **)(v10[0] + 224LL);
      *(_QWORD *)&v9.UsageHints.0 = *(_QWORD *)(v10[0] + 332LL);
      v9.DitheringSupport = v5;
      DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(v6, &v9, a2, a3);
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v10);
      return 0LL;
    }
    v8 = 0;
  }
  else
  {
    v8 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 3636;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v10);
  return v8;
}
