/*
 * XREFs of RtlCopyVolatileMemory @ 0x1400EDF70
 * Callers:
 *     ndisFastIoDeviceControl @ 0x14006DA20 (ndisFastIoDeviceControl.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
