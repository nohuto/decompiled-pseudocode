/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1409E5B0C
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140897E14 (EtwpFreeFilterInfo.c)
 *     EtwpAllocateEventNameFilter @ 0x1409E501C (EtwpAllocateEventNameFilter.c)
 *     EtwpUpdateGuidFilterData @ 0x1409E5684 (EtwpUpdateGuidFilterData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
