/*
 * XREFs of NdisMAllocateMapRegisters @ 0x1401708C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisWriteErrorLogEntry @ 0x14005BCE0 (NdisWriteErrorLogEntry.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateMapRegisters(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        NDIS_DMA_SIZE DmaSize,
        ULONG BaseMapRegistersNeeded,
        ULONG MaximumPhysicalMapping)
{
  char *v5; // rsi
  __int64 v6; // r15
  void *v7; // r14
  struct _NDIS_SG_DMA_BLOCK *v8; // rbx
  NDIS_STATUS v9; // edi
  char v10; // r12
  __int64 Pool2; // rax
  __int64 v12; // rax
  _INTERFACE_TYPE v14; // eax
  ULONG v15; // r12d
  unsigned __int64 v16; // r13
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v18; // r15
  char v19; // r14
  _DMA_OPERATIONS *DmaOperations; // rax
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  unsigned __int16 v22; // r14
  KIRQL v23; // r13
  int v24; // eax
  int v25; // edx
  __int64 v26; // rcx
  void (__fastcall *v27)(_DMA_ADAPTER *, void *, unsigned int); // r15
  __int64 v28; // rdi
  KIRQL v29; // r14
  __int64 v30; // [rsp+30h] [rbp-81h]
  char v31; // [rsp+40h] [rbp-71h]
  char v33; // [rsp+41h] [rbp-70h]
  unsigned int v35; // [rsp+44h] [rbp-6Dh]
  ULONG NumberOfMapRegisters; // [rsp+48h] [rbp-69h] BYREF
  int (__fastcall *v37)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+50h] [rbp-61h]
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+58h] [rbp-59h]
  char *v39; // [rsp+60h] [rbp-51h]
  struct _KEVENT Event; // [rsp+68h] [rbp-49h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+80h] [rbp-31h] BYREF

  v5 = (char *)MiniportAdapterHandle;
  v39 = (char *)MiniportAdapterHandle;
  v6 = BaseMapRegistersNeeded;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v7 = 0LL;
  NumberOfMapRegisters = 0;
  v8 = 0LL;
  v9 = 0;
  v31 = 0;
  memset(&Event, 0, sizeof(Event));
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x29u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)v5,
      v6);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)v5 + 922) & 1) != 0 )
    goto LABEL_4;
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)v5 + 30) & 8) == 0 )
    goto LABEL_37;
  Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254LL);
  v8 = (struct _NDIS_SG_DMA_BLOCK *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 11534607;
    *(_QWORD *)(Pool2 + 8) = v5;
    v31 = 1;
    *(_QWORD *)(Pool2 + 32) = *((_QWORD *)v5 + 3);
    *(_WORD *)(Pool2 + 170) = v6;
    *(_DWORD *)(Pool2 + 68) = MaximumPhysicalMapping;
    *(_QWORD *)(Pool2 + 152) = 0LL;
    if ( (_DWORD)v6 )
    {
      v12 = ExAllocatePool2(66LL, 16 * v6, 1919763534LL);
      v8->MapRegisters = (_MAP_REGISTER_ENTRY *)v12;
      v7 = (void *)v12;
      if ( !v12 )
      {
        NdisWriteErrorLogEntry(v5, 0xC0001389, 1u, 0xFFFFFFFFLL);
        v9 = -1073741670;
LABEL_10:
        v10 = 1;
        goto LABEL_11;
      }
    }
    v8->AllocationEvent = &Event;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    DeviceDescription.BusNumber = *((_DWORD *)v5 + 931);
    v14 = *((_DWORD *)v5 + 119);
    *(_WORD *)&DeviceDescription.Master = 257;
    DeviceDescription.DmaChannel = DmaChannel;
    DeviceDescription.InterfaceType = v14;
    if ( v14 == Isa )
    {
      DeviceDescription.DmaSpeed = Compatible;
      DeviceDescription.DmaWidth = DmaChannel > 4;
    }
    else if ( v14 == PCIBus )
    {
      if ( DmaSize == 1 )
      {
        DeviceDescription.Dma32BitAddresses = 1;
      }
      else if ( DmaSize == 2 )
      {
        DeviceDescription.Dma64BitAddresses = 1;
        _InterlockedOr((volatile signed __int32 *)v5 + 30, 0x10u);
      }
    }
    DeviceDescription.MaximumLength = MaximumPhysicalMapping;
    v15 = ((MaximumPhysicalMapping - 2) >> 12) + 2;
    v16 = v15 * (unsigned __int64)(unsigned __int16)v6;
    if ( v16 > 0xFFFFFFFF )
    {
      NdisWriteErrorLogEntry(v5, 0xC0001389, 1u, 4294967294LL);
      goto LABEL_37;
    }
    DmaAdapter = IoGetDmaAdapter(*((PDEVICE_OBJECT *)v5 + 479), &DeviceDescription, &NumberOfMapRegisters);
    v18 = DmaAdapter;
    if ( !DmaAdapter || NumberOfMapRegisters < v15 )
    {
      NdisWriteErrorLogEntry(v5, 0xC0001389, 1u, 0xFFFFFFFFLL);
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0);
        v8->MapRegisters = 0LL;
      }
      v9 = -1073741670;
      if ( v18 )
      {
        v29 = KfRaiseIrql(2u);
        v18->DmaOperations->PutDmaAdapter(v18);
        if ( v29 != 2 )
          KeLowerIrql(v29);
      }
      goto LABEL_10;
    }
    v8->DmaAdapterObject = DmaAdapter;
    v8->SavedDmaAdapterObject = 0LL;
    *((_QWORD *)v5 + 63) = v8;
    _InterlockedAdd(&v8->DmaAdapterRefCount, 1u);
    v19 = 0;
    DmaOperations = DmaAdapter->DmaOperations;
    v31 = 0;
    v33 = 0;
    AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
    FreeMapRegisters = DmaOperations->FreeMapRegisters;
    v37 = AllocateAdapterChannel;
    if ( DeviceDescription.InterfaceType == Isa )
      goto LABEL_63;
    if ( HalPrivateDispatchTable[12](v18, v15, v8->BaseMapRegistersNeeded, v8->MapRegisters) < 0 )
    {
      if ( (unsigned int)v16 <= 0x40 )
      {
        v19 = 1;
      }
      else
      {
        ExFreePoolWithTag(v8->MapRegisters, 0);
        v8->MapRegisters = 0LL;
        ndisDereferenceDmaAdapter(v8);
        v33 = 1;
        NdisWriteErrorLogEntry(v5, 0xC0001389, 1u, (unsigned int)v16);
      }
    }
    if ( DeviceDescription.InterfaceType == Isa || v19 )
    {
LABEL_63:
      v22 = 0;
      if ( v8->BaseMapRegistersNeeded )
      {
        while ( 1 )
        {
          v8->CurrentMapRegister = v22;
          v23 = KfRaiseIrql(2u);
          v24 = v37(
                  v18,
                  *((_DEVICE_OBJECT **)v5 + 478),
                  v15,
                  (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
                  v8);
          v25 = 0;
          v35 = v24;
          v26 = (unsigned int)v24;
          if ( v24 < 0 )
            break;
          if ( v23 != 2 )
            KeLowerIrql(v23);
          ndisWaitForKernelObject(&Event);
          KeClearEvent(&Event);
          if ( ++v22 >= v8->BaseMapRegistersNeeded )
            goto LABEL_35;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            1,
            43,
            (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
            v24);
          v26 = v35;
        }
        if ( (byte_14011B101 & 1) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(v26, &AllocateAdapterChannelFailed, (const GUID *)(v5 + 4008), v26, 2, 0);
        if ( v22 )
        {
          v27 = FreeMapRegisters;
          v28 = 16LL * v22 - 16;
          do
          {
            v27(v8->DmaAdapterObject, *(void **)((char *)&v8->MapRegisters->MapRegister + v28), v15);
            v28 -= 16LL;
            --v22;
          }
          while ( v22 );
          v5 = v39;
        }
        if ( v23 != 2 )
          KeLowerIrql(v23);
        NdisWriteErrorLogEntry(v5, 0xC0001389, 1u, 0xFFFFFFFFLL);
        ExFreePoolWithTag(v8->MapRegisters, 0);
        v8->MapRegisters = 0LL;
        ndisDereferenceDmaAdapter(v8);
        goto LABEL_36;
      }
    }
LABEL_35:
    if ( v33 )
LABEL_36:
      v9 = -1073741670;
LABEL_37:
    v10 = v31;
    goto LABEL_11;
  }
LABEL_4:
  v9 = -1073741670;
LABEL_11:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v9 && v10 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v30) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Cu,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)v5,
      v30);
  }
  return v9;
}
