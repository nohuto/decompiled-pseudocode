/*
 * XREFs of ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F2F0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14000CFD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14000E580 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000F620 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140011370 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x140013B40 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     memcmp @ 0x1400E7A20 (memcmp.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceTopMiniportByNameForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        __int64 a3,
        char a4,
        enum _NDIS_NSI_REFTAG a5,
        enum _NDIS_MP_REFTAG a6)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rbx
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  unsigned int v8; // ebp
  KIRQL v10; // al
  struct _NDIS_M_DRIVER_BLOCK *v11; // r13
  KIRQL v12; // si
  KSPIN_LOCK *p_SpinLock; // r15
  __int64 v14; // rdx
  KIRQL v15; // bl
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KIRQL v18; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  struct _NDIS_MINIPORT_BLOCK *v20; // r15
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v22; // rcx
  unsigned int *p_Number; // rax
  KIRQL v24; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbx
  struct _NDIS_MINIPORT_BLOCK *v26; // [rsp+20h] [rbp-58h]
  struct _NDIS_M_DRIVER_BLOCK *v27; // [rsp+28h] [rbp-50h]
  unsigned int v29; // [rsp+88h] [rbp+10h]
  KIRQL v30; // [rsp+90h] [rbp+18h]

  v6 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v29 = ~a2 & 0x80200020;
  v8 = 1;
  if ( !a1->BindPaths )
    return 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v11 = ndisMiniDriverList;
  v12 = v10;
  v27 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_28;
  do
  {
    p_SpinLock = &v11->Ref.SpinLock;
    v15 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
    if ( v11->Ref.Closing )
      goto LABEL_25;
    ReferenceCount = v11->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_25:
      KeReleaseSpinLock(&v11->Ref.SpinLock, v15);
      NextDriver = v11->NextDriver;
      goto LABEL_26;
    }
    RefCountTracker = v11->Ref.RefCountTracker;
    LOBYTE(v14) = 8;
    v11->Ref.ReferenceCount = ReferenceCount + 1;
    NdisReferenceWithTag(RefCountTracker, v14);
    KeReleaseSpinLock(&v11->Ref.SpinLock, v15);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
    v18 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
    MiniportQueue = v11->MiniportQueue;
    v30 = v18;
    if ( MiniportQueue )
    {
      v20 = v26;
      do
      {
        BindPaths = MiniportQueue->BindPaths;
        if ( BindPaths )
        {
          if ( BindPaths->Number >= v8 )
          {
            v22 = a1->BindPaths;
            if ( v22->Paths[0].Length == BindPaths->Paths[0].Length
              && !memcmp(v22->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v22->Paths[0].Length) )
            {
              KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
              MiniportQueue->MiniportThread = KeGetCurrentThread();
              if ( (MiniportQueue->Flags & v29) == 0
                && (MiniportQueue->PnPFlags & 0x1084110) == 0
                && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
                && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || a4) )
              {
                if ( ndisReferenceMiniport(MiniportQueue, a6) )
                {
                  v7 = v20;
                  NdisReferenceWithTag(MiniportQueue->NsiRefCountTracker, (unsigned __int8)a5);
                  p_Number = &MiniportQueue->BindPaths->Number;
                  v20 = MiniportQueue;
                  ++MiniportQueue->NsiOpenReferences;
                  v8 = *p_Number;
                }
              }
              MiniportQueue->MiniportThread = 0LL;
              KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
              if ( v7 )
              {
                ndisDereferenceMiniportForNsi(v7, a5, a6);
                v7 = 0LL;
              }
            }
          }
        }
        MiniportQueue = MiniportQueue->NextMiniport;
      }
      while ( MiniportQueue );
      v11 = v27;
      v18 = v30;
      v26 = v20;
      p_SpinLock = &v27->Ref.SpinLock;
    }
    KeReleaseSpinLock(p_SpinLock, v18);
    v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v11->NextDriver;
    v12 = v24;
    ndisDereferenceDriver(v11, 1u, MDRVREF_MPREFT);
LABEL_26:
    v27 = NextDriver;
    v11 = NextDriver;
  }
  while ( NextDriver );
  v6 = v26;
LABEL_28:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
  return v6;
}
