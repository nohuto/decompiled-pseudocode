/*
 * XREFs of KiFreeThreadCycleTable @ 0x140B561D0
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeThreadCycleTable(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 34480);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 34480) = 0LL;
  }
}
