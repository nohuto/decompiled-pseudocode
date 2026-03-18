/*
 * XREFs of ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140030B40
 * Callers:
 *     ?MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z @ 0x1401882C8 (-MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z.c)
 *     ?MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1402677EC (-MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1402BECA0 (DpiPdoHandleQueryDeviceText.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402CEBD8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402D1CCC (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?MonitorGetDeviceObject@@YAJPEAXIPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x140325640 (-MonitorGetDeviceObject@@YAJPEAXIPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x140367198 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403B23C4 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403BA4F0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403E10B0 (-MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z.c)
 *     ?MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z @ 0x1403E49FC (-MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F6A3C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x14042C520 (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
 * Callees:
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14008FCCC (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorShared(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  MONITOR_MGR *v8; // r10
  __int64 v9; // rdi
  struct DXGMONITOR *v11; // rdx
  void *v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(a2 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 782;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 3120) + 112LL) )
  {
    v13 = 0LL;
    v12 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v12);
    MONITOR_MGR::_GetMonitorInstance(v8, a3, a4, (struct MONITOR_REF_ACCESSOR *)&v12);
    v9 = v13;
    *a1 = v13;
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 40), 1u);
    }
    a1[1] = retaddr;
    a1[2] = v9;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)(a1 + 1));
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v12);
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)a1, v11);
  }
  return a1;
}
