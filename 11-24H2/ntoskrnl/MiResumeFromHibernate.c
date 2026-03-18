/*
 * XREFs of MiResumeFromHibernate @ 0x140673010
 * Callers:
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140489A44 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions((__int64)MiResumeMarkPageLists, a1);
}
