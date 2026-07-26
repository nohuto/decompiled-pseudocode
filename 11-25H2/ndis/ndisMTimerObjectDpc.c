/*
 * XREFs of ndisMTimerObjectDpc @ 0x140016010
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x140015A20 (NdisFreeRefCount.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400451E0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140090940 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
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
  KIRQL v8; // bp
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  char v11; // bp
  KIRQL v12; // al
  ULONG_PTR v13; // r9
  KIRQL v14; // si
  __int64 v15; // r8
  KIRQL v17; // dl
  unsigned __int8 j; // al
  _BYTE *v19; // rdx
  char v20; // cl
  ULONG_PTR v21; // rdi
  unsigned int v22; // edx
  int v23; // edx
  KIRQL v24; // bl
  struct _NDIS_M_DRIVER_BLOCK **k; // rdx
  struct _NDIS_M_DRIVER_BLOCK *v26; // rcx
  PVOID v27; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v32; // edx
  $78C9EA071B292D5E9601C6B3C3DFD21E *i; // rcx
  __int64 v34; // rax

  v4 = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[3];
  Clock = 0LL;
  if ( v4->Header.Type != 17 )
    return;
  DriverHandle = v4->DriverHandle;
  v8 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  if ( DriverHandle->Ref.Closing )
  {
LABEL_34:
    v17 = v8;
    goto LABEL_19;
  }
  ReferenceCount = DriverHandle->Ref.ReferenceCount;
  if ( ReferenceCount >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_34;
  }
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)DriverHandle->Ref.RefCountTracker;
  DriverHandle->Ref.ReferenceCount = ReferenceCount + 1;
  NdisReferenceWithTag(RefCountTracker, 0xAu);
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v8);
  if ( HIBYTE(dword_140127110) )
  {
    v11 = 1;
    ndisTraceDpcStart(v4, 2u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v11 = 0;
  }
  if ( (DriverHandle->Flags & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel(&v4->TimerQueueLock);
    for ( i = &v4->560; i->TimerQueue; i = ($78C9EA071B292D5E9601C6B3C3DFD21E *)i->TimerQueue )
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
  if ( v11 )
  {
    v34 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 2u, v34 - Clock);
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  v13 = (ULONG_PTR)DriverHandle->Ref.RefCountTracker;
  v14 = v12;
  if ( v13 - 2 <= 1 )
    goto LABEL_17;
  if ( v13 < 2 )
    KeBugCheckEx(0x7Cu, 0x1EuLL, 3uLL, v13, 0LL);
  if ( *(_BYTE *)(v13 + 2) <= 0xAu )
    KeBugCheckEx(0x7Cu, 0x1EuLL, 2uLL, v13, 0xAuLL);
  if ( *(_BYTE *)(v13 + 1) )
  {
    if ( *(_BYTE *)(v13 + 1) != 1 )
      goto LABEL_17;
    v21 = v13 + 648;
    v22 = *(_DWORD *)(v13 + 704);
    if ( v22 >> 17 < 0x3FFE && (unsigned __int16)v22 >> 1 == (v22 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 648));
      *(_DWORD *)(v21 + 56) &= 0x10001u;
      goto LABEL_17;
    }
    if ( (unsigned __int16)v22 >> 1 || (v22 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 648), 0);
      goto LABEL_17;
    }
LABEL_28:
    KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v13, 0xAuLL);
  }
  v15 = *(_QWORD *)(v13 + 8);
  if ( v15 )
  {
    for ( j = 0; ; ++j )
    {
      if ( j >= *(_BYTE *)(v13 + 3) )
        goto LABEL_16;
      v19 = (_BYTE *)(v15 + 2LL * j);
      if ( *v19 == 10 )
      {
        v20 = v19[1];
        if ( v20 )
          break;
      }
    }
    v19[1] = v20 - 1;
    goto LABEL_17;
  }
LABEL_16:
  if ( !_bittestandreset((signed __int32 *)(v13 + 16), 0xAu) )
    goto LABEL_28;
LABEL_17:
  if ( DriverHandle->Ref.ReferenceCount-- != 1 )
  {
    v17 = v14;
LABEL_19:
    KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v17);
    return;
  }
  if ( !DriverHandle->Ref.ZeroBased )
  {
    NdisFreeRefCount(DriverHandle->Ref.RefCountTracker);
    DriverHandle->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
  }
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v14);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      20,
      23,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)DriverHandle);
  }
  v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( k = &ndisMiniDriverList; ; k = &v26->NextDriver )
  {
    v26 = *k;
    if ( !*k )
      break;
    if ( v26 == DriverHandle )
    {
      v27 = ndisDriverObject;
      *k = DriverHandle->NextDriver;
      ObfDereferenceObject(v27);
      break;
    }
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v24);
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v32,
      20,
      24,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)DriverHandle);
  }
}
