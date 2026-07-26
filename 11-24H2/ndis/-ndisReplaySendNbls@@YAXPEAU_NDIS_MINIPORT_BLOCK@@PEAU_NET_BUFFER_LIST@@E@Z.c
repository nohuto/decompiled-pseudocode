/*
 * XREFs of ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140038E10
 * Callers:
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400C3178 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 */

void __fastcall ndisReplaySendNbls(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_BUFFER_LIST *a2, unsigned __int8 a3)
{
  struct _NET_BUFFER_LIST *Alignment; // rbx
  unsigned int v6; // esi
  struct _NET_BUFFER_LIST *v7; // rdi
  _SLIST_HEADER *v8; // r12
  unsigned int Scratch; // r14d
  struct _NET_BUFFER_LIST *v10; // rax

  Alignment = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, (unsigned __int64)a1->NblTracker, 0x92u, 0);
  for ( ; Alignment; v7 = v10 )
  {
    Scratch = (unsigned int)Alignment->Scratch;
    if ( v7 && Scratch != v6 )
    {
      v8->Alignment = 0LL;
      ndisMSendNBLToMiniportInternal(a1, v7, v6, 0, a3);
      v7 = 0LL;
    }
    v10 = Alignment;
    v8 = (_SLIST_HEADER *)Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    if ( v7 )
    {
      v10 = v7;
      Scratch = v6;
    }
    v6 = Scratch;
  }
  ndisMSendNBLToMiniportInternal(a1, v7, v6, 0, a3);
}
