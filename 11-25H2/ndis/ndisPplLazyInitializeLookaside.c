/*
 * XREFs of ndisPplLazyInitializeLookaside @ 0x14007A1D0
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x14001B0A0 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x14001B600 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x14001E020 (ndisAllocateNetBufferListInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPplLazyInitializeLookaside(PLOOKASIDE_LIST_EX Lookaside, __int64 a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Lookaside[2].L.Depth);
  if ( !LOBYTE(Lookaside[2].L.AllocateMisses) )
  {
    ExInitializeLookasideListEx(
      Lookaside,
      (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
      *(PFREE_FUNCTION_EX *)(a2 + 56),
      NonPagedPoolNx,
      0,
      *(unsigned int *)(a2 + 44),
      *(_DWORD *)(a2 + 40),
      0x400u);
    LOBYTE(Lookaside[2].L.AllocateMisses) = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&Lookaside[2].L.Depth, v4);
}
