/*
 * XREFs of MiGetHugeBadRangeFromNode @ 0x14066FF88
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockHugePfnInternal @ 0x1403F9BD8 (MiLockHugePfnInternal.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404B219C (MiGetColorHeadHugeRangeBase.c)
 *     MiUnlockHugePfn @ 0x1404CF53C (MiUnlockHugePfn.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
    if ( _bittest64((const signed __int64 *)qword_140E2FFB8, v6) )
    {
      v7 = (__int64 *)(qword_140E2FFC0 + 8 * v6);
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
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FED0);
        MiUnlinkHugeRange((__int64)a1, v4);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FED0);
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
