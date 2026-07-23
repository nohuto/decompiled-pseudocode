/*
 * XREFs of HalpIommuFreeDeviceId @ 0x14054FB40
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x1406FCDC4 (HalpQueryIommuReservedRegionInformation.c)
 *     IommuDeviceCreate @ 0x1407014F0 (IommuDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
}
