/*
 * XREFs of ?reset@?$unique_ptr@VMonitorMipiDsiState@DxgMonitor@@U?$default_delete@VMonitorMipiDsiState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorMipiDsiState@DxgMonitor@@@Z @ 0x1400630B8
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x140356B64 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1403FF05C (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<DxgMonitor::MonitorMipiDsiState,wistd::default_delete<DxgMonitor::MonitorMipiDsiState>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(v2 + 32));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v2);
  }
}
