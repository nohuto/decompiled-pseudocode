/*
 * XREFs of VmpProcessContextLockExclusive @ 0x1403B0458
 * Callers:
 *     VmpFlushTb @ 0x140292380 (VmpFlushTb.c)
 *     VmpSplitMemoryRange @ 0x1403AB5D4 (VmpSplitMemoryRange.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     VmpRemoveMemoryRange @ 0x14047ED34 (VmpRemoveMemoryRange.c)
 *     VmpInvalidateSlatBatched @ 0x14047F01C (VmpInvalidateSlatBatched.c)
 *     VmpMergeMemoryRanges @ 0x1404D06B0 (VmpMergeMemoryRanges.c)
 *     VmpInsertMemoryRange @ 0x14064A9E0 (VmpInsertMemoryRange.c)
 *     VmpPinMemoryRange @ 0x14064ACC0 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14064B360 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG *v1; // rdi
  unsigned __int8 CurrentIrql; // bl

  v1 = SpinLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SpinLock) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SpinLock, 15LL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  return CurrentIrql;
}
