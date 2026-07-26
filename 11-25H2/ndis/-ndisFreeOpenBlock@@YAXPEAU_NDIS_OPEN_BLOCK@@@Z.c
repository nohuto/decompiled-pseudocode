/*
 * XREFs of ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140016FE0
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x14016D810 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisFreeRefCount @ 0x140015A20 (NdisFreeRefCount.c)
 *     NdisNblTrackerDeregisterComponent @ 0x140017150 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140017280 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

void __fastcall ndisFreeOpenBlock(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)P + 87);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)P + 87) = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 88);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)P + 88) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*((_QWORD *)P + 73));
  NdisFreeRefCount(*((struct NDIS_REFCOUNT_HANDLE__ **)P + 74));
  v4 = *((_QWORD *)P + 90);
  *((_QWORD *)P + 74) = 0LL;
  ndisFreePerProcessorSlot(v4, 0x6F6D444EuLL);
  v5 = (void *)*((_QWORD *)P + 60);
  *((_QWORD *)P + 90) = 0LL;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)P + 60) = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
