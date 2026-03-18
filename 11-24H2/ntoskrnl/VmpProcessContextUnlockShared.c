/*
 * XREFs of VmpProcessContextUnlockShared @ 0x1403ABC7C
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x1403AA658 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1403AAF1C (VmpQueryAccessedState.c)
 *     VmpAccessFaultBatch @ 0x1403AB20C (VmpAccessFaultBatch.c)
 *     VmpSplitMemoryRange @ 0x1403AB5D4 (VmpSplitMemoryRange.c)
 *     VmColdPagesHint @ 0x1403ABA30 (VmColdPagesHint.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x14064B5C0 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
