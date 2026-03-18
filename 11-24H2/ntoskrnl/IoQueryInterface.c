/*
 * XREFs of IoQueryInterface @ 0x1407204B0
 * Callers:
 *     HalpDmaGetIommuInterface @ 0x14053C6E8 (HalpDmaGetIommuInterface.c)
 *     HalpIommuGetDeviceId @ 0x140552280 (HalpIommuGetDeviceId.c)
 *     ExInitializeDeviceAts @ 0x140657C40 (ExInitializeDeviceAts.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x1406FD5C0 (HalpGetCacheCoherency.c)
 * Callees:
 *     IopQueryInterfaceRecurseUp @ 0x1409C43A8 (IopQueryInterfaceRecurseUp.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 */

__int64 __fastcall IoQueryInterface(
        void *a1,
        char a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        void *a7)
{
  if ( (a2 & 1) != 0 )
    return IopQueryInterfaceRecurseUp((_DWORD)a1, a3, a4, a5, a6, a7);
  else
    return PnpQueryInterface(a1, a6, a7);
}
