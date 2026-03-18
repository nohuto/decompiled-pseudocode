/*
 * XREFs of VmpProcessContextUnlockExclusive @ 0x14047F1E4
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
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
