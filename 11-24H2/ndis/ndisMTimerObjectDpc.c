/*
 * XREFs of ndisMTimerObjectDpc @ 0x140007B10
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRefCount @ 0x140007F90 (NdisFreeRefCount.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140040D60 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140074C20 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _NDIS_MINIPORT_TIMER **DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  __int64 Clock; // r14
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r13
  __int64 v8; // rdx
  KIRQL v9; // bp
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  char v12; // bp
  KIRQL v13; // al
  ULONG_PTR v14; // r9
  KIRQL v15; // si
  __int64 v16; // r8
  KIRQL v18; // dl
  unsigned __int8 j; // al
  _BYTE *v20; // rdx
  char v21; // cl
  ULONG_PTR v22; // rdi
  unsigned int v23; // edx
  int v24; // edx
  KIRQL v25; // bl
  struct _NDIS_M_DRIVER_BLOCK **k; // rdx
  struct _NDIS_M_DRIVER_BLOCK *v27; // rcx
  PVOID v28; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v33; // edx
  $CC75B1CAB5130FB77AA71716FE1AF93E *i; // rcx
  __int64 v35; // rax

  v4 = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[3];
  Clock = 0LL;
  if ( v4->Header.Type != 17 )
    return;
  DriverHandle = v4->DriverHandle;
  v9 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  if ( DriverHandle->Ref.Closing )
  {
LABEL_34:
    v18 = v9;
    goto LABEL_19;
  }
  ReferenceCount = DriverHandle->Ref.ReferenceCount;
  if ( ReferenceCount >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_34;
  }
  RefCountTracker = DriverHandle->Ref.RefCountTracker;
  LOBYTE(v8) = 10;
  DriverHandle->Ref.ReferenceCount = ReferenceCount + 1;
  NdisReferenceWithTag(RefCountTracker, v8);
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v9);
  if ( HIBYTE(dword_14011D060) )
  {
    v12 = 1;
    ndisTraceDpcStart(v4, 2u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v12 = 0;
  }
  if ( (DriverHandle->Flags & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel(&v4->TimerQueueLock);
    for ( i = &v4->560; i->TimerQueue; i = ($CC75B1CAB5130FB77AA71716FE1AF93E *)i->TimerQueue )
    {
      if ( (_NDIS_MINIPORT_TIMER **)i->TimerQueue == DeferredContext )
      {
        if ( !*((_DWORD *)DeferredContext + 23) )
          i->TimerQueue = *DeferredContext;
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&v4->TimerQueueLock);
  }
  if ( (v4->PnPFlags & 0x1000000) == 0 )
    ((void (__fastcall *)(_QWORD, _NDIS_MINIPORT_TIMER *, _QWORD, _QWORD))DeferredContext[21])(
      0LL,
      DeferredContext[23],
      0LL,
      0LL);
  if ( v12 )
  {
    v35 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 2u, v35 - Clock);
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  v14 = (ULONG_PTR)DriverHandle->Ref.RefCountTracker;
  v15 = v13;
  if ( v14 - 2 <= 1 )
    goto LABEL_17;
  if ( v14 < 2 )
    KeBugCheckEx(0x7Cu, 0x1EuLL, 3uLL, v14, 0LL);
  if ( *(_BYTE *)(v14 + 2) <= 0xAu )
    KeBugCheckEx(0x7Cu, 0x1EuLL, 2uLL, v14, 0xAuLL);
  if ( *(_BYTE *)(v14 + 1) )
  {
    if ( *(_BYTE *)(v14 + 1) != 1 )
      goto LABEL_17;
    v22 = v14 + 648;
    v23 = *(_DWORD *)(v14 + 704);
    if ( v23 >> 17 < 0x3FFE && (unsigned __int16)v23 >> 1 == (v23 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 648));
      *(_DWORD *)(v22 + 56) &= 0x10001u;
      goto LABEL_17;
    }
    if ( (unsigned __int16)v23 >> 1 || (v23 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 648), 0);
      goto LABEL_17;
    }
LABEL_28:
    KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v14, 0xAuLL);
  }
  v16 = *(_QWORD *)(v14 + 8);
  if ( v16 )
  {
    for ( j = 0; ; ++j )
    {
      if ( j >= *(_BYTE *)(v14 + 3) )
        goto LABEL_16;
      v20 = (_BYTE *)(v16 + 2LL * j);
      if ( *v20 == 10 )
      {
        v21 = v20[1];
        if ( v21 )
          break;
      }
    }
    v20[1] = v21 - 1;
    goto LABEL_17;
  }
LABEL_16:
  if ( !_bittestandreset((signed __int32 *)(v14 + 16), 0xAu) )
    goto LABEL_28;
LABEL_17:
  if ( DriverHandle->Ref.ReferenceCount-- != 1 )
  {
    v18 = v15;
LABEL_19:
    KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v18);
    return;
  }
  if ( !DriverHandle->Ref.ZeroBased )
  {
    NdisFreeRefCount((ULONG_PTR)DriverHandle->Ref.RefCountTracker);
    DriverHandle->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
  }
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v24,
      20,
      23,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)DriverHandle);
  }
  v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( k = &ndisMiniDriverList; ; k = &v27->NextDriver )
  {
    v27 = *k;
    if ( !*k )
      break;
    if ( v27 == DriverHandle )
    {
      v28 = ndisDriverObject;
      *k = DriverHandle->NextDriver;
      ObfDereferenceObject(v28);
      break;
    }
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v25);
  Buffer = DriverHandle->ImageName.Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    DriverHandle->ImageName.Buffer = 0LL;
  }
  NdisDriverInfo = DriverHandle->NdisDriverInfo;
  if ( NdisDriverInfo )
  {
    ExFreePoolWithTag(NdisDriverInfo, 0);
    DriverHandle->NdisDriverInfo = 0LL;
  }
  if ( (DriverHandle->Flags & 1) != 0 )
  {
    PendingDeviceList = DriverHandle->PendingDeviceList;
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
  KeSetEvent(&DriverHandle->MiniportsRemovedEvent, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v33) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v33,
      20,
      24,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)DriverHandle);
  }
}
