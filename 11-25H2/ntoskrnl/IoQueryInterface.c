/*
 * XREFs of IoQueryInterface @ 0x1407143B0
 * Callers:
 *     HalpDmaGetIommuInterface @ 0x140539EE4 (HalpDmaGetIommuInterface.c)
 *     HalpIommuGetDeviceId @ 0x14054F980 (HalpIommuGetDeviceId.c)
 *     ExInitializeDeviceAts @ 0x14064BCE0 (ExInitializeDeviceAts.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x1406F17D0 (HalpGetCacheCoherency.c)
 * Callees:
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140A95844 (IopQueryInterfaceRecurseUp.c)
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
    return IopQueryInterfaceRecurseUp((int)a1, a3, a4, a5, a6, a7);
  else
    return PnpQueryInterface(a1, a6, a7);
}
