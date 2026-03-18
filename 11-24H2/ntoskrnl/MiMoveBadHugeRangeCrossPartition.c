/*
 * XREFs of MiMoveBadHugeRangeCrossPartition @ 0x140671594
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x1406717FC (MiReleasePartitionHugeIoSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiUnlockHugePfn @ 0x1404CF53C (MiUnlockHugePfn.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     MiLockHugePfn @ 0x140670D7C (MiLockHugePfn.c)
 *     MiUpdateHugePageCounts @ 0x140671CF4 (MiUpdateHugePageCounts.c)
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
  v7 = (__int64 *)(qword_140E2FFC0 + 8 * v4);
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
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FED0);
      MiUnlinkHugeRange((__int64)a2, a1);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FED0);
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
