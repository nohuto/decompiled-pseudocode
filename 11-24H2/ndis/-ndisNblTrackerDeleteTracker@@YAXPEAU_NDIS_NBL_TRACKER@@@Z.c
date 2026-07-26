/*
 * XREFs of ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x14004F1B0
 * Callers:
 *     NdisNblTrackerRegisterComponent @ 0x14004E700 (NdisNblTrackerRegisterComponent.c)
 *     NdisNblTrackerDeregisterComponent @ 0x14004EFE0 (NdisNblTrackerDeregisterComponent.c)
 * Callees:
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14004F210 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

void __fastcall ndisNblTrackerDeleteTracker(_QWORD *P)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx

  v2 = P[5];
  if ( v2 )
  {
    P[5] = 0LL;
    ndisFreePerProcessorSlot(v2, 0x6B74444EuLL);
  }
  v3 = P[7];
  if ( v3 )
  {
    P[7] = 0LL;
    ndisFreePerProcessorSlot(v3, 0x6B74444EuLL);
  }
  ExFreePoolWithTag(P, 0);
}
