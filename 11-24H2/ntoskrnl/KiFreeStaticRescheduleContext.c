/*
 * XREFs of KiFreeStaticRescheduleContext @ 0x1405B70B0
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeStaticRescheduleContext(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 14312);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 14312) = 0LL;
  }
}
