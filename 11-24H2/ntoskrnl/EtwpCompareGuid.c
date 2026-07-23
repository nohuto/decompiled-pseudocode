/*
 * XREFs of EtwpCompareGuid @ 0x1409D6EA0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

int __fastcall EtwpCompareGuid(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
