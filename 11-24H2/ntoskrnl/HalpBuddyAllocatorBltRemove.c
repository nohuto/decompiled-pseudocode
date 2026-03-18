/*
 * XREFs of HalpBuddyAllocatorBltRemove @ 0x1405747D0
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x1403AC040 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140574A10 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpBuddyAllocatorBltRemoveInternal @ 0x1403AC580 (HalpBuddyAllocatorBltRemoveInternal.c)
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
