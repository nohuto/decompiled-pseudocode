/*
 * XREFs of ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032950
 * Callers:
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x14018B338 (-MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_.c)
 *     ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DC8C (-MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z @ 0x14026DE20 (-MonitorEnableBoostRefreshRateEnabledByDefault@@YAJPEAXI_N@Z.c)
 *     ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x14026F22C (-MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x14026F4F8 (-MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z @ 0x14026F584 (-MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026F744 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     ?MonitorSetScaleFactorOverride@@YAJPEAXII@Z @ 0x14026F8A4 (-MonitorSetScaleFactorOverride@@YAJPEAXII@Z.c)
 *     ?MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F95C (-MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026FB58 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278878 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140064134 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorExclusive(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  struct DXGMONITOR *v8; // rdx
  MONITOR_MGR *v9; // r10
  __int64 v10; // rdi
  void *v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(a2 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 733;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 3120) + 112LL) )
  {
    v13 = 0LL;
    v12 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v12);
    MONITOR_MGR::_GetMonitorInstance(v9, a3, a4, (struct MONITOR_REF_ACCESSOR *)&v12);
    v10 = v13;
    *a1 = v13;
    if ( v10 )
      MonitorResourceLock::AcquireExclusive((PERESOURCE)(v10 + 40));
    a1[1] = retaddr;
    a1[2] = v10;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)(a1 + 1));
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v12);
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 742;
    MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)a1, v8);
  }
  return a1;
}
