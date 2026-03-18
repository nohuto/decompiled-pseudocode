/*
 * XREFs of ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x14026EAA0
 * Callers:
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x1402687E4 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 * Callees:
 *     Feature_IdAcceptDisplayIdOnly__private_IsEnabledDeviceUsageNoInline @ 0x14009014C (Feature_IdAcceptDisplayIdOnly__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ @ 0x140188E88 (-GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ.c)
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
