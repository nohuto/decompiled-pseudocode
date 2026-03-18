/*
 * XREFs of ACPIDispatchIrpDepFilterRemoveDevice @ 0x1400609B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFilterIrpRemoveDevice @ 0x14003C610 (ACPIFilterIrpRemoveDevice.c)
 */

__int64 __fastcall ACPIDispatchIrpDepFilterRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  return ACPIFilterIrpRemoveDevice(a1, a2);
}
