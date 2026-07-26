/*
 * XREFs of NdisFNetPnPEvent @ 0x140057170
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140057060 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x140062190 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisFNetPnPEvent(
        NDIS_HANDLE NdisFilterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  PNET_PNP_EVENT_NOTIFICATION *v5; // rcx
  __int64 i; // rax
  KIRQL v7; // dl
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[5]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int8 v10; // [rsp+80h] [rbp+8h] BYREF

  v9[1] = NdisFilterHandle;
  v9[3] = NetPnPEventNotification;
  v9[0] = 0LL;
  v9[2] = 0LL;
  if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFNetPnPEventInternal, v9, (unsigned int)Size, 0, 0LL) >= 0 )
    return v9[0];
  v10 = 0;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &v10);
  v5 = (PNET_PNP_EVENT_NOTIFICATION *)((char *)NdisFilterHandle + 256);
  for ( i = *((_QWORD *)NdisFilterHandle + 32); i; i = *(_QWORD *)(i + 56) )
    v5 = (PNET_PNP_EVENT_NOTIFICATION *)(i + 56);
  *v5 = NetPnPEventNotification;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[0] = (unsigned __int64)&Event;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[3] = 0LL;
  ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
  v7 = v10;
  *((_QWORD *)NdisFilterHandle + 19) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  ndisWaitForKernelObject(&Event);
  return NetPnPEventNotification->NetPnPEvent.NdisReserved[1];
}
