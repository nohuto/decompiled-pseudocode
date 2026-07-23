/*
 * XREFs of MiUpdateControlAreaCommitCount @ 0x14026B17C
 * Callers:
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiChargeSegmentCommit @ 0x140974EF8 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB2AE0 (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUpdateControlAreaCommitCount(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx

  _InterlockedAdd64(
    (volatile signed __int64 *)(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF)) + 19640LL),
    a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 16LL) += a2;
    return 0LL;
  }
  else
  {
    v4 = (volatile LONG *)(a1 + 72);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_QWORD *)(a1 + 120) = (*(_QWORD *)(a1 + 120) + a2) ^ (*(_QWORD *)(a1 + 120) ^ (*(_QWORD *)(a1 + 120) + a2)) & 0xFFFFFFF000000000uLL;
    v6 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(a1 + 128) + 48) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( (_BYTE)v5 != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = v5;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      }
      __writecr8(v5);
    }
    return v6;
  }
}
