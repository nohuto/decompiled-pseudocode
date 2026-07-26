/*
 * XREFs of ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400DA9BC
 * Callers:
 *     NdisMInitializeScatterGatherDma @ 0x1400D62A0 (NdisMInitializeScatterGatherDma.c)
 *     ndisRegisterScatterGatherDmaForMiniport @ 0x1400DAFAC (ndisRegisterScatterGatherDmaForMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     NdisWriteErrorLogEntry @ 0x14005BCE0 (NdisWriteErrorLogEntry.c)
 *     ndisAssignSGListLookasideList @ 0x1400D9ECC (ndisAssignSGListLookasideList.c)
 *     PplpCreateLookasideListEx @ 0x1400DB82C (PplpCreateLookasideListEx.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisMInitializeScatterGatherDmaInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        PDEVICE_OBJECT PhysicalDeviceObject,
        char a3,
        char a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // edx
  __int64 LookasideList; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  unsigned int v14; // ebx
  __int64 Pool2; // rax
  int v16; // edx
  _NDIS_SG_DMA_BLOCK *v17; // rsi
  unsigned int SGMapRegistersNeeded; // ecx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  int v21; // edx
  unsigned int v22; // eax
  SIZE_T v23; // rbx
  ULONG MaximumProcessorCount; // eax
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  SIZE_T v28; // [rsp+30h] [rbp-69h]
  ULONG NumberOfMapRegisters; // [rsp+50h] [rbp-49h] BYREF
  SIZE_T v30; // [rsp+54h] [rbp-45h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+60h] [rbp-39h] BYREF

  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  LookasideList = 0LL;
  v30 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x13u,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)a1,
      a3,
      a6);
  if ( a1->DriverHandle->MajorNdisVersion >= 5u && (a1->Flags & 8) != 0 )
  {
    DriverHandle = a1->DriverHandle;
    if ( DriverHandle->MajorNdisVersion == 5
      && DriverHandle->MinorNdisVersion == 2
      && (MiniportSGDmaBlock = a1->MiniportSGDmaBlock) != 0LL )
    {
      v14 = 0;
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x40u);
      a1->InfoFlags |= 4u;
      _InterlockedIncrement(&MiniportSGDmaBlock->DmaAdapterRefCount);
    }
    else if ( (a1->DriverVerifyFlags & 0x100) != 0 )
    {
      v14 = -1073741670;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254LL);
      v16 = 0;
      v17 = (_NDIS_SG_DMA_BLOCK *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 11534607;
        *(_QWORD *)(Pool2 + 8) = a1;
        *(_QWORD *)(Pool2 + 24) = PhysicalDeviceObject;
        *(_QWORD *)(Pool2 + 32) = a1->MiniportAdapterContext;
        DeviceDescription.BusNumber = a1->BusNumber;
        DeviceDescription.InterfaceType = a1->AdapterType;
        *(_DWORD *)(Pool2 + 68) = a6;
        *(_WORD *)&DeviceDescription.Master = 257;
        DeviceDescription.DmaChannel = 0;
        if ( a3 )
        {
          DeviceDescription.Dma32BitAddresses = 0;
          DeviceDescription.Dma64BitAddresses = 1;
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x10u);
        }
        else
        {
          DeviceDescription.Dma32BitAddresses = 1;
          DeviceDescription.Dma64BitAddresses = 0;
        }
        if ( a4 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            LOBYTE(v16) = 5;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              1,
              20,
              (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
          }
          DeviceDescription.Reserved1 = 1;
        }
        SGMapRegistersNeeded = a1->SGMapRegistersNeeded;
        if ( ((2 * a6 - 2) >> 12) + 2 >= SGMapRegistersNeeded )
          DeviceDescription.MaximumLength = 2 * a6;
        else
          DeviceDescription.MaximumLength = (SGMapRegistersNeeded << 12) - 4096;
        DeviceDescription.Version = a5;
        if ( a5 >= 3 )
          DeviceDescription.DmaAddressWidth = a3 != 0 ? 64 : 32;
        if ( v17->DmaAdapterObject
          || (DmaAdapter = IoGetDmaAdapter(PhysicalDeviceObject, &DeviceDescription, &NumberOfMapRegisters),
              (v17->DmaAdapterObject = DmaAdapter) != 0LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v28) = NumberOfMapRegisters;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              1u,
              0x16u,
              (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
              (char)a1,
              v28);
          }
          _InterlockedIncrement(&v17->DmaAdapterRefCount);
          a1->MiniportSGDmaBlock = v17;
          if ( (a1->Flags & 0x40000) == 0 )
            a1->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisMSendCompleteSG;
          if ( ((int (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD))v17->DmaAdapterObject->DmaOperations->CalculateScatterGatherList)(
                 v17->DmaAdapterObject,
                 0LL,
                 0LL,
                 NumberOfMapRegisters << 12) >= 0
            && ((v22 = v30, v17->ScatterGatherListSize = v30, v17->SGListLookasideList)
             || (v23 = v22,
                 MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu),
                 (LookasideList = PplpCreateLookasideListEx(
                                    MaximumProcessorCount,
                                    v25,
                                    v26,
                                    v27,
                                    (int)&v30,
                                    (int)&v30 + 4,
                                    v23)) != 0)) )
          {
            _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x40u);
            a1->InfoFlags |= 4u;
            v14 = 0;
            if ( LookasideList )
              ndisAssignSGListLookasideList((__int64)v17, LookasideList);
          }
          else
          {
            v14 = -1073741670;
            ndisDereferenceDmaAdapter(v17);
          }
        }
        else
        {
          NdisWriteErrorLogEntry(a1, 0xC0001389, 1u, 0xFFFFFFFFLL);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v21,
              1,
              21,
              (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
              (char)a1);
          }
          v14 = -1073741670;
          ExFreePoolWithTag(v17, 0);
          a1->MiniportSGDmaBlock = 0LL;
        }
      }
      else
      {
        v14 = -1073741670;
      }
    }
  }
  else
  {
    v14 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v28) = v14;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x17u,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)a1,
      v28);
  }
  return v14;
}
