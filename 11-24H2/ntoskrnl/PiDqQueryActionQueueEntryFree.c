/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1408D3934
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1408D2AD0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x1408D3C80 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D2A3C (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *P)
{
  unsigned int *v2; // rcx
  char *v3; // rcx

  v2 = (unsigned int *)P[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (char *)P[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
