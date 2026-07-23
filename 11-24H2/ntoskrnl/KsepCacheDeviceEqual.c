/*
 * XREFs of KsepCacheDeviceEqual @ 0x14073E3B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

_BOOL8 __fastcall KsepCacheDeviceEqual(__int64 a1, __int64 a2)
{
  return RtlCompareUnicodeStrings(
           *(PCWCH *)(a1 + 48),
           (unsigned __int64)*(unsigned __int16 *)(a1 + 40) >> 1,
           *(PCWCH *)(a2 + 48),
           (unsigned __int64)*(unsigned __int16 *)(a2 + 40) >> 1,
           1u) == 0;
}
