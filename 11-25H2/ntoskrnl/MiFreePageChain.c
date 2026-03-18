/*
 * XREFs of MiFreePageChain @ 0x14045B26C
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14045B210 (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreePageChain(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      break;
    v3 = *v2;
    v4 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)a1 = v3;
    if ( v4 )
      *(_QWORD *)(a1 + 8) = 0LL;
    result = MiReleaseFreshPage((__int64)v2);
  }
  return result;
}
