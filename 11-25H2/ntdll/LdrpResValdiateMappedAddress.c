/*
 * XREFs of LdrpResValdiateMappedAddress @ 0x180002860
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpResValdiateMappedAddress(__int64 a1)
{
  _BYTE v2[56]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a1 )
    return 3221225485LL;
  memset(v2, 0, 48);
  return ZwQueryVirtualMemory(-1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v2, 48LL, 0LL);
}
