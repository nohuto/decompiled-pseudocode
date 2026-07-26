/*
 * XREFs of ?ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x14007D850
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017F400 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLWM5PauseMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_PAUSE_PARAMETERS *a2)
{
  unsigned int v3; // edi
  KIRQL v4; // al
  unsigned __int64 *p_RecvLock; // rcx

  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->RecvLock);
  a1->RecvState = NdisMiniportPausing;
  if ( a1->Miniport5InNdis6Mode )
  {
    if ( a1->OutstandingReceives )
      v3 = 259;
    else
      a1->RecvState = NdisMiniportPaused;
    a1->MiniportRecvLockThread = 0LL;
    p_RecvLock = &a1->RecvLock;
  }
  else
  {
    *(_QWORD *)&a1->RecvState = 6LL;
    a1->Miniport5InNdis6Mode = 1;
    a1->MiniportRecvLockThread = 0LL;
    KeReleaseSpinLock(&a1->RecvLock, v4);
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->SynchronousReturnPacketContext = a1;
    a1->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a1->EthRxIndicateHandler = EthIndicateReceive;
    if ( (a1->Flags & 0x20000000) != 0 )
      a1->PacketIndicateHandler = ndisMIndicatePacketsToNetBufferLists;
    a1->SavedPacketIndicateHandler = ndisMIndicatePacketsToNetBufferLists;
    p_RecvLock = &a1->Lock;
    a1->MiniportThread = 0LL;
  }
  KeReleaseSpinLock(p_RecvLock, v4);
  return v3;
}
