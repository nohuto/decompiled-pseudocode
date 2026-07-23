/*
 * XREFs of KiFreeStaticRescheduleContext @ 0x1405B4370
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
