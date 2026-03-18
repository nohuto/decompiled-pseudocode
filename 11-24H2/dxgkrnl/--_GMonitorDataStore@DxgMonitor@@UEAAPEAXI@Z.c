/*
 * XREFs of ??_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z @ 0x140091520
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403CC928 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1403F9048 (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MonitorDataStore@DxgMonitor@@UEAA@XZ @ 0x14027E14C (--1MonitorDataStore@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::MonitorDataStore *__fastcall DxgMonitor::MonitorDataStore::`scalar deleting destructor'(
        DxgMonitor::MonitorDataStore *this,
        char a2)
{
  DxgMonitor::MonitorDataStore::~MonitorDataStore(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
