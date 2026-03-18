/*
 * XREFs of ?MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1403DAA7C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140032B1C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?SetLastWireformat@DXGMONITOR@@QEAAXT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403DABE4 (-SetLastWireformat@DXGMONITOR@@QEAAXT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?SetLastColorspace@DXGMONITOR@@QEAAXW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1403DAC3C (-SetLastColorspace@DXGMONITOR@@QEAAXW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall MonitorSetLastWireformatAndColorspace(
        struct HDXGMONITOR__ *a1,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a2,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE a3)
{
  unsigned int v5; // ebx
  DXGMONITOR *v7; // rdi
  DXGMONITOR *v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( !a1 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6249;
    return v5;
  }
  MONITOR_MGR::AcquireMonitorExclusive(&v8, (__int64)a1);
  v7 = v8;
  if ( !v8 )
  {
    v5 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 6252;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v9);
    if ( v8 )
    {
      ExReleaseResourceLite((PERESOURCE)((char *)v8 + 40));
      KeLeaveCriticalRegion();
    }
    return v5;
  }
  DXGMONITOR::SetLastWireformat(v8, a2);
  DXGMONITOR::SetLastColorspace(v7, a3);
  ExReleaseResourceLite((PERESOURCE)((char *)v7 + 40));
  KeLeaveCriticalRegion();
  v8 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v9);
  if ( v8 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v8 + 40));
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
