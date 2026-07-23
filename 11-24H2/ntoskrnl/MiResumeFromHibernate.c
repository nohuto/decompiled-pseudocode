/*
 * XREFs of MiResumeFromHibernate @ 0x1406741E0
 * Callers:
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140484754 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions((__int64)MiResumeMarkPageLists, a1);
}
