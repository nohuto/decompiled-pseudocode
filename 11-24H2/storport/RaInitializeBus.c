/*
 * XREFs of RaInitializeBus @ 0x1401BC2BC
 * Callers:
 *     RaidAdapterHack @ 0x140039D6C (RaidAdapterHack.c)
 *     RaidAdapterConfigureResources @ 0x140054EDC (RaidAdapterConfigureResources.c)
 *     NvmeAdapterConfigureResources @ 0x1400CD914 (NvmeAdapterConfigureResources.c)
 * Callees:
 *     RaQueryInterface @ 0x14003C01C (RaQueryInterface.c)
 */

__int64 __fastcall RaInitializeBus(bool *a1, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  result = RaQueryInterface(a2, (unsigned __int64)&GUID_BUS_INTERFACE_STANDARD, 0x40u, 1u, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}
