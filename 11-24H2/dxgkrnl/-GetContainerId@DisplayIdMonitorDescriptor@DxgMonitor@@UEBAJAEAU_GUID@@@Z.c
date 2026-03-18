/*
 * XREFs of ?GetContainerId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x140280D30
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z @ 0x140096FC0 (-DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetContainerId(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _GUID *a2)
{
  return DisplayID_GetContainerID((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), a2);
}
