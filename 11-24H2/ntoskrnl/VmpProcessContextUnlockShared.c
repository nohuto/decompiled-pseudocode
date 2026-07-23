/*
 * XREFs of VmpProcessContextUnlockShared @ 0x14039A38C
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x1403990BC (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x140399630 (VmpQueryAccessedState.c)
 *     VmpAccessFaultBatch @ 0x140399920 (VmpAccessFaultBatch.c)
 *     VmpSplitMemoryRange @ 0x140399CE8 (VmpSplitMemoryRange.c)
 *     VmColdPagesHint @ 0x14039A140 (VmColdPagesHint.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x140649B80 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpProcessContextUnlockShared(volatile LONG *a1, unsigned __int8 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  ExReleaseSpinLockSharedFromDpcLevel(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = a2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = a2;
  __writecr8(a2);
  return result;
}
