/*
 * XREFs of ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400305C0
 * Callers:
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140030E10 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DF050 (-ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DF260 (-ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E0640 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E0A50 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMIsLoopbackPacket @ 0x140030780 (ndisMIsLoopbackPacket.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall ndisMLoopbackPacketX(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  KIRQL v3; // si
  PMDL *v4; // rcx
  bool v6; // zf
  char v7; // al
  bool v8; // r14
  char *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  PMDL *v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  v6 = (a2->Private.NdisPacketFlags & 0x20) == 0;
  v13 = 0LL;
  v8 = 0;
  if ( v6 )
  {
    v7 = ndisMIsLoopbackPacket(a1, a2, &v13);
    v4 = v13;
    if ( v7 )
      v8 = 1;
  }
  if ( v4 )
  {
    a2->Private.NdisPacketFlags |= 0x20u;
    v9 = (char *)v4 + *((unsigned __int16 *)v4 + 21);
    v10 = *(unsigned int *)&a2[-1].ProtocolReserved[4];
    if ( (unsigned int)v10 >= ndisPacketStackSize )
      v11 = 16LL;
    else
      v11 = (__int64)a2 + 48 * (v10 - ndisPacketStackSize);
    *((_DWORD *)v9 + 8) = -1073741670;
    *(PMDL *)((char *)v13 + *((unsigned __int16 *)v13 + 21) + 72) = *(PMDL *)v11;
    if ( (a1->Flags & 0x40000) == 0 || (v3 = KfRaiseIrql(2u), (a1->Flags & 0x40000) == 0) )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    }
    if ( a1->MediaType == NdisMedium802_3 )
    {
      *((_DWORD *)v9 + 4) = 14;
      a1->PacketIndicateHandler(a1, (_NDIS_PACKET **)&v13, 1u);
    }
    if ( (a1->Flags & 0x40000) != 0 )
    {
      if ( v3 != 2 )
        KeLowerIrql(v3);
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    }
    IoFreeMdl(v13[1]);
    v13 = (PMDL *)((char *)v13 - 16 - 48LL * ndisPacketStackSize);
    ExFreePoolWithTag(v13, 0);
  }
  return v8;
}
