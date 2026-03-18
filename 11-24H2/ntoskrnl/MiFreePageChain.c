/*
 * XREFs of MiFreePageChain @ 0x14045AD80
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiGetPageTablePages @ 0x14039E9BC (MiGetPageTablePages.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14045AD24 (MiPrefetchReleasePreallocatedPages.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreePageChain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  bool v6; // zf
  __int64 result; // rax

  while ( 1 )
  {
    v4 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      break;
    v5 = *v4;
    v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)a1 = v5;
    if ( v6 )
      *(_QWORD *)(a1 + 8) = 0LL;
    result = MiReleaseFreshPage((__int64)v4, a2, a3);
  }
  return result;
}
