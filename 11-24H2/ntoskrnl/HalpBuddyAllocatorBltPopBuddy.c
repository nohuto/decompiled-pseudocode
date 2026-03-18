/*
 * XREFs of HalpBuddyAllocatorBltPopBuddy @ 0x1403AC510
 * Callers:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x1403AD740 (HalpBuddyAllocatorFreeLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpBuddyAllocatorBltRemoveInternal @ 0x1403AC580 (HalpBuddyAllocatorBltRemoveInternal.c)
 */

__int64 __fastcall HalpBuddyAllocatorBltPopBuddy(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi

  v2 = (KSPIN_LOCK *)(a2 + 104);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v7 = *(_QWORD *)(a1 + 16);
  LOBYTE(v8) = v4;
  v9 = *(_QWORD *)(v7 + 24);
  if ( a1 == v9 )
    v9 = *(_QWORD *)(v7 + 32);
  if ( *(_BYTE *)(v9 + 72) || *(_QWORD *)v9 == v9 )
    v9 = 0LL;
  else
    HalpBuddyAllocatorBltRemoveInternal(v9, v5, v8, v6);
  KeReleaseSpinLock(v2, v8);
  return v9;
}
