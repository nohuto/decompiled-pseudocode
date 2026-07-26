/*
 * XREFs of ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F9B0
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
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
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceTopMiniportByNameForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        __int64 a3,
        char a4,
        enum _NDIS_NSI_REFTAG a5,
        enum _NDIS_MP_REFTAG a6)
{
  _NDIS_MINIPORT_BLOCK *v6; // rbp
  unsigned int v7; // edi
  struct _NDIS_MINIPORT_BLOCK *v8; // rsi
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // r13
  KIRQL v11; // r14
  KIRQL v12; // bl
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v15; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v17; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v19; // rcx
  KIRQL v20; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v22; // al
  ULONG_PTR v23; // r8
  KIRQL v24; // bp
  __int64 v25; // r9
  bool v26; // zf
  unsigned __int8 ii; // al
  _BYTE *v28; // rdx
  char v29; // cl
  char v30; // si
  KIRQL v31; // bp
  struct _NDIS_REFCOUNT_BLOCK *v32; // rcx
  unsigned int v33; // ecx
  int *v34; // rax
  __int64 v35; // rdi
  KIRQL v36; // r14
  ULONG_PTR v37; // r8
  __int64 v38; // r10
  struct _KEVENT *v39; // rcx
  int v40; // edx
  __int64 v41; // rsi
  KIRQL v42; // al
  ULONG_PTR v43; // r8
  KIRQL v44; // bp
  __int64 v45; // r10
  int v46; // edi
  int v47; // edx
  ULONG_PTR v49; // rbx
  unsigned int v50; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *n; // rdi
  unsigned __int8 j; // cl
  _BYTE *v53; // r9
  char v54; // al
  unsigned __int8 m; // cl
  _BYTE *v56; // r9
  char v57; // al
  struct _KEVENT *v58; // rcx
  ULONG_PTR v59; // rdi
  unsigned int v60; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rsi
  ULONG_PTR v62; // rdi
  unsigned int v63; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *k; // r14
  ULONG_PTR v65; // rbx
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v67; // rax
  struct _NDIS_REFCOUNT_BLOCK *v68; // rbx
  int v69; // edx
  struct _NDIS_M_DRIVER_BLOCK **jj; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v71; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  int v75; // edx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int64 v77; // [rsp+30h] [rbp-68h]
  char v78[8]; // [rsp+40h] [rbp-58h]
  _NDIS_MINIPORT_BLOCK *v79; // [rsp+48h] [rbp-50h]
  int v81; // [rsp+A8h] [rbp+10h]
  int v82; // [rsp+B0h] [rbp+18h]

  v6 = 0LL;
  v7 = 1;
  v8 = a1;
  v81 = ~a2;
  v79 = 0LL;
  *(_QWORD *)v78 = 0LL;
  v82 = 1;
  if ( !a1->BindPaths )
    return 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v11 = v9;
  if ( !ndisMiniDriverList )
    goto LABEL_72;
  while ( 1 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    if ( v10->Ref.Closing )
      goto LABEL_80;
    ReferenceCount = v10->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_80:
      KeReleaseSpinLock(&v10->Ref.SpinLock, v12);
      NextDriver = v10->NextDriver;
      goto LABEL_20;
    }
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v10->Ref.RefCountTracker;
    v10->Ref.ReferenceCount = ReferenceCount + 1;
    NdisReferenceWithTag(RefCountTracker, 8u);
    KeReleaseSpinLock(&v10->Ref.SpinLock, v12);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
    v15 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    MiniportQueue = v10->MiniportQueue;
    v17 = v15;
    if ( MiniportQueue )
    {
      while ( 1 )
      {
        BindPaths = MiniportQueue->BindPaths;
        if ( !BindPaths )
          goto LABEL_10;
        if ( BindPaths->Number < v7 )
          goto LABEL_10;
        v19 = v8->BindPaths;
        if ( v19->Paths[0].Length != BindPaths->Paths[0].Length
          || memcmp(v19->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v19->Paths[0].Length) )
        {
          goto LABEL_10;
        }
        KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
        MiniportQueue->MiniportThread = KeGetCurrentThread();
        if ( (v81 & MiniportQueue->Flags & 0x80200020) == 0
          && (MiniportQueue->PnPFlags & 0x1084110) == 0
          && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
          && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || a4) )
        {
          break;
        }
LABEL_44:
        MiniportQueue->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
        v35 = *(_QWORD *)v78;
        if ( *(_QWORD *)v78 )
        {
          v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v78 + 96LL));
          v37 = *(_QWORD *)(*(_QWORD *)v78 + 4904LL);
          *(_QWORD *)(*(_QWORD *)v78 + 520LL) = KeGetCurrentThread();
          if ( v37 - 2 > 1 )
          {
            if ( v37 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v37, 0LL);
            if ( a5 == -1 )
            {
              if ( (*(_BYTE *)v37 & 2) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v37, 0xFFuLL);
              *(_BYTE *)v37 &= ~2u;
            }
            else
            {
              if ( (unsigned __int8)a5 >= *(_BYTE *)(v37 + 2) )
                ndisBugCheckEx(0x1EuLL, 2uLL, v37, (unsigned __int8)a5);
              if ( *(_BYTE *)(v37 + 1) )
              {
                if ( *(_BYTE *)(v37 + 1) == 1 )
                {
                  v59 = v37 + ((unsigned __int64)(unsigned __int8)a5 << 6);
                  v60 = *(_DWORD *)(v59 + 64);
                  if ( v60 >> 17 < 0x3FFE && (unsigned __int16)v60 >> 1 == (v60 >> 17) + 1 )
                  {
                    for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v59 + 8);
                          i;
                          i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v59 + 8) )
                    {
                      *(_QWORD *)(v59 + 8) = i->Next;
                      ndisFreeRefCountStacksInBlock(i);
                      ExFreePoolWithTag(i, 0);
                    }
                    ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v59 + 8));
                    *(_DWORD *)(v59 + 64) &= 0x10001u;
                    v35 = *(_QWORD *)v78;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v60 >> 1) && (v60 & 1) == 0 )
LABEL_96:
                      ndisReportRefcountImbalance(v37, a5);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v59 + 8), 0);
                    v35 = *(_QWORD *)v78;
                  }
                }
              }
              else
              {
                v38 = *(_QWORD *)(v37 + 8);
                if ( v38 )
                {
                  for ( j = 0; ; ++j )
                  {
                    if ( j >= *(_BYTE *)(v37 + 3) )
                      goto LABEL_51;
                    v53 = (_BYTE *)(v38 + 2LL * j);
                    if ( *v53 == a5 )
                    {
                      v54 = v53[1];
                      if ( v54 )
                        break;
                    }
                  }
                  v53[1] = v54 - 1;
                }
                else
                {
LABEL_51:
                  if ( !_bittestandreset((signed __int32 *)(v37 + 16), (unsigned __int8)a5) )
                    goto LABEL_96;
                }
              }
            }
          }
          v26 = (*(_DWORD *)(v35 + 3124))-- == 1;
          if ( v26 )
          {
            v39 = *(struct _KEVENT **)(v35 + 3136);
            if ( v39 )
              KeSetEvent(v39, 0, 0);
          }
          *(_QWORD *)(v35 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)v78 + 96LL), v36);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v40) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v40,
              20,
              25,
              (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
              v35);
          }
          v41 = v35 + 4432;
          v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v35 + 4432));
          v43 = *(_QWORD *)(v35 + 4896);
          v44 = v42;
          if ( v43 && v43 - 2 > 1 )
          {
            if ( v43 == 1 )
              ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
            if ( a6 == (MPREF_NUMBER_OF_TAGS|MPREF_PM_REJECT|0x80) )
            {
              if ( (*(_BYTE *)v43 & 2) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v43, 0xFFuLL);
              *(_BYTE *)v43 &= ~2u;
            }
            else
            {
              if ( (unsigned __int8)a6 >= *(_BYTE *)(v43 + 2) )
                ndisBugCheckEx(0x1EuLL, 2uLL, v43, (unsigned __int8)a6);
              if ( *(_BYTE *)(v43 + 1) )
              {
                if ( *(_BYTE *)(v43 + 1) == 1 )
                {
                  v62 = v43 + ((unsigned __int64)(unsigned __int8)a6 << 6);
                  v63 = *(_DWORD *)(v62 + 64);
                  if ( v63 >> 17 < 0x3FFE && (unsigned __int16)v63 >> 1 == (v63 >> 17) + 1 )
                  {
                    for ( k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v62 + 8);
                          k;
                          k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v62 + 8) )
                    {
                      *(_QWORD *)(v62 + 8) = k->Next;
                      ndisFreeRefCountStacksInBlock(k);
                      ExFreePoolWithTag(k, 0);
                    }
                    ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v62 + 8));
                    *(_DWORD *)(v62 + 64) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v63 >> 1) && (v63 & 1) == 0 )
LABEL_97:
                      ndisReportRefcountImbalance(v43, a6);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v62 + 8), 0);
                  }
                }
              }
              else
              {
                v45 = *(_QWORD *)(v43 + 8);
                if ( v45 )
                {
                  for ( m = 0; ; ++m )
                  {
                    if ( m >= *(_BYTE *)(v43 + 3) )
                      goto LABEL_64;
                    v56 = (_BYTE *)(v45 + 2LL * m);
                    if ( *v56 == a6 )
                    {
                      v57 = v56[1];
                      if ( v57 )
                        break;
                    }
                  }
                  v56[1] = v57 - 1;
                }
                else
                {
LABEL_64:
                  if ( !_bittestandreset((signed __int32 *)(v43 + 16), (unsigned __int8)a6) )
                    goto LABEL_97;
                }
              }
            }
          }
          v46 = *(_DWORD *)(v41 + 8) - 1;
          *(_DWORD *)(v41 + 8) = v46;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v77) = *(_DWORD *)(*(_QWORD *)v78 + 4440LL);
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0xEu,
              (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
              v78[0],
              v77);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v41, v44);
          if ( !v46 )
          {
            v58 = *(struct _KEVENT **)(*(_QWORD *)v78 + 1608LL);
            if ( v58 )
              KeSetEvent(v58, 0, 0);
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v47) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v47,
              20,
              26,
              (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
              v78[0]);
          }
          *(_QWORD *)v78 = 0LL;
        }
LABEL_10:
        MiniportQueue = MiniportQueue->NextMiniport;
        v7 = v82;
        v8 = a1;
        if ( !MiniportQueue )
          goto LABEL_11;
      }
      v30 = 1;
      v31 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
      if ( !MiniportQueue->Ref.Closing )
      {
        v32 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
        if ( v32 )
          NdisReferenceWithTag(v32, a6);
        v33 = MiniportQueue->Ref.ReferenceCount;
        MiniportQueue->Ref.ReferenceCount = v33 + 1;
        if ( v33 != -1 )
          goto LABEL_40;
        MiniportQueue->Ref.ReferenceCount = -1;
      }
      v30 = 0;
LABEL_40:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v77) = MiniportQueue->Ref.ReferenceCount;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0xCu,
          (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
          (char)MiniportQueue,
          v77);
      }
      KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v31);
      if ( v30 )
      {
        *(_QWORD *)v78 = v79;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, a5);
        v34 = (int *)MiniportQueue->BindPaths;
        ++MiniportQueue->NsiOpenReferences;
        v79 = MiniportQueue;
        v82 = *v34;
      }
      goto LABEL_44;
    }
LABEL_11:
    KeReleaseSpinLock(&v10->Ref.SpinLock, v17);
    v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v10->NextDriver;
    v11 = v20;
    v22 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    v23 = (ULONG_PTR)v10->Ref.RefCountTracker;
    v24 = v22;
    if ( v23 - 2 > 1 )
    {
      if ( v23 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v23, 0LL);
      if ( *(_BYTE *)(v23 + 2) <= 8u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v23, 8uLL);
      if ( *(_BYTE *)(v23 + 1) )
      {
        if ( *(_BYTE *)(v23 + 1) == 1 )
        {
          v49 = v23 + 520;
          v50 = *(_DWORD *)(v23 + 576);
          if ( v50 >> 17 < 0x3FFE && (unsigned __int16)v50 >> 1 == (v50 >> 17) + 1 )
          {
            for ( n = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v49;
                  *(_QWORD *)v49;
                  n = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v49 )
            {
              *(_QWORD *)v49 = n->Next;
              ndisFreeRefCountStacksInBlock(n);
              ExFreePoolWithTag(n, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v49);
            *(_DWORD *)(v49 + 56) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v50 >> 1) && (v50 & 1) == 0 )
LABEL_29:
              ndisReportRefcountImbalance(v23, 8u);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v23 + 520), 0);
          }
        }
      }
      else
      {
        v25 = *(_QWORD *)(v23 + 8);
        if ( v25 )
        {
          for ( ii = 0; ; ++ii )
          {
            if ( ii >= *(_BYTE *)(v23 + 3) )
              goto LABEL_16;
            v28 = (_BYTE *)(v25 + 2LL * ii);
            if ( *v28 == 8 )
            {
              v29 = v28[1];
              if ( v29 )
                break;
            }
          }
          v28[1] = v29 - 1;
        }
        else
        {
LABEL_16:
          if ( !_bittestandreset((signed __int32 *)(v23 + 16), 8u) )
            goto LABEL_29;
        }
      }
    }
    v26 = v10->Ref.ReferenceCount-- == 1;
    if ( v26 )
    {
      if ( !v10->Ref.ZeroBased )
      {
        v65 = (ULONG_PTR)v10->Ref.RefCountTracker;
        if ( v65 )
        {
          AnyActiveRefTag = ndisGetAnyActiveRefTag(v10->Ref.RefCountTracker);
          if ( AnyActiveRefTag != -2 )
            ndisBugCheckEx(0x1EuLL, 4uLL, v65, AnyActiveRefTag);
          v67 = ndisRefCountBlockFromRefCountHandle(v65);
          v68 = v67;
          if ( v67 )
          {
            ndisFreeRefCountAuxiliaryMemory(v67);
            ExFreePoolWithTag(v68, 0);
          }
        }
        v10->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
      KeReleaseSpinLock(&v10->Ref.SpinLock, v24);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v69) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v69,
          20,
          23,
          (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
          (char)v10);
      }
      for ( jj = &ndisMiniDriverList; ; jj = &v71->NextDriver )
      {
        v71 = *jj;
        if ( !*jj )
          break;
        if ( v71 == v10 )
        {
          *jj = v10->NextDriver;
          ObfDereferenceObject(ndisDriverObject);
          break;
        }
      }
      Buffer = v10->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v10->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v10->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v10->NdisDriverInfo = 0LL;
      }
      if ( (v10->Flags & 1) != 0 )
      {
        PendingDeviceList = v10->PendingDeviceList;
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
      KeSetEvent(&v10->MiniportsRemovedEvent, 0, 0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v75) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v75,
          20,
          24,
          (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
          (char)v10);
      }
    }
    else
    {
      KeReleaseSpinLock(&v10->Ref.SpinLock, v24);
    }
    v7 = v82;
LABEL_20:
    v10 = NextDriver;
    if ( !NextDriver )
      break;
    v8 = a1;
  }
  v6 = v79;
LABEL_72:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  return v6;
}
