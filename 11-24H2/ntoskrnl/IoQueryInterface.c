/*
 * XREFs of IoQueryInterface @ 0x14071E040
 * Callers:
 *     HalpDmaGetIommuInterface @ 0x140539F74 (HalpDmaGetIommuInterface.c)
 *     HalpIommuGetDeviceId @ 0x14054FBC0 (HalpIommuGetDeviceId.c)
 *     ExInitializeDeviceAts @ 0x140656340 (ExInitializeDeviceAts.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x1406FB200 (HalpGetCacheCoherency.c)
 * Callees:
 *     IopQueryInterfaceRecurseUp @ 0x14098215C (IopQueryInterfaceRecurseUp.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
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
