/*
 * XREFs of ?MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402689FC
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040DBBC (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032A20 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x140187CB0 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140354008 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1403F8BE8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

__int64 __fastcall MonitorSetUsageClass(__int64 a1, unsigned int a2, int a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v8; // ebx
  DXGMONITOR *v9; // rbx
  __int64 v10; // rax
  DXGMONITOR *v12[4]; // [rsp+20h] [rbp-69h] BYREF
  void **v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h]
  _BYTE v15[96]; // [rsp+50h] [rbp-39h] BYREF
  int v16; // [rsp+B0h] [rbp+27h]

  if ( a1 )
  {
    v14 = 0LL;
    v13 = &MonitorEventDeferral::`vftable';
    memset(v15, 0, sizeof(v15));
    v16 = 0;
    MONITOR_MGR::AcquireMonitorExclusive(v12, a1, a2, 1u);
    v9 = v12[0];
    if ( v12[0] )
    {
      v14 = (*((_QWORD *)v12[0] + 21) + 8LL) & -(__int64)(*((_QWORD *)v12[0] + 21) != 0LL);
      if ( *((_DWORD *)v12[0] + 70) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5573;
      }
      v10 = *((_QWORD *)v9 + 30);
      if ( a3 != *(_DWORD *)(v10 + 16) || *(_BYTE *)(v10 + 20) )
      {
        *(_DWORD *)(v10 + 16) = a3;
        *(_BYTE *)(v10 + 20) = 0;
        DXGMONITOR::OnUsageUpdated(v9, (struct DxgMonitor::IMonitorDeferredEventSource *)&v13, 1);
      }
      MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v12);
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v13, a4);
      v8 = 0;
    }
    else
    {
      v8 = -1073741632;
      WdLogSingleEntry1(2LL, -1073741632LL);
      WdLogGlobalForLineNumber = 5569;
      MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v12);
    }
    MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v13);
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5562;
  }
  return v8;
}
