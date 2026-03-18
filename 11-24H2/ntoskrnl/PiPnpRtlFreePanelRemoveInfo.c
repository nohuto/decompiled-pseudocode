/*
 * XREFs of PiPnpRtlFreePanelRemoveInfo @ 0x140726634
 * Callers:
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x1407266F8 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140726B98 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreePanelRemoveInfo(void **P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
