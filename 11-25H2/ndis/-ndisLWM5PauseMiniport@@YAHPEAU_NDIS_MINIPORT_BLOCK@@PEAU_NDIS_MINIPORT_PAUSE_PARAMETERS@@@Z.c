/*
 * XREFs of ?ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1400901D0
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14018BD20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisLWM5PauseMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_PAUSE_PARAMETERS *a2)
{
  unsigned int v3; // esi
  KIRQL v4; // al
  bool v5; // zf
  unsigned __int64 *p_RecvLock; // rcx
  KIRQL v7; // dl
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->RecvLock);
  LOBYTE(v9) = v4;
  a1->RecvState = NdisMiniportPausing;
  if ( a1->Miniport5InNdis6Mode )
  {
    if ( a1->OutstandingReceives )
      v3 = 259;
    else
      a1->RecvState = NdisMiniportPaused;
    a1->MiniportRecvLockThread = 0LL;
    p_RecvLock = &a1->RecvLock;
    v7 = v4;
  }
  else
  {
    *(_QWORD *)&a1->RecvState = 6LL;
    a1->Miniport5InNdis6Mode = 1;
    a1->MiniportRecvLockThread = 0LL;
    KeReleaseSpinLock(&a1->RecvLock, v4);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, (unsigned __int8 *)&v9);
    v5 = (a1->Flags & 0x20000000) == 0;
    a1->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a1->EthRxIndicateHandler = EthIndicateReceive;
    a1->SynchronousReturnPacketContext = a1;
    if ( !v5 )
      a1->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
    a1->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
    p_RecvLock = &a1->Lock;
    v7 = (unsigned __int8)v9;
    a1->MiniportThread = 0LL;
  }
  KeReleaseSpinLock(p_RecvLock, v7);
  return v3;
}
