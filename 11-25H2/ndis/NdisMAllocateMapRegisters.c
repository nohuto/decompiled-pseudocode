/*
 * XREFs of NdisMAllocateMapRegisters @ 0x14017B8C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisWriteErrorLogEntry @ 0x14006FC00 (NdisWriteErrorLogEntry.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateMapRegisters(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        NDIS_DMA_SIZE DmaSize,
        ULONG BaseMapRegistersNeeded,
        ULONG MaximumPhysicalMapping)
{
  char *v6; // rsi
  __int64 v7; // r15
  struct _NDIS_SG_DMA_BLOCK *v8; // rbx
  NDIS_STATUS v9; // edi
  char v10; // r14
  __int64 Pool2; // rax
  void *v12; // r14
  __int64 v13; // rax
  _INTERFACE_TYPE v14; // eax
  ULONG v15; // r13d
  unsigned __int64 v16; // r12
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v18; // r15
  char v19; // r14
  _DMA_OPERATIONS *DmaOperations; // rax
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  unsigned __int16 i; // r14
  KIRQL v23; // r12
  __int64 v24; // rcx
  void (__fastcall *v25)(_DMA_ADAPTER *, void *, unsigned int); // r15
  __int64 v26; // rdi
  KIRQL v27; // r14
  char v29[8]; // [rsp+28h] [rbp-89h]
  __int64 v30; // [rsp+30h] [rbp-81h]
  char v31; // [rsp+41h] [rbp-70h]
  int v33; // [rsp+44h] [rbp-6Dh]
  ULONG NumberOfMapRegisters; // [rsp+48h] [rbp-69h] BYREF
  int (__fastcall *v35)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+50h] [rbp-61h]
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+58h] [rbp-59h]
  char *v37; // [rsp+60h] [rbp-51h]
  struct _KEVENT Event; // [rsp+68h] [rbp-49h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+80h] [rbp-31h] BYREF

  v37 = (char *)MiniportAdapterHandle;
  v6 = (char *)MiniportAdapterHandle;
  v7 = BaseMapRegistersNeeded;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x29u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)v6,
      v7);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)v6 + 922) & 1) != 0 )
  {
    v9 = -1073741670;
    goto LABEL_53;
  }
  if ( (*((_DWORD *)v6 + 30) & 8) == 0 )
    goto LABEL_53;
  Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254);
  v8 = (struct _NDIS_SG_DMA_BLOCK *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_53;
  }
  *(_DWORD *)Pool2 = 11534607;
  *(_QWORD *)(Pool2 + 8) = v6;
  *(_QWORD *)(Pool2 + 32) = *((_QWORD *)v6 + 3);
  v12 = 0LL;
  *(_WORD *)(Pool2 + 170) = v7;
  *(_DWORD *)(Pool2 + 68) = MaximumPhysicalMapping;
  *(_QWORD *)(Pool2 + 152) = 0LL;
  if ( (_DWORD)v7 )
  {
    v13 = ExAllocatePool2(66LL, 16 * v7, 1919763534);
    v8->MapRegisters = (_MAP_REGISTER_ENTRY *)v13;
    v12 = (void *)v13;
    if ( !v13 )
    {
      NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, 0xFFFFFFFFLL);
      v9 = -1073741670;
      v10 = 1;
      goto LABEL_53;
    }
  }
  v8->AllocationEvent = &Event;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  DeviceDescription.BusNumber = *((_DWORD *)v6 + 931);
  v14 = *((_DWORD *)v6 + 119);
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
      *((_DWORD *)v6 + 30) |= 0x10u;
      DeviceDescription.Dma64BitAddresses = 1;
    }
  }
  DeviceDescription.MaximumLength = MaximumPhysicalMapping;
  v15 = ((MaximumPhysicalMapping - 2) >> 12) + 2;
  v16 = v15 * (unsigned __int64)(unsigned __int16)v7;
  if ( v16 > 0xFFFFFFFF )
  {
    NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, 4294967294LL);
LABEL_52:
    v10 = 1;
    goto LABEL_53;
  }
  DmaAdapter = IoGetDmaAdapter(*((PDEVICE_OBJECT *)v6 + 479), &DeviceDescription, &NumberOfMapRegisters);
  v18 = DmaAdapter;
  if ( !DmaAdapter || NumberOfMapRegisters < v15 )
  {
    NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, 0xFFFFFFFFLL);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v8->MapRegisters = 0LL;
    }
    v9 = -1073741670;
    if ( v18 )
    {
      v27 = KfRaiseIrql(2u);
      v18->DmaOperations->PutDmaAdapter(v18);
      if ( v27 != 2 )
        KeLowerIrql(v27);
    }
    goto LABEL_52;
  }
  v8->DmaAdapterObject = DmaAdapter;
  v8->SavedDmaAdapterObject = 0LL;
  *((_QWORD *)v6 + 63) = v8;
  _InterlockedAdd(&v8->DmaAdapterRefCount, 1u);
  v19 = 0;
  DmaOperations = DmaAdapter->DmaOperations;
  v31 = 0;
  AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
  FreeMapRegisters = DmaOperations->FreeMapRegisters;
  v35 = AllocateAdapterChannel;
  if ( DeviceDescription.InterfaceType == Isa )
    goto LABEL_28;
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
      v31 = 1;
      NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, (unsigned int)v16);
    }
  }
  if ( DeviceDescription.InterfaceType == Isa || v19 )
  {
LABEL_28:
    for ( i = 0; i < v8->BaseMapRegistersNeeded; ++i )
    {
      v8->CurrentMapRegister = i;
      v23 = KfRaiseIrql(2u);
      v33 = v35(
              v18,
              *((_DEVICE_OBJECT **)v6 + 478),
              v15,
              (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
              v8);
      v24 = (unsigned int)v33;
      if ( v33 < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v29 = v33;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0x2Bu,
            (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
            *(_QWORD *)v29);
          v24 = (unsigned int)v33;
        }
        if ( (byte_140125101 & 1) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(v24, &AllocateAdapterChannelFailed, (const GUID *)(v6 + 4008), v24, 2, 0);
        if ( i )
        {
          v25 = FreeMapRegisters;
          v26 = 16LL * i - 16;
          do
          {
            v25(v8->DmaAdapterObject, *(void **)((char *)&v8->MapRegisters->MapRegister + v26), v15);
            v26 -= 16LL;
            --i;
          }
          while ( i );
          v6 = v37;
        }
        if ( v23 != 2 )
          KeLowerIrql(v23);
        NdisWriteErrorLogEntry(v6, 0xC0001389, 1u, 0xFFFFFFFFLL);
        ExFreePoolWithTag(v8->MapRegisters, 0);
        v8->MapRegisters = 0LL;
        ndisDereferenceDmaAdapter(v8);
        goto LABEL_46;
      }
      if ( v23 != 2 )
        KeLowerIrql(v23);
      ndisWaitForKernelObject(&Event);
      KeClearEvent(&Event);
    }
  }
  if ( v31 )
  {
LABEL_46:
    v10 = 0;
    v9 = -1073741670;
  }
  else
  {
    v10 = 0;
  }
LABEL_53:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v9 && v10 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v30) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Cu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)v6,
      v30);
  }
  return v9;
}
