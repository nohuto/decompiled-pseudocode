/*
 * XREFs of CmpFreeBootRegistry @ 0x140668C90
 * Callers:
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1407E725C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
