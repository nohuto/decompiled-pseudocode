/*
 * XREFs of KsepCacheHwIdEqual @ 0x1404B1D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1409343D0 (RtlCompareUnicodeString.c)
 */

_BOOL8 __fastcall KsepCacheHwIdEqual(__int64 a1, __int64 a2)
{
  return RtlCompareUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(a2 + 40), 1u) == 0;
}
