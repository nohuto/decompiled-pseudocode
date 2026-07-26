/*
 * XREFs of NdisMRegisterDmaChannel @ 0x140171480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDmaChannel(
        PNDIS_HANDLE MiniportDmaHandle,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        BOOLEAN Dma32BitAddresses,
        PNDIS_DMA_DESCRIPTION DmaDescription,
        ULONG MaximumLength)
{
  int v9; // edx
  _INTERFACE_TYPE v10; // r14d
  __int64 Pool2; // rax
  __int64 v12; // rsi
  NDIS_STATUS v13; // ebx
  bool v14; // zf
  unsigned int *v15; // rcx
  unsigned __int8 Master; // al
  char No; // al
  ULONG DmaPort; // eax
  _DEVICE_OBJECT *v19; // rcx
  ULONG v20; // r15d
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbx
  struct _KEVENT *v25; // r12
  KIRQL v26; // r13
  int v27; // r15d
  int v28; // edx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  KIRQL v31; // r15
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  PNDIS_HANDLE v34; // [rsp+48h] [rbp-51h]
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+50h] [rbp-49h] BYREF

  v34 = MiniportDmaHandle;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      36,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle);
  }
  v10 = *((_DWORD *)MiniportAdapterHandle + 930);
  Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_23;
  }
  *(_DWORD *)Pool2 = 11534607;
  *(_QWORD *)(Pool2 + 8) = MiniportAdapterHandle;
  *(_QWORD *)(Pool2 + 32) = *((_QWORD *)MiniportAdapterHandle + 3);
  v14 = (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 8) == 0;
  Master = DeviceDescription.Master;
  if ( !v14 )
    Master = 1;
  DeviceDescription.Master = Master;
  No = mem::ReadNoFence<unsigned long,void>(v15);
  DeviceDescription.DmaChannel = DmaChannel;
  DeviceDescription.ScatterGather = (No & 8) != 0;
  DeviceDescription.DemandMode = DmaDescription->DemandMode;
  DeviceDescription.AutoInitialize = DmaDescription->AutoInitialize;
  DeviceDescription.BusNumber = *((_DWORD *)MiniportAdapterHandle + 931);
  DeviceDescription.DmaWidth = DmaDescription->DmaWidth;
  DeviceDescription.DmaSpeed = DmaDescription->DmaSpeed;
  DmaPort = DmaDescription->DmaPort;
  DeviceDescription.MaximumLength = MaximumLength;
  v19 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 479);
  DeviceDescription.DmaPort = DmaPort;
  v20 = ((MaximumLength - 2) >> 12) + 2;
  DeviceDescription.Dma32BitAddresses = Dma32BitAddresses;
  DeviceDescription.InterfaceType = v10;
  DmaAdapter = IoGetDmaAdapter(v19, &DeviceDescription, &NumberOfMapRegisters);
  v22 = DmaAdapter;
  if ( DmaAdapter && NumberOfMapRegisters >= v20 )
  {
    v23 = ExAllocatePool2(64LL, 56LL, 1650738254LL);
    v24 = v23;
    if ( v23 )
    {
      v25 = (struct _KEVENT *)(v23 + 8);
      KeInitializeEvent((PRKEVENT)(v23 + 8), NotificationEvent, 0);
      *(_QWORD *)(v24 + 40) = MiniportAdapterHandle;
      *(_QWORD *)(v24 + 32) = v22;
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v26 = KfRaiseIrql(2u);
      v27 = v22->DmaOperations->AllocateAdapterChannel(
              v22,
              *((_DEVICE_OBJECT **)MiniportAdapterHandle + 478),
              v20,
              (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisDmaExecutionRoutine,
              (void *)v24);
      if ( v26 != 2 )
        KeLowerIrql(v26);
      ndisDereferencePackage((PVOID *)&ndisPkgs);
      if ( v27 >= 0 )
      {
        ndisWaitForKernelObject(v25);
        KeClearEvent(v25);
        v30 = v34;
        *(_BYTE *)(v24 + 48) = 0;
        *(_QWORD *)(v12 + 40) = v22;
        *v30 = v24;
        v13 = 0;
        _InterlockedAdd((volatile signed __int32 *)(v12 + 88), 1u);
        *((_QWORD *)MiniportAdapterHandle + 63) = v12;
        goto LABEL_23;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 2;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v28,
          1,
          37,
          (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
          v27);
      }
      ExFreePoolWithTag((PVOID)v24, 0);
      v13 = -1073741670;
      if ( (byte_14011B101 & 1) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          v29,
          &AllocateAdapterChannelFailed,
          (const GUID *)((char *)MiniportAdapterHandle + 4008),
          v27,
          1,
          0);
    }
    else
    {
      v13 = -1073741670;
    }
    goto LABEL_20;
  }
  v13 = -1073741670;
  if ( DmaAdapter )
  {
LABEL_20:
    v31 = KfRaiseIrql(2u);
    v22->DmaOperations->PutDmaAdapter(v22);
    if ( v31 != 2 )
      KeLowerIrql(v31);
  }
  *((_QWORD *)MiniportAdapterHandle + 63) = 0LL;
  ExFreePoolWithTag((PVOID)v12, 0);
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle,
      v13);
  return v13;
}
