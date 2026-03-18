/*
 * XREFs of ?GetDescriptorCount@EdidMonitorDescriptor@DxgMonitor@@UEBAIXZ @ 0x14027E160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDescriptorCount(DxgMonitor::EdidMonitorDescriptor *this)
{
  return *((unsigned int *)this + 2);
}
