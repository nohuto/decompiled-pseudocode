/*
 * XREFs of HalpBuddyAllocatorBltRemove @ 0x1405714D0
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140470534 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140571710 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     HalpBuddyAllocatorBltRemoveInternal @ 0x14045F0B0 (HalpBuddyAllocatorBltRemoveInternal.c)
 */

void __fastcall HalpBuddyAllocatorBltRemove(_QWORD *a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // r8

  v2 = (KSPIN_LOCK *)(a2 + 104);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  if ( (_QWORD *)*a1 != a1 )
    HalpBuddyAllocatorBltRemoveInternal(a1);
  KeReleaseSpinLock(v2, v4);
}
