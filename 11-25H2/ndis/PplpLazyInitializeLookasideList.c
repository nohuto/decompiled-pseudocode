/*
 * XREFs of PplpLazyInitializeLookasideList @ 0x140048910
 * Callers:
 *     NdisMAllocateNetBufferSGList @ 0x140048000 (NdisMAllocateNetBufferSGList.c)
 *     PplFreeToLookasideList @ 0x140048730 (PplFreeToLookasideList.c)
 *     PplAllocateFromLookasideList @ 0x140048790 (PplAllocateFromLookasideList.c)
 *     NdisMFreeNetBufferSGList @ 0x1400487E0 (NdisMFreeNetBufferSGList.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpLazyInitializeLookasideList(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  if ( !*(_BYTE *)(a2 + 112) )
  {
    ExInitializeLookasideListEx(
      (PLOOKASIDE_LIST_EX)a2,
      PplpGenericAllocateFunction,
      PplpGenericFreeFunction,
      *(POOL_TYPE *)(a1 + 32),
      *(_DWORD *)(a1 + 4),
      *(_QWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 8),
      *(_WORD *)(a1 + 36));
    *(_BYTE *)(a2 + 112) = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 104), v4);
}
