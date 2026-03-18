/*
 * XREFs of RtlCopyVolatileMemory @ 0x140070B40
 * Callers:
 *     RtlCopyDeviceMemory @ 0x14005684C (RtlCopyDeviceMemory.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
