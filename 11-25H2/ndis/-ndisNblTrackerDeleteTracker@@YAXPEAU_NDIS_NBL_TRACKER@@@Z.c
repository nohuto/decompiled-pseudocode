/*
 * XREFs of ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x140017220
 * Callers:
 *     NdisNblTrackerDeregisterComponent @ 0x140017150 (NdisNblTrackerDeregisterComponent.c)
 *     NdisNblTrackerRegisterComponent @ 0x14006E120 (NdisNblTrackerRegisterComponent.c)
 * Callees:
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140017280 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
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
