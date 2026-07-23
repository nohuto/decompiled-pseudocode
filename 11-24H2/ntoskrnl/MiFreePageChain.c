/*
 * XREFs of MiFreePageChain @ 0x14021DC64
 * Callers:
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1404AE77C (MiPrefetchReleasePreallocatedPages.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
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
    result = MiReleaseFreshPage(v2);
  }
  return result;
}
