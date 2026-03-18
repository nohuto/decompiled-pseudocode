/*
 * XREFs of ?UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140280420
 * Callers:
 *     <none>
 * Callees:
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1403F38B0 (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::UnloadDescriptorOverrides(DxgMonitor::EdidMonitorDescriptor *this)
{
  DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(this);
}
