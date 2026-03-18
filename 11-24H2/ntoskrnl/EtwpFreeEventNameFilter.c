/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1409F4130
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140837394 (EtwpFreeFilterInfo.c)
 *     EtwpAllocateEventNameFilter @ 0x1409F3638 (EtwpAllocateEventNameFilter.c)
 *     EtwpUpdateGuidFilterData @ 0x1409F3CA8 (EtwpUpdateGuidFilterData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
