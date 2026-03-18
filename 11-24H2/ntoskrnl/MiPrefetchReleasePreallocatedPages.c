/*
 * XREFs of MiPrefetchReleasePreallocatedPages @ 0x14045AD24
 * Callers:
 *     MiPrefetchPreallocatePages @ 0x1404D5620 (MiPrefetchPreallocatePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiFreePageChain @ 0x14045AD80 (MiFreePageChain.c)
 */

void __fastcall MiPrefetchReleasePreallocatedPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = a4;
  MiFreePageChain(a2 + 88, a2, a3, a4);
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      MiReleaseNonPagedResources(a3, 0x200uLL);
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
}
