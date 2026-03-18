/*
 * XREFs of KiFreeForceParkingData @ 0x1405C42E8
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
