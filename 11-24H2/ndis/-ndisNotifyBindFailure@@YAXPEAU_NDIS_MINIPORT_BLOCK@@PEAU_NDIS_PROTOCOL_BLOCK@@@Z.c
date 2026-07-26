/*
 * XREFs of ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140075090
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153580 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140165A30 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x140055540 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401529A0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153EA0 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153EE0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void __fastcall ndisNotifyBindFailure(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  int v4; // edx
  int v5; // edx
  struct _KEVENT v6; // [rsp+40h] [rbp-108h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v7; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD v8[2]; // [rsp+110h] [rbp-38h] BYREF

  memset(&v7, 0, sizeof(v7));
  HIDWORD(v8[0]) = 0;
  memset(&v6, 0, sizeof(v6));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      6,
      89,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a1,
      (char)a2);
  }
  if ( a2->MajorNdisVersion > 6u || a2->MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
  {
    ndisInitializeNetPnPEvent(&v7, &v6);
    v8[1] = a1->NetLuid.Value;
    v7.NetPnPEvent.NetEvent = NetEventBindFailed;
    v7.NetPnPEvent.BufferLength = 16;
    v7.NetPnPEvent.Buffer = v8;
    v8[0] = 1048960LL;
    WAIT_FOR_PROTO_MUTEX(a2);
    ndisDeliverNetPnPEventSynchronously(a2, 0LL, &v7);
    RELEASE_PROT_MUTEX(a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        6,
        90,
        (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
        (char)a1,
        (char)a2);
    }
  }
}
