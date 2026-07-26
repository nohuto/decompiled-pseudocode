/*
 * XREFs of ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA414
 * Callers:
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D9B80 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     PplFreeToLookasideList @ 0x140028AD0 (PplFreeToLookasideList.c)
 *     PplAllocateFromLookasideList @ 0x140028B30 (PplAllocateFromLookasideList.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400425D0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1400573F0 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     NdisQueryPacket @ 0x14005DBA0 (NdisQueryPacket.c)
 *     NdisAllocateBuffer @ 0x14005DF80 (NdisAllocateBuffer.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400D9CF0 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA908 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMAllocSGListS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r14
  PNDIS_BUFFER v4; // r15
  __int64 v6; // rcx
  PNDIS_BUFFER v7; // rbx
  __int64 v8; // rbx
  struct _NDIS_STACK_RESERVED *v9; // r14
  __int64 NdisPacketOobOffset; // rax
  __int64 SGListLookasideList; // rcx
  PVOID v12; // r13
  KIRQL v13; // al
  __int64 v14; // r12
  void *v15; // r9
  int v16; // r13d
  void *v17; // rdx
  _DEVICE_OBJECT **v18; // rdx
  _DMA_ADAPTER **v19; // rcx
  unsigned __int8 *Pool2; // rax
  __int64 v21; // rdx
  unsigned __int8 *v22; // r14
  int v23; // ebx
  bool v24; // sf
  char *v25; // rbx
  KIRQL v26; // r13
  __int64 v27; // rbx
  struct _NDIS_STACK_RESERVED *v28; // r14
  __int64 v29; // rax
  int v30; // [rsp+38h] [rbp-41h]
  unsigned int v31[2]; // [rsp+60h] [rbp-19h] BYREF
  struct _NDIS_STACK_RESERVED *v32; // [rsp+68h] [rbp-11h] BYREF
  PNDIS_BUFFER FirstBuffer; // [rsp+70h] [rbp-9h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+78h] [rbp-1h] BYREF
  _DMA_ADAPTER **p_DmaAdapterObject; // [rsp+80h] [rbp+7h]
  _DEVICE_OBJECT **p_DeviceObject; // [rsp+88h] [rbp+Fh]
  PVOID v37; // [rsp+90h] [rbp+17h]
  KIRQL NewIrql; // [rsp+E0h] [rbp+67h] BYREF
  int Status; // [rsp+F0h] [rbp+77h] BYREF
  UINT Length; // [rsp+F8h] [rbp+7Fh] BYREF

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
    v8 = *(_QWORD *)v32;
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
    v9 = v32;
    *(_QWORD *)v32 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v9 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, 0);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v8 + 112))(v8, a2, 0LL);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    a1->MiniportThread = 0LL;
LABEL_45:
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    return;
  }
  SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
  *(_QWORD *)v31 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  v37 = PplAllocateFromLookasideList(SGListLookasideList);
  v12 = v37;
  v13 = KfRaiseIrql(2u);
  v14 = Length;
  p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
  p_DeviceObject = &a1->DeviceObject;
  NewIrql = v13;
  if ( !v12 )
  {
    v19 = &MiniportSGDmaBlock->DmaAdapterObject;
    v18 = &a1->DeviceObject;
    p_DeviceObject = &a1->DeviceObject;
    p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
LABEL_17:
    LOBYTE(v30) = 1;
    v16 = (*v19)->DmaOperations->GetScatterGatherList(
            *v19,
            *v18,
            v7,
            *(void **)v31,
            v14,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
            a2,
            v30);
    Status = v16;
    goto LABEL_18;
  }
  a2->Private.Flags |= 0x2000u;
  v15 = *(void **)v31;
  *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v12;
  Status = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
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
  v16 = Status;
  if ( Status < 0 )
  {
    v17 = v37;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    PplFreeToLookasideList((__int64)MiniportSGDmaBlock->SGListLookasideList, v17);
  }
  v18 = &a1->DeviceObject;
  v19 = &MiniportSGDmaBlock->DmaAdapterObject;
  if ( v16 < 0 )
    goto LABEL_17;
LABEL_18:
  if ( NewIrql != 2 )
    KeLowerIrql(NewIrql);
  if ( v16 < 0 )
  {
    v31[0] = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v14, 1735607374LL);
    v22 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer(&Status, &Buffer, 0LL, Pool2, v14);
      LOBYTE(v23) = Status;
      v4 = Buffer;
      v24 = Status < 0;
      if ( Status )
        goto LABEL_27;
      ndisMCopyFromPacketToBuffer(a2, v21, v14, v22, v31);
      if ( v31[0] == (_DWORD)v14 )
      {
        a2->Private.Flags |= 0x800u;
        v25 = (char *)v4->StartVa + v4->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v4;
        LOBYTE(v30) = 1;
        v26 = KfRaiseIrql(2u);
        NewIrql = v26;
        Status = (*p_DmaAdapterObject)->DmaOperations->GetScatterGatherList(
                   *p_DmaAdapterObject,
                   *p_DeviceObject,
                   v4,
                   v25,
                   v14,
                   (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
                   a2,
                   v30);
        v23 = Status;
        if ( v26 != 2 )
          KeLowerIrql(v26);
        v24 = v23 < 0;
LABEL_27:
        if ( !v24 )
          return;
        goto LABEL_30;
      }
    }
    LOBYTE(v23) = -102;
    Status = -1073741670;
LABEL_30:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v21,
        3,
        18,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        v23);
    }
    if ( v4 )
      IoFreeMdl(v4);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v32);
    v27 = *(_QWORD *)v32;
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
    v28 = v32;
    *(_QWORD *)v32 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v28 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    v29 = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + v29) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, Status);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v27 + 112))(v27, a2, (unsigned int)Status);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    a1->MiniportThread = 0LL;
    goto LABEL_45;
  }
}
