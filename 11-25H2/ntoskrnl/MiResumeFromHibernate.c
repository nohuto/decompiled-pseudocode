/*
 * XREFs of MiResumeFromHibernate @ 0x140667560
 * Callers:
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140474618 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions((__int64)MiResumeMarkPageLists, a1);
}
