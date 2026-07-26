/*
 * XREFs of ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140030E10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400305C0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140030FC0 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E0F98 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1270 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPacketsXToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  bool v3; // r13
  unsigned int v5; // r14d
  __int64 v6; // r12
  _NDIS_PACKET **v7; // r15
  struct _NDIS_PACKET **v8; // rsi
  struct _NDIS_PACKET *v9; // rbx
  int v10; // ebp
  unsigned int Flags; // eax
  unsigned __int8 NdisPacketFlags; // dl
  unsigned __int8 SendFlags; // al
  int v14; // eax

  if ( a3 )
  {
    v3 = 0;
    v5 = 0;
    v6 = a3;
    v7 = a2;
    v8 = a2;
    do
    {
      v9 = *v8;
      v10 = 0;
      *(unsigned __int64 *)((char *)(*v8)->Reserved + (*v8)->Private.NdisPacketOobOffset) = 0LL;
      if ( (a1->SendFlags & 8) != 0 )
      {
        v10 = ndisMCheckPacketAndPad(a1, v9);
        if ( v10 )
          goto LABEL_19;
      }
      Flags = a1->Flags;
      if ( (Flags & 0x4000) != 0 || (Flags & 0x8800000) != 0 && SLOBYTE(v9->Private.Flags) >= 0 )
        v3 = ndisMLoopbackPacketX(a1, v9);
      NdisPacketFlags = v9->Private.NdisPacketFlags;
      if ( (NdisPacketFlags & 4) != 0 || v3 )
      {
LABEL_19:
        ndisMSendCompleteX(&a1->Header, v9, v10);
        if ( v5 )
        {
          a1->WSendPacketsHandler(a1->MiniportAdapterContext, v7, v5);
          v7 = v8 + 1;
          v5 = 0;
        }
      }
      else if ( (a1->Flags & 0x40) != 0 )
      {
        ndisMAllocSGList(a1, v9);
      }
      else
      {
        SendFlags = a1->SendFlags;
        v9->Private.NdisPacketFlags = NdisPacketFlags | 0x10;
        if ( (SendFlags & 1) != 0 )
        {
          ++v5;
        }
        else
        {
          v14 = a1->SendHandler(a1->MiniportAdapterContext, v9, v9->Private.Flags);
          if ( v14 != 259 )
            ndisMSendCompleteX(&a1->Header, v9, v14);
        }
      }
      ++v8;
      --v6;
    }
    while ( v6 );
    if ( v5 )
      a1->WSendPacketsHandler(a1->MiniportAdapterContext, v7, v5);
  }
}
