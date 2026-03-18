/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x14049DF14
 * Callers:
 *     KseSetCompletionHook @ 0x14049DE80 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x14095A0F8 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140F0F308);
    memset_0(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140F0F314);
  }
  return v3;
}
