/*
 * XREFs of KsepPoolFreeNonPaged @ 0x14049B540
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x14049B490 (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x140941BB8 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140F0F60C);
  }
}
