/*
 * XREFs of MiGetHugeBadRangeFromNode @ 0x140664468
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14020DE6C (MiLockHugePfnInternal.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404B3154 (MiGetColorHeadHugeRangeBase.c)
 *     MiUnlockHugePfn @ 0x1404CF564 (MiUnlockHugePfn.c)
 *     MiUnlinkHugeRange @ 0x1404ED7BC (MiUnlinkHugeRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetHugeBadRangeFromNode(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rbx
  _QWORD *ColorHeadHugeRangeBase; // r15
  __int64 v6; // rdx
  __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rdx
  __int64 v10; // rdx

  v2 = *a1;
  v4 = 0LL;
  ColorHeadHugeRangeBase = (_QWORD *)MiGetColorHeadHugeRangeBase(
                                       *((_QWORD *)a1 + 2) + 57216LL * (unsigned int)a2,
                                       a2,
                                       5);
  while ( 1 )
  {
    v6 = (*ColorHeadHugeRangeBase >> 15) & 0x3FFFFFLL;
    v4 = (*ColorHeadHugeRangeBase >> 15) ^ ((*ColorHeadHugeRangeBase >> 15) ^ v4) & 0xFFFFFFFFFFC00000uLL;
    if ( !v6 )
      break;
    if ( _bittest64((const signed __int64 *)stru_140E2FD70.Buffer, v6) )
    {
      v7 = (__int64 *)(qword_140E2FD80 + 8 * v6);
      if ( KeGetCurrentIrql() == 2 )
      {
        CurrentIrql = 17;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v6) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
        }
      }
      MiLockHugePfnInternal((__int64)v7);
      v9 = *v7;
      if ( (((unsigned __int64)*v7 >> 4) & 0x7FF) == v2 && (v9 & 7) == 4 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FC90);
        MiUnlinkHugeRange((__int64)a1, v4);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FC90);
        LOBYTE(v10) = CurrentIrql;
        MiUnlockHugePfn((__int64)v7, v10);
        return v4;
      }
      LOBYTE(v9) = CurrentIrql;
      MiUnlockHugePfn((__int64)v7, v9);
    }
  }
  return v4;
}
