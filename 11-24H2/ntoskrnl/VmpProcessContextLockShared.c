/*
 * XREFs of VmpProcessContextLockShared @ 0x14039A340
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x1403990BC (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x140399630 (VmpQueryAccessedState.c)
 *     VmpAccessFaultBatch @ 0x140399920 (VmpAccessFaultBatch.c)
 *     VmpSplitMemoryRange @ 0x140399CE8 (VmpSplitMemoryRange.c)
 *     VmColdPagesHint @ 0x14039A140 (VmColdPagesHint.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x140649B80 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpProcessContextLockShared(PEX_SPIN_LOCK SpinLock)
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
  ExAcquireSpinLockSharedAtDpcLevel(v1);
  return CurrentIrql;
}
