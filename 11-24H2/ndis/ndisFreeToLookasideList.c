/*
 * XREFs of ndisFreeToLookasideList @ 0x14001A660
 * Callers:
 *     NdisFreeNetBuffer @ 0x14001A2D0 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x140022D10 (NdisFreeCloneNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x140024B40 (ndisAllocateNetBufferListInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisFreeToLookasideList(__int64 a1, _SLIST_ENTRY *a2)
{
  _SLIST_HEADER *v4; // rdi

  if ( *((_DWORD *)&a2[-1].Next + 2) == KeGetPcr()->Prcb.Number )
    v4 = *(_SLIST_HEADER **)(a1 + 192);
  else
    v4 = *(_SLIST_HEADER **)(a1 + 200);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 28));
  if ( ExQueryDepthSList(v4) >= *(_WORD *)(a1 + 16) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
    return 0;
  }
  else
  {
    ExpInterlockedPushEntrySList(v4, a2);
    return 1;
  }
}
