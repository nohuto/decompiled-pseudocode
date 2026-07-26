/*
 * XREFs of ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008AAC0
 * Callers:
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A0B0 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D7D20 (-ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D7F30 (-ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D93B0 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D97E0 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisMIsLoopbackPacket @ 0x14008A600 (ndisMIsLoopbackPacket.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall ndisMLoopbackPacketX(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  KIRQL v3; // r14
  PMDL *v4; // rcx
  bool v6; // zf
  bool v7; // al
  bool v8; // bp
  char *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int *p_Flags; // rdi
  PMDL *v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  v6 = (a2->Private.NdisPacketFlags & 0x20) == 0;
  v14 = 0LL;
  v8 = 0;
  if ( v6 )
  {
    v7 = ndisMIsLoopbackPacket((__int64)a1, a2, (char **)&v14);
    v4 = v14;
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
    p_Flags = &a1->Flags;
    *(PMDL *)((char *)v14 + *((unsigned __int16 *)v14 + 21) + 72) = *(PMDL *)v11;
    if ( (a1->Flags & 0x40000) != 0 )
      v3 = KfRaiseIrql(2u);
    if ( (*p_Flags & 0x40000) != 0 )
    {
      p_Flags = &a1->Flags;
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    }
    if ( a1->MediaType == NdisMedium802_3 )
    {
      *((_DWORD *)v9 + 4) = 14;
      a1->PacketIndicateHandler(a1, (_NDIS_PACKET **)&v14, 1u);
    }
    if ( (*p_Flags & 0x40000) != 0 )
    {
      if ( v3 != 2 )
        KeLowerIrql(v3);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
    }
    IoFreeMdl(v14[1]);
    v14 = (PMDL *)((char *)v14 - 16 - 48LL * ndisPacketStackSize);
    ExFreePoolWithTag(v14, 0);
  }
  return v8;
}
