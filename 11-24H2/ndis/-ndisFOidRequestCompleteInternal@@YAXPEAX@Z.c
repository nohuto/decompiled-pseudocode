/*
 * XREFs of ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140016090
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009A8D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x140007F90 (NdisFreeRefCount.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140009FA0 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400B9A5C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(struct _NDIS_FILTER_BLOCK *Parameter)
{
  _NDIS_OID_REQUEST *PendingOidRequest; // rax
  _REFERENCE_EX *p_PnPRef; // rdi
  int v4; // edx
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v7; // bl
  KIRQL v8; // al
  KIRQL v9; // al
  ULONG_PTR v10; // r8
  KIRQL v11; // bl
  __int64 v12; // r9
  bool v13; // zf
  unsigned __int8 i; // al
  _BYTE *v15; // rdx
  char v16; // cl
  ULONG_PTR v17; // rsi
  unsigned int v18; // edx
  _QWORD v19[5]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+48h] [rbp-10h]
  int v21; // [rsp+4Ch] [rbp-Ch]

  PendingOidRequest = Parameter->PendingOidRequest;
  p_PnPRef = &Parameter->PnPRef;
  v4 = *(_DWORD *)&PendingOidRequest->NdisReserved[8];
  v19[0] = 0LL;
  v19[1] = 0LL;
  v19[3] = 0LL;
  v21 = 0;
  v19[2] = Parameter;
  v19[4] = PendingOidRequest;
  v20 = v4;
  v5 = KeAcquireSpinLockRaiseToDpc(&Parameter->PnPRef.SpinLock);
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)p_PnPRef->RefCountTracker;
  ++p_PnPRef->ReferenceCount;
  v7 = v5;
  NdisReferenceWithTag(RefCountTracker, 0x13u);
  KeReleaseSpinLock(&p_PnPRef->SpinLock, v7);
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v19);
  v8 = KeAcquireSpinLockRaiseToDpc(&Parameter->Lock);
  if ( Parameter->OidRequestList.Flink != &Parameter->OidRequestList )
  {
    Parameter->LockThread = 0LL;
    KeReleaseSpinLock(&Parameter->Lock, v8);
    if ( (unsigned int)ndisQueueRequestWorkItem((struct _NDIS_MINIPORT_BLOCK *)Parameter, 0LL, 5) != 259 )
      ndisCancelOidRequestOnFilter(Parameter, 0LL, 1u);
    v8 = KeAcquireSpinLockRaiseToDpc(&Parameter->Lock);
  }
  Parameter->LockThread = 0LL;
  KeReleaseSpinLock(&Parameter->Lock, v8);
  v9 = KeAcquireSpinLockRaiseToDpc(&p_PnPRef->SpinLock);
  v10 = (ULONG_PTR)p_PnPRef->RefCountTracker;
  v11 = v9;
  if ( v10 - 2 > 1 )
  {
    if ( v10 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v10, 0LL);
    if ( *(_BYTE *)(v10 + 2) <= 0x13u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v10, 0x13uLL);
    if ( *(_BYTE *)(v10 + 1) )
    {
      if ( *(_BYTE *)(v10 + 1) != 1 )
        goto LABEL_11;
      v17 = v10 + 1224;
      v18 = *(_DWORD *)(v10 + 1280);
      if ( v18 >> 17 < 0x3FFE && (unsigned __int16)v18 >> 1 == (v18 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 1224));
        *(_DWORD *)(v17 + 56) &= 0x10001u;
        goto LABEL_11;
      }
      if ( (unsigned __int16)v18 >> 1 || (v18 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 1224), 0);
        goto LABEL_11;
      }
      goto LABEL_20;
    }
    v12 = *(_QWORD *)(v10 + 8);
    if ( !v12 )
    {
LABEL_10:
      if ( _bittestandreset((signed __int32 *)(v10 + 16), 0x13u) )
        goto LABEL_11;
LABEL_20:
      ndisReportRefcountImbalance(v10, 0x13u);
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_BYTE *)(v10 + 3) )
        goto LABEL_10;
      v15 = (_BYTE *)(v12 + 2LL * i);
      if ( *v15 == 19 )
      {
        v16 = v15[1];
        if ( v16 )
          break;
      }
    }
    v15[1] = v16 - 1;
  }
LABEL_11:
  v13 = p_PnPRef->ReferenceCount-- == 1;
  if ( v13 && !p_PnPRef->ZeroBased )
  {
    NdisFreeRefCount(p_PnPRef->RefCountTracker);
    p_PnPRef->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
  }
  KeReleaseSpinLock(&p_PnPRef->SpinLock, v11);
}
