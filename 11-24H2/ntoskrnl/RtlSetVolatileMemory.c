/*
 * XREFs of RtlSetVolatileMemory @ 0x1406B5D10
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
