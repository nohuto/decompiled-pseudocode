/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140268BF8
 * Callers:
 *     ?MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140267F40 (-MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032A20 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140354008 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403D545C (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1403F8BE8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  DXGMONITOR *v9[4]; // [rsp+20h] [rbp-69h] BYREF
  void **v10; // [rsp+40h] [rbp-49h] BYREF
  __int64 v11; // [rsp+48h] [rbp-41h]
  _BYTE v12[96]; // [rsp+50h] [rbp-39h] BYREF
  int v13; // [rsp+B0h] [rbp+27h]

  v11 = 0LL;
  v10 = &MonitorEventDeferral::`vftable';
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  MONITOR_MGR::AcquireMonitorExclusive(v9, (__int64)a1, a2, 0);
  if ( v9[0] )
  {
    v7 = *((_QWORD *)v9[0] + 21);
    v11 = (v7 + 8) & -(__int64)(v7 != 0);
    v6 = DXGMONITOR::OnDescriptorUpdated(
           v9[0],
           (struct DxgMonitor::IMonitorDeferredEventSource *)&v10,
           (unsigned __int8)v7 + 8);
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v9);
    MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v10, a3);
  }
  else
  {
    v6 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 4673;
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v9);
  }
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v10);
  return v6;
}
