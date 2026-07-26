/*
 * XREFs of NdisMRegisterDmaChannel @ 0x14017C470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
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
  __int64 v12; // rdi
  NDIS_STATUS v13; // ebx
  _DMA_WIDTH DmaWidth; // eax
  ULONG DmaPort; // eax
  _DEVICE_OBJECT *v16; // rcx
  ULONG v17; // r15d
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbx
  struct _KEVENT *v22; // r12
  KIRQL v23; // r13
  int v24; // r15d
  __int64 v25; // rcx
  _QWORD *v26; // rax
  KIRQL v27; // r15
  char v29[8]; // [rsp+28h] [rbp-71h]
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  PNDIS_HANDLE v31; // [rsp+48h] [rbp-51h]
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+50h] [rbp-49h] BYREF

  v31 = MiniportDmaHandle;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      36,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportAdapterHandle);
  }
  v10 = *((_DWORD *)MiniportAdapterHandle + 930);
  Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254);
  v12 = Pool2;
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_24;
  }
  *(_DWORD *)Pool2 = 11534607;
  *(_QWORD *)(Pool2 + 8) = MiniportAdapterHandle;
  *(_QWORD *)(Pool2 + 32) = *((_QWORD *)MiniportAdapterHandle + 3);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 8) != 0 )
    *(_WORD *)&DeviceDescription.Master = 257;
  else
    DeviceDescription.ScatterGather = 0;
  DeviceDescription.DemandMode = DmaDescription->DemandMode;
  DeviceDescription.AutoInitialize = DmaDescription->AutoInitialize;
  DeviceDescription.BusNumber = *((_DWORD *)MiniportAdapterHandle + 931);
  DmaWidth = DmaDescription->DmaWidth;
  DeviceDescription.DmaChannel = DmaChannel;
  DeviceDescription.DmaWidth = DmaWidth;
  DeviceDescription.DmaSpeed = DmaDescription->DmaSpeed;
  DmaPort = DmaDescription->DmaPort;
  DeviceDescription.MaximumLength = MaximumLength;
  v16 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 479);
  DeviceDescription.DmaPort = DmaPort;
  v17 = ((MaximumLength - 2) >> 12) + 2;
  DeviceDescription.Dma32BitAddresses = Dma32BitAddresses;
  DeviceDescription.InterfaceType = v10;
  DmaAdapter = IoGetDmaAdapter(v16, &DeviceDescription, &NumberOfMapRegisters);
  v19 = DmaAdapter;
  if ( DmaAdapter && NumberOfMapRegisters >= v17 )
  {
    v20 = ExAllocatePool2(64LL, 56LL, 1650738254);
    v21 = v20;
    if ( v20 )
    {
      v22 = (struct _KEVENT *)(v20 + 8);
      KeInitializeEvent((PRKEVENT)(v20 + 8), NotificationEvent, 0);
      *(_QWORD *)(v21 + 40) = MiniportAdapterHandle;
      *(_QWORD *)(v21 + 32) = v19;
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v23 = KfRaiseIrql(2u);
      v24 = v19->DmaOperations->AllocateAdapterChannel(
              v19,
              *((_DEVICE_OBJECT **)MiniportAdapterHandle + 478),
              v17,
              (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisDmaExecutionRoutine,
              (void *)v21);
      if ( v23 != 2 )
        KeLowerIrql(v23);
      ndisDereferencePackage((PVOID *)&ndisPkgs);
      if ( v24 >= 0 )
      {
        ndisWaitForKernelObject(v22);
        KeClearEvent(v22);
        v26 = v31;
        *(_BYTE *)(v21 + 48) = 0;
        *(_QWORD *)(v12 + 40) = v19;
        *v26 = v21;
        v13 = 0;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 88));
        *((_QWORD *)MiniportAdapterHandle + 63) = v12;
        goto LABEL_24;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v29 = v24;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x25u,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          *(_QWORD *)v29);
      }
      ExFreePoolWithTag((PVOID)v21, 0);
      v13 = -1073741670;
      if ( (byte_140125101 & 1) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          v25,
          &AllocateAdapterChannelFailed,
          (const GUID *)((char *)MiniportAdapterHandle + 4008),
          v24,
          1,
          0);
    }
    else
    {
      v13 = -1073741670;
    }
    goto LABEL_21;
  }
  v13 = -1073741670;
  if ( DmaAdapter )
  {
LABEL_21:
    v27 = KfRaiseIrql(2u);
    v19->DmaOperations->PutDmaAdapter(v19);
    if ( v27 != 2 )
      KeLowerIrql(v27);
  }
  *((_QWORD *)MiniportAdapterHandle + 63) = 0LL;
  ExFreePoolWithTag((PVOID)v12, 0);
LABEL_24:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportAdapterHandle,
      v13);
  return v13;
}
