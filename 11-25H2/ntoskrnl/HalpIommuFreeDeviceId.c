/*
 * XREFs of HalpIommuFreeDeviceId @ 0x14054F900
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x1406F3394 (HalpQueryIommuReservedRegionInformation.c)
 *     IommuDeviceCreate @ 0x1406F7AC0 (IommuDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
}
