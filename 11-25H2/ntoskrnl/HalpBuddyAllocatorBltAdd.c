/*
 * XREFs of HalpBuddyAllocatorBltAdd @ 0x14047060C
 * Callers:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14026D980 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14026E720 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140470534 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140571710 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall HalpBuddyAllocatorBltAdd(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 **v7; // rdx

  _BitScanForward64(&v4, a1[7]);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v6 = *(_QWORD *)(a2 + 96) + 16LL * (unsigned int)(v4 - 12);
  v7 = *(__int64 ***)(v6 + 8);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  *a1 = v6;
  a1[1] = (__int64)v7;
  *v7 = a1;
  *(_QWORD *)(v6 + 8) = a1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 104), v5);
}
