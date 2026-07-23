/*
 * XREFs of LdrpResValdiateMappedAddress @ 0x180002860
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
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
