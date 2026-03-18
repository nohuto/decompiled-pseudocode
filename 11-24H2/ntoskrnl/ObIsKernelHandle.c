/*
 * XREFs of ObIsKernelHandle @ 0x14049BF10
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x140953128 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
      && (unsigned __int64)Handle <= 0xFFFFFFFFFFFFFFFDuLL;
}
