/*
 * XREFs of ObIsKernelHandle @ 0x14049C740
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1409C69F8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
      && (unsigned __int64)Handle <= 0xFFFFFFFFFFFFFFFDuLL;
}
