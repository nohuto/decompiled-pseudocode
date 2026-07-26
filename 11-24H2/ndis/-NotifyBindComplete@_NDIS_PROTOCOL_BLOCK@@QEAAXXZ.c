/*
 * XREFs of ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1401527F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x140055540 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401529A0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153EA0 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153EE0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void __fastcall _NDIS_PROTOCOL_BLOCK::NotifyBindComplete(_NDIS_PROTOCOL_BLOCK *this)
{
  int v2; // r9d
  struct _KEVENT v3; // [rsp+20h] [rbp-E8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v4; // [rsp+40h] [rbp-C8h] BYREF

  memset(&v4, 0, sizeof(v4));
  memset(&v3, 0, sizeof(v3));
  ndisInitializeNetPnPEvent(&v4, &v3);
  v4.NetPnPEvent.NetEvent = NetEventBindsComplete;
  WAIT_FOR_PROTO_MUTEX(this);
  ndisDeliverNetPnPEventSynchronously(this, 0LL, &v4);
  RELEASE_PROT_MUTEX(this);
  ndisDereferenceProtocol(this, 0, 0xCu, v2);
}
