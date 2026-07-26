/*
 * XREFs of ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D2B60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14004BD90 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     NdisMCoSendNetBufferListsComplete @ 0x14005AB20 (NdisMCoSendNetBufferListsComplete.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D2CB0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisCoSendNetBufferListsToNdisPacket(_QWORD *a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  int v6; // edx
  char v7; // bl
  PNET_BUFFER_LIST Alignment; // rbx
  PNET_BUFFER_LIST v9; // rax
  struct _NDIS_PACKET **v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+38h] [rbp-C8h]
  int v12; // [rsp+3Ch] [rbp-C4h]
  PNET_BUFFER_LIST NetBufferLists; // [rsp+40h] [rbp-C0h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+48h] [rbp-B8h]
  unsigned int v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+54h] [rbp-ACh]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  _BYTE v18[512]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v18, 0, sizeof(v18));
  v12 = 0;
  v15 = 0;
  v10 = (struct _NDIS_PACKET **)v18;
  FirstNetBuffer = a2->FirstNetBuffer;
  v17 = a1[24];
  v11 = 64;
  NetBufferLists = a2;
  v16 = a3;
  do
  {
    v7 = ndisXlateSendNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v10, 0);
    if ( v15 )
      ndisCoSendPacketsToNdisPackets(a1, v10, v15);
  }
  while ( v7 );
  Alignment = NetBufferLists;
  if ( NetBufferLists )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        3,
        12,
        (struct _GUID *)&WPP_04789eb9d50d37f5e019db2d2af48132_Traceguids);
    }
    if ( FirstNetBuffer != Alignment->FirstNetBuffer )
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
    if ( Alignment )
    {
      v9 = Alignment;
      do
      {
        v9->Status = -1073741823;
        v9 = (PNET_BUFFER_LIST)v9->Link.Alignment;
      }
      while ( v9 );
      NdisMCoSendNetBufferListsComplete(a1, Alignment, a3 & 1);
    }
  }
}
