/*
 * XREFs of KsepPoolFreeNonPaged @ 0x1404A1440
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x1404A1390 (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x140A500CC (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140F0EC2C);
  }
}
