/*
 * XREFs of VmpProcessContextUnlockExclusive @ 0x14047A000
 * Callers:
 *     VmpFlushTb @ 0x1402A1F80 (VmpFlushTb.c)
 *     VmpSplitMemoryRange @ 0x140399CE8 (VmpSplitMemoryRange.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     VmpRemoveMemoryRange @ 0x140479B50 (VmpRemoveMemoryRange.c)
 *     VmpInvalidateSlatBatched @ 0x140479E38 (VmpInvalidateSlatBatched.c)
 *     VmpMergeMemoryRanges @ 0x1404C98A4 (VmpMergeMemoryRanges.c)
 *     VmpInsertMemoryRange @ 0x140648FA0 (VmpInsertMemoryRange.c)
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x140649920 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpProcessContextUnlockExclusive(volatile LONG *a1, unsigned __int8 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  ExReleaseSpinLockExclusiveFromDpcLevel(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = a2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = a2;
  __writecr8(a2);
  return result;
}
