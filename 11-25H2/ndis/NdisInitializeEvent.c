/*
 * XREFs of NdisInitializeEvent @ 0x14006FAB0
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
