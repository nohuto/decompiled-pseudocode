/*
 * XREFs of RtlSetVolatileMemory @ 0x1400E7100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
