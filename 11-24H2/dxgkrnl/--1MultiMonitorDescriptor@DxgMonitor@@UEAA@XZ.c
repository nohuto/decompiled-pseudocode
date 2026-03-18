/*
 * XREFs of ??1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140091B78
 * Callers:
 *     ??_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140091BB0 (--_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 */

void __fastcall DxgMonitor::MultiMonitorDescriptor::~MultiMonitorDescriptor(DxgMonitor::MultiMonitorDescriptor *this)
{
  wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 4,
    0LL);
  wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 3,
    0LL);
}
