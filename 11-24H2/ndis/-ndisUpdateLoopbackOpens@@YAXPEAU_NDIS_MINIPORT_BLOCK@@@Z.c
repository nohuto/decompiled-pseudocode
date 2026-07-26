/*
 * XREFs of ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003EF70
 * Callers:
 *     ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14003EC10 (-ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14003F1E0 (-ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BF178 (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017BA40 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdateLoopbackOpens(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rax
  unsigned __int8 i; // r8
  unsigned int PacketFilters; // edx

  OpenQueue = a1->OpenQueue;
  for ( i = 0; OpenQueue; OpenQueue = OpenQueue->MiniportNextOpen )
  {
    PacketFilters = OpenQueue->PacketFilters;
    if ( (PacketFilters & 0x80u) != 0 || (PacketFilters & 0x20) != 0 && (PacketFilters & 0x10000) == 0 )
      ++i;
  }
  a1->LoopbackOpens = i;
}
