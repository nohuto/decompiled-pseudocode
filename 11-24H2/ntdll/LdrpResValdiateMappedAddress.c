/*
 * XREFs of LdrpResValdiateMappedAddress @ 0x1800F3450
 * Callers:
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpResValdiateMappedAddress(__int64 a1)
{
  _BYTE v2[56]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a1 )
    return -1073741811;
  memset(v2, 0, 48);
  return ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
           MemoryBasicInformation,
           v2,
           0x30uLL,
           0LL);
}
