/*
 * XREFs of HalpIommuFreeDeviceId @ 0x140552200
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x1406FF184 (HalpQueryIommuReservedRegionInformation.c)
 *     IommuDeviceCreate @ 0x140703920 (IommuDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
}
