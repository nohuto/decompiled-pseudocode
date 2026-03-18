/*
 * XREFs of ?MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1402677EC
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x14024E1C0 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140030B40 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1402725F4 (-GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(
        __int64 a1,
        __int64 a2,
        struct _DXGK_GENERIC_DESCRIPTOR *a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  unsigned int MonitorDescriptorPnpIds; // ebx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  WdLogGlobalForLineNumber = 2172;
  if ( !a1 || !a3 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v10, a1, v5, 1u);
  if ( v10[0] )
  {
    MonitorDescriptorPnpIds = DxgMonitor::MonitorDescriptorState::GetMonitorDescriptorPnpIds(
                                *(DxgMonitor::MonitorDescriptorState **)(v10[0] + 216LL),
                                a3);
  }
  else
  {
    MonitorDescriptorPnpIds = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 2184;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v10);
  return MonitorDescriptorPnpIds;
}
