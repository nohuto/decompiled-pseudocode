/*
 * XREFs of ?HasOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x140279AD0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall DxgMonitor::DisplayIdMonitorDescriptor::HasOverrides(DxgMonitor::DisplayIdMonitorDescriptor *this)
{
  return (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
      && *((_DWORD *)this + 2) == 1;
}
