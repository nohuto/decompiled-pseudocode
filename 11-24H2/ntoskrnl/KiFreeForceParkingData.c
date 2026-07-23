/*
 * XREFs of KiFreeForceParkingData @ 0x1405C5C38
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeForceParkingData(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 34544);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 34544) = 0LL;
  }
}
