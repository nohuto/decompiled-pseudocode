/*
 * XREFs of MiAllocateTempLoaderEntry @ 0x140A11CA0
 * Callers:
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

__int64 MiAllocateTempLoaderEntry()
{
  __int64 result; // rax

  result = MiAllocatePool(0x40uLL, 0x130uLL, 1682730317);
  if ( result )
  {
    *(_DWORD *)(result + 184) |= 0x100u;
    *(_DWORD *)(result + 104) = 0x1000000;
    *(_WORD *)(result + 108) = 1;
    *(_QWORD *)(result + 136) = -2LL;
  }
  return result;
}
