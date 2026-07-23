/*
 * XREFs of HalpBuddyAllocatorBltRemove @ 0x140571C60
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x14039A750 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140571EA0 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpBuddyAllocatorBltRemoveInternal @ 0x14039AD8C (HalpBuddyAllocatorBltRemoveInternal.c)
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
