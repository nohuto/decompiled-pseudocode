/*
 * XREFs of NdisMTransferDataComplete @ 0x1400D8CA0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreePacket @ 0x140042E10 (NdisFreePacket.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall NdisMTransferDataComplete(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3, unsigned int a4)
{
  PNDIS_PACKET v6; // r10
  KIRQL v7; // di
  unsigned int v9; // ecx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // ecx
  _MDL *v13; // rbx
  PNDIS_PACKET v14; // r9
  unsigned int v15; // ecx
  _MDL *Head; // rbx
  struct _NPAGED_LOOKASIDE_LIST *v17; // rsi
  SIZE_T ByteCount; // r14
  PNDIS_PACKET Packet; // [rsp+68h] [rbp+38h] BYREF

  Packet = a2;
  v6 = a2;
  v7 = 0;
  v9 = *(_DWORD *)a2[-1].ProtocolReserved;
  if ( v9 >= 3 * ndisPacketStackSize )
  {
    v11 = 0LL;
  }
  else
  {
    v10 = v9 % 3 + 6 * (v9 / 3 - (unsigned __int64)ndisPacketStackSize);
    v11 = *((_QWORD *)&a2->Private.PhysicalCount + v10);
    *((_QWORD *)&a2->Private.PhysicalCount + v10) = 0LL;
    v6 = Packet;
  }
  v12 = *(_DWORD *)v6[-1].ProtocolReserved;
  if ( v12 || (v6[-1].Reserved[1] & 1) == 0 )
  {
    if ( v11 )
    {
      *(_DWORD *)v6[-1].ProtocolReserved = v12 - 1;
      if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
        v7 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(_QWORD, PNDIS_PACKET, _QWORD, _QWORD))(v11 + 120))(*(_QWORD *)(v11 + 32), Packet, a3, a4);
      if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 && v7 != 2 )
        KeLowerIrql(v7);
    }
  }
  else
  {
    v13 = *(_MDL **)v6->ProtocolReserved;
    IoFreeMdl(v6->Private.Head);
    Packet->Private.Head = v13;
    *(_QWORD *)Packet->ProtocolReserved = 0LL;
    v14 = Packet;
    v15 = *(_DWORD *)Packet[-1].ProtocolReserved;
    if ( v15 < 3 * ndisPacketStackSize )
    {
      *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v15 / 3 - (unsigned __int64)ndisPacketStackSize) + v15 % 3) = 0LL;
      v14 = Packet;
    }
    --*(_DWORD *)v14[-1].ProtocolReserved;
    *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) = 0;
    *(_DWORD *)((char *)&Packet->Private.Tail + Packet->Private.NdisPacketOobOffset) = 14;
    (*(void (__fastcall **)(__int64, PNDIS_PACKET *, __int64))(a1 + 432))(a1, &Packet, 1LL);
    if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0
      && *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) != 259 )
    {
      Head = Packet->Private.Head;
      v17 = *(struct _NPAGED_LOOKASIDE_LIST **)Packet->MiniportReserved;
      ByteCount = Head->ByteCount;
      if ( (Head->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(Head->MappedSystemVa, Head);
      if ( v17 )
      {
        ExFreeToNPagedLookasideList(v17, Head);
      }
      else
      {
        MmSizeOfMdl((PVOID)0xFFF, ByteCount);
        ExFreePoolWithTag(Head, 0);
      }
      NdisFreePacket(Packet);
    }
  }
}
