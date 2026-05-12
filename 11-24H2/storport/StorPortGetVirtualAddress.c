/*
 * XREFs of StorPortGetVirtualAddress @ 0x140074060
 * Callers:
 *     StorPortGetVirtualAddressVrfy @ 0x1401C1430 (StorPortGetVirtualAddressVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
