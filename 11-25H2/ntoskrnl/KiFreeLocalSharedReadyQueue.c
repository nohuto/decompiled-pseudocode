/*
 * XREFs of KiFreeLocalSharedReadyQueue @ 0x1405B2FCC
 * Callers:
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405B243C (KiAssignSubNodeSharedReadyQueues.c)
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeLocalSharedReadyQueue(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 37888);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 37888) = 0LL;
  }
}
