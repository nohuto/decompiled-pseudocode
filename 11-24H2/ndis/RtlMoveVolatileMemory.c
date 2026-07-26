/*
 * XREFs of RtlMoveVolatileMemory @ 0x1400E70F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlMoveVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
