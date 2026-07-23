/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x140498D14
 * Callers:
 *     KseSetCompletionHook @ 0x140498C80 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140941BB8 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(0x40uLL, Size, 0x6245534Bu);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140F0F608);
    memset_0(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140F0F614);
  }
  return v3;
}
