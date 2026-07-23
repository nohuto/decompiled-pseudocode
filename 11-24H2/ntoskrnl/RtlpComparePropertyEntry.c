/*
 * XREFs of RtlpComparePropertyEntry @ 0x1405E7810
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

int __fastcall RtlpComparePropertyEntry(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
