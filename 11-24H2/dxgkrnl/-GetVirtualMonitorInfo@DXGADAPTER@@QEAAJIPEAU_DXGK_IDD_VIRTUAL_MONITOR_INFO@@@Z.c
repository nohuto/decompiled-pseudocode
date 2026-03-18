/*
 * XREFs of ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140188ECC
 * Callers:
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x14039A5A0 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403C4754 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1403E9D68 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGADAPTER::GetVirtualMonitorInfo(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *a3)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *); // rax

  if ( (*((_DWORD *)this + 111) & 0x40000) != 0 )
  {
    v4 = (__int64 (__fastcall *)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *))*((_QWORD *)this + 298);
    if ( v4 )
      return v4(*((_QWORD *)this + 287), a2, a3);
  }
  WdLogSingleEntry2(2LL, this, -1073741822LL);
  WdLogGlobalForLineNumber = 11389;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"GetVirtualMonitorInfo called on non-virtual adapter 0x%I64x, returning Status 0x%I64x",
    (__int64)this,
    -1073741822LL,
    0LL,
    0LL,
    0LL);
  return 3221225474LL;
}
