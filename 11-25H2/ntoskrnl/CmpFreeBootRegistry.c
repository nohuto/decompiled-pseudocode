/*
 * XREFs of CmpFreeBootRegistry @ 0x14065D1C0
 * Callers:
 *     HvHiveCleanup @ 0x14087E098 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1407D73A4 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
