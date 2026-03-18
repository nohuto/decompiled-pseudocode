/*
 * XREFs of KsepPoolFreeNonPaged @ 0x1404A0EC0
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x1404A0E10 (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x14095A0F8 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140F0F30C);
  }
}
