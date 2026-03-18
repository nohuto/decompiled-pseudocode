/*
 * XREFs of ?reset@?$unique_ptr@VMonitorUsb4State@DxgMonitor@@U?$default_delete@VMonitorUsb4State@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorUsb4State@DxgMonitor@@@Z @ 0x140063948
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403CC928 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1403F9048 (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x140277434 (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<DxgMonitor::MonitorUsb4State,wistd::default_delete<DxgMonitor::MonitorUsb4State>>::reset(
        DxgMonitor::MonitorUsb4State **a1,
        DxgMonitor::MonitorUsb4State *a2)
{
  DxgMonitor::MonitorUsb4State *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    DxgMonitor::MonitorUsb4State::~MonitorUsb4State(v2);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  }
}
