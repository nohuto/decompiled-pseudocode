/*
 * XREFs of KiFreeStaticRescheduleContext @ 0x1405B31E0
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
