/*
 * XREFs of PspFreeCurrentThreadUserShadowStack @ 0x1408F65EC
 * Callers:
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x14069B5A0 (ZwQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1408F6740 (MmFreeVirtualMemory.c)
 */

NTSTATUS PspFreeCurrentThreadUserShadowStack()
{
  NTSTATUS result; // eax
  _OWORD MemoryInformation[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID)__readmsr(0x6A7u),
             MemoryRegionInformation,
             MemoryInformation,
             0x30uLL,
             0LL);
  if ( result >= 0 )
    return MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x40000000);
  return result;
}
