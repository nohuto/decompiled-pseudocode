/*
 * XREFs of PiPnpRtlFreeInterfaceDeleteInfo @ 0x14071A718
 * Callers:
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14071A968 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInterfaceDeleteInfo(void **P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    v4 = P[2];
    if ( v4 )
      PiDmObjectRelease(v4);
    v5 = P[3];
    if ( v5 )
      PiDmObjectRelease(v5);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
