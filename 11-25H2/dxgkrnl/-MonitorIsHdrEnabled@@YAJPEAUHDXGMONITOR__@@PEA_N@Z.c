/*
 * XREFs of ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D010C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z @ 0x14031FD00 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall MonitorIsHdrEnabled(struct HDXGMONITOR__ *a1, bool *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v5, (__int64)a1);
    if ( v5[0] )
    {
      *a2 = *(_BYTE *)(*(_QWORD *)(v5[0] + 224LL) + 456LL);
      v3 = 0;
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 5622;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v5);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5619;
  }
  return v3;
}
