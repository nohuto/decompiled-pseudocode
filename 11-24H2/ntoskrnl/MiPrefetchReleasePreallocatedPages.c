/*
 * XREFs of MiPrefetchReleasePreallocatedPages @ 0x1404AE77C
 * Callers:
 *     MiPrefetchPreallocatePages @ 0x1404CEA68 (MiPrefetchPreallocatePages.c)
 * Callees:
 *     MiFreePageChain @ 0x14021DC64 (MiFreePageChain.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
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
