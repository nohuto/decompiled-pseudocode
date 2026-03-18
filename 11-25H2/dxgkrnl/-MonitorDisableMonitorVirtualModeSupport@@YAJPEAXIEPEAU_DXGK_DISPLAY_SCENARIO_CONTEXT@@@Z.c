/*
 * XREFs of ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140266D8C
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032A20 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x14026EEB4 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1402CD5FC (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140354008 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1403F8BE8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSupport(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rdi
  DXGMONITOR *v8; // rbx
  unsigned int v9; // ebx
  DXGMONITOR *v11; // rcx
  DXGMONITOR *v12[4]; // [rsp+20h] [rbp-79h] BYREF
  void **v13; // [rsp+40h] [rbp-59h] BYREF
  __int64 v14; // [rsp+48h] [rbp-51h]
  _BYTE v15[96]; // [rsp+50h] [rbp-49h] BYREF
  int v16; // [rsp+B0h] [rbp+17h]

  v4 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  v14 = 0LL;
  v13 = &MonitorEventDeferral::`vftable';
  memset(v15, 0, sizeof(v15));
  v16 = 0;
  MONITOR_MGR::AcquireMonitorExclusive(v12, a1, v4, 1u);
  v8 = v12[0];
  if ( !v12[0] )
  {
    v9 = -1073741632;
    WdLogSingleEntry1(2LL, -1073741632LL);
    WdLogGlobalForLineNumber = 5320;
LABEL_9:
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v12);
    MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v13);
    return v9;
  }
  v14 = (*((_QWORD *)v12[0] + 21) + 8LL) & -(__int64)(*((_QWORD *)v12[0] + 21) != 0LL);
  if ( *((_DWORD *)v12[0] + 70) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5328;
  }
  if ( (*((_BYTE *)v8 + 176) & 2) != 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 5335;
    v9 = -1073741790;
    goto LABEL_9;
  }
  if ( DXGMONITOR::_IsVirtualModeSupportDisabled(v8) != (a3 != 0) )
    DXGMONITOR::_DisableVirtualModeSupport(v11, a3 != 0, (struct DxgMonitor::IMonitorDeferredEventSource *)&v13);
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v12);
  MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v13, a4);
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v13);
  return 0LL;
}
