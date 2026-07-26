/*
 * XREFs of RtlCopyVolatileMemory @ 0x1400E70E0
 * Callers:
 *     ndisFastIoDeviceControl @ 0x140052E00 (ndisFastIoDeviceControl.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
