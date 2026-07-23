/*
 * XREFs of MiDecrementSubsection @ 0x14025A644
 * Callers:
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiDecrementSubsection(__int64 *BugCheckParameter2)
{
  volatile LONG *v2; // r14
  unsigned int v3; // ebx
  unsigned __int64 v4; // rbp
  int v5; // r15d
  ULONG_PTR v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // [rsp+50h] [rbp+8h]

  v10 = *BugCheckParameter2;
  v2 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v3 = 0;
  v4 = ExAcquireSpinLockExclusive(v2);
  v5 = 0;
  v6 = (ULONG_PTR)BugCheckParameter2;
  v7 = 0LL;
  v8 = *(_QWORD *)(*BugCheckParameter2 + 64);
  do
  {
    if ( *(_QWORD *)(v6 + 8) )
    {
      v7 += MiDecrementSubsectionViewCount(v6);
      if ( v8 )
      {
        if ( !*(_QWORD *)(v6 + 80) && (*(_DWORD *)(v6 + 32) & 0x10000) == 0 )
          v7 += MiInsertUnusedSubsection(v6);
      }
    }
    if ( (__int64 *)v6 == BugCheckParameter2 )
      break;
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v8 )
      v5 &= ~8u;
  }
  while ( v6 );
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( (_BYTE)v4 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = v4;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(v4);
  }
  if ( v7 )
  {
    LOBYTE(v3) = *(_QWORD *)(v10 + 64) != 0LL;
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v10 + 60) & 0x3FF)), v3, v7);
  }
}
