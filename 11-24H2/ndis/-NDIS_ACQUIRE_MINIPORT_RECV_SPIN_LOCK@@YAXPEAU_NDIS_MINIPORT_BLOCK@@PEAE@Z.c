/*
 * XREFs of ?NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005C710
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D3420 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  *a2 = KeAcquireSpinLockRaiseToDpc(&a1->RecvLock);
  a1->MiniportRecvLockThread = KeGetCurrentThread();
}
