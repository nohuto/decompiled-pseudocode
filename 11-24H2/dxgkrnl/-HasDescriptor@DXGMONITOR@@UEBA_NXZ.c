/*
 * XREFs of ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x140275A00
 * Callers:
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026F744 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 * Callees:
 *     Feature_IdAcceptDisplayIdOnly__private_IsEnabledDeviceUsageNoInline @ 0x1400915AC (Feature_IdAcceptDisplayIdOnly__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ @ 0x14018B118 (-GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ.c)
 */

bool __fastcall DXGMONITOR::HasDescriptor(DXGMONITOR *this)
{
  int IsEnabledDeviceUsageNoInline; // eax
  DxgMonitor::MonitorDescriptorState *v3; // rcx
  bool v4; // zf

  IsEnabledDeviceUsageNoInline = Feature_IdAcceptDisplayIdOnly__private_IsEnabledDeviceUsageNoInline();
  v3 = (DxgMonitor::MonitorDescriptorState *)*((_QWORD *)this + 25);
  if ( IsEnabledDeviceUsageNoInline )
    v4 = *((_QWORD *)v3 + 20) == 0LL;
  else
    v4 = (unsigned int)DxgMonitor::MonitorDescriptorState::GetNumMonitorDescriptors(v3) == 0;
  return !v4;
}
