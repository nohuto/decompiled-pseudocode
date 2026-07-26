/*
 * XREFs of ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14002F320
 * Callers:
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 * Callees:
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14002F410 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140048FD0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendNetBufferListsToPackets(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        int a4)
{
  char v4; // si
  _NET_BUFFER *FirstNetBuffer; // rax
  unsigned __int8 v7; // di
  struct _NET_BUFFER_LIST *Alignment; // rdx
  struct _NET_BUFFER_LIST *v9; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-A8h] BYREF
  struct _NET_BUFFER_LIST *v11; // [rsp+30h] [rbp-98h]
  _NET_BUFFER *v12; // [rsp+38h] [rbp-90h]
  int v13; // [rsp+40h] [rbp-88h]
  int v14; // [rsp+44h] [rbp-84h]
  struct _NDIS_MINIPORT_BLOCK *v15; // [rsp+48h] [rbp-80h]
  _OWORD v16[5]; // [rsp+50h] [rbp-78h] BYREF

  v10[1] = 10LL;
  v11 = a2;
  v13 = 0;
  v4 = a4;
  v14 = a4;
  v10[0] = v16;
  FirstNetBuffer = a2->FirstNetBuffer;
  memset(v16, 0, sizeof(v16));
  v12 = FirstNetBuffer;
  v15 = a1;
  do
  {
    while ( 1 )
    {
      v7 = ndisXlateSendNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)v10, 1u);
      if ( !v13 )
        break;
      ((void (__fastcall *)(struct _NDIS_MINIPORT_BLOCK *, _OWORD *))a1->FinalSendPacketsHandler)(a1, v16);
      if ( !v7 )
        goto LABEL_4;
    }
  }
  while ( v7 );
LABEL_4:
  Alignment = v11;
  if ( v11 )
  {
    if ( v12 != v11->FirstNetBuffer )
      Alignment = (struct _NET_BUFFER_LIST *)v11->Link.Alignment;
    if ( Alignment )
    {
      v9 = Alignment;
      do
      {
        v9->Status = -1073741670;
        v9 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
      }
      while ( v9 );
      ndisMSendNetBufferListsCompleteInternal(a1, Alignment, v4 & 1, 0);
    }
  }
}
