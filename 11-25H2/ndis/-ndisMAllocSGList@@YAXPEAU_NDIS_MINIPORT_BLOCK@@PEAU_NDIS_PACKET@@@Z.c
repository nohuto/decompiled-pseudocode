/*
 * XREFs of ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1270
 * Callers:
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140030E10 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14009A4E0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x140030C40 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140030FC0 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     PplFreeToLookasideList @ 0x140048730 (PplFreeToLookasideList.c)
 *     PplAllocateFromLookasideList @ 0x140048790 (PplAllocateFromLookasideList.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisQueryPacket @ 0x1400794E0 (NdisQueryPacket.c)
 *     NdisAllocateBuffer @ 0x140079E60 (NdisAllocateBuffer.c)
 *     NdisMCoSendComplete @ 0x14008DE60 (NdisMCoSendComplete.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMAllocSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rsi
  PNDIS_BUFFER v4; // r15
  struct _NDIS_PACKET *v6; // rcx
  PNDIS_BUFFER v7; // rbx
  __int64 SGListLookasideList; // rcx
  PVOID v9; // r13
  KIRQL v10; // al
  __int64 v11; // r12
  char *v12; // r9
  int v13; // r13d
  void *v14; // rdx
  _DEVICE_OBJECT **v15; // rdx
  _DMA_ADAPTER **v16; // rcx
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v18; // rsi
  __int64 v19; // rdx
  signed int v20; // ebx
  bool v21; // sf
  char *v22; // rbx
  KIRQL v23; // r13
  char v24[8]; // [rsp+28h] [rbp-58h]
  int v25; // [rsp+38h] [rbp-48h]
  PNDIS_BUFFER Buffer; // [rsp+60h] [rbp-20h] BYREF
  _DMA_ADAPTER **p_DmaAdapterObject; // [rsp+68h] [rbp-18h]
  _DEVICE_OBJECT **p_DeviceObject; // [rsp+70h] [rbp-10h]
  PVOID v29; // [rsp+78h] [rbp-8h]
  PNDIS_BUFFER FirstBuffer; // [rsp+C0h] [rbp+40h] BYREF
  UINT Length; // [rsp+D0h] [rbp+50h] BYREF
  char *v32; // [rsp+D8h] [rbp+58h]

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  Length = 0;
  Buffer = 0LL;
  v4 = 0LL;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, &Length);
  v7 = FirstBuffer;
  if ( !FirstBuffer )
  {
    *(unsigned __int64 *)((char *)v6->Reserved + v6->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&v6->MacReserved[v6->Private.NdisPacketOobOffset + 24] = 0LL;
    v6->Private.Flags &= ~0x800u;
    if ( (a1->Flags & 0x20000) != 0 )
    {
      FirstBuffer = 0LL;
LABEL_31:
      NDIS_STACK_RESERVED_FROM_PACKET(v6, (struct _NDIS_STACK_RESERVED **)&FirstBuffer);
      NdisMCoSendComplete(-1073741823, *(NDIS_HANDLE *)&FirstBuffer->Size, a2);
      return;
    }
LABEL_32:
    ndisMSendCompleteX(a1, a2, 0xC0000001);
    return;
  }
  SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
  v32 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  v29 = PplAllocateFromLookasideList(SGListLookasideList);
  v9 = v29;
  v10 = KfRaiseIrql(2u);
  v11 = Length;
  p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
  p_DeviceObject = &a1->DeviceObject;
  LOBYTE(FirstBuffer) = v10;
  if ( !v29 )
  {
    v16 = &MiniportSGDmaBlock->DmaAdapterObject;
    v15 = &a1->DeviceObject;
    p_DeviceObject = &a1->DeviceObject;
    p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
LABEL_10:
    LOBYTE(v25) = 1;
    v13 = (*v16)->DmaOperations->GetScatterGatherList(*v16, *v15, v7, v32, v11, ndisMProcessSGList, a2, v25);
    Length = v13;
    goto LABEL_11;
  }
  a2->Private.Flags |= 0x2000u;
  v12 = v32;
  *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v9;
  Length = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
             MiniportSGDmaBlock->DmaAdapterObject,
             a1->DeviceObject,
             v7,
             v12,
             v11,
             ndisMProcessSGList,
             a2,
             1u,
             v9,
             MiniportSGDmaBlock->ScatterGatherListSize);
  v13 = Length;
  if ( (Length & 0x80000000) != 0 )
  {
    v14 = v29;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    PplFreeToLookasideList((__int64)MiniportSGDmaBlock->SGListLookasideList, v14);
  }
  v15 = &a1->DeviceObject;
  v16 = &MiniportSGDmaBlock->DmaAdapterObject;
  if ( v13 < 0 )
    goto LABEL_10;
LABEL_11:
  if ( (_BYTE)FirstBuffer != 2 )
    KeLowerIrql((KIRQL)FirstBuffer);
  if ( v13 < 0 )
  {
    LODWORD(FirstBuffer) = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v11, 1735607374);
    v18 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer((PNDIS_STATUS)&Length, &Buffer, 0LL, Pool2, v11);
      v20 = Length;
      v4 = Buffer;
      v21 = (Length & 0x80000000) != 0;
      if ( Length )
        goto LABEL_20;
      ndisMCopyFromPacketToBuffer(a2, v19, v11, v18, (unsigned int *)&FirstBuffer);
      if ( (_DWORD)FirstBuffer == (_DWORD)v11 )
      {
        a2->Private.Flags |= 0x800u;
        v22 = (char *)v4->StartVa + v4->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v4;
        LOBYTE(v25) = 1;
        v23 = KfRaiseIrql(2u);
        v20 = (*p_DmaAdapterObject)->DmaOperations->GetScatterGatherList(
                *p_DmaAdapterObject,
                *p_DeviceObject,
                v4,
                v22,
                v11,
                ndisMProcessSGList,
                a2,
                v25);
        if ( v23 != 2 )
          KeLowerIrql(v23);
        v21 = v20 < 0;
LABEL_20:
        if ( !v21 )
          return;
LABEL_23:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v24 = v20;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            3u,
            0x11u,
            (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
            *(_QWORD *)v24);
        }
        if ( v4 )
          IoFreeMdl(v4);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
        a2->Private.Flags &= ~0x800u;
        if ( (a1->Flags & 0x20000) != 0 )
        {
          FirstBuffer = 0LL;
          v6 = a2;
          goto LABEL_31;
        }
        goto LABEL_32;
      }
    }
    v20 = -1073741670;
    goto LABEL_23;
  }
}
