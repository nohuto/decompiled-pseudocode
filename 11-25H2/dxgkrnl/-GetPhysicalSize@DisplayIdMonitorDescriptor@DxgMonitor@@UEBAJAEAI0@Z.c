/*
 * XREFs of ?GetPhysicalSize@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z @ 0x1402799D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x140063404 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetPhysicalSize(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3)
{
  return DisplayID_GetPhysicalSize((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2, a3);
}
