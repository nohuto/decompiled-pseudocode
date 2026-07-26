/*
 * XREFs of ?ndisFForwardNetDevicePnPEvent@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x140068FF0
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x140068E40 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 * Callees:
 *     NdisFDevicePnPEventNotify @ 0x140069020 (NdisFDevicePnPEventNotify.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x14016E7C0 (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 */

void __fastcall ndisFForwardNetDevicePnPEvent(struct _NDIS_FILTER_BLOCK *a1, struct _NET_DEVICE_PNP_EVENT *a2)
{
  if ( a1->FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler )
    ndisFInvokeDevicePnPEventNotify(a1, a2);
  else
    NdisFDevicePnPEventNotify(a1, a2);
}
