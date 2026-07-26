/*
 * XREFs of ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14005DD00
 * Callers:
 *     ndisIfGetMiniportStatistics @ 0x14015BA20 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x14015C020 (ndisIfQuerySetMiniport.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1400109B0 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140010A70 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140010AD0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140010B10 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  char v4; // r14
  unsigned __int8 v5; // si
  KIRQL v6; // al
  struct _NDIS_M_DRIVER_BLOCK *v7; // r13
  KIRQL v8; // r15
  KIRQL v9; // di
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v12; // r15
  struct _NDIS_MINIPORT_BLOCK *MiniportQueue; // rax
  bool v14; // zf
  char v15; // si
  KIRQL v16; // bp
  NDIS_REFCOUNT_HANDLE__ *v17; // rcx
  unsigned int v18; // ecx
  KIRQL v19; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r14
  KIRQL v21; // al
  ULONG_PTR v22; // r8
  KIRQL v23; // bp
  __int64 v24; // r9
  unsigned __int8 j; // al
  _BYTE *v27; // rdx
  char v28; // cl
  ULONG_PTR v29; // rdi
  unsigned int v30; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rsi
  ULONG_PTR v32; // rdi
  ULONG AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v34; // rax
  struct _NDIS_REFCOUNT_BLOCK *v35; // rdi
  int v36; // edx
  struct _NDIS_M_DRIVER_BLOCK **k; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v38; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v43; // edx
  __int64 v44; // [rsp+30h] [rbp-58h]
  char v45; // [rsp+40h] [rbp-48h]
  char v48; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v45 = 0;
  v48 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v7 = ndisMiniDriverList;
  v8 = v6;
  while ( v7 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&v7->Ref.SpinLock);
    if ( !v7->Ref.Closing )
    {
      ReferenceCount = v7->Ref.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v7->Ref.RefCountTracker;
        v7->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker, 7u);
        KeReleaseSpinLock(&v7->Ref.SpinLock, v9);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
        v12 = KeAcquireSpinLockRaiseToDpc(&v7->Ref.SpinLock);
        MiniportQueue = v7->MiniportQueue;
        while ( MiniportQueue )
        {
          if ( MiniportQueue == a1 )
          {
            v45 = 1;
            KeAcquireSpinLockAtDpcLevel(&a1->Lock);
            v14 = (a1->Flags & 0x80200020) == 0;
            a1->MiniportThread = KeGetCurrentThread();
            if ( v14
              && (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0 )
            {
              v15 = 1;
              v16 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
              if ( a1->Ref.Closing )
                goto LABEL_19;
              v17 = a1->RefCountTracker;
              if ( v17 )
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v17, a3);
              v18 = a1->Ref.ReferenceCount;
              a1->Ref.ReferenceCount = v18 + 1;
              if ( v18 == -1 )
              {
                a1->Ref.ReferenceCount = -1;
LABEL_19:
                v15 = 0;
              }
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v44) = a1->Ref.ReferenceCount;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0xCu,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  (char)a1,
                  v44);
              }
              KeReleaseSpinLock(&a1->Ref.SpinLock, v16);
              if ( v15 )
              {
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->NsiRefCountTracker, a2);
                ++a1->NsiOpenReferences;
                v48 = 1;
              }
            }
            a1->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&a1->Lock);
            break;
          }
          MiniportQueue = MiniportQueue->NextMiniport;
          v45 = v4;
          v48 = v5;
          if ( v4 )
            break;
        }
        KeReleaseSpinLock(&v7->Ref.SpinLock, v12);
        v19 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v7->NextDriver;
        v8 = v19;
        v21 = KeAcquireSpinLockRaiseToDpc(&v7->Ref.SpinLock);
        v22 = (ULONG_PTR)v7->Ref.RefCountTracker;
        v23 = v21;
        if ( v22 - 2 > 1 )
        {
          if ( v22 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v22, 0LL);
          if ( *(_BYTE *)(v22 + 2) <= 7u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v22, 7uLL);
          if ( *(_BYTE *)(v22 + 1) )
          {
            if ( *(_BYTE *)(v22 + 1) == 1 )
            {
              v29 = v22 + 456;
              v30 = *(_DWORD *)(v22 + 512);
              if ( v30 >> 17 < 0x3FFE && (unsigned __int16)v30 >> 1 == (v30 >> 17) + 1 )
              {
                for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v29;
                      *(_QWORD *)v29;
                      i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v29 )
                {
                  *(_QWORD *)v29 = i->Next;
                  ndisFreeRefCountStacksInBlock(i);
                  ExFreePoolWithTag(i, 0);
                }
                ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v29);
                *(_DWORD *)(v29 + 56) &= 0x10001u;
              }
              else
              {
                if ( !((unsigned __int16)v30 >> 1) && (v30 & 1) == 0 )
LABEL_43:
                  ndisReportRefcountImbalance(v22, 7u);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 456), 0);
              }
            }
          }
          else
          {
            v24 = *(_QWORD *)(v22 + 8);
            if ( v24 )
            {
              for ( j = 0; ; ++j )
              {
                if ( j >= *(_BYTE *)(v22 + 3) )
                  goto LABEL_30;
                v27 = (_BYTE *)(v24 + 2LL * j);
                if ( *v27 == 7 )
                {
                  v28 = v27[1];
                  if ( v28 )
                    break;
                }
              }
              v27[1] = v28 - 1;
            }
            else
            {
LABEL_30:
              if ( !_bittestandreset((signed __int32 *)(v22 + 16), 7u) )
                goto LABEL_43;
            }
          }
        }
        v14 = v7->Ref.ReferenceCount-- == 1;
        if ( v14 )
        {
          if ( !v7->Ref.ZeroBased )
          {
            v32 = (ULONG_PTR)v7->Ref.RefCountTracker;
            if ( v32 )
            {
              AnyActiveRefTag = ndisGetAnyActiveRefTag(v7->Ref.RefCountTracker);
              if ( AnyActiveRefTag != -2 )
                ndisBugCheckEx(0x1EuLL, 4uLL, v32, AnyActiveRefTag);
              v34 = ndisRefCountBlockFromRefCountHandle(v32);
              v35 = v34;
              if ( v34 )
              {
                ndisFreeRefCountAuxiliaryMemory(v34);
                ExFreePoolWithTag(v35, 0);
              }
            }
            v7->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
          }
          KeReleaseSpinLock(&v7->Ref.SpinLock, v23);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v36,
              20,
              23,
              (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
              (char)v7);
          }
          for ( k = &ndisMiniDriverList; ; k = &v38->NextDriver )
          {
            v38 = *k;
            if ( !*k )
              break;
            if ( v38 == v7 )
            {
              *k = v7->NextDriver;
              ObfDereferenceObject(ndisDriverObject);
              break;
            }
          }
          Buffer = v7->ImageName.Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0);
            v7->ImageName.Buffer = 0LL;
          }
          NdisDriverInfo = v7->NdisDriverInfo;
          if ( NdisDriverInfo )
          {
            ExFreePoolWithTag(NdisDriverInfo, 0);
            v7->NdisDriverInfo = 0LL;
          }
          if ( (v7->Flags & 1) != 0 )
          {
            PendingDeviceList = v7->PendingDeviceList;
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
          KeSetEvent(&v7->MiniportsRemovedEvent, 0, 0);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v43) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v43,
              20,
              24,
              (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
              (char)v7);
          }
        }
        else
        {
          KeReleaseSpinLock(&v7->Ref.SpinLock, v23);
        }
        v5 = v48;
        goto LABEL_34;
      }
      ndisRefCountReferenceCountOverflow = 1;
    }
    KeReleaseSpinLock(&v7->Ref.SpinLock, v9);
    NextDriver = v7->NextDriver;
LABEL_34:
    v7 = NextDriver;
    v4 = v45;
    if ( v45 )
      break;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  return v5;
}
