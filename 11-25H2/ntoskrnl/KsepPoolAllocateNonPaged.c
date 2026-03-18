/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x14049EE34
 * Callers:
 *     KseSetCompletionHook @ 0x14049EDA0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140A500CC (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140F0EC28);
    memset_0(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140F0EC34);
  }
  return v3;
}
