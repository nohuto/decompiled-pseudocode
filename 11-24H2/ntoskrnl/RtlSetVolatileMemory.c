/*
 * XREFs of RtlSetVolatileMemory @ 0x1406B6CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset_0(a1, Val, Size);
}
