/*
 * XREFs of StorPortGetVirtualAddressVrfy @ 0x1401C1430
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetVirtualAddress @ 0x140074060 (StorPortGetVirtualAddress.c)
 */

PVOID __fastcall StorPortGetVirtualAddressVrfy(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return StorPortGetVirtualAddress(a1, a2);
}
