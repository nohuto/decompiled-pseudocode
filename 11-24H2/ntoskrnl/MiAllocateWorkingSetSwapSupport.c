/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x140367B8C
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x1403679DC (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140367B34 (MiReAllocateWorkingSetSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateWorkingSetSwapSupport(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)MiAllocatePool(0x40uLL, 16 * a1 + 40, 1398238541);
  if ( result )
  {
    result[1] = a1;
    *result = ((unsigned __int64)result + 47) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
