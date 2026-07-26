/*
 * XREFs of NdisIMNotifyPnPEvent @ 0x1400AFAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1400706B0 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     NdisMNetPnPEvent @ 0x14007D770 (NdisMNetPnPEvent.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

NDIS_STATUS __stdcall NdisIMNotifyPnPEvent(NDIS_HANDLE MiniportHandle, PNET_PNP_EVENT NetPnPEvent)
{
  struct _NET_PNP_EVENT_NOTIFICATION NetPnPEventNotification; // [rsp+20h] [rbp-C8h] BYREF

  memset(&NetPnPEventNotification, 0, sizeof(NetPnPEventNotification));
  ndisInitializeNetPnPEvent(&NetPnPEventNotification, 0LL);
  NetPnPEventNotification.NetPnPEvent.NetEvent = NetPnPEvent->NetEvent;
  NetPnPEventNotification.NetPnPEvent.Buffer = NetPnPEvent->Buffer;
  NetPnPEventNotification.NetPnPEvent.BufferLength = NetPnPEvent->BufferLength;
  return NdisMNetPnPEvent(MiniportHandle, &NetPnPEventNotification);
}
