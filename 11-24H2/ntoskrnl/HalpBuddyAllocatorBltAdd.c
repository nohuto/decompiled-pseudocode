/*
 * XREFs of HalpBuddyAllocatorBltAdd @ 0x14039ADBC
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x14039A750 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14039B7B0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14039BF50 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140571EA0 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
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
