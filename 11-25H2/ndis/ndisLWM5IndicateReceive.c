/*
 * XREFs of ndisLWM5IndicateReceive @ 0x14002F050
 * Callers:
 *     ?EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x14002F010 (-EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z.c)
 * Callees:
 *     NdisAllocatePacket @ 0x14002FD50 (NdisAllocatePacket.c)
 *     NdisFreePacket @ 0x140035450 (NdisFreePacket.c)
 *     NdisAllocateBuffer @ 0x140079E60 (NdisAllocateBuffer.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __fastcall ndisLWM5IndicateReceive(__int64 a1, __int64 a2, void *a3, int a4, void *a5, unsigned int a6, size_t a7)
{
  __int64 v7; // rbx
  struct _NPAGED_LOOKASIDE_LIST *v8; // r12
  size_t v9; // r15
  __int64 v10; // rsi
  __int64 Pool2; // rax
  struct _MDL *v12; // r14
  SIZE_T v13; // rax
  unsigned __int64 v14; // r13
  int v15; // esi
  __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // edx
  PNDIS_PACKET v19; // rcx
  _MDL *Head; // rdi
  char *v21; // rax
  __int64 v22; // r13
  ULONG ByteCount; // esi
  _MDL *v24; // rcx
  PNDIS_PACKET v25; // r10
  unsigned int v26; // ecx
  _MDL *v27; // rdi
  PNDIS_PACKET v28; // r9
  unsigned int v29; // r10d
  int v30; // [rsp+48h] [rbp-31h] BYREF
  PNDIS_PACKET Packet; // [rsp+50h] [rbp-29h] BYREF
  char *v32; // [rsp+58h] [rbp-21h]
  PNDIS_BUFFER Buffer; // [rsp+60h] [rbp-19h] BYREF
  int Status; // [rsp+C8h] [rbp+4Fh] BYREF
  __int64 v35; // [rsp+D0h] [rbp+57h]
  void *Src; // [rsp+D8h] [rbp+5Fh]
  size_t Size; // [rsp+E0h] [rbp+67h]

  LODWORD(Size) = a4;
  Src = a3;
  v35 = a2;
  v7 = *(_QWORD *)(a1 + 296);
  Packet = 0LL;
  v8 = 0LL;
  Status = 0;
  if ( (*(_DWORD *)(v7 + 120) & 0x20000000) == 0 )
    return;
  v9 = (unsigned int)a7;
  v10 = (unsigned int)(a4 + a7);
  if ( (unsigned int)v10 < (unsigned int)a7 )
    return;
  if ( (unsigned int)v10 >= 0x64 )
  {
    if ( (unsigned int)v10 >= 0x5EA )
    {
      v17 = v10 + ((MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v10) + 7) & 0xFFFFFFF8);
      if ( v17 < (unsigned int)v10 )
        return;
      Pool2 = ExAllocatePool2(66LL, v17, 1918125134);
    }
    else
    {
      v8 = &ndisRcv1514BytesLL;
      Pool2 = (__int64)ExAllocateFromNPagedLookasideList(&ndisRcv1514BytesLL);
    }
  }
  else
  {
    v8 = &ndisRcv100BytesLL;
    Pool2 = (__int64)ExAllocateFromNPagedLookasideList(&ndisRcv100BytesLL);
  }
  v12 = (struct _MDL *)Pool2;
  if ( !Pool2 )
    return;
  v13 = MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v10);
  v12->ByteCount = v10;
  v12->MdlFlags = 0;
  v12->Next = 0LL;
  v14 = (unsigned __int64)v12 + ((v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  v12->StartVa = (PVOID)(v14 & 0xFFFFFFFFFFFFF000uLL);
  v12->ByteOffset = v14 & 0xFFF;
  v12->Size = 8 * ((((v14 & 0xFFF) + v10 + 4095) >> 12) + 6);
  MmBuildMdlForNonPagedPool(v12);
  NdisAllocatePacket(&Status, &Packet, ndisRecvPacketPool);
  v15 = Status;
  if ( Status )
    goto LABEL_21;
  Status = 0;
  Packet->Private.Head = v12;
  Packet->Private.Tail = v12;
  *(_QWORD *)Packet->MiniportReserved = v8;
  LODWORD(Packet[-1].Reserved[1]) |= 1u;
  if ( (unsigned int)v9 <= a6 )
  {
    v16 = (unsigned int)Size;
    memmove((void *)v14, Src, (unsigned int)Size);
    memmove((void *)(v16 + v14), a5, v9);
    goto LABEL_9;
  }
  v30 = 0;
  Buffer = 0LL;
  v18 = ++*(_DWORD *)Packet[-1].ProtocolReserved;
  if ( v18 >= 3 * ndisPacketStackSize )
  {
    *(_DWORD *)Packet[-1].ProtocolReserved = v18 - 1;
LABEL_34:
    v19 = Packet;
LABEL_35:
    if ( v19 )
    {
      LODWORD(v19[-1].Reserved[1]) &= ~1u;
      NdisFreePacket(Packet);
    }
    if ( (v12->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v12->MappedSystemVa, v12);
    if ( v8 )
      ExFreeToNPagedLookasideList(v8, v12);
    else
      ExFreePoolWithTag(v12, 0);
    return;
  }
  Head = Packet->Private.Head;
  v21 = (char *)((Head->MdlFlags & 5) != 0 ? Head->MappedSystemVa : MmMapLockedPages(Head, 0));
  v22 = (unsigned int)Size;
  ByteCount = Head->ByteCount;
  v32 = v21;
  memmove(v21, Src, (unsigned int)Size);
  NdisAllocateBuffer(&Status, &Buffer, 0LL, &v32[v22], ByteCount - v22);
  v15 = Status;
  if ( Status )
    goto LABEL_21;
  v24 = Buffer;
  Buffer->Next = Head->Next;
  Packet->Private.Head = v24;
  *(_QWORD *)Packet->ProtocolReserved = Head;
  v25 = Packet;
  v26 = *(_DWORD *)Packet[-1].ProtocolReserved;
  if ( v26 < 3 * ndisPacketStackSize )
  {
    *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v26 / 3 - (unsigned __int64)ndisPacketStackSize) + v26 % 3) = 0LL;
    v25 = Packet;
  }
  v15 = (*(__int64 (__fastcall **)(PNDIS_PACKET, int *, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)(v7 + 3760) + 216LL))(
          v25,
          &v30,
          *(_QWORD *)(v7 + 24),
          v35,
          0,
          v9);
  if ( v15 == 259 )
    goto LABEL_21;
  v27 = *(_MDL **)Packet->ProtocolReserved;
  IoFreeMdl(Packet->Private.Head);
  Packet->Private.Head = v27;
  *(_QWORD *)Packet->ProtocolReserved = 0LL;
  v28 = Packet;
  v29 = *(_DWORD *)Packet[-1].ProtocolReserved;
  if ( v29 < 3 * ndisPacketStackSize )
  {
    *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v29 / 3 - (unsigned __int64)ndisPacketStackSize) + v29 % 3) = 0LL;
    v28 = Packet;
  }
  --*(_DWORD *)v28[-1].ProtocolReserved;
  if ( v15 )
  {
LABEL_21:
    if ( v15 == 259 )
      return;
    goto LABEL_34;
  }
LABEL_9:
  *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) = 0;
  if ( !*(_DWORD *)(v7 + 464) )
    *(_DWORD *)((char *)&Packet->Private.Tail + Packet->Private.NdisPacketOobOffset) = 14;
  (*(void (__fastcall **)(__int64, PNDIS_PACKET *, __int64))(v7 + 432))(v7, &Packet, 1LL);
  if ( (*(_DWORD *)(v7 + 120) & 0x40000) == 0 )
  {
    v19 = Packet;
    if ( *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) != 259 )
      goto LABEL_35;
  }
}
