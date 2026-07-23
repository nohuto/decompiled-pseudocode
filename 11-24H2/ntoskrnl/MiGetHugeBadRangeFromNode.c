/*
 * XREFs of MiGetHugeBadRangeFromNode @ 0x140671158
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404ACA2C (MiGetColorHeadHugeRangeBase.c)
 *     MiUnlockHugePfn @ 0x1404C8804 (MiUnlockHugePfn.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
    if ( _bittest64((const signed __int64 *)stru_140E300F0.Buffer, v6) )
    {
      v7 = (__int64 *)(qword_140E30100 + 8 * v6);
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
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E30010);
        MiUnlinkHugeRange((__int64)a1, v4);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E30010);
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
