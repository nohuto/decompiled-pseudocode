/*
 * XREFs of ndisLWM5IndicateReceive @ 0x140063060
 * Callers:
 *     ?EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x140063020 (-EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z.c)
 * Callees:
 *     NdisAllocatePacket @ 0x14001F5F0 (NdisAllocatePacket.c)
 *     NdisFreePacket @ 0x140042E10 (NdisFreePacket.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisLWM5IndicateReceive(__int64 a1, __int64 a2, void *a3, int a4, void *a5, unsigned int a6, size_t a7)
{
  __int64 v7; // r13
  struct _NPAGED_LOOKASIDE_LIST *v8; // r15
  size_t v9; // r12
  __int64 v10; // rdi
  struct _MDL *Pool2; // rax
  unsigned int v12; // eax
  struct _MDL *v13; // rsi
  SIZE_T v14; // rax
  unsigned __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rbx
  unsigned int v18; // edx
  _MDL *Head; // r12
  char *MappedSystemVa; // rax
  __int64 v21; // rbx
  ULONG ByteCount; // edi
  struct _MDL *Mdl; // rax
  _MDL *v24; // rbx
  PNDIS_PACKET v25; // r10
  unsigned int v26; // ecx
  int v27; // eax
  _MDL *v28; // rbx
  PNDIS_PACKET v29; // r9
  unsigned int v30; // r10d
  void *v31; // [rsp+40h] [rbp-38h] BYREF
  PNDIS_PACKET Packet[2]; // [rsp+48h] [rbp-30h] BYREF
  char *Status; // [rsp+A0h] [rbp+28h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+30h]
  void *Src; // [rsp+B0h] [rbp+38h]
  size_t Size; // [rsp+B8h] [rbp+40h]

  LODWORD(Size) = a4;
  Src = a3;
  v34 = a2;
  v7 = *(_QWORD *)(a1 + 296);
  Packet[0] = 0LL;
  v8 = 0LL;
  LODWORD(Status) = 0;
  if ( (*(_DWORD *)(v7 + 120) & 0x20000000) != 0 )
  {
    v9 = (unsigned int)a7;
    v10 = (unsigned int)(a4 + a7);
    if ( (unsigned int)v10 >= (unsigned int)a7 )
    {
      if ( (unsigned int)v10 >= 0x64 )
      {
        if ( (unsigned int)v10 >= 0x5EA )
        {
          v12 = v10 + ((MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v10) + 7) & 0xFFFFFFF8);
          if ( v12 < (unsigned int)v10 )
            return;
          Pool2 = (struct _MDL *)ExAllocatePool2(66LL, v12, 1918125134LL);
        }
        else
        {
          v8 = &ndisRcv1514BytesLL;
          Pool2 = (struct _MDL *)ExAllocateFromNPagedLookasideList(&ndisRcv1514BytesLL);
        }
      }
      else
      {
        v8 = &ndisRcv100BytesLL;
        Pool2 = (struct _MDL *)ExAllocateFromNPagedLookasideList(&ndisRcv100BytesLL);
      }
      v13 = Pool2;
      if ( Pool2 )
      {
        v14 = MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v10);
        v13->Next = 0LL;
        v13->MdlFlags = 0;
        v13->ByteCount = v10;
        v15 = (unsigned __int64)v13 + ((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v31 = (void *)v15;
        v13->StartVa = (PVOID)(v15 & 0xFFFFFFFFFFFFF000uLL);
        v13->ByteOffset = v15 & 0xFFF;
        v13->Size = 8 * ((((v15 & 0xFFF) + v10 + 4095) >> 12) + 6);
        MmBuildMdlForNonPagedPool(v13);
        NdisAllocatePacket((PNDIS_STATUS)&Status, Packet, ndisRecvPacketPool);
        v16 = (int)Status;
        if ( (_DWORD)Status )
          goto LABEL_32;
        Packet[0]->Private.Head = v13;
        Packet[0]->Private.Tail = v13;
        *(_QWORD *)Packet[0]->MiniportReserved = v8;
        LODWORD(Packet[0][-1].Reserved[1]) |= 1u;
        if ( (unsigned int)v9 > a6 )
        {
          LODWORD(v31) = 0;
          v18 = ++*(_DWORD *)Packet[0][-1].ProtocolReserved;
          if ( v18 >= 3 * ndisPacketStackSize )
          {
            *(_DWORD *)Packet[0][-1].ProtocolReserved = v18 - 1;
            goto LABEL_33;
          }
          Head = Packet[0]->Private.Head;
          if ( (Head->MdlFlags & 5) != 0 )
            MappedSystemVa = (char *)Head->MappedSystemVa;
          else
            MappedSystemVa = (char *)MmMapLockedPages(Head, 0);
          v21 = (unsigned int)Size;
          ByteCount = Head->ByteCount;
          Status = MappedSystemVa;
          memmove(MappedSystemVa, Src, (unsigned int)Size);
          v16 = -1073741823;
          Mdl = IoAllocateMdl(&Status[v21], ByteCount - (unsigned int)Size, 0, 0, 0LL);
          v24 = Mdl;
          if ( !Mdl )
            goto LABEL_31;
          MmBuildMdlForNonPagedPool(Mdl);
          v24->Next = 0LL;
          v24->Next = Head->Next;
          Packet[0]->Private.Head = v24;
          *(_QWORD *)Packet[0]->ProtocolReserved = Head;
          v25 = Packet[0];
          v26 = *(_DWORD *)Packet[0][-1].ProtocolReserved;
          if ( v26 < 3 * ndisPacketStackSize )
          {
            *((_QWORD *)&Packet[0]->Private.PhysicalCount
            + 6 * (v26 / 3 - (unsigned __int64)ndisPacketStackSize)
            + v26 % 3) = 0LL;
            v25 = Packet[0];
          }
          v27 = (*(__int64 (__fastcall **)(PNDIS_PACKET, void **, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)(v7 + 3760)
                                                                                                  + 216LL))(
                  v25,
                  &v31,
                  *(_QWORD *)(v7 + 24),
                  v34,
                  0,
                  a7);
          LODWORD(Status) = v27;
          v16 = v27;
          if ( v27 != 259 )
          {
            v28 = *(_MDL **)Packet[0]->ProtocolReserved;
            IoFreeMdl(Packet[0]->Private.Head);
            Packet[0]->Private.Head = v28;
            *(_QWORD *)Packet[0]->ProtocolReserved = 0LL;
            v29 = Packet[0];
            v30 = *(_DWORD *)Packet[0][-1].ProtocolReserved;
            if ( v30 < 3 * ndisPacketStackSize )
            {
              *((_QWORD *)&Packet[0]->Private.PhysicalCount
              + 6 * (v30 / 3 - (unsigned __int64)ndisPacketStackSize)
              + v30 % 3) = 0LL;
              v29 = Packet[0];
            }
            --*(_DWORD *)v29[-1].ProtocolReserved;
            v27 = v16;
          }
          if ( v27 )
          {
LABEL_31:
            if ( !v16 )
              return;
LABEL_32:
            if ( v16 == 259 )
              return;
            goto LABEL_33;
          }
        }
        else
        {
          v17 = (unsigned int)Size;
          memmove(v31, Src, (unsigned int)Size);
          memmove((char *)v31 + v17, a5, v9);
          LODWORD(Status) = 0;
        }
        *(unsigned int *)((char *)&Packet[0]->Private.Count + Packet[0]->Private.NdisPacketOobOffset) = 0;
        if ( !*(_DWORD *)(v7 + 464) )
          *(_DWORD *)((char *)&Packet[0]->Private.Tail + Packet[0]->Private.NdisPacketOobOffset) = 14;
        (*(void (__fastcall **)(__int64, PNDIS_PACKET *, __int64))(v7 + 432))(v7, Packet, 1LL);
        if ( (*(_DWORD *)(v7 + 120) & 0x40000) != 0
          || *(unsigned int *)((char *)&Packet[0]->Private.Count + Packet[0]->Private.NdisPacketOobOffset) == 259 )
        {
          v16 = (int)Status;
          goto LABEL_31;
        }
LABEL_33:
        if ( Packet[0] )
        {
          LODWORD(Packet[0][-1].Reserved[1]) &= ~1u;
          NdisFreePacket(Packet[0]);
        }
        if ( (v13->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v13->MappedSystemVa, v13);
        if ( v8 )
          ExFreeToNPagedLookasideList(v8, v13);
        else
          ExFreePoolWithTag(v13, 0);
      }
    }
  }
}
