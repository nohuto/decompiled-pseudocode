/*
 * XREFs of ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140089F90 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008AAC0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400D9D40 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA074 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPacketsXToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned __int8 v3; // r13
  unsigned int v4; // ebp
  _NDIS_PACKET **v5; // rsi
  __int64 v6; // r12
  struct _NDIS_PACKET **i; // r15
  struct _NDIS_PACKET *v9; // rbx
  unsigned int v10; // r14d
  unsigned int *p_Flags; // rsi
  bool v12; // zf
  unsigned int v13; // eax
  struct _NDIS_PACKET **v14; // [rsp+58h] [rbp+10h]

  if ( a3 )
  {
    v14 = a2;
    v3 = 0;
    v4 = 0;
    v5 = a2;
    v6 = a3;
    for ( i = a2; ; ++i )
    {
      v9 = *i;
      v10 = 0;
      *(unsigned __int64 *)((char *)(*i)->Reserved + (*i)->Private.NdisPacketOobOffset) = 0LL;
      if ( (a1->SendFlags & 8) != 0 )
      {
        v10 = ndisMCheckPacketAndPad(a1, v9);
        if ( v10 )
          goto LABEL_24;
      }
      p_Flags = &a1->Flags;
      if ( (a1->Flags & 0x4000) != 0 )
        goto LABEL_9;
      if ( (v9->Private.Flags & 0x80u) == 0 && (*p_Flags & 0x8800000) != 0 )
        break;
LABEL_10:
      if ( (v9->Private.NdisPacketFlags & 4) != 0 || v3 )
      {
        v5 = v14;
LABEL_24:
        ndisMSendCompleteX(a1, v9, v10);
        if ( v4 )
        {
          a1->WSendPacketsHandler(a1->MiniportAdapterContext, v5, v4);
          v5 = i + 1;
          v4 = 0;
          v14 = i + 1;
        }
        goto LABEL_15;
      }
      if ( (*p_Flags & 0x40) != 0 )
      {
        ndisMAllocSGList(a1, v9);
      }
      else
      {
        v12 = (a1->SendFlags & 1) == 0;
        v9->Private.NdisPacketFlags |= 0x10u;
        if ( v12 )
        {
          v13 = a1->SendHandler(a1->MiniportAdapterContext, v9, v9->Private.Flags);
          if ( v13 != 259 )
            ndisMSendCompleteX(a1, v9, v13);
        }
        else
        {
          ++v4;
        }
      }
      v5 = v14;
LABEL_15:
      if ( !--v6 )
      {
        if ( v4 )
          a1->WSendPacketsHandler(a1->MiniportAdapterContext, v5, v4);
        return;
      }
    }
    p_Flags = &a1->Flags;
LABEL_9:
    v3 = ndisMLoopbackPacketX(a1, v9);
    goto LABEL_10;
  }
}
