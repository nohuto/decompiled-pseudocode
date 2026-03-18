/*
 * XREFs of RtlpComparePropertyEntry @ 0x1405DE170
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

int __fastcall RtlpComparePropertyEntry(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
