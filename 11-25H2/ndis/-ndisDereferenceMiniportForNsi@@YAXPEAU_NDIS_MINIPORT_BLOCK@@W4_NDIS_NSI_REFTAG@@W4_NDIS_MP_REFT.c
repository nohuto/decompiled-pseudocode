/*
 * XREFs of ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000EB80
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisIfGetMiniportStatistics @ 0x14015BA20 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x14015C020 (ndisIfQuerySetMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140010B10 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // rbx
  KIRQL v6; // r15
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // r8
  __int64 v8; // r9
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  int v11; // edx
  KIRQL v12; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v14; // r14
  __int64 v15; // r9
  unsigned int v16; // ebx
  int v17; // edx
  unsigned __int8 j; // cl
  _BYTE *v19; // rdx
  char v20; // al
  unsigned __int8 m; // al
  _BYTE *v22; // rdx
  char v23; // cl
  struct _KEVENT *RemoveReadyEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v25; // r14
  unsigned int v26; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rbx
  NDIS_REFCOUNT_HANDLE__ *v28; // rbx
  unsigned int v29; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *k; // rsi

  v4 = a3;
  v5 = a2;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  NsiRefCountTracker = a1->NsiRefCountTracker;
  a1->MiniportThread = KeGetCurrentThread();
  if ( (unsigned __int64)NsiRefCountTracker - 2 > 1 )
  {
    if ( (unsigned __int64)NsiRefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)NsiRefCountTracker, 0LL);
    if ( (_BYTE)v5 == 0xFF )
    {
      if ( (*(_BYTE *)NsiRefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)NsiRefCountTracker, 0xFFuLL);
      *(_BYTE *)NsiRefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v5 >= *((_BYTE *)NsiRefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)NsiRefCountTracker, v5);
      if ( *((_BYTE *)NsiRefCountTracker + 1) )
      {
        if ( *((_BYTE *)NsiRefCountTracker + 1) != 1 )
          goto LABEL_8;
        v25 = NsiRefCountTracker + 16 * v5;
        v26 = *((_DWORD *)v25 + 16);
        if ( v26 >> 17 >= 0x3FFE || (unsigned __int16)v26 >> 1 != (v26 >> 17) + 1 )
        {
          if ( (unsigned __int16)v26 >> 1 || (v26 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v25 + 2), 0);
            goto LABEL_8;
          }
          goto LABEL_41;
        }
        for ( i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v25 + 1);
              i;
              i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v25 + 1) )
        {
          *((_QWORD *)v25 + 1) = i->Next;
          ndisFreeRefCountStacksInBlock(i);
          ExFreePoolWithTag(i, 0);
        }
        ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v25 + 2));
        *((_DWORD *)v25 + 16) &= 0x10001u;
      }
      else
      {
        v8 = *((_QWORD *)NsiRefCountTracker + 1);
        if ( !v8 )
        {
LABEL_7:
          if ( _bittestandreset((signed __int32 *)NsiRefCountTracker + 4, v5) )
            goto LABEL_8;
LABEL_41:
          ndisReportRefcountImbalance((ULONG_PTR)NsiRefCountTracker, v5);
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *((_BYTE *)NsiRefCountTracker + 3) )
            goto LABEL_7;
          v19 = (_BYTE *)(v8 + 2LL * j);
          if ( *v19 == (_BYTE)v5 )
          {
            v20 = v19[1];
            if ( v20 )
              break;
          }
        }
        v19[1] = v20 - 1;
      }
    }
  }
LABEL_8:
  if ( a1->NsiOpenReferences-- == 1 )
  {
    NsiRequestsCompletedEvent = a1->NsiRequestsCompletedEvent;
    if ( NsiRequestsCompletedEvent )
      KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      20,
      25,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)a1);
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v14 = v12;
  if ( RefCountTracker && (unsigned __int64)RefCountTracker - 2 > 1 )
  {
    if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( (_BYTE)v4 == 0xFF )
    {
      if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0xFFuLL);
      *(_BYTE *)RefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v4 >= *((_BYTE *)RefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, v4);
      if ( *((_BYTE *)RefCountTracker + 1) )
      {
        if ( *((_BYTE *)RefCountTracker + 1) == 1 )
        {
          v28 = RefCountTracker + 16 * v4;
          v29 = *((_DWORD *)v28 + 16);
          if ( v29 >> 17 < 0x3FFE && (unsigned __int16)v29 >> 1 == (v29 >> 17) + 1 )
          {
            for ( k = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v28 + 1);
                  k;
                  k = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v28 + 1) )
            {
              *((_QWORD *)v28 + 1) = k->Next;
              ndisFreeRefCountStacksInBlock(k);
              ExFreePoolWithTag(k, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 2));
            *((_DWORD *)v28 + 16) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v29 >> 1) && (v29 & 1) == 0 )
              goto LABEL_42;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 2), 0);
          }
        }
      }
      else
      {
        v15 = *((_QWORD *)RefCountTracker + 1);
        if ( !v15 )
        {
LABEL_20:
          if ( _bittestandreset((signed __int32 *)RefCountTracker + 4, v4) )
            goto LABEL_21;
LABEL_42:
          ndisReportRefcountImbalance((ULONG_PTR)RefCountTracker, v4);
        }
        for ( m = 0; ; ++m )
        {
          if ( m >= *((_BYTE *)RefCountTracker + 3) )
            goto LABEL_20;
          v22 = (_BYTE *)(v15 + 2LL * m);
          if ( *v22 == (_BYTE)v4 )
          {
            v23 = v22[1];
            if ( v23 )
              break;
          }
        }
        v22[1] = v23 - 1;
      }
    }
  }
LABEL_21:
  v16 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v16;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  KeReleaseSpinLock(&a1->Ref.SpinLock, v14);
  if ( !v16 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      20,
      26,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)a1);
  }
}
