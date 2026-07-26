/*
 * XREFs of ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x140057790
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisReturnPeriodicReceives(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *v2; // rbx
  struct _NET_BUFFER_LIST *v4; // r15
  _QWORD *p_Alignment; // r12
  struct _NET_BUFFER_LIST *Alignment; // rdi
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v8; // rsi
  _MDL *CurrentMdl; // rbp

  v2 = a2;
  v4 = 0LL;
  p_Alignment = 0LL;
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v2->Link.Alignment;
      v2->Link.Alignment = 0LL;
      if ( v2->NdisPoolHandle == PoolHandle )
      {
        _InterlockedDecrement(&a1->PeriodicReceiveQueue.NblsAllocated);
        FirstNetBuffer = v2->FirstNetBuffer;
        v8 = (struct _NPAGED_LOOKASIDE_LIST *)v2->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v8 )
          ExFreeToNPagedLookasideList(v8, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v2);
      }
      else
      {
        if ( v4 )
          *p_Alignment = v2;
        else
          v4 = v2;
        p_Alignment = &v2->Link.Alignment;
      }
      v2 = Alignment;
    }
    while ( Alignment );
  }
  return v4;
}
