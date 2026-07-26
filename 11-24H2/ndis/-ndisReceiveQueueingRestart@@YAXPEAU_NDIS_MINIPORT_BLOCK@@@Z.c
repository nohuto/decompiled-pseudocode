/*
 * XREFs of ?ndisReceiveQueueingRestart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C2050
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140172FB0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingRestart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  a1->PeriodicReceiveQueue.Paused = 0;
  if ( byte_14011B4C1 == 1
    && dword_14011B4C4 != -1
    && a1->PeriodicReceiveQueue.BoundToIP
    && a1->MediaType == NdisMedium802_3 )
  {
    a1->PeriodicReceiveQueue.State = PeriodicReceivesOn;
  }
}
