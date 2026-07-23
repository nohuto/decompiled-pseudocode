/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1409E8490
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140834F58 (EtwpFreeFilterInfo.c)
 *     EtwpAllocateEventNameFilter @ 0x1409E7998 (EtwpAllocateEventNameFilter.c)
 *     EtwpUpdateGuidFilterData @ 0x1409E8008 (EtwpUpdateGuidFilterData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
