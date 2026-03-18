/*
 * XREFs of MiInsertHugeRangeInPartition @ 0x14068A658
 * Callers:
 *     MiFreePartitionPageRun @ 0x14068A4D0 (MiFreePartitionPageRun.c)
 *     MiInsertPartitionPages @ 0x14068A8D0 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiUnlockHugePfn @ 0x1404CF53C (MiUnlockHugePfn.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiLockHugePfn @ 0x140670D7C (MiLockHugePfn.c)
 */

__int64 __fastcall MiInsertHugeRangeInPartition(unsigned __int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int8 v5; // si
  __int64 v6; // rdx

  v3 = (a1 >> 18) & 0x3FFFFF;
  v4 = qword_140E2FFC0 + 8 * v3;
  v5 = MiLockHugePfn(v4);
  MiInsertHugeRangeInList(0LL, (unsigned int)v3, a2);
  LOBYTE(v6) = v5;
  return MiUnlockHugePfn(v4, v6);
}
