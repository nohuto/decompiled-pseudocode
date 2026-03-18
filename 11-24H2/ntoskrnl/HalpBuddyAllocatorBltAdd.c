/*
 * XREFs of HalpBuddyAllocatorBltAdd @ 0x1403AC5B0
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x1403AC040 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x1403ACFA0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x1403AD740 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140574A10 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
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
