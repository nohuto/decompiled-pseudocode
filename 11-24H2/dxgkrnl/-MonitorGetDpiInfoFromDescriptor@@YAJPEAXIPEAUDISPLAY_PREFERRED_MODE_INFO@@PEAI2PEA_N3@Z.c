/*
 * XREFs of ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x14042E40C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401DBDB8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x14030DAE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_GetDpiInfo@DXGMONITOR@@QEBAXAEAUDISPLAY_PREFERRED_MODE_INFO@@AEAI1AEA_N2@Z @ 0x1403D1128 (-_GetDpiInfo@DXGMONITOR@@QEBAXAEAUDISPLAY_PREFERRED_MODE_INFO@@AEAI1AEA_N2@Z.c)
 */

__int64 __fastcall MonitorGetDpiInfoFromDescriptor(
        __int64 a1,
        __int64 a2,
        struct DISPLAY_PREFERRED_MODE_INFO *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6,
        bool *a7)
{
  __int64 v8; // rdi
  __int64 v11; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  DXGMONITOR *v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = a1;
  WdLogGlobalForLineNumber = 2257;
  if ( !a1 || (_DWORD)v8 == -1 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  MONITOR_MGR::AcquireMonitorShared(v14, a1, v8, IsEnabledDeviceUsageNoInline == 0);
  if ( !v14[0] )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2281;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v14);
    return 3221225485LL;
  }
  DXGMONITOR::_GetDpiInfo(v14[0], a3, a4, a5, a6, a7);
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v14);
  return 0LL;
}
