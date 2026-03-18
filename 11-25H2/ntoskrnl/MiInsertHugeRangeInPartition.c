/*
 * XREFs of MiInsertHugeRangeInPartition @ 0x14067EDC8
 * Callers:
 *     MiFreePartitionPageRun @ 0x14067EC40 (MiFreePartitionPageRun.c)
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiUnlockHugePfn @ 0x1404CF564 (MiUnlockHugePfn.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiLockHugePfn @ 0x1406652D4 (MiLockHugePfn.c)
 */

__int64 __fastcall MiInsertHugeRangeInPartition(unsigned __int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int8 v5; // si
  __int64 v6; // rdx

  v3 = (a1 >> 18) & 0x3FFFFF;
  v4 = qword_140E2FD80 + 8 * v3;
  v5 = MiLockHugePfn(v4);
  MiInsertHugeRangeInList(0LL, (unsigned int)v3, a2);
  LOBYTE(v6) = v5;
  return MiUnlockHugePfn(v4, v6);
}
