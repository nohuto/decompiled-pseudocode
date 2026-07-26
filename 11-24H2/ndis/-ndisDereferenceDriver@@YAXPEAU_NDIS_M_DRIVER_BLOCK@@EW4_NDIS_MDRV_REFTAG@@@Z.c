/*
 * XREFs of ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00
 * Callers:
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F2F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1400336D0 (NdisIMDeInitializeDeviceInstance.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14003B520 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisFreeIoWorkItem @ 0x14004EA30 (NdisFreeIoWorkItem.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140052FA0 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     NdisAllocateIoWorkItem @ 0x140057270 (NdisAllocateIoWorkItem.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140071C40 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     McGenControlCallbackV2 @ 0x140077F50 (McGenControlCallbackV2.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400804B0 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x140093480 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A7530 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1400B7DB4 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140136BAC (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EB08 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016B5D0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140171AA0 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140175810 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140176710 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140013700 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1400137C0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140013820 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140013860 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisDereferenceDriver(struct _NDIS_M_DRIVER_BLOCK *a1, char a2, unsigned __int8 a3)
{
  _REFERENCE_EX *p_Ref; // rdi
  ULONG_PTR v4; // rbx
  KIRQL v7; // r12
  KIRQL v8; // al
  ULONG_PTR RefCountTracker; // r8
  KIRQL v10; // bp
  __int64 v11; // r9
  unsigned __int8 j; // al
  _BYTE *v14; // rdx
  char v15; // cl
  ULONG_PTR v16; // rsi
  unsigned int v17; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rbx
  ULONG_PTR v19; // rbx
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v21; // rax
  struct _NDIS_REFCOUNT_BLOCK *v22; // rbx
  int v23; // edx
  struct _NDIS_M_DRIVER_BLOCK **k; // rdx
  struct _NDIS_M_DRIVER_BLOCK *v25; // rcx
  PVOID v26; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  int v30; // edx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx

  p_Ref = &a1->Ref;
  v4 = a3;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = (ULONG_PTR)p_Ref->RefCountTracker;
  v10 = v8;
  if ( RefCountTracker - 2 > 1 )
  {
    if ( RefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, RefCountTracker, 0LL);
    if ( (_BYTE)v4 == 0xFF )
    {
      if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0xFFuLL);
      *(_BYTE *)RefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v4 >= *(_BYTE *)(RefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, v4);
      if ( *(_BYTE *)(RefCountTracker + 1) )
      {
        if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
        {
          v16 = RefCountTracker + (v4 << 6);
          v17 = *(_DWORD *)(v16 + 64);
          if ( v17 >> 17 < 0x3FFE && (unsigned __int16)v17 >> 1 == (v17 >> 17) + 1 )
          {
            for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v16 + 8);
                  i;
                  i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v16 + 8) )
            {
              *(_QWORD *)(v16 + 8) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v16 + 8));
            *(_DWORD *)(v16 + 64) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v17 >> 1) && (v17 & 1) == 0 )
              goto LABEL_18;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v16 + 8), 0);
          }
        }
      }
      else
      {
        v11 = *(_QWORD *)(RefCountTracker + 8);
        if ( !v11 )
        {
LABEL_7:
          if ( _bittestandreset((signed __int32 *)(RefCountTracker + 16), v4) )
            goto LABEL_8;
LABEL_18:
          ndisReportRefcountImbalance(RefCountTracker, v4);
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_BYTE *)(RefCountTracker + 3) )
            goto LABEL_7;
          v14 = (_BYTE *)(v11 + 2LL * j);
          if ( *v14 == (_BYTE)v4 )
          {
            v15 = v14[1];
            if ( v15 )
              break;
          }
        }
        v14[1] = v15 - 1;
      }
    }
  }
LABEL_8:
  if ( p_Ref->ReferenceCount-- == 1 )
  {
    if ( !p_Ref->ZeroBased )
    {
      v19 = (ULONG_PTR)p_Ref->RefCountTracker;
      if ( v19 )
      {
        AnyActiveRefTag = ndisGetAnyActiveRefTag(p_Ref->RefCountTracker);
        if ( AnyActiveRefTag != -2 )
          ndisBugCheckEx(0x1EuLL, 4uLL, v19, AnyActiveRefTag);
        v21 = ndisRefCountBlockFromRefCountHandle(v19);
        v22 = v21;
        if ( v21 )
        {
          ndisFreeRefCountAuxiliaryMemory(v21);
          ExFreePoolWithTag(v22, 0);
        }
      }
      p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v23,
        20,
        23,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        (char)a1);
    }
    if ( !a2 )
      v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    for ( k = &ndisMiniDriverList; ; k = &v25->NextDriver )
    {
      v25 = *k;
      if ( !*k )
        break;
      if ( v25 == a1 )
      {
        v26 = ndisDriverObject;
        *k = a1->NextDriver;
        ObfDereferenceObject(v26);
        break;
      }
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
    Buffer = a1->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      a1->ImageName.Buffer = 0LL;
    }
    NdisDriverInfo = a1->NdisDriverInfo;
    if ( NdisDriverInfo )
    {
      ExFreePoolWithTag(NdisDriverInfo, 0);
      a1->NdisDriverInfo = 0LL;
    }
    if ( (a1->Flags & 1) != 0 )
    {
      PendingDeviceList = a1->PendingDeviceList;
      if ( PendingDeviceList )
      {
        do
        {
          Next = PendingDeviceList->Next;
          ExFreePoolWithTag(PendingDeviceList, 0);
          PendingDeviceList = Next;
        }
        while ( Next );
      }
    }
    KeSetEvent(&a1->MiniportsRemovedEvent, 0, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v30,
        20,
        24,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        (char)a1);
    }
  }
  else
  {
    KeReleaseSpinLock(&p_Ref->SpinLock, v10);
  }
}
