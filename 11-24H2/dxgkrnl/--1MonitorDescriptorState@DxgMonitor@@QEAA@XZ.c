/*
 * XREFs of ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x1403F2E5C
 * Callers:
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x14005A938 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 * Callees:
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ?_CleanupMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@AEAAJXZ @ 0x14018B8E8 (-_CleanupMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(
        DxgMonitor::MonitorDescriptorState *Resource)
{
  DxgMonitor::MonitorDescriptorState::_CleanupMonitorDescriptors(Resource);
  wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))Resource + 18,
    0LL);
  wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))Resource + 17,
    0LL);
  wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))Resource + 16,
    0LL);
  ExDeleteResourceLite((PERESOURCE)Resource);
}
