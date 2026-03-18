/*
 * XREFs of MiPrefetchReleasePreallocatedPages @ 0x14045B210
 * Callers:
 *     MiPrefetchPreallocatePages @ 0x1404D5F34 (MiPrefetchPreallocatePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiFreePageChain @ 0x14045B26C (MiFreePageChain.c)
 */

void __fastcall MiPrefetchReleasePreallocatedPages(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  MiFreePageChain(a2 + 88);
  if ( a4 )
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      MiReleaseNonPagedResources(a3, 0x200uLL);
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
}
