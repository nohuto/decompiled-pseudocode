/*
 * XREFs of CmpFreeBootRegistry @ 0x140669E68
 * Callers:
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1407E782C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
