/*
 * XREFs of ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x140036100
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140032B30 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140035B60 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x140035EE0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 */

struct _NDIS_FILTER_BLOCK *__fastcall ndisGetHigherFilterWithPnpRef(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        unsigned __int8 a3)
{
  KIRQL v6; // bp
  _NDIS_FILTER_BLOCK *HigherFilter; // rbx
  KIRQL v8; // al
  KIRQL v9; // r12
  unsigned __int16 ReferenceCount; // cx

  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( a2 )
    HigherFilter = a2->HigherFilter;
  else
    HigherFilter = a1->LowestFilter;
  for ( ; HigherFilter; HigherFilter = HigherFilter->HigherFilter )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->PnPRef.SpinLock);
    v9 = v8;
    if ( !HigherFilter->PnPRef.Closing )
    {
      ReferenceCount = HigherFilter->PnPRef.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        HigherFilter->PnPRef.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)HigherFilter->PnPRef.RefCountTracker, a3);
        KeReleaseSpinLock(&HigherFilter->PnPRef.SpinLock, v9);
        break;
      }
      ndisRefCountReferenceCountOverflow = 1;
    }
    KeReleaseSpinLock(&HigherFilter->PnPRef.SpinLock, v8);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  return HigherFilter;
}
