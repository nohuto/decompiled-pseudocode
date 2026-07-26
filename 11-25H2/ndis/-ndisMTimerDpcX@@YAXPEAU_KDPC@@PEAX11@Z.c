/*
 * XREFs of ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x14006ED30
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400451E0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140090940 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMTimerDpcX(struct _KDPC *a1, char *a2, void *a3, void *a4)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  __int64 Clock; // r15
  struct _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  KIRQL v8; // r14
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  char v11; // bl
  __int64 v12; // rdx
  void **i; // rcx
  __int64 v14; // rax
  char *v15; // rax

  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a2 + 18);
  Clock = 0LL;
  DriverHandle = v4->DriverHandle;
  v8 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  if ( DriverHandle->Ref.Closing )
    goto LABEL_12;
  ReferenceCount = DriverHandle->Ref.ReferenceCount;
  if ( ReferenceCount >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
LABEL_12:
    KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v8);
    return;
  }
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)DriverHandle->Ref.RefCountTracker;
  DriverHandle->Ref.ReferenceCount = ReferenceCount + 1;
  NdisReferenceWithTag(RefCountTracker, 0xBu);
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v8);
  if ( HIBYTE(dword_140127110) )
  {
    v11 = 1;
    ndisTraceDpcStart(v4, 2);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v11 = 0;
  }
  v12 = *((_QWORD *)a2 + 18);
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 3760) + 26LL) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 1880));
    for ( i = (void **)&v4->TimerQueue; ; i = (void **)(v15 + 152) )
    {
      v15 = (char *)*i;
      if ( !*i )
        break;
      if ( v15 == a2 )
      {
        if ( !*((_DWORD *)a2 + 15) )
          *i = (void *)*((_QWORD *)a2 + 19);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)a2 + 18) + 1880LL));
  }
  if ( (v4->PnPFlags & 0x1000000) == 0 )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a2 + 16))(0LL, *((_QWORD *)a2 + 17), 0LL, 0LL);
  if ( v11 )
  {
    v14 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 2u, v14 - Clock);
  }
  ndisDereferenceDriver(DriverHandle, 0, 0xBu);
}
