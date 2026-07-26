/*
 * XREFs of ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400E1BA0
 * Callers:
 *     NdisMInitializeScatterGatherDma @ 0x1400DD5E0 (NdisMInitializeScatterGatherDma.c)
 *     ndisRegisterScatterGatherDmaForMiniport @ 0x1400E21BC (ndisRegisterScatterGatherDmaForMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qLL @ 0x1400575D0 (WPP_RECORDER_SF_qLL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisWriteErrorLogEntry @ 0x14006FC00 (NdisWriteErrorLogEntry.c)
 *     PplpCreateLookasideListEx @ 0x1400E2A3C (PplpCreateLookasideListEx.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
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
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdx
  unsigned __int8 MajorNdisVersion; // cl
  unsigned int Flags; // eax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  unsigned int v16; // ebx
  __int64 Pool2; // rax
  int v18; // edx
  _NDIS_SG_DMA_BLOCK *v19; // rsi
  unsigned int SGMapRegistersNeeded; // ecx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  int v23; // edx
  bool v24; // zf
  unsigned int v25; // eax
  SIZE_T v26; // rbx
  ULONG MaximumProcessorCount; // eax
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  _NDIS_MINIPORT_BLOCK *v32; // rcx
  KIRQL v33; // dl
  SIZE_T v34; // [rsp+30h] [rbp-69h]
  KIRQL NewIrql[4]; // [rsp+50h] [rbp-49h] BYREF
  ULONG NumberOfMapRegisters; // [rsp+54h] [rbp-45h] BYREF
  SIZE_T v37; // [rsp+58h] [rbp-41h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+60h] [rbp-39h] BYREF

  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  LookasideList = 0LL;
  v37 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x13u,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)a1,
      a3,
      a6);
  DriverHandle = a1->DriverHandle;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( MajorNdisVersion >= 5u && (Flags = a1->Flags, (Flags & 8) != 0) )
  {
    if ( MajorNdisVersion == 5
      && DriverHandle->MinorNdisVersion == 2
      && (MiniportSGDmaBlock = a1->MiniportSGDmaBlock) != 0LL )
    {
      v16 = 0;
      a1->InfoFlags |= 4u;
      a1->Flags = Flags | 0x40;
      _InterlockedIncrement(&MiniportSGDmaBlock->DmaAdapterRefCount);
    }
    else if ( (a1->DriverVerifyFlags & 0x100) != 0 )
    {
      v16 = -1073741670;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254);
      v18 = 0;
      v19 = (_NDIS_SG_DMA_BLOCK *)Pool2;
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
          a1->Flags |= 0x10u;
          DeviceDescription.Dma32BitAddresses = 0;
          DeviceDescription.Dma64BitAddresses = 1;
        }
        else
        {
          DeviceDescription.Dma32BitAddresses = 1;
          DeviceDescription.Dma64BitAddresses = 0;
        }
        if ( a4 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            LOBYTE(v18) = 5;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
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
        if ( v19->DmaAdapterObject
          || (DmaAdapter = IoGetDmaAdapter(PhysicalDeviceObject, &DeviceDescription, &NumberOfMapRegisters),
              (v19->DmaAdapterObject = DmaAdapter) != 0LL) )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v34) = NumberOfMapRegisters;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              1u,
              0x16u,
              (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
              (char)a1,
              v34);
          }
          _InterlockedIncrement(&v19->DmaAdapterRefCount);
          v24 = (a1->Flags & 0x40000) == 0;
          a1->MiniportSGDmaBlock = v19;
          if ( v24 )
            a1->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisMSendCompleteSG;
          if ( ((int (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD))v19->DmaAdapterObject->DmaOperations->CalculateScatterGatherList)(
                 v19->DmaAdapterObject,
                 0LL,
                 0LL,
                 NumberOfMapRegisters << 12) >= 0
            && ((v25 = v37, v19->ScatterGatherListSize = v37, v19->SGListLookasideList)
             || (v26 = v25,
                 MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu),
                 (LookasideList = PplpCreateLookasideListEx(
                                    MaximumProcessorCount,
                                    v28,
                                    v29,
                                    v30,
                                    (int)&v37,
                                    (int)&v37 + 4,
                                    v26)) != 0)) )
          {
            a1->Flags |= 0x40u;
            v16 = 0;
            a1->InfoFlags |= 4u;
            if ( LookasideList )
            {
              Miniport = v19->Miniport;
              NewIrql[0] = 0;
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(Miniport, NewIrql);
              v32 = v19->Miniport;
              v33 = NewIrql[0];
              v19->SGListLookasideList = (void *)LookasideList;
              v32->MiniportThread = 0LL;
              KeReleaseSpinLock(&v32->Lock, v33);
            }
          }
          else
          {
            v16 = -1073741670;
            ndisDereferenceDmaAdapter(v19);
          }
        }
        else
        {
          NdisWriteErrorLogEntry(a1, 0xC0001389, 1u, 0xFFFFFFFFLL);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v23,
              1,
              21,
              (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
              (char)a1);
          }
          v16 = -1073741670;
          ExFreePoolWithTag(v19, 0);
          a1->MiniportSGDmaBlock = 0LL;
        }
      }
      else
      {
        v16 = -1073741670;
      }
    }
  }
  else
  {
    v16 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v34) = v16;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x17u,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)a1,
      v34);
  }
  return v16;
}
