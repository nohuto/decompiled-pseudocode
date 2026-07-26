/*
 * XREFs of ?ndisReceiveQueueingRestart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C9280
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017DF70 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingRestart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  a1->PeriodicReceiveQueue.Paused = 0;
  if ( byte_140125501 == 1
    && dword_140125504 != -1
    && a1->PeriodicReceiveQueue.BoundToIP
    && a1->MediaType == NdisMedium802_3 )
  {
    a1->PeriodicReceiveQueue.State = PeriodicReceivesOn;
  }
}
