/*
 * XREFs of VmpProcessContextLockShared @ 0x1403ABC30
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x1403AA658 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1403AAF1C (VmpQueryAccessedState.c)
 *     VmpAccessFaultBatch @ 0x1403AB20C (VmpAccessFaultBatch.c)
 *     VmpSplitMemoryRange @ 0x1403AB5D4 (VmpSplitMemoryRange.c)
 *     VmColdPagesHint @ 0x1403ABA30 (VmColdPagesHint.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x14064B5C0 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
