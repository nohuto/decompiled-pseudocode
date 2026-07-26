/*
 * XREFs of ndisFreeToLookasideList @ 0x14001B990
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x14001B0A0 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x14001B600 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x14001E020 (ndisAllocateNetBufferListInternal.c)
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
