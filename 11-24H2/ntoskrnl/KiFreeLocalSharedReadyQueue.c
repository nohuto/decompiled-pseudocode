/*
 * XREFs of KiFreeLocalSharedReadyQueue @ 0x1405B6E9C
 * Callers:
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405B6308 (KiAssignSubNodeSharedReadyQueues.c)
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
