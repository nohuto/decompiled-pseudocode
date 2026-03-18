/*
 * XREFs of MiMoveBadHugeRangeCrossPartition @ 0x140665AEC
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x140665D54 (MiReleasePartitionHugeIoSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiUnlockHugePfn @ 0x1404CF564 (MiUnlockHugePfn.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404ED7BC (MiUnlinkHugeRange.c)
 *     MiLockHugePfn @ 0x1406652D4 (MiLockHugePfn.c)
 *     MiUpdateHugePageCounts @ 0x14066624C (MiUpdateHugePageCounts.c)
 */

__int64 __fastcall MiMoveBadHugeRangeCrossPartition(__int64 a1, _WORD *a2, unsigned __int16 *a3)
{
  __int64 v4; // rcx
  __int64 *v7; // rsi
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  unsigned __int8 v10; // r15
  int v11; // ebx

  v4 = a1 & 0x3FFFFF;
  v7 = (__int64 *)(qword_140E2FD80 + 8 * v4);
  MiPageToNode(v4 << 18);
  v8 = MiLockHugePfn((__int64)v7);
  v9 = *v7;
  v10 = v8;
  if ( (((unsigned __int64)*v7 >> 4) & 0x7FF) == *a2 && (v9 & 8) != 0 )
  {
    v11 = 0;
    if ( (v9 & 7) == 4 )
    {
      v11 = 4;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FC90);
      MiUnlinkHugeRange((__int64)a2, a1);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FC90);
      v9 = *v7;
    }
    *v7 = (16LL * *a3) ^ (v9 ^ (16LL * *a3)) & 0xFFFFFFFFFFFF800FuLL;
    if ( v11 == 4 )
      MiInsertHugeRangeInList(0LL, a1, 4);
    MiUpdateHugePageCounts(a2, a1, 1LL, 0LL);
    MiUpdateHugePageCounts(a3, a1, 1LL, 1LL);
  }
  LOBYTE(v9) = v10;
  return MiUnlockHugePfn((__int64)v7, v9);
}
