/*
 * XREFs of ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1610
 * Callers:
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400E0DE0 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x140030C40 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140031220 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     PplFreeToLookasideList @ 0x140048730 (PplFreeToLookasideList.c)
 *     PplAllocateFromLookasideList @ 0x140048790 (PplAllocateFromLookasideList.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisQueryPacket @ 0x1400794E0 (NdisQueryPacket.c)
 *     NdisAllocateBuffer @ 0x140079E60 (NdisAllocateBuffer.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400E0F48 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1AEC (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMAllocSGListS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r14
  PNDIS_BUFFER v4; // r15
  __int64 v6; // rcx
  PNDIS_BUFFER v7; // rbx
  struct _NDIS_STACK_RESERVED *v8; // rbx
  __int64 v9; // r14
  __int64 NdisPacketOobOffset; // rax
  __int64 SGListLookasideList; // rcx
  PVOID v12; // r13
  KIRQL v13; // al
  __int64 v14; // r12
  PNDIS_BUFFER v15; // r9
  int v16; // r13d
  void *v17; // rdx
  _DEVICE_OBJECT **v18; // rdx
  _DMA_ADAPTER **v19; // rcx
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v21; // r14
  __int64 v22; // rdx
  signed int v23; // ebx
  bool v24; // sf
  char *v25; // rbx
  KIRQL v26; // r13
  struct _NDIS_STACK_RESERVED *v27; // r14
  __int64 v28; // r15
  __int64 v29; // rax
  char v30[8]; // [rsp+28h] [rbp-41h]
  int v31; // [rsp+38h] [rbp-31h]
  struct _NDIS_STACK_RESERVED *v32; // [rsp+60h] [rbp-9h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+68h] [rbp-1h] BYREF
  _DMA_ADAPTER **p_DmaAdapterObject; // [rsp+70h] [rbp+7h]
  _DEVICE_OBJECT **p_DeviceObject; // [rsp+78h] [rbp+Fh]
  PVOID v36; // [rsp+80h] [rbp+17h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h] BYREF
  UINT Length; // [rsp+E0h] [rbp+77h] BYREF
  PNDIS_BUFFER FirstBuffer; // [rsp+E8h] [rbp+7Fh] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  Length = 0;
  Buffer = 0LL;
  v32 = 0LL;
  v4 = 0LL;
  NewIrql = 0;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, &Length);
  v7 = FirstBuffer;
  if ( !FirstBuffer )
  {
    *(_QWORD *)(*(unsigned __int16 *)(v6 + 42) + v6 + 80) = 0LL;
    *(_QWORD *)(*(unsigned __int16 *)(v6 + 42) + v6 + 72) = 0LL;
    *(_DWORD *)(v6 + 36) &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v32);
    v8 = v32;
    v9 = *(_QWORD *)v32;
    a1->Flags |= 0x400000u;
    *(_QWORD *)v8 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v8 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, 0);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, a2, 0LL);
LABEL_43:
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    return;
  }
  SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
  FirstBuffer = (PNDIS_BUFFER)((char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset);
  v36 = PplAllocateFromLookasideList(SGListLookasideList);
  v12 = v36;
  v13 = KfRaiseIrql(2u);
  v14 = Length;
  p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
  p_DeviceObject = &a1->DeviceObject;
  NewIrql = v13;
  if ( !v36 )
  {
    v19 = &MiniportSGDmaBlock->DmaAdapterObject;
    v18 = &a1->DeviceObject;
    p_DeviceObject = &a1->DeviceObject;
    p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
LABEL_16:
    LOBYTE(v31) = 1;
    v16 = (*v19)->DmaOperations->GetScatterGatherList(
            *v19,
            *v18,
            v7,
            FirstBuffer,
            v14,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
            a2,
            v31);
    Length = v16;
    goto LABEL_17;
  }
  a2->Private.Flags |= 0x2000u;
  v15 = FirstBuffer;
  *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v12;
  Length = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
             MiniportSGDmaBlock->DmaAdapterObject,
             a1->DeviceObject,
             v7,
             v15,
             v14,
             (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
             a2,
             1u,
             v12,
             MiniportSGDmaBlock->ScatterGatherListSize);
  v16 = Length;
  if ( (Length & 0x80000000) != 0 )
  {
    v17 = v36;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    PplFreeToLookasideList((__int64)MiniportSGDmaBlock->SGListLookasideList, v17);
  }
  v18 = &a1->DeviceObject;
  v19 = &MiniportSGDmaBlock->DmaAdapterObject;
  if ( v16 < 0 )
    goto LABEL_16;
LABEL_17:
  if ( NewIrql != 2 )
    KeLowerIrql(NewIrql);
  if ( v16 < 0 )
  {
    LODWORD(FirstBuffer) = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v14, 1735607374);
    v21 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer((PNDIS_STATUS)&Length, &Buffer, 0LL, Pool2, v14);
      v23 = Length;
      v4 = Buffer;
      v24 = (Length & 0x80000000) != 0;
      if ( Length )
        goto LABEL_26;
      ndisMCopyFromPacketToBuffer(a2, v22, v14, v21, (unsigned int *)&FirstBuffer);
      if ( (_DWORD)FirstBuffer == (_DWORD)v14 )
      {
        a2->Private.Flags |= 0x800u;
        v25 = (char *)v4->StartVa + v4->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v4;
        LOBYTE(v31) = 1;
        v26 = KfRaiseIrql(2u);
        NewIrql = v26;
        v23 = (*p_DmaAdapterObject)->DmaOperations->GetScatterGatherList(
                *p_DmaAdapterObject,
                *p_DeviceObject,
                v4,
                v25,
                v14,
                (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
                a2,
                v31);
        if ( v26 != 2 )
          KeLowerIrql(v26);
        v24 = v23 < 0;
LABEL_26:
        if ( !v24 )
          return;
        goto LABEL_29;
      }
    }
    v23 = -1073741670;
LABEL_29:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v30 = v23;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        3u,
        0x12u,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        *(_QWORD *)v30);
    }
    if ( v4 )
      IoFreeMdl(v4);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v32);
    v27 = v32;
    v28 = *(_QWORD *)v32;
    a1->Flags |= 0x400000u;
    *(_QWORD *)v27 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v27 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    v29 = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + v29) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, v23);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v28 + 112))(v28, a2, (unsigned int)v23);
    goto LABEL_43;
  }
}
