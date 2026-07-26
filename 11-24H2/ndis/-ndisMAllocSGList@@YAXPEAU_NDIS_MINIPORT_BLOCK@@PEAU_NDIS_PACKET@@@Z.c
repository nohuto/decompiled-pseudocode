/*
 * XREFs of ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA074
 * Callers:
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A0B0 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D2CB0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     PplFreeToLookasideList @ 0x140028AD0 (PplFreeToLookasideList.c)
 *     PplAllocateFromLookasideList @ 0x140028B30 (PplAllocateFromLookasideList.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1400573F0 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     NdisQueryPacket @ 0x14005DBA0 (NdisQueryPacket.c)
 *     NdisAllocateBuffer @ 0x14005DF80 (NdisAllocateBuffer.c)
 *     NdisMCoSendComplete @ 0x140071760 (NdisMCoSendComplete.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140089F90 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
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
  __int64 v18; // rdx
  unsigned __int8 *v19; // rsi
  int v20; // ebx
  bool v21; // sf
  char *v22; // rbx
  KIRQL v23; // r13
  int v24; // [rsp+38h] [rbp-48h]
  PNDIS_BUFFER Buffer; // [rsp+60h] [rbp-20h] BYREF
  _DMA_ADAPTER **p_DmaAdapterObject; // [rsp+68h] [rbp-18h]
  _DEVICE_OBJECT **p_DeviceObject; // [rsp+70h] [rbp-10h]
  PVOID v28; // [rsp+78h] [rbp-8h]
  PNDIS_BUFFER FirstBuffer; // [rsp+C0h] [rbp+40h] BYREF
  UINT Length; // [rsp+D0h] [rbp+50h] BYREF
  char *v31; // [rsp+D8h] [rbp+58h]

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
  v31 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  v28 = PplAllocateFromLookasideList(SGListLookasideList);
  v9 = v28;
  v10 = KfRaiseIrql(2u);
  v11 = Length;
  p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
  p_DeviceObject = &a1->DeviceObject;
  LOBYTE(FirstBuffer) = v10;
  if ( !v28 )
  {
    v16 = &MiniportSGDmaBlock->DmaAdapterObject;
    v15 = &a1->DeviceObject;
    p_DeviceObject = &a1->DeviceObject;
    p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
LABEL_10:
    LOBYTE(v24) = 1;
    v13 = (*v16)->DmaOperations->GetScatterGatherList(*v16, *v15, v7, v31, v11, ndisMProcessSGList, a2, v24);
    Length = v13;
    goto LABEL_11;
  }
  a2->Private.Flags |= 0x2000u;
  v12 = v31;
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
    v14 = v28;
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
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v11, 1735607374LL);
    v19 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer((PNDIS_STATUS)&Length, &Buffer, 0LL, Pool2, v11);
      LOBYTE(v20) = Length;
      v4 = Buffer;
      v21 = (Length & 0x80000000) != 0;
      if ( Length )
        goto LABEL_20;
      ndisMCopyFromPacketToBuffer(a2, v18, v11, v19, (unsigned int *)&FirstBuffer);
      if ( (_DWORD)FirstBuffer == (_DWORD)v11 )
      {
        a2->Private.Flags |= 0x800u;
        v22 = (char *)v4->StartVa + v4->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v4;
        LOBYTE(v24) = 1;
        v23 = KfRaiseIrql(2u);
        v20 = (*p_DmaAdapterObject)->DmaOperations->GetScatterGatherList(
                *p_DmaAdapterObject,
                *p_DeviceObject,
                v4,
                v22,
                v11,
                ndisMProcessSGList,
                a2,
                v24);
        if ( v23 != 2 )
          KeLowerIrql(v23);
        v21 = v20 < 0;
LABEL_20:
        if ( !v21 )
          return;
LABEL_23:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            3,
            17,
            (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
            v20);
        }
        if ( v4 )
          IoFreeMdl(v4);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
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
    LOBYTE(v20) = -102;
    goto LABEL_23;
  }
}
