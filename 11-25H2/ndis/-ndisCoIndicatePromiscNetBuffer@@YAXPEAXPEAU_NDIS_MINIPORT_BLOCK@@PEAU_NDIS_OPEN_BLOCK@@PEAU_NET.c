/*
 * XREFs of ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x14006A5F0
 * Callers:
 *     ?ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14006FA50 (-ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400DA9C0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400DAD40 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002F8A0 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x140035310 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisCoIndicatePromiscNetBuffer(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // r15
  bool v11; // zf
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rsi
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v14; // rax
  unsigned __int8 v15; // r12
  _NDIS_PACKET **v16; // r13
  __int64 v17; // r12
  _NDIS_PACKET *v18; // rdi
  unsigned __int8 v19; // [rsp+30h] [rbp-298h]
  _NDIS_PACKET **v20; // [rsp+40h] [rbp-288h] BYREF
  int v21; // [rsp+48h] [rbp-280h]
  int v22; // [rsp+4Ch] [rbp-27Ch]
  struct _NET_BUFFER_LIST *v23; // [rsp+50h] [rbp-278h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+58h] [rbp-270h]
  __int64 v25; // [rsp+60h] [rbp-268h]
  struct _NDIS_MINIPORT_BLOCK *v26; // [rsp+68h] [rbp-260h]
  _BYTE v27[512]; // [rsp+70h] [rbp-258h] BYREF

  v7 = a1[9];
  v25 = 0LL;
  memset(v27, 0, sizeof(v27));
  v20 = (_NDIS_PACKET **)v27;
  v11 = a2->PmodeOpens == 0;
  FirstNetBuffer = a4->FirstNetBuffer;
  v21 = 64;
  v22 = -1073741670;
  v23 = a4;
  v26 = a2;
  if ( !v11 && a3 )
  {
    do
    {
      if ( a7 )
        FilterNextOpen = a3->FilterNextOpen;
      else
        FilterNextOpen = a3->MiniportNextOpen;
      if ( (a3->OpenFlags & 4) != 0 )
      {
        *((_BYTE *)a3->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
        if ( a3->ProtocolHandle->MajorNdisVersion < 6u )
        {
          do
          {
            v15 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v20);
            v19 = v15;
            if ( (_DWORD)v25 )
            {
              v16 = v20;
              v17 = (unsigned int)v25;
              do
              {
                v18 = *v16;
                v18->Private.Flags |= 0x100u;
                a3->ProtocolHandle->CoReceivePacketHandler(a3->ProtocolBindingContext, (void *)(v7 + 136), v18);
                ndisXlateReturnPacketToNetBufferList(v18);
                ++v16;
                --v17;
              }
              while ( v17 );
              v15 = v19;
            }
          }
          while ( v15 );
        }
        else
        {
          Alignment = a4;
          do
          {
            Alignment->Flags |= 0x80u;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          a4->NblFlags |= 0x8000u;
          a3->ProtocolHandle->CoReceiveNetBufferListsHandler(
            a3->ProtocolBindingContext,
            (void *)(v7 + 136),
            a4,
            a5,
            a6 | 2);
          v14 = a4;
          do
          {
            v14->Flags &= ~0x80u;
            v14 = (struct _NET_BUFFER_LIST *)v14->Link.Alignment;
          }
          while ( v14 );
          a4->NblFlags &= ~0x8000u;
        }
      }
      a3 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
